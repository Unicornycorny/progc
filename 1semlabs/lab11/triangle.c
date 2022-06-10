#include <math.h>
#include "main.h"

float Perimeter(struct squaretriangle Key) {
    float side2 = sqrt(pow(Key.point1.x - Key.point2.x, 2) + pow(Key.point1.y - Key.point2.y, 2));
    return side2 + Key.side1 + sqrt(pow(side2, 2) + pow(Key.side1, 2));
}
float Area(struct squaretriangle Key) {
    return 0.5 * (sqrt(pow(Key.point1.x - Key.point2.x, 2) + pow(Key.point1.y - Key.point2.y, 2)) * Key.side1
    );
}

