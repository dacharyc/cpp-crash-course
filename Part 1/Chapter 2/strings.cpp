#include <cstdio>

int main() {
    char english[] = "A book holds a house of gold";
    // Apparently printing Unicode to the console is complicated.
    // Book recommends looking at wprintf in the <cwchar> header
    char16_t chinese[] = u"\u4e66\u4e2d\u81ea\u6709\u9ec4\u91d1\u5c4b";
    char house[] = "a house of gold.";
    printf("A book holds %s\n", house);

    // ASCII codes
    char alphabet[27];
    for (int i = 0; i<26; i++) {
        alphabet[i] = i + 97;
    }
    alphabet[26] = 0;
    printf("%s\n", alphabet);
    for (int i = 0; i<26; i++) {
        alphabet[i] = i + 65;
    }
    printf("%s\n", alphabet);
}