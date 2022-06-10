#include <stdio.h>
#include "main.h"
int main() {
    struct squaretriangle Key;
    scanf("%f", &Key.side1);
    scanf("%f %f", &Key.point1.x, &Key.point1.y);
    scanf("%f %f", &Key.point2.x, &Key.point2.y);
    printf("Perimeter = %f\n", Perimeter(Key));
    printf("Area = %f\n", Area(Key));
    return 0;
}
