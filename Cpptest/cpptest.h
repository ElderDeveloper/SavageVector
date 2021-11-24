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

    //It Returns The Iterator To The Begining
    iterator begin();
    // It Returns The Iterator To The End
    iterator end();

    //It Adds Element At The End Of The Vector
    void push_back(const T& x);
    void push_back(T&& x);

    //It Deletes The Last Element Of The Vector
    void pop_back();

    //Removes The Elements From The Container From The Specified Range
    void erase();

    template <typename... A>
    void emplace_back(A&&... a);

    //Inserts New Elements Before Specified Position
    void insert(iterator where, const T& x);

    //It Assigns New Value To The Vector
    void assign();

    //It Swaps The Content Between Vectors
    void swap(vector& rhs);

    //It Changes The Size Of Vector
    void resize(std::size_t newSize);

    //increase capacity to capacity (without geometric growth), provide strong guarantee
    void reserve(std::size_t capacity);

    //It Returns Number Of Elements In The Vector
    std::size_t size() const;

    //It Returns Maximum Size Of The Vector
    std::size_t max_size() const;

    //Returns Size Of Allocated Storage Capacity
    std::size_t capacity() const;

    //It Tests Whether The Vector In Empty
    bool empty();

    // It Is Used To Remove All Elements Of The Vector
    void clear();

    ~vector();


    vector& operator=(const vector& rhs);
    vector& operator=(vector&& rhs);

    T& operator[](std::size_t index);

    const T& operator[](std::size_t index) const;
    
};

