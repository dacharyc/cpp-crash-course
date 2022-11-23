#include <cstdio>

struct College {
    char name[256];
};

void print_name(College* colleges, size_t n_colleges) {
    for (size_t i = 0; i < n_colleges; i++) {
        printf("%s College\n", colleges[i].name);
    }
}

int main() {
    College oxford[] = { "Magdalen", "Nuffield", "Kellogg" };
    print_name(oxford, sizeof(oxford)/sizeof(College));
    // You can take a direct approach to obtain an address of the nth element
    // Obtain the element using [] and use the address-of (&) operator
    College* third_college_ptr = &oxford[2];
    printf("The address of the nth element is: %p\n", third_college_ptr);
    // Or you can add or subtract integers to pointers to obtain the nth element
    College* third_college_ptr_alternate = oxford +2;
    printf("The address of the nth element using pointer arithmetic is: %p\n", third_college_ptr_alternate);
}