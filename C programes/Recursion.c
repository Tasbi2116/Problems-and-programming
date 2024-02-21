#include<stdio.h>

int countOccur(int arr[], int x, int size, int start)
{
    if(start <= size)
    {
        if(arr[start]==x)
        {
            return 0+countOccur(arr,x,size,start+1);
        }
    }
    return 1;


}

int main()
{
    int arr[10] = {1,2,3,4,4,4,5,6,7,8};
    int x = 4;
    int count = countOccur(arr,x,9,0);
    printf("%d appears %d times",x,count);
}
