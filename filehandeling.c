#include<stdio.h>
#include<stdlib.h> // for exit()

int main()
{
    char ch;
    FILE *fp;

    fp = fopen("student.txt", "r");

    if(fp == NULL)
    {
        printf("Error reading file.\n");
        printf("Terminating.\n");
        exit(-1);
    }

    printf("Content of file is:\n");

    while((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
