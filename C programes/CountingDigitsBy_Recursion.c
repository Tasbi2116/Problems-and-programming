#include<stdio.h>
int CountDigits(int num){
    static int count =0; //local variable.
    if(num>0){
        count++;
        CountDigits(num/10);
    }
    else{ return count; }
}

int main(){
    int number, count = 0;
    printf("Enter a positive integer numbner:\n");
    scanf("%d",&number);
    count = CountDigits(number);
    printf("The total digits in %d number is : %d\n", number, count);
    return 0;

}
