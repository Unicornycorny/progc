#include <stdio.h>
#include <math.h>
int main() {
    double a, z1, z2;
    scanf("%lf", &a);
    z1 = (((a+2)/ sqrt(2*a))-(a/(sqrt(2*a)+2))+(2/(a-sqrt(2*a))))*((sqrt(a)-sqrt(2))/(a+2));
    z2=1/(sqrt(a)+sqrt(2));
    printf("%lf %lf", z1, z2);
    return 0;
}
