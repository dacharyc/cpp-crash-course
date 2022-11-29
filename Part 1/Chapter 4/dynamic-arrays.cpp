#include <cstdio>

int main() {
    // new MyType[n_elements] { init-list }
    // MyType = the desired type of the array elements
    // `n_elements` = the number of elements in the array
    // `init-list` = an optional list to initialize the new artray
    // Array new expressions return a pointer to the first element of the new array
    int* my_int_array_ptr = new int[100];
    // The size of the array could be determined at runtime by a variable rather than a literal
    // Use the array delete expression to deallocate a dynamic array.
    delete[] my_int_array_ptr;
}