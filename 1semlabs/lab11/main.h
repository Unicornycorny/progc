#ifndef LAB11_MAIN_H
#define LAB11_MAIN_H
#include<math.h>
struct Point {
    float x; float y;
};
struct squaretriangle {
    struct Point point1;
    struct Point point2;
    float side1;
};
float Perimeter(struct squaretriangle Key);
float Area(struct squaretriangle Key);
#endif //LAB11_MAIN_H
