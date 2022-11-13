#include <cstdio>

// Example of a plain-old-data class, or POD
// Think of them as a heterogenous array of elements of potentially different types
// Each element of a class is called a member
// This Book class has four members:
struct Book {
    char name[256];
    int year;
    int pages;
    bool hardcover;
};

int main() {
    Book neuromancer;
    neuromancer.pages = 271;
    printf("Neuromancer has %d pages.\n", neuromancer.pages);
}
