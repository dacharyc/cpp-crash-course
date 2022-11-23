#include <cstdio>

struct College {
    char name[256];
};

void print_name(College* college_ptr) {
    printf("%s College\n", college_ptr->name);
}

/* Arrays can decay into a pointer
 * A decayed array loses length information and converts to a pointer to the array's first element
 * In the below example, the array `best_colleges` decays to a pointer to its first element
 * Additionally, the -> used with the printf format specifier %s causes `name` to decay into a pointer to satisfy printf
 */

int main() {
    College best_colleges[] = { "Magdalen", "Nuffield", "Kellogg" };
    print_name(best_colleges);
}