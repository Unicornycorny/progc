//
// Created by Egor on 11.03.2022.
//


#include "cube.h"
#include "iostream"
#include <complex>
using namespace std;
namespace cube {
    //задание 2
    void adder1(int& firstnum, int& secondnum) {
        firstnum += secondnum;
        cout << "Changed number:" << firstnum << endl;
    }
    void adder2(int* firstnum, int* secondnum) {
        *firstnum += *secondnum;
        cout << "Changed number:" << *firstnum << endl;
    }
    //задание 5
    void cuter1(float& num) {
        int temp = (int) num;
        num = num - temp;
        cout << "New number:" << num << endl;
    }
    void cuter2(float* num) {
        int temp = (int) *num;
        *num = *num - temp;
        cout << "New number:" << *num << endl;
    }
    //задание 10
    void complexchange1(complex<int>* z) {
        *z = conj(*z);
        cout << "New complex number:" << *z << endl;
    }
    void complexchange2(complex<int>& z) {
        z = conj(z);
        cout << "New complex number:" << z << endl;
    }
    //задание 13
    void squaremove1(struct square& sqr, int x, int y) {
        sqr.x_c += x;
        sqr.y_c += y;
        cout << "New cordinates:(" << sqr.x_c << ";" << sqr.y_c << ")" << endl;
    }
    void squaremove2(struct square* sqr, int x, int y) {
        sqr->x_c += x;
        sqr->y_c += y;
        cout << "New cordinates:(" << sqr->x_c << ";" << sqr->y_c << ")" << endl;
    }
}