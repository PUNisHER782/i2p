//#include<stdio.h>
//// Function to calculate the factorial of a number
//unsigned long long factorial(int n) {
//    if (n == 0 || n == 1) {
//        return 1;
//    } else {
//        return n * factorial(n - 1);
//    }
//}
//
//int main() {
//    int num;
//    unsigned long long result;
//
//    printf("Enter a positive integer: ");
//    scanf("%d", &num);
//
//    if (num < 0) {
//        printf("Factorial is not defined for negative numbers.\n");
//    } else {
//        result = factorial(num);
//        printf("Factorial of %d = %llu\n", num, result);
//    }
//
//    return 0;
//}
#include<stdio.h>
int rto(int age) {
        if (age >= 18 && age <= 65) {
            printf("DL applied succesfully ! ");
        } else {
            printf("Enter age !");
            scanf("%d", &age);
            rto(age);
        }
    }
int main(){
    int age;
    scanf("%d",&age);
    if(age>=18){
        rto(age);
    }else{
        printf("Error");
    }

}