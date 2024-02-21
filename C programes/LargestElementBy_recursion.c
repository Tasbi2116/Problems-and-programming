#include<stdio.h>
#define MAX_SIZE 100 // maximum size of the array.

// recursive function to find maximum element in the given array.
int maximum(int array[], int index, int len){
    int max;
    if(index >= len-2){
        if(array[index] > array[index + 1])
            return array[index];
        else
            return array [index +1];
    }

    max = maximum(array, index+1, len);

    if (array[index]>max)
        return array [index];
    else
        return max;
}
int minimun(int array[], int index, int len){
    int min;
    if(index <= len -2){
        if(array[index] < array[index + 1])
            return array [index];
        else
            return array[index + 1];
    }
    min = minimum(array, index+1, len);
    if(array [index]<min)
        return array [index];
    else
        return min;
}

int main(){
    int array[MAX_SIZE], n, Max,Min;
    int i;

    // input the array.
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter %d elements in arrays; ",n);
    for (i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    Max = maximum(array, 0, n);
    Min = minimum(array, 0, n);

    printf("Minimum element in array =%d\n",Min);
    printf("Maximum element in array =%d\n",Max);

    return 0;
}


