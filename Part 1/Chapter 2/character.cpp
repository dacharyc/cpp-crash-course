#include <cstdio>

int main() {
    /*
     * The six character types are:
     * char: default type, always 1 byte, may or may not be signed
     * char16_t: used for 2-byte character sets, i.e. UTF-16
     * char32_t: used for 4-byte character sets, i.e. UFT-32
     * signed char: same as char but guaranteed to be signed
     * unsigned char: same as char but guaranteed to be unsigned
     * wchar_t: large enough to contain the largest character of the implementation's locale - i.e. Unicode
     * 
     * narrow characters: char, signed char, unsighed char
     * wide characters: char16_t, char32_t, wchar_t
     * narrow/wide refers to relative storage requirements
     * 
     * Single quotation marks - i.e. ' ' - indicate a char. For anything other than char, must provide a prefix
     * L for wchar_t, u for char16_t, U for char32_t, 'J' declares a char literal, L'J' declares a wchar_t
     * 
     * For escape sequences, refer to chart on p.37
     * 
     * For unicode chars, use prefix \u followed by 4-digit Unicode code, or prefix \U followed by 8-digit Unicode code
     */

    char x = 'M';
    wchar_t y = L'Z';
    printf("Windows binaries start with %c%lc.\n", x, y);
}