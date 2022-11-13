#include <cstdio>

// You can replace the struct keyword with class.
// Class declares members private by default.
struct ClockOfTheLongNow {
    void add_year() {
        year++;
    }
    bool set_year(int new_year) {
        if (new_year < 2019) return false;
        year = new_year;
        return true; 
    }
    int get_year() {
        return year;
    }
private:
    int year;
};
/*
 * A class version of the above struct might look like:
 * class ClockOfTheLongNow {
 *     int year;
 * public:
 *     void add_year() {
 *         year++;
 *     }
 *     bool set_year(int new_year) {
 *         if (new_year < 2019) return false;
 *         year = new_year;
 *         return true; 
 *     }
 *     int get_year() {
 *         return year;
 *     }
 * };
 */


int main() {
    ClockOfTheLongNow clock;
    if(!clock.set_year(2018)) {
        clock.set_year(2019);
    }
    clock.add_year();
    printf("Year: %d\n", clock.get_year());
}