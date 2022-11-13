#include <cstdio>

int step_function(int x) {
    int result = 0;
    if (x < 0) {
        result = -1;
    } else if (x > 0) {
        result = 1;
    }
    return result;
}

int main() {
    // This comment is on its own line.
    int num1 = 42; // This is an inline comment.
    int result1 = step_function(num1);

    int num2 = 0;
    int result2 = step_function(num2);

    int num3 = -32767;
    int result3 = step_function(num3);

    printf("Num1: %d, Step: %d\n", num1, result1);
    printf("Num2: %d, Step: %d\n", num2, result2);
    printf("Num3: %d, Step: %d\n", num3, result3);

    return 0;
    /*
     *  This is a multi-line
     *  block comment.
     *  The * at the start of each line is optional,
     *  but conventional. And if you use it in one
     *  line in VS Code, it automatically adds it
     *  to the next newline.
     */
}
