#include <iostream>
#include "cube.h"
#include <complex>
using namespace std;
using namespace cube;
int main() {
    //задание 2
    int firstnum, secondnum;
    cout << "Enter number for change" << endl;
    cin >> firstnum;
    cout << "Enter number to add" << endl;
    cin >> secondnum;
    cube::adder2(&firstnum, &secondnum);
    cout << "Value after value references:" << firstnum << endl;
    cube::adder1(firstnum, secondnum);
    cout << "Value after link references:" << firstnum << endl;
    //задание 5
    float num;
    cout << "Enter float argument" << endl;
    cin >> num;
    cube::cuter2(&num);
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
    cube::complexchange1(&z); //указатель
    cube::complexchange2(z); //ссылка
    //задание 13
    int x, y;
    cout << "Enter x coordinate" << endl;
    cin >> x;
    cout << "Enter y coordinate" << endl;
    cin >> y;
    square sqr;
    cube::squaremove1(sqr, x, y);
    cube::squaremove2(&sqr, x, y);
    return 0;
}
