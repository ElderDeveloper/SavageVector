#pragma once
#include <cstdint>
#include <utility>
#include <new>
#include <memory>
#include <stdexcept>
#include <iterator>
#include <limits>
#include <algorithm>


template<typename T>
class Vector
{
    
public:

    typedef T value_type;
    typedef size_t size_type;
    typedef std::ptrdiff_t difference_type;
    typedef T& reference;
    typedef const T& const_reference;
    typedef T* pointer;
    typedef const T* const_pointer;
    typedef const T* const_iterator;


//<<<<<<<<<<<<<<<<<<<<<< Constructors >>>>>>>>>>>>>>>>>>>>>
#pragma region Constructor
    
    Vector();
    
    // Copy Constructor
    Vector (const Vector& args);

    //Copy Assignment
    Vector<T>& operator= (const Vector<T>& args);

    // Destructor
    ~Vector();
    
#pragma endregion

private:

    size_t _Size;       // Number of elements in Vector
    T* _Elements;       // Pointer to first element of Vector
    size_t _Capacity;   // Total space used by Vector including elements and free space.
    std::allocator<T>  allocator;


public:
//<<<<<<<<<<<<<<<<<<<<< Iterators >>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#pragma region iterator
    class iterator;

    iterator begin();
    const iterator begin() const;
    iterator end();
    const iterator end() const;
#pragma endregion


    

//<<<<<<<<<<<<<<<<<<<<<< Capacity Functions >>>>>>>>>>>>>>>>>>>>>>>>>
#pragma region Capacity

    bool isEmpty() const;

    // Returns size of allocated storage capacity
    size_t capacity() const;

    // Requests a change in capacity but it will never decrease the capacity.
    void reserve(size_t newAlloc);

    /*
     *  Changes the Vector's size.
     *  If the newSize is smaller, the last elements will be lost
     **/
    void resize(size_t newSize);

    // Returns the size of the Vector (number of elements). 
    size_t size() const;
    
    
#pragma endregion



    
//<<<<<<<<<<<<<<<<<<<<<< Vector Modifier Functions >>>>>>>>>>>>>>>>>>>>>>>>>
#pragma region Modifier

    // Removes all elements from the Vector But Capacity is not changed.
    void clear();

    // Inserts element at the back
    void push_back(const T& value);

    // Removes the last element from the Vector
    void pop_back();

    void reallocate(size_t newCapacity);
    /*
     * Decreases the capacity of the array to be newSize
     * If newSize is larger than the current capacity, nothing is done
     **/
    void deallocate(size_t newSize);

    template<class... Args>
    iterator emplace(iterator it, Args&&... args);
    
    template <typename... Args>
    T& emplace_back(Args&&... args);
    

#pragma endregion



 //<<<<<<<<<<<<<<<<<<<<<<<< Vector Element Accessors >>>>>>>>>>>>>>>>>>>>>>>>>>
#pragma region Access

    // Access elements with bounds checking
    T& at(size_t n);
    const T& at(size_t n) const;

    // Returns a reference to the first element
    T& fist();
    const T& fist() const;

    // Returns a reference to the last element
    T& last();

    // Returns a reference to the last element
    const T& last() const;

    // Access elements, no bounds checking
    T& operator[](size_t i) const;
    const T& operator[](int i) const;

    // Returns a pointer to the array used by Vector
    T* data();
    const T* data() const;
    
#pragma endregion

    size_t max_size() const
    {
        return std::numeric_limits<size_t>::max();
    }
    
};




template<class T> class Vector<T>::iterator
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