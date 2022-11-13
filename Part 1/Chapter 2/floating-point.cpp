#include <cstdio>

int main() {
    /* C++ offers three levels of precision for floating point types:
     * float: single precision - typically 4 bytes on major desktop OSes
     * double: double precision - typically 8 bytes on major desktop OSes
     * long double: extended precision - typically 8 bytes on major desktop OSes
     * If not involved in sciency stuff, general rule is use a double
     * Floats are double by default, use f/F or l/L suffixes to specify other levels of precision
     */

    double an = 6.0221409e23;
    printf("Avogadro's Number: %le %lf %lg\n", an, an, an); // prints 6.022141e+23 602214090000000006225920.000000 6.02214e+23
    float hp = 9.75;
    printf("Hogwarts' Platform: %e %f %g\n", hp, hp, hp); // prints 9.750000e+00 9.750000 9.75
}