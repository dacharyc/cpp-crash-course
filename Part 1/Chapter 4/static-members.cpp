#include <cstdio>

/* Static members are members of a class that aren't associated with a particular instance of a class
 * Static members have static storage duration. Must be initialized at global scope.
 * Static members have only a single instance. ALl instances of a class with static members share the same member.
 * If you modify a static member, all class instances will observe the modification.
 * Refer to a static member using the scope resolution operator `::`
 */

struct RatThing {
    static int rat_things_power;
    static void power_up_rat_thing(int nuclear_isotopes) {
        rat_things_power = rat_things_power + nuclear_isotopes;
        const auto waste_heat = rat_things_power * 20;
        if (waste_heat > 10000) {
            printf("Warning! Hot doggie!\n");
        }
        printf("Rat-thing power: %d\n", rat_things_power);
    }
};

int RatThing::rat_things_power = 200;

int main() {
    RatThing::power_up_rat_thing(100);
    RatThing::power_up_rat_thing(500);
}