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
  - pointers-and-arrays.cpp: Arrays can decay into a pointer & exploring a couple of different ways that can happen
  - handling-array-decay.cpp: Exploring a common pattern to handle/avoid array decay 
  - pointer-arithmetic.cpp: A look at two ways to obtain the address of an nth element, including an intro to pointer arithmetic
  - pointer-danger.cpp: Demonstrating the danger of pointers by trying to assign to a memory address that is out-of-bounds
  - references-intro.cpp: Declaring an arg as a reference, no dereferencing needed
  - linked-list.cpp: An intro to a forward-linked list
  - traverse-linked-list.cpp: Traverse a linked list using a for loop and a cursor pointer
  - reseating-references.cpp: Simple example to illustrate that you cannot reseat references
  - this-pointers.cpp: Access the current object - i.e. the object that is executing the method. Disambiguate member name collisions.
  - const-arguments.cpp: A const pointer or reference is an efficient way to pass an object into a function for read-only use
  - const-methods.cpp: Marking a method const marks it as a read-only method
  - const-member-variables.cpp: Marking a member variable as const means it cannot be modified after initialization
  - member-initializer-lists.cpp: You can mark a member variable as const but set its value at runtime using a member initializer
  - initialization-with-auto.cpp: You can use auto instead of type information when you initialize with assignment
  - auto-reference-types.cpp: You can add modifiers to the auto declaration to add the intended meanings
  - exercises.cpp: End-of-chapter exercises. See also exercise-3.2.cpp and exercise-3-3.cpp - broken out from this file to make things more readable
- Chapter 4: The Object Life Cycle
  - automatic-storage-duration.cpp: Intro to automatic objects, with a function example to illustrate automatic storage duration/local variables
  - static-storage-duration.cpp: Intro to static objects, with a function to illustrate static object storage duration/global variables
  - local-static-variables.cpp: Static variables that are local to a function but persist from first invocation until program execution completes. Weird!
  - static-members.cpp: Use the `static` keyword to identify members of a class that aren't associated with a particular instance of the class.
  - thread-local.cpp: Use the `thread-local` keyword to designate thread-local storage duration
  - dynamic-storage.cpp: Allocate and deallocate dynamic storage on request with a `new` expression and `delete` expression
  - trace-object-life-cycle.cpp: Example code that explores the different storage durations
  - throw.cpp: Explore exceptions via the throw keyword
  - handling-exceptions.cpp: Explore various exception handling techniques. This code does not compile - it's just a long list of examples.
  - throwing-in-destructors.cpp: If you throw an exception in a destructor, you are juggling with chainsaws.
  - simple-string.cpp: Explore how constructors, destructors, members, and exceptions gel together in an extended example

## General Notes
- Ran into an issue with a range-based for loop where `clang++` compiled with an older version of cpp. Got a warning `warning: range-based for loop is a C++11 extension [-Wc++11-extensions]`
  - To compile with a specific version of CPP/clang, use `clang++ -std=c++17 {filename}.cpp`
  - Need to investigate how to set this as the default when using command line/clang++ to compile