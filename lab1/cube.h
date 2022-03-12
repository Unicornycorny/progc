//
// Created by Egor on 11.03.2022.
//

#pragma once


using namespace std;
namespace cube {
    void adder1(int& firstnum, int& secondnum);
    void adder2(int firstnum, int secondnum);
    void cuter1(double& num);
    void cuter2(double num);
    class cube {
    private:
        int xcenter;
        int ycenter;
        int sidesize;
    public:
        cube(int x, int y, int side);
        void vectormove(int x, int y);

        void lefttopdotcord();

        void righttopcord();

        void leftbottomcoord();

        void rightbottomdot();
    };
}
