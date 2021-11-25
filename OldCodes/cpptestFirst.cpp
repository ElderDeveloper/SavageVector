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
    int c0 = 0, c1 = 0, c2 = 0;

    {
        vector<test_struct> t0;
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

    return 0;
}
