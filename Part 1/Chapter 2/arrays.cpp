#include <cstdio>

int main() {
    int arr[] = { 1, 2, 3, 4};
    printf("The third element is: %d\n", arr[2]);
    arr[2] = 100;
    printf("The third element is: %d\n", arr[2]);

    // Number of elements in an array
    short array[] = { 104, 105, 32, 98, 105, 108, 108, 0 };
    size_t n_elements = sizeof(array) / sizeof(short);
    printf("The number of elements in the array is: %zu\n", n_elements);
    // This is a hack used in older C++ code; will learn std::size function in <iterator> header in Pt. 2
}