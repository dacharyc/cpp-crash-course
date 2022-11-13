#include <cstdio>

int absolute_value(int x) {
    /* Write a function that returns the absolute value of a single argument.
     * Abs value of int x is: x (itself) if X is greater than or equal to 0;
     * otherwise, it is x times -1.
    */
    int result = 0;
    if (x < 0) {
        result = x * -1;
    } else if (x > 0) {
        result = x;
    }
    return result;
}

// Write another function called sum that takes two int arguments and returns their sum
int sum(int x, int y) {
    int result = x + y;
    return result;
}

int main() {
    int my_num = -10;
    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));

    int x = 5;
    int y = -7;
    printf("The sum of %d and %d is %d.\n", x, y, sum(x, y));
}