#include <cstdio>

struct College {
    char name[256];
};

/* To handle/avoid decay, you can pass an array as two arguments:
 * - A pointer to the first array element
 * - The array's length
 */
void print_name(College* colleges, size_t n_colleges) {
    for (size_t i = 0; i < n_colleges; i++) {
        printf("%s College\n", colleges[i].name);
    }
}

int main() {
    College oxford[] = { "Magdalen", "Nuffield", "Kellogg" };
    print_name(oxford, sizeof(oxford)/sizeof(College));
}