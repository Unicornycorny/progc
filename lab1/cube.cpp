//
// Created by Egor on 11.03.2022.
//


#include "cube.h"
#include "iostream"
using namespace std;
namespace cube {
    //задание 2
    void adder1(int& firstnum, int& secondnum) {
        firstnum += secondnum;
        cout << "Changed number:" << firstnum << endl;
    }
    void adder2(int firstnum, int secondnum) {
        firstnum += secondnum;
        cout << "Changed number:" << firstnum << endl;
    }
    //задание 5
    void cuter1(double& num) {
        int temp = (int) num;
        num = num - temp;
        cout << "New number:" << num << endl;
    }
    void cuter2(double num) {
        int temp = (int) num;
        num = num - temp;
        cout << "New number:" << num << endl;
    }
    //задание 13
        cube::cube(int x, int y, int side) {
            xcenter = x;
            ycenter = y;
            sidesize = side;
        }
        void cube::vectormove(int x, int y) {
            xcenter += x;
            ycenter += y;
            cout << "New coordinates of cubes center:(" << xcenter << ";" << ycenter << ")" << endl;
        }
        void cube::lefttopdotcord() {
            cout << "(" << xcenter-(sidesize/2) << ";" << ycenter+(sidesize/2) << ")" << endl;
        }
        void cube::righttopcord() {
            cout << "(" << xcenter+(sidesize/2) << ";" << ycenter+(sidesize/2) << ")" << endl;
        }
        void cube::leftbottomcoord() {
            cout << "(" << xcenter-(sidesize/2) << ";" << ycenter-(sidesize/2) << ")" << endl;
        }
        void cube::rightbottomdot() {
            cout << "(" << xcenter+(sidesize/2) << ";" << ycenter-(sidesize/2) << ")" << endl;
        }
}