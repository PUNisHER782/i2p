//Write a program in c to take any keyboard input from the user to determine its data type.
#include <stdio.h>
#include <ctype.h>

int main() {
    char a;

    printf("Enter a character: ");
    scanf(" %c", &a);

    if (isdigit(a)) {
        printf("The character %c entered is a digit.\n", a);
    } else if (isalpha(a)) {
        printf("The character %c entered is an alphabet.\n", a);
    } else if (ispunct(a)) {
        printf("The character %c entered is a punctuation character.\n", a);
    } else if (isspace(a)) {
        printf("The character %c entered is a space.\n", a);
    } else {
        printf("The character %c entered is not recognized.\n", a);
    }

    return 0;
}
