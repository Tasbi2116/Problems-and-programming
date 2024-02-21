#include<stdio.h>
int Gcd(int a, int b);

int main(){
    int num1, num2, result;
    printf("Enter two numbers:\n\n");
    scanf("%d%d", &num1,&num2);
    result = Gcd(num1, num2);
    printf("Gcd of %d and %d is : %d\n",num1, num2, result);\
    return 0;
}

int Gcd(int a, int b){
    if(b==0) return a;
    else{
       return Gcd(b, a%b);
    }
}
