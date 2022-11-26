#include <cstdio>

int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char* upper_ptr = upper; // Equivalent: &upper[0]
    
    lower[3] = 'd'; // lower now contains a b c d e \0
    upper_ptr[3] = 'D'; // upper now contains A B C D E \0

    char letter_d = lower[3]; // letter_d equals 'd'
    char letter_D = upper_ptr[3]; // letter_D equals 'D'

    printf("lower: %s\nupper: %s\n", lower, upper); 
    
    /* The book explains the below line causes undefined behavior. 
     * But clang warned that array index 7 was past the end of the array.
     * Maybe a CPP version thing?
     * 
     * lower[7] = 'g'; // Super bad. Never do this.
     */
}