//
// Created by Egor on 12.03.2022.
//

#include "stringanalizer.h"

using namespace std;
namespace stringanalizer {
    stringanalizer::stringanalizer() {
        mainstr = "";
        iterator = 0;
    }
    stringanalizer::stringanalizer(string str) {
        mainstr = str;
        iterator = 0;
    }
    void stringanalizer::addseparator(char ch) {
     values.push_back(ch);
    }
    void stringanalizer::delallsep() {
     values.clear();
    }
    string stringanalizer::nextsubstring() {
        string temp;
        bool check = false;
        for(int i = iterator; i < mainstr.size(); i++) {
            for(int j = 0; j < values.size(); j++) {
                if (values.at(j) == mainstr[i]) {
                    check = true;
                    break;
                }
                else {
                    temp += mainstr[i];
                }
            }
            if(check) {
                iterator++;
                break;
            }
            iterator++;
        }
        return temp;
    }

    bool stringanalizer::analizationend() {
        if(iterator >= mainstr.size()) {
            return true;
        }
        else {
            return false;
        }
    }
}