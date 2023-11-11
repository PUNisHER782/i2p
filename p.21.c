//Write a program in c to find out the Simple and Compound Interest.
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simple_interest, compound_interest;

    printf("Enter the principal amount (P) , interest (R) & time period (T) : ");
    scanf("%f %f %f", &principal , &rate , &time);

    simple_interest = (principal * rate * time) / 100;

    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    printf("Simple Interest: %f\n", simple_interest);
    printf("Compound Interest: %f\n", compound_interest);

}
