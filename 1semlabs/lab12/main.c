#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(int arg,char *arr[])
{
    FILE *f1,*f2,*f3;
    char ch;

    if(arg!=4)
    {
        printf("Argument Missing ! Press key to exit.");
        getchar();
        exit(0);
    }

    f1 = fopen(arr[1],"r");
    if(f1==NULL)
    {
        printf("Cannot open source file ! Press key to exit.");
        getchar();
        exit(0);
    }

    f2 = fopen(arr[2],"r");
    if(f2==NULL)
    {
        printf("Cannot open source file ! Press key to exit.");
        getchar();
        exit(0);
    }

    f3 = fopen(arr[3],"w");
    if(f3==NULL)
    {
        printf("Cannot copy file ! Press key to exit.");
        fclose(f1);
        fclose(f2);
        getchar();
        exit(0);
    }

    while(1)
    {
        ch = getc(f1);
        if(ch==EOF)
            break;
        else
            putc(ch,f3);
    }
    while(1)
    {
        ch = getc(f2);
        if(ch==EOF)
            break;
        else
            putc(ch,f3);
    }


    printf("File copied succesfully!");
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}
