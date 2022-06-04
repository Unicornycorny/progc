#include <stdio.h>

int main()
{
    int a,b;
    scanf("%x", &a);

    printf("%o", a);

    printf("\n%x %x", a, a << 2);

    printf("\n%x %x", a, ~a);

    scanf("\n%x", &b);
    printf("%x", (a || b));

    return 0;
}