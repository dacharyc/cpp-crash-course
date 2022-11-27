#include <cstdio>

/* A local static variable is a special kind of static variable that is a local, rather than global, variable
 * It's declared at function scope, just like automatic variables, but the lifetime begins
 * upon the first invocation of the enclosing function and ends when the program exits.
 * i.e. its value persists between function invocations but cannot be modified outside the function due to local scope.
 * This is a C++ encapsulation pattern.
 */

void power_up_rat_thing(int nuclear_isotopes) {
    static int rat_things_power = 200;
    rat_things_power = rat_things_power + nuclear_isotopes;
    const auto waste_heat = rat_things_power * 20;
    if (waste_heat > 10000) {
        printf("Warning! Hot doggie!\n");
    }
    printf("Rat-thing power: %d\n", rat_things_power);
}

int main() {
    power_up_rat_thing(100);
    power_up_rat_thing(500);
}