#include<stdio.h>
int main(){
    int number;
    printf("Enter any integer positive/negative:\n");
    scanf("%d",&number);
    if(number >= 0){
        printf("it is a positive integer\n");
            if(number % 2==0){
                printf("even\n");
        } else{
                printf("odd integer\n");
            }
    } else{
        printf("it is negative integer\n");
    }
}