#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE* Fpointer;
    char data[30]="File handling in c";
    int length = strlen(data);
    int j;
    Fpointer = fopen("input.txt","w");
    if(Fpointer == NULL){
        printf("error");
    }
    else{
        printf("successful\n");
        for(j=0; j<length; j++){
            printf("writing the character %c\n", data[j]);
            fputc(data[j],Fpointer);
        }
        fclose(Fpointer);

    }


    return 0;
}
