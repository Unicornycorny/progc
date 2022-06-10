#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    char x;
    scanf("%d", &n1);
    scanf("%d", &n2);
    char str1[n1 + 1];
    char str2[n2 + 1];

    int n;
    scanf("%d", &n);
    scanf("%s", str1);
    scanf("%s", str2);

    //1(сложение двух строк)
    printf(strcat(str1, str2));
    printf("\n");
    //4(сравнить первые n символов)

    if (strncmp(str1, str2, n) == 0) printf("1 == 2");
    if (strncmp(str1, str2, n) < 0) printf("1 < 2");
    if (strncmp(str1, str2, n) > 0) printf("1 > 2");
    printf("\n");

    //5(скопировать одну строку в другую)
    char m[] =  "The copied line";
    char mcopy[128];
    strcpy(mcopy, m);
    printf("%s\n", mcopy);

    //8(найти первое вхождение символа)
    char str4[] = "GGDDFFFC";
    char str5[] = "FFF";
    char *b;
    b = strstr(str4, str5);
    if (b == NULL)
        printf("NO");
    else
        printf("%d \n", b - str4 + 1);
    //11(Определить длину отрезка одной строки, содержащего символы из множества символов,
    //входящих во вторую строку)

    char string1[] = "ddabc";
    char string2[] = "abc";
    printf("%d \n", strspn(string2, string1));

    return 0;
}
