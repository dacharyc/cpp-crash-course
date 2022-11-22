# C++ Crash Course

This repository is a collection of coding exercises & notes as I work through the book [C++ Crash Course](https://www.amazon.com/C-Crash-Course-Josh-Lospinoso/dp/1593278888/) to learn C++.

I'm making it public because I like to learn in the open, with the hope that this can inspire and encourage other learners to be open about their learning journey. None of us are born knowing how to program, and openly sharing struggles and successes can help us build a more inclusive tech industry.

## Part 1

- Chapter 1: Up and Running
  - hello.cpp: A "Hello, world" to test that the environment is set up properly
  - conditional-behavior.cpp: Exploring basic conditional control flow, printf
  - step-function.cpp: Exploring functions that take a param, printf format specifiers
  - exercises.cpp: End-of-chapter exercises to write a couple of basic funcs, use printf to see results
- Chapter 2: Types
  - whole-numbers.cpp: Exploring integer types, signed vs. unsigned, suffixes, and print specifiers
  - floating-point.cpp: Overview of different float types/precision
  - character.cpp: Look at the six character types, narrow vs. wide characters, prefixes
  - comparison-operators.cpp: A look at bool & basic comparison operators
  - logical-operators.cpp: Bools & logical operators
  - size-of-type.cpp: A look at `size_t` / `sizeOf()`, with note that size varies based on OS
  - arrays.cpp: A brief look at arrays, including a hack to get the number of elements useful in older C++ code bases
  - for-loops.cpp: A brief look at for loop & ranged for loop. Range-based for loop caused a compiler warning which resulted in a note below.
  - strings.cpp: Look at string print specifier, initialization and working with
  - enums-and-switches.cpp: Example of how to implement an enum/switch statement in CPP
  - plain-old-data-classes.cpp: POD example, initialize & access using dot notation
  - union.cpp: Danger! Will Robinson.
  - class-methods.cpp: Fully-featured C++ classes, including class methods & public/private details
  - constructors.cpp: A look at adding a constructor to a class, initializing with a value
  - initialization.cpp: A whirlwind tour of different ways to initialize variables & classes. Takeway: use braced initialization
  - initialize-fully-featured-classes.cpp: 8 different ways to initialize a class with 4 different constructors. Only 7 work!
  - exercises.cpp: End-of-chapter exercises to write a calculator that takes an Operation, performs addition, subtraction, multiplication, or division, and returns the result
- Chapter 3: Reference Types
  - pointers.cpp: Pointers, address-of operator, dereference operator, & format specifiers
  - member-of-pointer.cpp: Member-of or arrow operator - dereferences & accesses a member of the pointed-to object

## General Notes
- Ran into an issue with a range-based for loop where `clang++` compiled with an older version of cpp. Got a warning `warning: range-based for loop is a C++11 extension [-Wc++11-extensions]`
  - To compile with a specific version of CPP/clang, use `clang++ -std=c++17 {filename}.cpp`
  - Need to investigate how to set this as the default when using command line/clang++ to compile