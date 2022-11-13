#include <cstdio>

// Create an enum class Operation that has values Add, Subtract, Multiply, and Divide
enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide,
};

// Create a struct Calculator. It should have a single constructor that takes an Operation.
struct Calculator {
    Calculator(int a, int b, Operation operation) {
        calculate(a, b, operation);
    }

    // Create a method on Calculator called int calculate(int a, int b)
    // Upon invocation, this method should perform addition, subtraction, multiplication, or division
    // based on its constructor argument and return the result
    int calculate(int a, int b, Operation operation) {
        switch(operation) {
            case Operation::Add: {
                int result = a + b;
                printf("%d + %d = %d\n", a, b, result);
                return result;
            } break;
            case Operation::Subtract: {
                int result = a - b;
                printf("%d - %d = %d\n", a, b, result);
                return result;
            } break;
            case Operation::Multiply: {
                int result = a * b;
                printf("%d * %d = %d\n", a, b, result);
                return result;
            } break;
            case Operation::Divide: {
                int result = a / b;
                printf("%d / %d = %d\n", a, b, result);
                return result;
            } break;
            default: {
                printf("Error: unknown operation!\n");
            }
        }
    }
};

int main() {
    int a = 5;
    int b = 2;
    Operation operation = Operation::Divide;
    Calculator calculator { a, b, operation };
}
