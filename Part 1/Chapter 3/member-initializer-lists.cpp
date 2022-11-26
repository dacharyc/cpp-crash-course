#include <cstdio>

struct ClockOfTheLongNow {
    ClockOfTheLongNow(int year_in) {
        if(!set_year(year_in)) {
        year = 2019;
        }
    }
    ClockOfTheLongNow() {
        year = 2019;
    }
    void add_year() {
        year++;
    }
    bool set_year(int new_year) {
        if(new_year < 2019)
        return false;
        year = new_year;
        return true;
    }
    int get_year() const {
        return year;
    }

    private:
    int year;
};

struct Avout {
    /* Note: The code example in the book declares the type of year_of_apert below as a long
     * However, ClockOfTheLongNow takes an int
     * Running the code as written in the book throws an error
     * `error: non-constant-expression cannot be narrowed from type 'long' to 'int' in initializer list`
     * The author's downloadable code examples has this year_of_apert as an int
     */
    Avout(const char* name, int year_of_apert): name{ name }, apert{ year_of_apert } {
        // Order the member initializers in the smae order as they appear in the class definition
        // Because their constructors will be called in this order
    }
    void announce() const {
        printf("My name is %s and my next apert is %d.\n", name, apert.get_year());
    }
    const char* name;
    ClockOfTheLongNow apert;
};

int main() {
    Avout raz{ "Erasmas", 3010 };
    Avout jad{ "Jad", 4000 };
    raz.announce();
    jad.announce();
}