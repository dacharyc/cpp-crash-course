#include <cstdio>

/* Add a read_from and write_to function to listing 3-6
 * These functions should read or write to upper or lower as appropriate
 * perform bounds checking to prevent buffer overflows
 */

// For solution, see exercise-3-2.cpp

/* Add an Element* previous to listing 3-9 to make a doubly linked list
 * Add an insert_before method to Element
 * Traverse the list from front to back, then from back to front, using two separate for loops
 * Print the operating_number inside each loop.
 */

// For solution, see exercise-3-3.cpp

// Reimplement Listing 3-11 using no explicit types. (Hint: use auto.)
int main() {
    auto original = 100;
    auto& original_ref = original;
    printf("Original: %d\n", original);
    printf("Reference: %d\n", original_ref);

    auto new_value = 200;
    original_ref = new_value;
    printf("Original: %d\n", original);
    printf("New Value: %d\n", new_value);
    printf("Reference: %d\n", original_ref);
}
