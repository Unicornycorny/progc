#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    switch (n) {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("tree");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        default:
            printf("not a numeral");
            break;
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
