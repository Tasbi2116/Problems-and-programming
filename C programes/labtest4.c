//210216

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char word1[1000],word2[1000],word3[1000];
    //gets(word2);
    int count = 0;
    FILE *ptr1,*ptr2,*ptr3,*ptr4, *ptr5;
    /*ptr2 = fopen("input.txt","w");
    fprintf(ptr2,"%s",word2);
    fclose(ptr2);*/

    //word counting.
    ptr2 = fopen("input.txt","r"); //opening a text file.
    while(fscanf(ptr2,"%s",word2) != EOF)
    {
        count++;
        printf("%s ",word2);
    }
    fclose(ptr2);
    printf("\nNumber of words = %d\n",count);

    ptr3 = fopen("input.txt","r");

    //vowel & consonant identifying
    ptr4 = fopen("vowelwords.txt","w"); //opening vowel words text file.
    ptr2 = fopen("consonantwords.txt","w"); //opening consonant text file.
    while(fscanf(ptr3,"%s",word2) != EOF)
    {
        if(word2[0] == 'A' || word2[0] == 'a' || word2[0] == 'E' || word2[0] == 'e' || word2[0] == 'I' || word2[0] == 'i' || word2[0] == 'O' || word2[0] == 'o' || word2[0] == 'U' || word2[0] == 'u')
        {
            fputs(word2,ptr4);
            fputc(' ',ptr4);
        }
        else{
            fputs(word2,ptr2);
            fputc(' ',ptr2);
        }
    }
    fclose(ptr3);
    fclose(ptr4);
    fclose(ptr2);

    //integers.
    count = 0;
    ptr3 = fopen("input.txt","r");
    ptr4 = fopen("integers_as_word.txt","w");
    while(fscanf(ptr3,"%s",word2) != EOF)
    {
        int length = strlen(word2);
        for(int i = 0; i < length; i++)
        {
            char ch = word2[i];
            if(ch == '0' || ch == '1' || ch == '2' ||ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9')
            {
                count++;
            }
        }
        if(count == length)
        {
            fputs(word2,ptr4);
            fputc(' ',ptr4);
        }
    }
    fclose(ptr3);
    fclose(ptr4);


    //floats.
    count = 0;
    ptr1 = fopen("input.txt","r");
    ptr2 = fopen("floats_as_word.txt","w");
    while(fscanf(ptr1,"%s",word2) != EOF)
    {
        int length = strlen(word2);
        for(int i = 0; i < length; i++)
        {
            char ch = word2[i - 1];

            if(ch == '.')
            {
                fputs(word2,ptr2);
                fputc(' ',ptr2);
            }
        }

    }
    fclose(ptr1);
    fclose(ptr2);


    return 0;
}
