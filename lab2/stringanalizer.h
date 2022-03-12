//
// Created by Egor on 12.03.2022.
//

#ifndef LAB2_STRINGANALIZER_H
#define LAB2_STRINGANALIZER_H
#include <string>
#include <vector>

using namespace std;
namespace stringanalizer {
    class stringanalizer {
    private:
        string mainstr;
        vector<char> values;
        int iterator;
    public:
        stringanalizer();

        stringanalizer(string str);

        void addseparator(char ch);

        void delallsep();

        string nextsubstring();

        bool analizationend();
    };
}


#endif //LAB2_STRINGANALIZER_H
