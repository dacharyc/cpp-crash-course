struct Element {
    Element* next{};
    void insert_after(Element* new_element) {
        // This is the same Element from linked-list/traverse-linked-list
        // But we replace next with this->next
        // The listings are functionally identical
        new_element->next = this->next;
        this->next = new_element;
    }
    char prefix[2];
    short operating_number;
};

// Use this to resolve ambiguity between members and arguments
struct ClockOfTheLongNow {
    bool set_year(int year) {
        if (year < 2019) return false;
        this->year = year;
        return true;
    }

private:
    int year;
};

/* In the above ClockOfTheLongNow example, the year argument has the same name as the year member
 * Method arguments always mask members - i.e. when you type yaer within this method, it refers
 * to the year argument, nto the year member. You can disambiguate with `this`.
 */