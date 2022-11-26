#include <cstdio>

void read_from(char* char_array_pointer, int index, size_t n_characters) {
    if (index <= n_characters) { printf("The character at the specified index is: %c\n", char_array_pointer[index]); }
    else { printf("Can't read from this index as it is outside the bounds of the array.\n"); }
}
    
void write_to(char* char_array_pointer, int index, char new_char, size_t n_characters) {
    if (index <= n_characters) { 
        char_array_pointer[index] = new_char;
        printf("The new character array is: %s\n", char_array_pointer); 
    }
    else { printf("Can't write to this array as the specified index is outside the bounds of the array.\n"); }
}

int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char* upper_ptr = upper;
    
    lower[3] = 'd';
    upper_ptr[3] = 'D';

    char letter_d = lower[3];
    char letter_D = upper_ptr[3];

    printf("lower: %s\nupper: %s\n", lower, upper); 

    read_from(upper_ptr, 3, sizeof(upper) / sizeof(char));
    read_from(upper_ptr, 11, sizeof(upper) / sizeof(char));

    char new_char = 'b';
    write_to(upper_ptr, 1, new_char, sizeof(upper) / sizeof(char));
    write_to(upper_ptr, 7, new_char, sizeof(upper) / sizeof(char));
}