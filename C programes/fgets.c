#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE* Fpointer;
    char data[40];

    Fpointer = fopen("Tasbi.txt","r");
    if(Fpointer == NULL){
        printf("error");
    }
    else{
        printf("successful\n");
        while(!feof(Fpointer)){
                fgets(data,40,Fpointer);
                printf("readed = %s",data);
        }


        fclose(Fpointer);

    }


    return 0;
}


