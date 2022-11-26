#include <cstdio>

int main() {
    int original = 100;
    // As a reference, original_ref will always refer to original
    int& original_ref = original;
    printf("Original: %d\n", original);
    printf("Reference: %d\n", original_ref);

    int new_value = 200;
    // Because original_ref refers to original, assigning the 
    // value of new_value to original_ref assigns it to the object it points to - original
    original_ref = new_value;
    printf("Original: %d\n", original);
    printf("New Value: %d\n", new_value);
    printf("Reference: %d\n", original_ref);
}