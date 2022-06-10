#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *f1,*f2,*f3;
    char ch;
    int n1, n2, n3;
    char x;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    char str1[n1 + 1];
    char str2[n2 + 1];
    char str3[n3 + 1];

    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);

    f1 = fopen(str1,"r");
    if(f1==NULL)
    {
        printf("Cannot open source file 1! Press key to exit.");
        getchar();
        exit(0);
    }

    f2 = fopen(str2,"r");
    if(f2==NULL)
    {
        printf("Cannot open source file 2! Press key to exit.");
        getchar();
        exit(0);
    }

    f3 = fopen(str3,"w");
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
