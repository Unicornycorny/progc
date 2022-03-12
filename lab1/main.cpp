#include <iostream>
#include "cube.h"
#include <complex>
using namespace std;
int main() {
    //задание 2
    int firstnum, secondnum;
    cout << "Enter number for change" << endl;
    cin >> firstnum;
    cout << "Enter number to add" << endl;
    cin >> secondnum;
    cube::adder2(firstnum, secondnum);
    cout << "Value after value references:" << firstnum << endl;
    cube::adder1(firstnum, secondnum);
    cout << "Value after link references:" << firstnum << endl;
    //задание 5
    double num;
    cout << "Enter double argument" << endl;
    cin >> num;
    cube::cuter2(num);
    cout << "Value after value references:" << num << endl;
    cube::cuter1(num);
    cout << "Value after link references:" << num << endl;
    //задание 10
    int i, r;
    cout << "Enter first part of complex number" << endl;
    cin >> r;
    cout << "Enter second part of complex number" << endl;
    cin >> i;
    complex< int > z( r, i );
    z = conj(z);
    cout << z << "<- new coplex number" << endl;
    //задание 13
    int x, y, side;
    cout << "Enter x coordinate" << endl;
    cin >> x;
    cout << "Enter y coordinate" << endl;
    cin >> y;
    cout << "Enter side of cube" << endl;
    cin >> side;
    cube::cube cube1 = cube::cube(x, y, side);
    cout << "Enter x coordinste of vector to make move of cube" << endl;
    cin >> x;
    cout << "Enter y coordinste of vector to make move of cube" << endl;
    cin >> y;
    cube1.vectormove(x, y);
    return 0;
}
