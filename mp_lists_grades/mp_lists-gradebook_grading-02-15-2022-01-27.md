---

This report was generated for **roylu2** using **df7323f778c7df826827bbbe0dc0c4593f7245b8** (latest commit as of **February 14th 2022, 11:59 pm**)

---




## Score: 5/52 (9.62%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part1.o .objs/tests/tests_part2.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/1] - List::insertFront size

- **Points**: 0 / 1

```
==72== Memcheck, a memory error detector
==72== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==72== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==72== Command: ./test -r xml "List::insertFront\ size"
==72== 
==72== Conditional jump or move depends on uninitialised value(s)
==72==    at 0x42832C: List<int>::insertFront(int const&) (List.hpp:65)
==72==    by 0x422007: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==72==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==72==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==72==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==72==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==72==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==72==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==72==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==72==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==72==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==72==    by 0x4821E1: main (catch.hpp:13613)
==72== 
==72== Conditional jump or move depends on uninitialised value(s)
==72==    at 0x428366: List<int>::insertFront(int const&) (List.hpp:69)
==72==    by 0x422007: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==72==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==72==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==72==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==72==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==72==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==72==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==72==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==72==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==72==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==72==    by 0x4821E1: main (catch.hpp:13613)
==72== 
==72== Conditional jump or move depends on uninitialised value(s)
==72==    at 0x452B30: Catch::RunContext::handleExpr(Catch::AssertionInfo const&, Catch::ITransientExpression const&, Catch::AssertionReaction&) (catch.hpp:9683)
==72==    by 0x430A0B: Catch::AssertionHandler::handleExpr(Catch::ITransientExpression const&) (catch.hpp:5467)
==72==    by 0x422164: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:25)
==72==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==72==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==72==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==72==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==72==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==72==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==72==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==72==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==72==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==72== 
==72== Conditional jump or move depends on uninitialised value(s)
==72==    at 0x428900: List<int>::_destroy() (List.hpp:40)
==72==    by 0x4285A4: List<int>::~List() (List-given.hpp:68)
==72==    by 0x42221E: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:26)
==72==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==72==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==72==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==72==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==72==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==72==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==72==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==72==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==72==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==72== 
==72== 
==72== HEAP SUMMARY:
==72==     in use at exit: 0 bytes in 0 blocks
==72==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==72== 
==72== All heap blocks were freed -- no leaks are possible
==72== 
==72== For counts of detected and suppressed errors, rerun with: -v
==72== Use --track-origins=yes to see where uninitialised values come from
==72== ERROR SUMMARY: 4 errors from 4 contexts (suppressed: 0 from 0)

```



### ✗ - [0/2] - List::insertBack size

- **Points**: 0 / 2

```
==74== Memcheck, a memory error detector
==74== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==74== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==74== Command: ./test -r xml "List::insertBack\ size"
==74== 
==74== Conditional jump or move depends on uninitialised value(s)
==74==    at 0x4289CE: List<int>::insertBack(int const&) (List.hpp:93)
==74==    by 0x4222B7: ____C_A_T_C_H____T_E_S_T____2() (tests_part1.cpp:31)
==74==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==74==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==74==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==74==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==74==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==74==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==74==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==74==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==74==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==74==    by 0x4821E1: main (catch.hpp:13613)
==74== 
==74== Conditional jump or move depends on uninitialised value(s)
==74==    at 0x452B30: Catch::RunContext::handleExpr(Catch::AssertionInfo const&, Catch::ITransientExpression const&, Catch::AssertionReaction&) (catch.hpp:9683)
==74==    by 0x430A0B: Catch::AssertionHandler::handleExpr(Catch::ITransientExpression const&) (catch.hpp:5467)
==74==    by 0x422414: ____C_A_T_C_H____T_E_S_T____2() (tests_part1.cpp:33)
==74==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==74==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==74==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==74==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==74==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==74==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==74==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==74==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==74==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==74== 
==74== 
==74== HEAP SUMMARY:
==74==     in use at exit: 0 bytes in 0 blocks
==74==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==74== 
==74== All heap blocks were freed -- no leaks are possible
==74== 
==74== For counts of detected and suppressed errors, rerun with: -v
==74== Use --track-origins=yes to see where uninitialised values come from
==74== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```



### ✗ - [0/4] - List::insert contents

- **Points**: 0 / 4

```
==76== Memcheck, a memory error detector
==76== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==76== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==76== Command: ./test -r xml "List::insert\ contents"
==76== 
==76== Conditional jump or move depends on uninitialised value(s)
==76==    at 0x4289CE: List<int>::insertBack(int const&) (List.hpp:93)
==76==    by 0x42256D: ____C_A_T_C_H____T_E_S_T____4() (tests_part1.cpp:39)
==76==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==76==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==76==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==76==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==76==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==76==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==76==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==76==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==76==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==76==    by 0x4821E1: main (catch.hpp:13613)
==76== 
==76== 
==76== HEAP SUMMARY:
==76==     in use at exit: 0 bytes in 0 blocks
==76==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==76== 
==76== All heap blocks were freed -- no leaks are possible
==76== 
==76== For counts of detected and suppressed errors, rerun with: -v
==76== Use --track-origins=yes to see where uninitialised values come from
==76== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/5] - List::triplerotate basic

- **Points**: 0 / 5

```
==78== Memcheck, a memory error detector
==78== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==78== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==78== Command: ./test -r xml "List::triplerotate\ basic"
==78== 
==78== Conditional jump or move depends on uninitialised value(s)
==78==    at 0x4289CE: List<int>::insertBack(int const&) (List.hpp:93)
==78==    by 0x422CE0: ____C_A_T_C_H____T_E_S_T____6() (tests_part1.cpp:56)
==78==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==78==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==78==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==78==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==78==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==78==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==78==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==78==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==78==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==78==    by 0x4821E1: main (catch.hpp:13613)
==78== 
==78== 
==78== HEAP SUMMARY:
==78==     in use at exit: 0 bytes in 0 blocks
==78==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==78== 
==78== All heap blocks were freed -- no leaks are possible
==78== 
==78== For counts of detected and suppressed errors, rerun with: -v
==78== Use --track-origins=yes to see where uninitialised values come from
==78== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/10] - List::triplerotate simple

- **Points**: 0 / 10


```
Original: "< 2 3 1 5 6 4 >" == s.str()
Expanded: "< 2 3 1 5 6 4 >" == "< 1 2 3 4 5 6 >"
```


### ✗ - [0/5] - List::split simple

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✗ - [0/3] - List::_destroy empty list

- **Points**: 0 / 3

```
==83== Memcheck, a memory error detector
==83== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==83== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==83== Command: ./test -r xml "List::_destroy\ empty\ list"
==83== 
==83== Conditional jump or move depends on uninitialised value(s)
==83==    at 0x428900: List<int>::_destroy() (List.hpp:40)
==83==    by 0x4285A4: List<int>::~List() (List-given.hpp:68)
==83==    by 0x426193: ____C_A_T_C_H____T_E_S_T____17() (tests_part1.cpp:162)
==83==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==83==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==83==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==83==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==83==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==83==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==83==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==83==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==83==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==83== 
==83== 
==83== HEAP SUMMARY:
==83==     in use at exit: 0 bytes in 0 blocks
==83==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==83== 
==83== All heap blocks were freed -- no leaks are possible
==83== 
==83== For counts of detected and suppressed errors, rerun with: -v
==83== Use --track-origins=yes to see where uninitialised values come from
==83== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::begin() returns an iterator to the front of the list

- **Points**: 0 / 1

```
==85== Memcheck, a memory error detector
==85== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==85== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==85== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==85== 
==85== Conditional jump or move depends on uninitialised value(s)
==85==    at 0x42832C: List<int>::insertFront(int const&) (List.hpp:65)
==85==    by 0x426407: ____C_A_T_C_H____T_E_S_T____19() (tests_part1.cpp:172)
==85==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==85==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==85==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==85==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==85==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==85==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==85==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==85==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==85==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==85==    by 0x4821E1: main (catch.hpp:13613)
==85== 
==85== Conditional jump or move depends on uninitialised value(s)
==85==    at 0x428366: List<int>::insertFront(int const&) (List.hpp:69)
==85==    by 0x426407: ____C_A_T_C_H____T_E_S_T____19() (tests_part1.cpp:172)
==85==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==85==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==85==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==85==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==85==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==85==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==85==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==85==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==85==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==85==    by 0x4821E1: main (catch.hpp:13613)
==85== 
==85== Conditional jump or move depends on uninitialised value(s)
==85==    at 0x428900: List<int>::_destroy() (List.hpp:40)
==85==    by 0x4285A4: List<int>::~List() (List-given.hpp:68)
==85==    by 0x42662E: ____C_A_T_C_H____T_E_S_T____19() (tests_part1.cpp:176)
==85==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==85==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==85==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==85==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==85==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==85==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==85==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==85==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==85==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==85== 
==85== 
==85== HEAP SUMMARY:
==85==     in use at exit: 0 bytes in 0 blocks
==85==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==85== 
==85== All heap blocks were freed -- no leaks are possible
==85== 
==85== For counts of detected and suppressed errors, rerun with: -v
==85== Use --track-origins=yes to see where uninitialised values come from
==85== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 0 / 1

```
==87== Memcheck, a memory error detector
==87== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==87== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==87== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==87== 
==87== Conditional jump or move depends on uninitialised value(s)
==87==    at 0x42D2CC: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:65)
==87==    by 0x4266C1: ____C_A_T_C_H____T_E_S_T____21() (tests_part1.cpp:180)
==87==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==87==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==87==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==87==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==87==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==87==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==87==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==87==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==87==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==87==    by 0x4821E1: main (catch.hpp:13613)
==87== 
==87== Conditional jump or move depends on uninitialised value(s)
==87==    at 0x42D306: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:69)
==87==    by 0x4266C1: ____C_A_T_C_H____T_E_S_T____21() (tests_part1.cpp:180)
==87==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==87==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==87==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==87==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==87==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==87==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==87==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==87==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==87==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==87==    by 0x4821E1: main (catch.hpp:13613)
==87== 
==87== Conditional jump or move depends on uninitialised value(s)
==87==    at 0x42D790: List<unsigned int>::_destroy() (List.hpp:40)
==87==    by 0x42D4F4: List<unsigned int>::~List() (List-given.hpp:68)
==87==    by 0x426902: ____C_A_T_C_H____T_E_S_T____21() (tests_part1.cpp:185)
==87==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==87==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==87==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==87==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==87==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==87==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==87==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==87==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==87==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==87== 
==87== 
==87== HEAP SUMMARY:
==87==     in use at exit: 0 bytes in 0 blocks
==87==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==87== 
==87== All heap blocks were freed -- no leaks are possible
==87== 
==87== For counts of detected and suppressed errors, rerun with: -v
==87== Use --track-origins=yes to see where uninitialised values come from
==87== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 0 / 1

```
==89== Memcheck, a memory error detector
==89== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==89== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==89== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==89== 
==89== Conditional jump or move depends on uninitialised value(s)
==89==    at 0x42D2CC: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:65)
==89==    by 0x426991: ____C_A_T_C_H____T_E_S_T____23() (tests_part1.cpp:189)
==89==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==89==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==89==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==89==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==89==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==89==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==89==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==89==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==89==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==89==    by 0x4821E1: main (catch.hpp:13613)
==89== 
==89== Conditional jump or move depends on uninitialised value(s)
==89==    at 0x42D306: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:69)
==89==    by 0x426991: ____C_A_T_C_H____T_E_S_T____23() (tests_part1.cpp:189)
==89==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==89==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==89==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==89==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==89==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==89==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==89==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==89==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==89==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==89==    by 0x4821E1: main (catch.hpp:13613)
==89== 
==89== Conditional jump or move depends on uninitialised value(s)
==89==    at 0x42D790: List<unsigned int>::_destroy() (List.hpp:40)
==89==    by 0x42D4F4: List<unsigned int>::~List() (List-given.hpp:68)
==89==    by 0x426BFC: ____C_A_T_C_H____T_E_S_T____23() (tests_part1.cpp:195)
==89==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==89==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==89==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==89==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==89==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==89==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==89==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==89==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==89==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==89== 
==89== 
==89== HEAP SUMMARY:
==89==     in use at exit: 0 bytes in 0 blocks
==89==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==89== 
==89== All heap blocks were freed -- no leaks are possible
==89== 
==89== For counts of detected and suppressed errors, rerun with: -v
==89== Use --track-origins=yes to see where uninitialised values come from
==89== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 0 / 1

```
==92== Memcheck, a memory error detector
==92== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==92== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==92== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==92== 
==92== Conditional jump or move depends on uninitialised value(s)
==92==    at 0x42D2CC: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:65)
==92==    by 0x426F71: ____C_A_T_C_H____T_E_S_T____27() (tests_part1.cpp:209)
==92==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==92==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==92==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==92==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==92==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==92==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==92==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==92==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==92==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==92==    by 0x4821E1: main (catch.hpp:13613)
==92== 
==92== Conditional jump or move depends on uninitialised value(s)
==92==    at 0x42D306: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:69)
==92==    by 0x426F71: ____C_A_T_C_H____T_E_S_T____27() (tests_part1.cpp:209)
==92==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==92==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==92==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==92==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==92==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==92==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==92==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==92==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==92==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==92==    by 0x4821E1: main (catch.hpp:13613)
==92== 
==92== Conditional jump or move depends on uninitialised value(s)
==92==    at 0x42D790: List<unsigned int>::_destroy() (List.hpp:40)
==92==    by 0x42D4F4: List<unsigned int>::~List() (List-given.hpp:68)
==92==    by 0x427856: ____C_A_T_C_H____T_E_S_T____27() (tests_part1.cpp:217)
==92==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==92==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==92==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==92==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==92==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==92==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==92==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==92==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==92==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==92== 
==92== 
==92== HEAP SUMMARY:
==92==     in use at exit: 0 bytes in 0 blocks
==92==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==92== 
==92== All heap blocks were freed -- no leaks are possible
==92== 
==92== For counts of detected and suppressed errors, rerun with: -v
==92== Use --track-origins=yes to see where uninitialised values come from
==92== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1

```
==94== Memcheck, a memory error detector
==94== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==94== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==94== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==94== 
==94== Conditional jump or move depends on uninitialised value(s)
==94==    at 0x42D2CC: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:65)
==94==    by 0x4278F1: ____C_A_T_C_H____T_E_S_T____29() (tests_part1.cpp:221)
==94==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==94==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==94==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==94==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==94==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==94==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==94==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==94==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==94==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==94==    by 0x4821E1: main (catch.hpp:13613)
==94== 
==94== Conditional jump or move depends on uninitialised value(s)
==94==    at 0x42D306: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:69)
==94==    by 0x4278F1: ____C_A_T_C_H____T_E_S_T____29() (tests_part1.cpp:221)
==94==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==94==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==94==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==94==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==94==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==94==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==94==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==94==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==94==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==94==    by 0x4821E1: main (catch.hpp:13613)
==94== 
==94== Conditional jump or move depends on uninitialised value(s)
==94==    at 0x42D790: List<unsigned int>::_destroy() (List.hpp:40)
==94==    by 0x42D4F4: List<unsigned int>::~List() (List-given.hpp:68)
==94==    by 0x427B7E: ____C_A_T_C_H____T_E_S_T____29() (tests_part1.cpp:230)
==94==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==94==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==94==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==94==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==94==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==94==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==94==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==94==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==94==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==94== 
==94== 
==94== HEAP SUMMARY:
==94==     in use at exit: 0 bytes in 0 blocks
==94==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==94== 
==94== All heap blocks were freed -- no leaks are possible
==94== 
==94== For counts of detected and suppressed errors, rerun with: -v
==94== Use --track-origins=yes to see where uninitialised values come from
==94== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::end is reached

- **Points**: 0 / 1

```
==96== Memcheck, a memory error detector
==96== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==96== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==96== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==96== 
==96== Conditional jump or move depends on uninitialised value(s)
==96==    at 0x42D2CC: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:65)
==96==    by 0x427C14: ____C_A_T_C_H____T_E_S_T____31() (tests_part1.cpp:234)
==96==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==96==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==96==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==96==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==96==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==96==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==96==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==96==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==96==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==96==    by 0x4821E1: main (catch.hpp:13613)
==96== 
==96== Conditional jump or move depends on uninitialised value(s)
==96==    at 0x42D306: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:69)
==96==    by 0x427C14: ____C_A_T_C_H____T_E_S_T____31() (tests_part1.cpp:234)
==96==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==96==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==96==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==96==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==96==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==96==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==96==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==96==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==96==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==96==    by 0x4821E1: main (catch.hpp:13613)
==96== 
==96== Conditional jump or move depends on uninitialised value(s)
==96==    at 0x452B30: Catch::RunContext::handleExpr(Catch::AssertionInfo const&, Catch::ITransientExpression const&, Catch::AssertionReaction&) (catch.hpp:9683)
==96==    by 0x430A0B: Catch::AssertionHandler::handleExpr(Catch::ITransientExpression const&) (catch.hpp:5467)
==96==    by 0x42D8A8: void Catch::AssertionHandler::handleExpr<bool>(Catch::ExprLhs<bool> const&) (catch.hpp:1648)
==96==    by 0x427DF9: ____C_A_T_C_H____T_E_S_T____31() (tests_part1.cpp:243)
==96==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==96==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==96==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==96==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==96==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==96==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==96==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==96==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==96== 
==96== Conditional jump or move depends on uninitialised value(s)
==96==    at 0x42D790: List<unsigned int>::_destroy() (List.hpp:40)
==96==    by 0x42D4F4: List<unsigned int>::~List() (List-given.hpp:68)
==96==    by 0x427E9B: ____C_A_T_C_H____T_E_S_T____31() (tests_part1.cpp:244)
==96==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==96==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==96==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==96==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==96==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==96==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==96==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==96==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==96==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==96== 
==96== 
==96== HEAP SUMMARY:
==96==     in use at exit: 0 bytes in 0 blocks
==96==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==96== 
==96== All heap blocks were freed -- no leaks are possible
==96== 
==96== For counts of detected and suppressed errors, rerun with: -v
==96== Use --track-origins=yes to see where uninitialised values come from
==96== ERROR SUMMARY: 4 errors from 4 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 0 / 1

```
==98== Memcheck, a memory error detector
==98== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==98== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==98== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==98== 
==98== Conditional jump or move depends on uninitialised value(s)
==98==    at 0x42D2CC: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:65)
==98==    by 0x427F34: ____C_A_T_C_H____T_E_S_T____33() (tests_part1.cpp:248)
==98==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==98==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==98==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==98==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==98==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==98==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==98==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==98==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==98==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==98==    by 0x4821E1: main (catch.hpp:13613)
==98== 
==98== Conditional jump or move depends on uninitialised value(s)
==98==    at 0x42D306: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:69)
==98==    by 0x427F34: ____C_A_T_C_H____T_E_S_T____33() (tests_part1.cpp:248)
==98==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==98==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==98==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==98==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==98==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==98==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==98==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==98==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==98==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==98==    by 0x4821E1: main (catch.hpp:13613)
==98== 
==98== Conditional jump or move depends on uninitialised value(s)
==98==    at 0x42D790: List<unsigned int>::_destroy() (List.hpp:40)
==98==    by 0x42D4F4: List<unsigned int>::~List() (List-given.hpp:68)
==98==    by 0x428160: ____C_A_T_C_H____T_E_S_T____33() (tests_part1.cpp:253)
==98==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==98==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==98==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==98==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==98==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==98==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==98==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==98==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==98==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==98== 
==98== 
==98== HEAP SUMMARY:
==98==     in use at exit: 0 bytes in 0 blocks
==98==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==98== 
==98== All heap blocks were freed -- no leaks are possible
==98== 
==98== For counts of detected and suppressed errors, rerun with: -v
==98== Use --track-origins=yes to see where uninitialised values come from
==98== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```



### ✗ - [0/4] - List::insert contents #2

- **Points**: 0 / 4

```
==100== Memcheck, a memory error detector
==100== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==100== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==100== Command: ./test -r xml "List::insert\ contents\ #2"
==100== 
==100== Conditional jump or move depends on uninitialised value(s)
==100==    at 0x42832C: List<int>::insertFront(int const&) (List.hpp:65)
==100==    by 0x42DB8D: ____C_A_T_C_H____T_E_S_T____0() (tests_part1_extra.cpp:17)
==100==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==100==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==100==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==100==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==100==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==100==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==100==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==100==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==100==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==100==    by 0x4821E1: main (catch.hpp:13613)
==100== 
==100== Conditional jump or move depends on uninitialised value(s)
==100==    at 0x428366: List<int>::insertFront(int const&) (List.hpp:69)
==100==    by 0x42DB8D: ____C_A_T_C_H____T_E_S_T____0() (tests_part1_extra.cpp:17)
==100==    by 0x462332: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==100==    by 0x452A86: Catch::TestCase::invoke() const (catch.hpp:10793)
==100==    by 0x4529BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==100==    by 0x44EF16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==100==    by 0x44D4EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==100==    by 0x456886: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==100==    by 0x455522: Catch::Session::runInternal() (catch.hpp:10149)
==100==    by 0x4551EA: Catch::Session::run() (catch.hpp:10106)
==100==    by 0x455169: Catch::Session::run(int, char**) (catch.hpp:10074)
==100==    by 0x4821E1: main (catch.hpp:13613)
==100== 
==100== 
==100== HEAP SUMMARY:
==100==     in use at exit: 0 bytes in 0 blocks
==100==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==100== 
==100== All heap blocks were freed -- no leaks are possible
==100== 
==100== For counts of detected and suppressed errors, rerun with: -v
==100== Use --track-origins=yes to see where uninitialised values come from
==100== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```



### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


---