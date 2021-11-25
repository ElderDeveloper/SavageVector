#include <cstdint>
#include <utility>
#include <new>
// This is a stripped-down version of vector.
//
// Your task is to implement the vector's interface so that it can be used to
// contain arbitrary well-behaved elements which may have significant
// constructors, destructors and copy and move assignment operators.
//
// You are allowed to extend the interface in compatible ways to add new
// functions but this is not required or expected.
//
// To keep the test reasonably compact, some features are out of scope:
// - exception safety
// - custom allocators
// - any features beyond C++11
//
// Reference:
// https://en.cppreference.com/w/cpp/container/vector


template<typename  vector>
class VectorIterator
{
public:
    using ValueType = typename vector::ValueType;
    using PointerType = ValueType*;
    using ReferenceType = ValueType&;
    
public:
    VectorIterator(PointerType ptr) : m_Ptr(ptr) { }


    VectorIterator& operator++()
    {
        m_Ptr++;
        return *this;
    }

    VectorIterator& operator++(int)
    {
        VectorIterator iterator = *this;
        ++(*this);
        return iterator;
    }

    VectorIterator& operator--()
    {
        m_Ptr--;
        return *this;
    }

    VectorIterator& operator--(int)
    {
        VectorIterator iterator = *this;
        --(*this);
        return iterator;
    }

    ReferenceType operator[](int index)
    {
        return *(m_Ptr + index);
    }

    PointerType operator->()
    {
        return m_Ptr;
    }

    ReferenceType operator*()
    {
        return *m_Ptr;
    }

    bool operator==(const VectorIterator& other) const
    {
        return m_Ptr == other.m_Ptr;
    }

    bool operator!=(const VectorIterator& other) const
    {
        return !(*this == other);
    }

private:
    PointerType m_Ptr;
};






template <typename T>
class vector
{

public:
    using ValueType = T;
    using Iterator = VectorIterator<vector<T>>;
    
public:
    typedef T* pointer;
    typedef T* iterator;

    vector();
    vector(const vector& rhs);
    vector(vector&& rhs);
    ~vector();

    
    

    //It Returns The Iterator To The Begining
    Iterator begin()
    {
        return Iterator(m_Data);
    }
    // It Returns The Iterator To The End Passing Last Pointer
    Iterator end()
    {
        return Iterator(m_Data + m_Size);
    }

    T* m_Data = nullptr;

    size_t m_Size = 0;
    size_t m_Capacity = 0;

    //It Adds Element At The End Of The Vector
    void push_back(const T& value);
    void push_back(T&& value);

    //It Deletes The Last Element Of The Vector
    void pop_back();

    //Removes The Elements From The Container From The Specified Range
    void erase();

    template <typename... Args>
    T& emplace_back(Args&&... args);

    //Inserts New Elements Before Specified Position
    void insert(iterator where, const T& value);

    //It Assigns New Value To The Vector
    void assign();

    //It Swaps The Content Between Vectors
    void swap(vector& rhs);

    //It Changes The Size Of Vector
    void resize(size_t newSize);

    //increase capacity to capacity (without geometric growth), provide strong guarantee
    void reserve(size_t capacity);

    // It Is Used To Remove All Elements Of The Vector
    void clear();

    
    
    //Returns Size Of Allocated Storage Capacity
    size_t capacity() const { return m_Capacity; };

    //It Returns Number Of Elements In The Vector
    size_t size() const { return m_Size; };

    //It Tests Whether The Vector In Empty
    bool isEmpty() const { return m_Size == 0; }



private:
    
    //Allocate a New Black Of Memory and Copy All Elements And Assign Allocated Memory 
    void ReAllocate(size_t newCapacity);

    void AllocateMemory();
    
public: //Operators
    
    // Access Data Inside The Vector 
    T& operator[](size_t index)
    {
        if(index<m_Size)
            return m_Data[index];
        else{ return nullptr; }
    }
    
    const T& operator[](size_t index) const
    {
        if(index<m_Size) return m_Data[index];
        else{ return nullptr; }
    }
};


