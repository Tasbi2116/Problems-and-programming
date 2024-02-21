// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Hello world");
    char mess[80];
    int i;

    printf("Enter message");
    for(i=0; i<80; i++){
        mess[i] = getche();
        if(mess[i] =='\r') break;

    } printf("\n");
    for(i=0; mess[i]!='\r'; i++){
        printf("%c",mess[i]+1);
    }

    return 0;
}
