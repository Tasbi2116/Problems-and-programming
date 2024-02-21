#include<stdio.h>

int SumOfDigits(int num);

int main(){
    int num, sum;
    printf("Enter the number;\n");
    scanf("%d",&num);
    sum = SumOfDigits(num);
    printf("The sum of digits of %d is = %d\n",num, sum);
    return 0;
}

int SumOfDigits(int num){
    if(num == 0)
        return 0;
    return (num%10 + SumOfDigits(num/10));
}
