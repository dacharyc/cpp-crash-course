#include <cstdio>

int main() {
    // Allocate dynamic storage objects - or allocated objects - with a `new` expression
    // The new expression creates an object of a given type, and returns a pointer to the new object
    // Use bracket initialization to initialize an object with a value
    int* my_int_ptr = new int;
    int my_int_ptr_value = *my_int_ptr;
    int* my_second_int_ptr = new int{ 42 };
    int my_second_int_ptr_value = *my_second_int_ptr;
    printf("My int pointer's address is %p, and its value is: %d\n", my_int_ptr, my_int_ptr_value);
    printf("My second int pointer's address is %p, and its value is: %d\n", my_second_int_ptr, my_second_int_ptr_value);

    // Deallocate dynamic objects using the delete expression followed by a pointer to the dynamic object
    delete my_int_ptr;
    delete my_second_int_ptr;
}