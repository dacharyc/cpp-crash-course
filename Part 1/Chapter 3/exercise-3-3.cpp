#include <cstdio>

struct Element {
    Element* next{};
    Element* previous{};
    void insert_after(Element* new_element) {
        // If we don't want to use a separate method to set 
        // the previous element, we can set it in the insert_after method
        // This lets us comment out lines 30 and 34 and get the same behavior
        new_element ->previous = this;
        next = new_element;
    }
    void insert_before(Element* new_element) {
        previous = new_element;
    }
    char prefix[2];
    short operating_number;
};

int main() {
    Element trooper1, trooper2, trooper3;
    trooper1.prefix[0] = 'T';
    trooper1.prefix[1] = 'K';
    trooper1.operating_number = 421;
    trooper1.insert_after(&trooper2);
    trooper2.prefix[0] = 'F';
    trooper2.prefix[1] = 'N';
    trooper2.operating_number = 2187;
    trooper2.insert_after(&trooper3);
    // trooper2.insert_before(&trooper1);
    trooper3.prefix[0] = 'L';
    trooper3.prefix[1] = 'S';
    trooper3.operating_number = 005;
    // trooper3.insert_before(&trooper2);

    for (Element *cursor = &trooper1; cursor; cursor = cursor->next) {
        printf("stormtrooper %c%c-%d\n",
                cursor->prefix[0],
                cursor->prefix[1],
                cursor->operating_number);
    }

    printf("--- Now we'll start the next loop ---\n");

    for (Element *cursor = &trooper3; cursor; cursor = cursor->previous) {
        printf("stormtrooper %c%c-%d\n",
                cursor->prefix[0],
                cursor->prefix[1],
                cursor->operating_number);
    }
}