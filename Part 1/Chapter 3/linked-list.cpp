struct Element {
    // Each element has a pointer to the next element in the linked list, which initializes to nullptr
    Element* next{};
    // This method sets the next member of new_element to the next of this and then sets next of this to new_element
    // This doesn't change the memory location of any Element - it only modifies pointer values
    void insert_after(Element* new_element) {
        new_element ->next = next;
        next = new_element;
    }
    char prefix[2];
    short operating_number;
};