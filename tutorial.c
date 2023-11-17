//wap in c to display citizen name , citizenship no. and salary.
#include <stdio.h>
int main(){
     struct data{
         char citizen[10];
         int citizen_no;
         int salary;
     };
     struct data d[5];

   for(int i=0;i<5;i++){
       printf("Enter the citizen name: %d\n",i);
       scanf("%d",&d[i].citizen);
       printf("Enter the citizenship no.: %d\n",i);
       scanf("%d",&d[i].citizen_no);
       printf("Enter the salary: %d\n",i);
       scanf("%d",&d[i].salary);
   }
   for(int i=0;i<5;i++){
       printf("Enter the citizen name:\n",d[i].citizen);
       printf("Enter the citizenship no. :\n",d[i].citizen_no);
       printf("Enter the salary:\n",d[i].salary);
   }
}