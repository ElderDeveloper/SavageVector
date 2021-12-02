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

#pragma region CheckValues
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
#pragma endregion



template<typename T>
void PrintVector(const vector<T>& vector)
{
    for (size_t i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << std::endl;
    }

    std::cout << "Iterator:" << std::endl;
    for(vector<T>::Iterator it = vector.begin(); it != vector.end() ; it++)
    {
        std::cout << it << std::endl;
    }
}



int main()
{
    int c0 = 0, c1 = 0, c2 = 0;

    
    //{
        vector<std::string> vector; 
        //vector<test_struct> t0;
        //t0.push_back(test_struct{&c0});
        vector.push_back("kemal");
        vector.push_back("kemal1");
        vector.push_back("kemal2");
        vector.push_back("kemal3");
        vector.push_back("kemal4");
        vector.push_back("kemal5");
        vector.push_back("kemal6");
        vector.push_back("kemal7");
        vector.push_back("kemal8");

        PrintVector(vector);

        std::string a;

        std::cin >> a;
        /*
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

    return 0;
        */

    
}




// add your code here
template <typename T>
vector<T>::vector()
{
    ReAllocate(2);
}




template <typename T>
vector<T>::vector(const vector& rhs)
{
}




template <typename T>
vector<T>::vector(vector&& rhs)
{
}




template <typename T>
vector<T>::~vector()
{
    clear();
    ::operator delete(m_Data , m_Capacity * sizeof(T));
}





template <typename T>
void vector<T>::push_back(const T& value)
{
    AllocateMemory();
    
    m_Data[m_Size] = value;
    m_Size++;
}




template <typename T>
void vector<T>::push_back(T&& value)
{
    AllocateMemory();

	m_Data[m_Size] = std::move(value);
	m_Size++;
}




template <typename T>
template <typename ... Args>
T& vector<T>::emplace_back(Args&&... args)
{
    AllocateMemory();
    new( &m_Data[m_Size] ) T(std::forward<Args>(args)...);
    return m_Data[m_Size++];
}




template <typename T>
void vector<T>::insert(iterator where, const T& value)
{
}




template <typename T>
void vector<T>::swap(vector& rhs)
{
}




template <typename T>
void vector<T>::resize(std::size_t size)
{
    ReAllocate(size);
}




template <typename T>
void vector<T>::reserve(std::size_t capacity)
{
}




template <typename T>
void vector<T>::pop_back()
{
    if (m_Size > 0)
    {
        m_Size--;
        m_Data[m_Size].~T();
    }
}




template <typename T>
void vector<T>::clear()
{
    for (size_t i = 0; i < m_Size; i++)
        m_Data[i].~T();
    m_Size = 0;
}







template <typename T>
void vector<T>::ReAllocate(size_t newCapacity)
{
    T* newBlock = (T*)::operator new (newCapacity * sizeof(T));

    size_t size = m_Size;
    if (newCapacity < m_Size)
        m_Size = newCapacity;
    
    // Used For Loop For More Complex Classes
    for (size_t i = 0 ; i < m_Size; i++)
        newBlock[i] = std::move(m_Data[i]);

    for (size_t i = 0; i < m_Size; i++)
        m_Data[i].~T();

    ::operator delete(m_Data , m_Capacity * sizeof(T));
    m_Data = newBlock;
    m_Capacity = newCapacity;
    
}



template <typename T>
void vector<T>::AllocateMemory()
{
    if (m_Size >= m_Capacity)
        ReAllocate(m_Capacity + 1);
}