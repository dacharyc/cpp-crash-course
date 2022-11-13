#include <cstdio>

int main() {
    int a = 0; // Initialized to 0
    int b{}; // Initialized to 0
    int c= {}; // Initialized to 0
    int d; // Initialized to 0 (maybe)

    // Initializing a fundamental type to arbitrary values
    int e = 42; // Equals
    int f{ 42 }; // Braced initialization
    int g = { 42 }; // Equals-plus-braces initialization
    int h(42); // Parentheses

    struct PodStruct {
        // uint64_t a;
        char b[256];
        bool c;
    };

    PodStruct initialized_pod1{}; // All fields zeroed
    PodStruct initialized_pod2 = {}; // All fields zeroed

    PodStruct intitialized_pod3{ 42, 'Hello' }; // Fields a & b set, c = 0 
    PodStruct initialized_pod4{ 32, 'Hello', true}; // All fields set

    // Can't use the equals-zero initialization with PODs. This will not compile becuase it's forbidden in language rules:
    // Podstruct initialized_pod = 0;

    // Initializing arrays
    int array_1[]{ 1, 2, 3}; // Array of length 3; 1,2,3
    int array_2[5]{}; // Array of length 5; 0,0,0,0,0
    int array_3[5]{ 1, 2, 3}; // Array of length 5; 1,2,3,0,0
    int array_4[5]; // Array of length 5; uninitialized values
}