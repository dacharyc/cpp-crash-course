struct ClockOfTheLongNow {
    // Marking the get_year method const means it is read-only
    // If you attempt to modify year within this method, you'll get a compiler error
    int get_year() const {
        return year;
    }
private:
    int year;
};

// If get_year is not marked const, the below won't compile, because clock is a const reference 
// and cannot be modified within is_leap_year
bool is_leap_year(const ClockOfTheLongNow& clock) {
    if (clock.get_year() % 4 > 0) return false;
    if (clock.get_year() % 100 > 0) return true;
    if (clock.get_year() % 400 > 0) return false;
    return true;
}