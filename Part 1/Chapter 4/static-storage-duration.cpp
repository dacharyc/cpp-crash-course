#include <cstdio>

/* Declare a static object using the `static` or `extern` keyword.
 * Use `static` to specify internal linkage - i.e. it is inaccessible to other translation units (files)
 * Use `extern` to specify external linkage - i.e. it is accessible to other translation units (files)
 * Declare static variables at the same level you declare functions;
 * at global scope (or namespace scope). 
 * Static objects with global scope have static storage duration.
 * They are allocated when the program starts and deallocated when the program stops.
 */

static int rat_things_power = 200;

void power_up_rat_thing(int nuclear_isotopes) {
    rat_things_power = rat_things_power + nuclear_isotopes;
    const auto waste_heat = rat_things_power * 20;
    if (waste_heat > 10000) {
        printf("Warning! Hot doggie!\n");
    }
}

int main() {
    printf("Rat-thing power: %d\n", rat_things_power);
    power_up_rat_thing(100);
    printf("Rat-thing power: %d\n", rat_things_power);
    power_up_rat_thing(500);
    printf("Rat-thing power: %d\n", rat_things_power);
}