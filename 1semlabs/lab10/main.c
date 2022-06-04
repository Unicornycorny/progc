#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int * MakeArrByNumber(int number, int * len)
{
    *len = (int)log10( (double)number ) + 1;
    int * arr = (int*)malloc( *len * sizeof(int) );
    int i;
    for(i = *len - 1; i >= 0; -- i)
    {
        arr[i] = number%10;
        number /= 10;
    }
    return arr;
}


void delete_symb(char *a)
{
for (int i = 0; a[i] != '\0'; i++)
a[i] = a[i + 1];
}

void delete_spaces(char *str)
{
    while (*str != '\0')
    {
        if (*str == ' ' && *(str + 1) == ' ')
        {
            delete_symb(str + 1);
            delete_spaces(str);
            return;
         }
        else if ((*str == '(' || *str == '[' || *str == '{' || *str == '"') && *(str + 1) == ' ')
        {
            delete_symb(str + 1);
            delete_spaces(str);
            return;
        }
        else if ((*str == ')' || *str == '}' || *str == ']' || *str == '"') && *(str - 1) == ' ')
        {
            delete_symb(str - 1);
            delete_spaces(str);
            return;
        }
        str++;
    }
}

int main() {
    char s[100];

    int len = 0;
    int * arr = MakeArrByNumber(123456789, &len);

    for(int i = 0; i < len; ++ i)
        printf("%4d", arr[i]);
    printf("\n");
    free(arr);

    //getchar();
    gets(s);
    delete_spaces(s);
    printf("%s\n", s);


}