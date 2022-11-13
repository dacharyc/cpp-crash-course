#include <cstdio>

// Union is dangerous because you have to keep track of which interpretation is appropriate
// Book introduces "variant" on p. 379 to discuss safer options for poly-type functionality
union Variant {
    char string[10];
    int integer;
    double floating_point;
};

int main() {
    Variant v;
    v.integer = 42;
    printf("The ultimate answer: %d\n", v.integer);
    v.floating_point = 2.7182818284;
    printf("Euler's number e: %f\n", v.floating_point);
    printf("A dumpster fire: %d\n", v.integer);
}