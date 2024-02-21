#include<stdio.h>

int Fibonacci(int);

 void main(){
    int num, i;
    printf("Enter the number of term:");
    scanf("%d",&num);
    for(i=0; i<num; i++){
        printf("%d ",Fibonacci(i));
    }
 }

 int Fibonacci(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else
        return Fibonacci(n-1) + Fibonacci(n-2);

 }
