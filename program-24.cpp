#include <stdio.h>

int main() {
    char ch;
    printf("Input an alphabet: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("The alphabet is a vowel\n");
            break;
        default:
            printf("The alphabet is a consonant\n");
    }

    return 0;
}
