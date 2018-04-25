# Sample google-test project

This is a sample project using the Google Test/Google Mock framework with
some examples of a few tests.

The framework is well documented at:
 * [Google Test](https://github.com/google/googletest/blob/master/googletest/docs/Documentation.md)
 * [Google Mock](https://github.com/google/googletest/blob/master/googlemock/docs/Documentation.md)

## Requirements

In order to get things working, you will need:

 * C++ compiler (ideally C++11 compatible)
 * Make
 * CMake (> 2.8.11)

## Building

Compile with:

```
> cmake .
> make
```

Run main executable:

```
> ./sample
```

Run tests:

```
./tests/tests
```

You can build and run the tests all this with one line:

```
> cmake . && make && ./tests/tests
```

## Structure

```
./
├── CMakeLists.txt                // Main project CMake definition
├── src/                          // Program to test
│     ├── main.cpp                // Program entrance point
│     ├── *.cpp                   // Class definitions
│     ├── include/
│     └──  *.hpp                  // Header files
└── tests/  // Tests
      ├── CMakeLists.txt          // CMake file for tests
      ├── src/
      │   ├── fixtures/
      │   │   └── *.hpp           // Fixture definitions
      │   ├── mocks/
      │   │   └── *.hpp           // Mock definitions
      │   ├── tests.cpp           // Test program definition
      │   └── *.cpp               // Tests
      └── vendor/                 // 3rd-party google-test framework
```

## How to modify

To add new source files, create the files in the `./src/` and `./src/include`
directories and add an entry into the `./CMakeLists.txt` file for each new `.cpp` file.

```
add_executable(
	sample
    src/main.cpp
    ...
    src/my_new_file.cpp
)
```

To add new test files, create the files in the `./tests/src/` and
`./tests/src/include` directories and add an entry into the
`./tests/CMakeLists.txt` file for each new `.cpp` file.

```
add_executable(
	tests
	src/tests.cpp
    ...
	src/my_new_test.cpp
)
```
