#include <cstdio>

void petruchio(const char* shrew) {
    printf("Fear not, sweet wench, they shall nto touch thee, %s.", shrew);
    shrew[0] = "K"; // Compiler error! The shrew cannot be tamed.
    // Above line throws an error: read-only variable is not assignable
}