struct ClockOfTheLongNow {
    int get_year() {
        return year;
    }
    void add_year() {
        year++;
    }
private:
    int year;
};

struct Avout {
    // This pointed-to value cannot be modified because it's a const
    // apert can be
    const char* name = "Erasmas";
    ClockOfTheLongNow apert;
};

void does_not_compile(const Avout& avout) {
    avout.apert.add_year(); // Compiler error: avout is const
}