#include <cstddef>
#include <cstdio>

int main() {
    // Basic for loop
    unsigned long maximum = 0;
    unsigned long values[] = { 10, 50, 20, 40, 0 };
    for(size_t i=0; i < 5; i++) {
        if (values[i] > maximum) maximum = values[i];
    }
    printf("The maximum value is %lu\n", maximum); // prints 50

    // Range-based for loop
    for(unsigned long value : values) {
        if (value > maximum) maximum = value;
    }
    printf("The maximum value is %lu\n", maximum);
}