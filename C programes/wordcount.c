#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str1[1000],str2[1000];
    //gets(str1);
    int count = 0;
    FILE *fp1,*fp2;
    /*fp1 = fopen("input.txt","w");
    fprintf(fp1,"%s",str1);
    fclose(fp1);*/

    fp2 = fopen("input.txt","r");
    while(fscanf(fp2,"%s",str2) != EOF)
    {
        count++;
        printf("%s ",str2);
    }
    fclose(fp2);
    printf("\n%d\n",count);

    return 0;
}
