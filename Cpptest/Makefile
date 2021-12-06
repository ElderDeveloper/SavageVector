.PHONY: test test_ref test_more test_std clean

test: cpptest
	./cpptest

test_ref: reference
	./reference

test_more: check_more
	./check_more

test_std: standard
	./standard

cpptest: cpptest.cpp cpptest.h
	c++ -g3 cpptest.cpp -o cpptest

reference: cpptest.cpp cpptest_reference.h check_more.inl
	c++ -g3 -DCHECK_MORE -DUSE_REFERENCE -O3 cpptest.cpp -o reference

check_more: cpptest.cpp cpptest.h check_more.inl
	c++ -g3 -DCHECK_MORE -O3 cpptest.cpp -o check_more

standard: cpptest.cpp cpptest.h check_more.inl
	c++ -g3 -DCHECK_MORE -DUSE_STANDARD -O3 cpptest.cpp -o standard

clean:
	rm -f cpptest
	rm -f reference
	rm -f check_more
	rm -f test_std
