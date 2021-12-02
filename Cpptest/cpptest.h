#include <cstdint>
#include <utility>
#include <new>

// This is a stripped-down version of std::vector.
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

template <typename T>
class vector
{
public:
    typedef T* pointer;
    typedef T* iterator;

    vector();

    vector(const vector& rhs);
    vector(vector&& rhs);

    vector& operator=(const vector& rhs);
    vector& operator=(vector&& rhs);

    iterator begin();
    iterator end();

    void push_back(const T& x);
    void push_back(T&& x);

    template <typename... A>
    void emplace_back(A&&... a);

    void insert(iterator where, const T& x);

    void swap(vector& rhs);

    void resize(std::size_t size);

    void reserve(std::size_t capacity);

    T& operator[](std::size_t index);

    const T& operator[](std::size_t index) const;

    std::size_t size() const;

    std::size_t capacity() const;

    void clear();

    ~vector();

private:
    // add your code here
};

// add your code here
