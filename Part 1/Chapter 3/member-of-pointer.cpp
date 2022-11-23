#include <cstdio>

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

int main() {
    ClockOfTheLongNow clock;
    ClockOfTheLongNow* clock_ptr = &clock;
    /* Member-of pointer operator, or arrow operator (->) performs two simultaneous operations:
     * - Dereferences a pointer
     * - Accesses a member of the pointed-to object
     */
    clock_ptr->set_year(2022);
    printf("Address of clock: %p\n", clock_ptr);
    printf("Value of clock's year: %d\n", clock_ptr->get_year());
    /* Another way to do the above would be:
     * printf("Value of clock's year: %d\n", (*clock_ptr).get_year());
     * First derefence `clock_prt` and then access the year. But it's a more verbose 
     * syntax and provides no benefit over simpler alternative.
     */
}