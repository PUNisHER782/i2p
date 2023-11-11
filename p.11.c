//Write a program to convert the value of temperature from degree celcius to degree fahrenheit.
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in celcius :");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("The temperature converted in fahrenhite: %f\n",f);
}
