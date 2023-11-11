//Write a program in c to change the value of a variable by taking an input from the user.
#include<stdio.h>
int main()
{
    int a=10;
    printf("current value of a : %d\n",a);
    printf("Enter new variable number you want to modify :",a);
    scanf("%d",&a);
    printf("your new variable number is :%d\n",a);
}
