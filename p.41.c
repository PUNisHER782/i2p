//Write a program in c to check whether character is vowel or not in switch case.
#include <stdio.h>
#include <ctype.h>   // Include this header for the tolower() function

int main() {
    char a;

    printf("Enter character: ");
    scanf(" %c", &a);    // Use a space before %c to consume any leading whitespace.

    a = tolower(a);      // Convert the character to lowercase

    switch (a) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("It is a Vowel: %c\n", a);
            break;
        default:
            printf("It is a Consonant: %c\n", a);
    }

    return 0;
}
