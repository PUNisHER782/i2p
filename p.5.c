//Write a program in c to print the memory addresses of 5 variables.
#include<stdio.h>
int main()
{
    int a=10, b=20, c=30, d=40, e=50;
    printf("%p\n %p\n %p\n %p\n %p\n",&a, &b, &c, &d, &e);
}
