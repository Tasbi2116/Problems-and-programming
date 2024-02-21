#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE* Fpointer;
    char name[100];
    int age;
    printf("Enter your name and age\n");
    //gets(name);
    scanf("%s%d",name,&age);
    Fpointer = fopen("Tasbi.txt","w");
    if(Fpointer == NULL){
        printf("error");
    }
    else{
        printf("successful\n");
        fprintf(Fpointer,"%s\t%d\n",name,age);
        printf("Writtezn successfully!");
        fclose(Fpointer);

    }


    return 0;
}

