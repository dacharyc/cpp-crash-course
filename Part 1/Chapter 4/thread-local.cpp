#include <cstdio>

/* Any variable with static storage duration can have thredad-local storage duration
 * Add the `thread_local` keyword to the `static` or `extern` keyword.
 * If you only specify `thread_local`, `static` is assumed. 
 */

struct RatThing {
    // By marking this `thread_local`, each thread would represent its own RatThing.
    // If one thread modifies rat_things_power, the modification does not affect other threads.
    static thread_local int rat_things_power;
    static void power_up_rat_thing(int nuclear_isotopes) {
        rat_things_power = rat_things_power + nuclear_isotopes;
        const auto waste_heat = rat_things_power * 20;
        if (waste_heat > 10000) {
            printf("Warning! Hot doggie!\n");
        }
        printf("Rat-thing power: %d\n", rat_things_power);
    }
};

// If we don't modify this initialization to be thread local, the compiler throws an error
// that this is a non-thread-local declaration
thread_local int RatThing::rat_things_power = 200;

int main() {
    RatThing::power_up_rat_thing(100);
    RatThing::power_up_rat_thing(500);
}