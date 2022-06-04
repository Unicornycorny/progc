#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d \n", -77 <= a && a <= 1);

    int b;
    scanf("%x", &b);
    printf("%x", (b >> 18) & 1);

    return 0;
}