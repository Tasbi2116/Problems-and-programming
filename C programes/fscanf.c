#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE* Fpointer;
    char name[40];
    Fpointer = fopen("Tasbi.txt","r");
    if(Fpointer == NULL){
        printf("error");
    }
    else{
        printf("successful\n");
        while(!feof(Fpointer)){
        fscanf(Fpointer,"%s",name);
        printf(" %s",name);}

        fclose(Fpointer);

    }


    return 0;
}


