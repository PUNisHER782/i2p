#include<stdio.h>
int main(){
    struct data{
        int roll;
        char name[10];
        int age;
    };
    struct data d;
    printf("Enter the roll no.\n:");
    scanf("%d",&d.roll);
    printf("Enter the name:\n");
    scanf("%d",&d.name);
    printf("Enter the age:\n");
    scanf("%d",&d.age);

    printf("the roll no:%d\n",d.roll);
    printf("the name :%d\n",d.name);
    printf("the age :%d\n",d.age);
}