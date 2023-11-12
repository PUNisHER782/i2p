#include<stdio.h>
int main(){
   int marks;
       printf("Enter the marks of student from 1-100 u want to check:\n");
       scanf("%d",&marks);
        if (marks >= 70 && marks < 90 ){
           printf("student got Grade A ");
       }
       else if(marks >= 30 && marks < 70 ){
           printf("student got grade B");
       }else if(marks < 30 ){
           printf("student got grade C ");
       }else if(marks > 90  && marks < 100){
           printf("grade A ");
       }else{
            printf("wrong input:");
       }

}