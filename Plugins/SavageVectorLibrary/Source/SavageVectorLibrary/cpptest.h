#pragma once
#include <iostream>

template<class T>
class vector
{
	
private:
		size_t size;
		size_t capacity;
		T *element;

        // Increases the capacity of the underlying array to be sz
        // If sz is smaller than the current capacity then nothing is done
        void allocate(size_t sz)
        {

            if (sz <= capacity)
                return;

            // allocate a new array on the free store
             T *new_element = new T[sz];

             // copy old vector size_to new one
            for (size_t i = 0; (size_t)i < size; ++i)
             {
                    new_element[i] = element[i];
             }
             // set the new capacity
             capacity = sz;

            // delete the old vector
            delete[] element;
            // Assign element to the new element
             element = new_element;
		}
		

        // Decreases the capacity of the array to be sz
        // If sz is larger than the current capacity, nothing is done
        void deallocate(size_t sz)
        {
            if (sz >= capacity)
                return;

                T *new_element = new T[sz];

            for (size_t i = 0; (size_t)i < size; ++i)
                new_element[i] = element[i];

                capacity = sz;
                delete[] element;
                element = new_element;

        }

                class Iterator
                {
                    public:
                        typedef T& reference;
                        typedef T* pointer;

                        // Constructors
                        Iterator() {}
                        Iterator(T* _ptr) : ptr(_ptr) { }

                        Iterator operator++() { ++ptr; return *this; } // PREFIX
                        Iterator operator++(int junk) { Iterator i = *this; ptr++; return i; } // POSTFIX
                        reference operator*() { return *ptr; }
                        pointer operator->() { return ptr; }
                        reference operator=(const T& s) { ptr = s.ptr; return *this; }
                        bool operator==(const Iterator& s) { return ptr == s.ptr; } const
                        bool operator!=(const Iterator& s) { return ptr != s.ptr; } const
                        bool operator<(const Iterator& s) { return ptr < s.ptr; } const
                        bool operator>(const Iterator& s) { return ptr > s.ptr; } const

                        T operator-(const Iterator& s) const { return this->ptr - s.ptr; }

                    private:
                        pointer ptr;

                };


	public:

		// Default constructor with no initialization
		vector() : capacity(10), size(0)
		{
			element = new T[capacity];
		}

		// Overloaded constructor for use with an initialization list
		// IE: vector<size_t> d = {10, 5, 10}; or
		// vector<size_t> d{10, 5, 10};
		vector(std::initializer_list<T> const &s)
		{
	        size = s.size();
            capacity = 10;
            size_t i = 0;

            while (capacity < size)
                capacity *= 2;

            element = new T[capacity];

            for (auto it = s.begin(); it < s.end(); ++it)
            {
                element[i] = *it;
                ++i;
            }
		}

		// Copy Constructor
		vector(const vector<T>& rhs)
		{
			element = new T[rhs.size];
			size = rhs.size;
			capacity = rhs.capacity;
			
			for (size_t i = 0; i < rhs.size; ++i)
				element[i] = rhs[i];
		}

		// Copy Constructor
		vector(vector&& rhs)
		{
			element = new T[rhs.size];
			size = rhs.size;
			capacity = rhs.capacity;

			for (size_t i = 0; i < rhs.size; ++i)
				element[i] = rhs[i];

			return *this;
		}

		// Removes all elements from the vector But Capacity is not changed.
		void Clear()
		{
			for (size_t i = 0; i < size; i++)
				element[i].~T();
			size = 0;
		}

		// Free up resources when vector is lost
		~vector()
		{
			delete[] element;
		}


		// Overloads the Brackets to Get/Set an element at position i
		T& operator[](size_t i)
		{
			if (i >= 0 && i < size)
				return element[i];
			    return element[0];
		}


		// Overloads the Brackets to Get/Set an element at position i
		const T& operator[](size_t i) const
		{
			if (i >= 0 && i < size)
				return element[i];
                return element[0];
		}


		// Equality Operator
		const bool operator==(vector<T>& right) const 
		{ 
			if (size != right.size)
				return false;
			else 
			{
				for (size_t i = 0; i < Size(); i++) 
				{ 
					if (element[i] != right[i])
						return false;
				}
			}

			return true;
		} 


		// Plus Equals Operator
		// Adds each element from the "a" vector to the current vector
		vector<T>& operator+=(const vector<T>& a) 
		{
			T* p = new T[size + a.Size()];

			for (size_t i = 0; i < size; i++)
				p[i] = element[i];

			for (size_t i = size, ctr = 0; i < size + a.Size(); i++, ctr++)
				p[i] = a[ctr];

			delete[] element;
			element = p;
			size += a.Size();
			return *this;
		}


		// Plus Equals Operator
		// Adds an element of type T to the end of the vector
		vector<T>& operator+=(const T a)
		{
			if (size + 1 >= capacity)
				allocate(2 * capacity);

			element[size] = a;
			size++;

			return *this;
		}


		// Add One to the current vector Size
		const vector<T>& operator++() 
		{
			T item;
			Push_Back(item);
			return *this;
		}


		// Add One to the current vector Size
		const vector<T>& operator++(int junk)
		{
			vector<T> i = *this;
			T item;
			Push_Back(item);
			return i;
		}

		// Minus One Element from the current vector
		const vector<T>& operator--() 
		{
			size -= 1;
			return *this;
		}
		// Minus One Element from the current vector
		const vector<T>& operator--(int junk)
		{
			vector<T> i = *this;
			size -= 1;
			return i;
		}

		// Adds an element to the end of a vector
		const vector<T>& operator+(T& x) 
		{
			Push_Back(x);
			return *this;
		}

		// Adds the right vectors elements to the left vectors elements
		// Ex. vec = vec2 (1, 2, 3) + vec3 (4, 5, 6); which makes vec = (1, 2, 3, 4 ,5 ,6)
		const vector<T>& operator+(vector<T>& x)
		{
			for (size_t i = 0; i < x.size; ++i)
				Push_Back(x[i]);

			return *this;
		}

		// Emplace all vector
		vector& operator=(const vector& rhs)
		{
			Clear();
			element = new T[rhs.size];
			size = rhs.size;
			capacity = rhs.capacity;

			for (size_t i = 0; i < rhs.size; ++i)
				element[i] = rhs[i];

			return *this;
		}

		// Emplace all vector
		vector& operator=(vector&& rhs)
		{
			Clear();
			element = new T[rhs.size];
			size = rhs.size;
			capacity = rhs.capacity;

			for (size_t i = 0; i < rhs.size; ++i)
				element[i] = rhs[i];

			return *this;
		}




		// Resize the vector if newSize is bigger than size allocate new memory else: Pop_Back until newSize and size becomes equal
		void resize(size_t newSize)
		{
			if (newSize > size)
			{
				allocate(newSize);
			}
			else
			{
				while (size > newSize)
				{
					Pop_Back();
				}
			}
		}

		/*
		template <typename... A>
		void emplace_back(A&&... a);
		*/


		/*
		* Increase the capacity of the vector to a value that's greater or equal to new_cap. 
		* If newCapacity is greater than the current capacity(), new storage is allocated, otherwise the function does nothing.
		*/
		void reserve(size_t newCapacity)
		{
			if (newCapacity > capacity)
			{
				allocate(newCapacity);
			}
		}

		// Sets the position "pos" to the value of "item"
		void Set(size_t pos, T &item)
		{
			if (pos >= 0 && pos < size)
				element[pos] = item;
		}

		// Swaps entire vector to the value of rhs
		void Swap(vector& rhs)
		{
			Clear();
			element = new T[rhs.size];
			size = rhs.size;
			capacity = rhs.capacity;

			for (size_t i = 0; i < rhs.size; ++i)
				element[i] = rhs[i];
		}

		// Gets an element from position "pos"
		T At(size_t pos)
		{
			if (pos >= 0 && pos < size)
				return element[pos];

			    return element[0];
		}

		// Returns the position in the vector of first found value of item
		// NOTE: Returns -1 if the element was not found
		size_t Get(T &item)
		{
			size_t pos = -1;
			for (size_t i = 0; i < size; ++i)
			{
				if (element[i] == item)
				{
					pos = i;
					break;
				}
			}
			return pos;
		}


		// Returns the Iterator for the Beginning of the vector object
		Iterator Begin()
		{
			return Iterator(element);
		}
		// Returns the Iterator for the End of the vector Object
		Iterator End()
		{
			return Iterator(element + size);
		}


		// Adds an element of Type "item" to the end of the vector
		void Push_Back(const T& item)
		{

			// Increase the capacity of the vector if the 
			// size is at least the same size as capacity
			if (size >= capacity)
				allocate(2 * capacity);

			// Set the element at position "size" 
			// to the item passed in the variable
			element[size] = item;
			++size;
		}

        // Adds an element of Type "item" to the end of the vector
		void Push_Back(T&& item)
		{
			// Increase the capacity of the vector if the 
			// size is at least the same size as capacity
			if (size >= capacity)
				allocate(2 * capacity);

			// Set the element at position "size" 
			// to the item passed in the variable
			element[size] = item;
			++size;
		}



		// Adds an element of Type "item" to the position "pos"
		void Insert(T &item, size_t pos)
		{

			// Increase the capacity if we need to
			if (size >= capacity)
					allocate(2 * capacity);

			// Loop from 1 past the end of the vector elements 
			// to the position we are adding an element to
			for (size_t i = size; i > pos; i--)
			{
				// Move the item up 1 position (Starting from the top of the vector)
				element[i] = element[i - 1];
			}
			// Add 1 to the size of the vector
			++size;

			// Finally, Add the item to the specified position
			element[pos] = item;
		}

		// Removes the element from the end of the vector
		void Pop_Back()
		{
			// Decrease the size if it is greater than or equal to zero
			if (size >= 0)
				size--;
					
			// Decrease the capacity if the size is less than x% the capacity
			if (size < capacity / 10 && capacity > 10)
				deallocate(capacity / 10);
		}

		// Removes an element from the position "pos" from the vector
		void Pop_At(size_t pos)
		{
			if (pos > -1 && pos < size)
			{
				// Loop from the position after this element,
				// to the last element in the vector
				for (size_t i = (size_t)pos; i < size-1; ++i)
				{
					// Switch the elements
					T temp = element[i];
					element[i] = element[i+1];
					element[i + 1] = temp;
				}
				// Call the Pop function to remove the last element in the vector
				Pop_Back();
			}
		}

		T& Front()	{	return element[0];	}
		T& Back()	{	return element[size - 1];	}
		size_t First()  { return 0; }
		size_t Last()	{	if (size > 0) return size - 1; return -1;	}

		const size_t Size() const { return size; }
		const size_t Capacity() const { return capacity; }


};

	
