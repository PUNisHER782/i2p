//Write a program in c to take the name,program,e-mail ID,birth year of the student and calculate the age and display all the details.
#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char prog[30];
    char email[50];
    int birth_year, current_year, age;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter Program: ");
    scanf("%s", prog);

    printf("Enter E-Mail: ");
    scanf("%s", email);

    printf("Enter Birth Year: ");
    scanf("%d", &birth_year);

    current_year = 2023;

    age = current_year - birth_year;

    printf("--------------------------------------------------\n");
    printf("Your name: %s\n", name);
    printf("Your program: %s\n", prog);
    printf("Your e-mail: %s\n", email);
    printf("Your age: %d years\n", age);
}
