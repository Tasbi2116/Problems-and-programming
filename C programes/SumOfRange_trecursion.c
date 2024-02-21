#include<stdio.h>


 int sumOfRange(int);


 int main(){
    int sum, n;
    printf("Enter the numbers:\n");
    scanf("%d",&n);
    sum = sumOfRange(n);
    printf("\n The sum of 1 to %d number is =%d",n,sum);
    return 0;
 }

  int sumOfRange(int n){
    int result;
    if(n==1){
        return 1;
    }
    else{
        result = n + sumOfRange(n-1);
    }
    return result;

 }
