//wap in c to implement one dimensional array.

#include<stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int n;
    scanf("%d",&n);
    for( int i = 0;i < 5 ; i++){
        if(n==arr[i]){
        printf("arr[%d] = %d\n",i,arr[i]);}
    }
return 0;
}