#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    switch (n) {
        case 0:
            printf("zero");
        case 1:
            printf("one");
        case 2:
            printf("two");
        case 3:
            printf("tree");
        case 4:
            printf("four");
        case 5:
            printf("five");
        case 6:
            printf("six");
        case 7:
            printf("seven");
        case 8:
            printf("eight");
        case 9:
            printf("nine");
        default:
            printf("not a numeral")
    }
    printf("\n");
    printf("\n");


    int month;
    float sum, per;
    scanf("%d", &month);
    scanf("%f", &per);
    scanf("%f", &sum);
    while (month > 0) {
        sum = sum + (sum * (per / 100 / 12));
        printf("month: %d; sum =  %f\n", 13 - month, sum);
        month--;
    }


    return 0;

}
