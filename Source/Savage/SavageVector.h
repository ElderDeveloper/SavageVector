#pragma once
#include <iostream>





template<typename T>
class SavageVector
{
    
public:

    typedef T value_type;
    typedef size_t size_type;
    typedef T& reference;
    typedef const T& const_reference;
    typedef T* pointer;
    typedef const T* const_pointer;
    typedef const T* const_iterator;
    
//<<<<<<<<<<<<<<<<<<<<<< Constructors >>>>>>>>>>>>>>>>>>>>>
#pragma region Constructor
    
    SavageVector() :_Size(0) , _Elements(0) , _Capacity(0) {}
    
    // Copy Constructor
    SavageVector (const SavageVector& args) : _Size(args._Size) , _Elements(new T[args._Size]) , _Capacity(args._Capacity)
    {
        for (size_t i = 0 ;  i < args._Size; i++)
            _Elements[i] = args._Elements[i];
    }

    //Copy Assignment
    SavageVector<T>& operator=(const SavageVector<T>& args)
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

    // Destructor
    ~SavageVector()
    {
        delete[] _Elements;
    }
    
#pragma endregion

private:

    size_t _Size;       // Number of elements in Vector
    T* _Elements;       // Pointer to first element of Vector
    size_t _Capacity;   // Total space used by Vector including elements and free space.


public:
//<<<<<<<<<<<<<<<<<<<<< Iterators >>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#pragma region iterator
    class iterator;

    iterator begin() { return SavageVector<T>::iterator(&_Elements[0]); }
    const iterator begin() const { return SavageVector<T>::iterator(&_Elements[0]); }
    iterator end() {   return SavageVector<T>::iterator(&_Elements[_Size]); }
    const iterator end() const {   return SavageVector<T>::iterator(&_Elements[_Size]); }
#pragma endregion


    

//<<<<<<<<<<<<<<<<<<<<<< Capacity Functions >>>>>>>>>>>>>>>>>>>>>>>>>
#pragma region Capacity

    bool isEmpty() const {return _Size == 0;}

    // Returns size of allocated storage capacity
    size_t capacity() const {
        return _Capacity;
    }


    // Requests a change in capacity but it will never decrease the capacity.
    void reserve(size_t newAlloc)
    {
        if (newAlloc <= _Capacity) return;

        T* p = new T[newAlloc];

        for (int i = 0; i < _Size; i++)
            p[i] = _Elements[i];

        delete[] _Elements;
        _Elements = p;
        _Capacity = newAlloc;
    
    }

    /*
     *  Changes the Vector's size.
     *  If the newSize is smaller, the last elements will be lost
     **/
    void resize(size_t newSize)
    {
        reserve(newSize);
    
        for (size_t i = _Size; i < newSize; i++)
            _Elements[i] = T();

        _Size = newSize;
    }

    // Returns the size of the Vector (number of elements). 
    size_t size() const
    {
        return _Size;
    }
    
    
#pragma endregion



    
//<<<<<<<<<<<<<<<<<<<<<< Vector Modifier Functions >>>>>>>>>>>>>>>>>>>>>>>>>
#pragma region Modifier

    // Removes all elements from the Vector But Capacity is not changed.
    void clear()
    {
        for (size_t i = 0; i < _Size; i++)
            _Elements[i].~T();
        _Size = 0;
    }

    // Inserts element at the back
    void push_back(const T& value)
    {
        if (_Capacity == 0)
            reserve(8);
    
        else if (_Size == _Capacity)
            reserve(_Capacity + _Capacity / 2);

        _Elements[_Size] = value;
        _Size++;
    }

    // Removes the last element from the Vector
    void pop_back()
    {
        if (_Size == 0) return;
 
        // Decrease the size if it is greater than or equal to zero
        _Size--;

        // Decrease the capacity if the size is less than x% the capacity
        if (_Size < _Capacity / 10 && _Capacity > 10)
            deallocate(capacity / 10);
    }

    void reallocate(size_t newCapacity)
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
    /*
     * Decreases the capacity of the array to be newSize
     * If newSize is larger than the current capacity, nothing is done
     **/
    void deallocate(size_t newSize)
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

    template<class... Args>
    iterator emplace(iterator it, Args&&... args)
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
        //allocator.construct(_it, args...);
        
        _Size++;
        
        return _it;
    }
    
    template <typename... Args>
    T& emplace_back(Args&&... args)
    {
        // emplace(end(), std::forward<Args>(args)...);
        return nullptr;
    }

    

#pragma endregion



 //<<<<<<<<<<<<<<<<<<<<<<<< Vector Element Accessors >>>>>>>>>>>>>>>>>>>>>>>>>>
#pragma region Access

    // Access elements with bounds checking
    T& at(size_t n)
    {
        if (n < 0 || _Size <= n) return nullptr;
        return _Elements[n];
    }
    const T& at(size_t n) const
    {
        if (n < 0 || _Size <= n) return nullptr;
        return _Elements[n];
    }

    // Returns a reference to the first element
    T& fist()
    {
        return _Elements[0];
    }
    const T& fist() const
    {
        return _Elements[0];
    }

    // Returns a reference to the last element
    T& last()
    {
        return _Elements[_Size - 1];
    }

    // Returns a reference to the last element
    const T& last() const
    {
        return _Elements[_Size - 1];
    }

    // Access elements, no bounds checking
    T& operator[](size_t i) const
    {
        return _Elements[i];
    }


    // Returns a pointer to the array used by Vector
    T* data()
    {
        return _Elements;
    }
    const T* data() const
    {
        return _Elements;
    }
    
#pragma endregion

    size_t max_size() const
    {
        return 99;
    }
    
};




template<class T> class SavageVector<T>::iterator
{
public:
    iterator(T* p)
        :_Ptr(p)
    {}

    iterator& operator++()
    {
        _Ptr++;
        return *this;
    }

    iterator& operator--()
    {
        _Ptr--;
        return *this;
    }

    T& operator*()
    {
        return *_Ptr;
    }

    bool operator==(const iterator& b) const
    {
        return *_Ptr == *b._Ptr;
    }

    bool operator!=(const iterator& b) const
    {
        return *_Ptr != *b._Ptr;
    }

private:
    T* _Ptr;
};