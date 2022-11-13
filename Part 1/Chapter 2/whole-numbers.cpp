#include <cstdio>

int main() {
    /*
     * Four sizes of integer types: short, int, long, long long
     * Four possible integer literal representations:
     * binary: uses the prefix 0b
     * octal: uses the prefix 0
     * decimal: default
     * hexadecimal: uses the prefix 0x
     * Each type of Integer uses a different printf format specifier
     * Refer to table on p. 32
     */

    unsigned short a = 0b10101010; // binary
    printf("%hu\n", a);
    int b = 0123; // octal
    printf("%d\n", b);
    unsigned long long d = 0xFFFFFFFFFFFFFFFF; // hexadecimal
    printf("%llu\n", d);

    // Integer variables can be signed or unsigned
    // Signed = positive, negative, or zero
    // Unsigned = non-negative only
    unsigned int e = 3669732608;
    printf("Yabba %x!\n", e); // prints "Yabba dabbad00!"" - such funny joke, haha
    unsigned int f = 69;
    printf("There are %u,%o leaves here.\n",f, f); // %u is the unsigned int print specifier, %o is the octal representation
    // Above prints "There are 69,105 leaves here."

    // int mit_zip_code = 02139;
    // Eliminate leading zeros on decimal literals; otherwise, they cease to be decimal. Above ln won't compile.

    /* You can use integer suffixes to specify its type for the compiler - see p. 34 for table
     * These suffixes may be l/L, ll/LL, u/U, ul/UL, ull/ULL
     * An int can store 112114, so if you don't explicitly specify another type, it'll be an int
     * If you want, say, a long, you can instead specify 112114l or 112114L
     */ 
}
