
#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE* Fpointer;
    char ch;

    Fpointer = fopen("Tasbi.txt","r");
    if(Fpointer == NULL){
        printf("error");
    }
    else{
        printf("successful\n");
        while(!feof(Fpointer)){
            ch = fgetc(Fpointer);
            printf("%c\n",ch);
        }
        fclose(Fpointer);

    }


    return 0;
}

