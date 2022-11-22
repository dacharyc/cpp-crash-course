#include <cstdio>

int main() {
    // Declare a pointer's type by appending an asterisk to the type declaration
    // int* my_int_ptr;
    // The format specifier for a pointer is %p
    // printf("The value of my_int_ptr is %p", my_int_ptr);
    // Obtain the address of a variable by prepending the address-of-operator (&)
    // You can use this to initialize a pointer so it poinst to the corresponfing variable
    int gettysburg{};
    printf("gettysburg: %d\n", gettysburg);
    int *gettysburg_address = &gettysburg;
    printf("Value at gettysburg_address: %d\n", *gettysburg_address);
    printf("Gettusburg Address: %p\n", gettysburg_address);
    // Dereference operator (*) accesses the object to which a pointer refers
    // It's the inverse of the address-of operator.
    // After accessing an object by dereferencing, you can treat the result like any other object of the pointed-to type
    *gettysburg_address = 17325;
    printf("Value at gettysburg_address: %d\n", *gettysburg_address);
    printf("Value at gettysburg_address: %p\n", gettysburg_address);
}