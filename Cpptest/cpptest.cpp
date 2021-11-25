#include <string>
#include <iostream>
#include <cassert>
#include <random>

#if defined(USE_REFERENCE)
#include "cpptest_reference.h"
#elif defined(USE_STANDARD)
#include <vector>
using std::vector;
#else
#include "cpptest.h"
#endif

int uninit = 0;

struct test_struct
{
    int* p;

    test_struct()
        : p(&uninit)
    {
        ++*p;
    }

    explicit test_struct(int* p)
        : p(p)
    {
        ++*p;
    }

    test_struct(const test_struct& rhs)
        : p(rhs.p)
    {
        ++*p;
    }

    test_struct& operator=(const test_struct& rhs)
    {
        if(this == &rhs)
            return *this;

        --*p;
        p = rhs.p;
        ++*p;
        return *this;
    }

    test_struct(test_struct&& rhs)
        : p(rhs.p)
    {
        rhs.p = &uninit;
        ++*rhs.p;
    }

    test_struct& operator=(test_struct&& rhs)
    {
        if(this == &rhs)
            return *this;

        --*p;

        p = rhs.p;

        rhs.p = &uninit;
        ++*rhs.p;

        return *this;
    }

    ~test_struct()
    {
        --*p;
    }
};

// <<<<<<<<<<<<<<<<<<<<<<<<<<<< EXECUTION >>>>>>>>>>>>>>>>>>>>>

#define check_values(val_uninit, val0, val1, val2) \
do { \
bool valid = uninit == val_uninit && c0 == val0 && c1 == val1 && c2 == val2; \
if (!valid) { \
std::cout << std::to_string(uninit) << ", " << std::to_string(c0) << ", " << std::to_string(c1) << ", " << std::to_string(c2) << std::endl; \
assert(uninit == val_uninit && c0 == val0 && c1 == val1 && c2 == val2); \
} \
} while(false)

#ifdef CHECK_MORE
#include "check_more.inl"
#endif

int main()
{
    int c0 = 6, c1 = 0, c2 = 0;
    Vector<test_struct> t0;
    t0.push_back(test_struct{&c0});

    for (int i = 0 ; i < t0.size() ; i++)
    {
        std::cout<< *t0[i].p << std::endl;
    }

    //check_values(0, 1, 0, 0);


    
    /*
    int c0 = 0, c1 = 0, c2 = 0;

    {
        Vector<test_struct> t0;
        t0.push_back(test_struct{&c0});
        check_values(0, 1, 0, 0);
        t0.emplace_back(&c0);
        check_values(0, 2, 0, 0);
        t0.resize(10);
        check_values(8, 2, 0, 0);
        t0.resize(2);
        check_values(0, 2, 0, 0);
        t0.resize(1);
        check_values(0, 1, 0, 0);
        assert(t0[0].p == &c0);
        assert(t0.capacity() >= t0.size());
    }

    check_values(0, 0, 0, 0);

#ifdef CHECK_MORE
    check_more();
#endif
*/
    return 0;
}




// <<<<<<<<<<<<<<<<<<<<<<< CONSTRUCTORS >>>>>>>>>>>>>>>>>>>>>
template <typename T>
Vector<T>::Vector() : _Size(0) , _Elements(0) , _Capacity(0)
{}



template <typename T>
Vector<T>::Vector(const Vector& args) : _Size(args._Size) , _Elements(new T[args._Size]) , _Capacity(args._Capacity)
{
    for (size_t i = 0 ;  i < args._Size; i++)
        _Elements[i] = args._Elements[i];
}



template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& args)
{
    if (this == &args) return *this;

    if (args._Size <= _Capacity)
    {
        for (size_t i = 0 ;  i < args._Size; i++)
        {
            _Elements[i] = args._Elements[i];
            _Size= args._Size;
            return *this;
        }
    }

    T* p = new T[args._Size];

    for (size_t i = 0; i < args._Size; i++)
        p[i] = args._Elements[i];

    delete[] _Elements;
    _Size = args._Size;
    _Capacity = args._Size,
    _Elements = p;
    return *this;
}



template <typename T>
Vector<T>::~Vector()
{
    delete[] _Elements;
}






// <<<<<<<<<<<<<<<<<<<<<<<<<<<<< ITERATORS >>>>>>>>>>>>>>>>>>>>>>>>>
template <typename T>
typename Vector<T>::iterator Vector<T>::begin()
{
    return Vector<T>::iterator(&_Elements[0]);
}



template <typename T>
const typename Vector<T>::iterator Vector<T>::begin() const
{
    return Vector<T>::iterator(&_Elements[0]);
}



template <typename T>
typename Vector<T>::iterator Vector<T>::end()
{
    return Vector<T>::iterator(&_Elements[_Size]);
}



template <typename T>
const typename Vector<T>::iterator Vector<T>::end() const
{
    return Vector<T>::iterator(&_Elements[_Size]);
}






//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< CAPACITY >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
template <typename T>
bool Vector<T>::isEmpty() const
{
    return _Size == 0;
}



template <typename T>
size_t Vector<T>::capacity() const
{
    return _Capacity;
}



template <typename T>
void Vector<T>::reserve(size_t newAlloc)
{
    if (newAlloc <= _Capacity) return;

    T* p = new T[newAlloc];

    for (int i = 0; i < _Size; i++)
        p[i] = _Elements[i];

    delete[] _Elements;
    _Elements = p;
    _Capacity = newAlloc;
    
}



template <typename T>
void Vector<T>::resize(size_t newSize)
{
    reserve(newSize);
    
    for (size_t i = _Size; i < newSize; i++)
        _Elements[i] = T();

    _Size = newSize;
}



template <typename T>
size_t Vector<T>::size() const
{
    return _Size;
}










//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< MODIFIERS >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
template <class T>
void Vector<T>::clear()
{
    for (size_t i = 0; i < _Size; i++)
        _Elements[i].~T();
    _Size = 0;
}


template <typename T>
void Vector<T>::push_back(const T& value)
{
    if (_Capacity == 0)
        reserve(8);
    
    else if (_Size == _Capacity)
        reserve(_Capacity + _Capacity / 2);

    _Elements[_Size] = value;
    _Size++;
}

template <class T>
void Vector<T>::pop_back()
{
    if (_Size == 0) return;
 
    // Decrease the size if it is greater than or equal to zero
        _Size--;

    // Decrease the capacity if the size is less than x% the capacity
    if (_Size < _Capacity / 10 && _Capacity > 10)
        deallocate(capacity / 10);
}





template <typename T>
void Vector<T>::reallocate(size_t newCapacity)
{
    T* newBlock = (T*)::operator new (newCapacity * sizeof(T));

    size_t size = _Size;
    if (newCapacity < _Size)
        _Size = newCapacity;
    
    // Used For Loop For More Complex Classes
    for (size_t i = 0 ; i < _Size; i++)
        newBlock[i] = std::move(_Elements[i]);

    for (size_t i = 0; i < _Size; i++)
        _Elements[i].~T();

    ::operator delete(_Elements , _Capacity * sizeof(T));
    _Elements = newBlock;
    _Capacity = newCapacity;
}


template <typename T>
void Vector<T>::deallocate(size_t newSize)
{
    if (newSize >= _Capacity)
        return;

    T* new_element = new T[newSize];

    for (size_t i = 0; i < _Size; i++)
    {
        new_element[i] = _Elements[i];
    }

    _Capacity = newSize;
    delete[] _Elements;
    _Elements = new_element;
}

template <typename T>
template <class ... Args>
typename Vector<T>::iterator Vector<T>::emplace(iterator it, Args&&... args)
{
    const size_t index = it - begin();
        
    if (index < 0 || index > size()) {
        throw new std::out_of_range("Insert index is out of range");
    }
        
    if (size() == capacity())
    {
        reallocate(capacity() + 1);
    }
        
    iterator _it = &_Elements[index];
        
    std::move(_it, end(), _it + 1);
    allocator.construct(_it, args...);
        
    _Size++;
        
    return _it;
}



template <typename T>
template <typename ... Args>
T& Vector<T>::emplace_back(Args&&... args)
{
   // emplace(end(), std::forward<Args>(args)...);
    return nullptr;
}


//<<<<<<<<<<<<<<<<<<<<<<<< ACCESSORS  >>>>>>>>>>>>>>>>>>>>>>>>>>
template <typename T>
T& Vector<T>::at(size_t n)
{
    if (n < 0 || _Size <= n) return nullptr;
    return _Elements[n];
}



template <typename T>
const T& Vector<T>::at(size_t n) const
{
    if (n < 0 || _Size <= n) return nullptr;
    return _Elements[n];
}



template <typename T>
T& Vector<T>::fist()
{
    return _Elements[0];
}



template <typename T>
const T& Vector<T>::fist() const
{
    return _Elements[0];
}



template <typename T>
T& Vector<T>::last()
{
    return _Elements[_Size - 1];
}



template <typename T>
const T& Vector<T>::last() const
{
    return _Elements[_Size - 1];
}



template <typename T>
T& Vector<T>::operator[](size_t i) const
{
    return _Elements[i];
}



template <typename T>
const T& Vector<T>::operator[](int i) const
{
    return _Elements[i];
}



template <typename T>
T* Vector<T>::data()
{
    return _Elements;
}



template <typename T>
const T* Vector<T>::data() const
{
    return _Elements;
}







