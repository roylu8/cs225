---

This report was generated for **roylu2** using **f4fa9a67da7052faff8f2ded3ec8eefcdceba608** (latest commit as of **April 25th 2022, 11:59 pm**)

---




## Score: 0/0 (0.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
-- The C compiler identification is Clang 10.0.0
-- The CXX compiler identification is Clang 10.0.0
-- Check for working C compiler: /usr/bin/clang
-- Check for working C compiler: /usr/bin/clang -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/clang++
-- Check for working CXX compiler: /usr/bin/clang++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /job/studentFiles/build

```


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
/job/studentFiles/src/schedule.cpp:45:1: fatal error: non-void function does not return a value [-Wreturn-type]
}
^
1 error generated.
make[3]: *** [src/CMakeFiles/src.dir/build.make:63: src/CMakeFiles/src.dir/schedule.cpp.o] Error 1
make[2]: *** [CMakeFiles/Makefile2:233: src/CMakeFiles/src.dir/all] Error 2
make[1]: *** [CMakeFiles/Makefile2:159: CMakeFiles/tests.dir/rule] Error 2
make: *** [Makefile:132: tests] Error 2

```
```
Scanning dependencies of target lodepng
[ 10%] Building CXX object lib/CMakeFiles/lodepng.dir/lodepng/lodepng.cpp.o
[ 20%] Linking CXX static library liblodepng.a
[ 20%] Built target lodepng
Scanning dependencies of target src
[ 30%] Building CXX object src/CMakeFiles/src.dir/schedule.cpp.o

```


---