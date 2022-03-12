//
// Created by Egor on 11.03.2022.
//

#pragma once

#include <complex>
using namespace std;
namespace cube {
    void adder1(int& firstnum, int& secondnum);
    void adder2(int* firstnum, int* secondnum);
    void cuter1(float& num);
    void cuter2(float* num);
    void complexchange1(complex<int>* z);
    void complexchange2(complex<int>& z);
    struct square {
        int x_c = 0, y_c = 0;
    };
    void squaremove1(struct square& sqr, int x, int y);
    void squaremove2(struct square*, int x, int y);
}
