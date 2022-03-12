#include <iostream>
#include <string>
#include "stringanalizer.h"
using namespace std;

int main() {
    stringanalizer::stringanalizer analizer = stringanalizer::stringanalizer("123-456)789-123");
    analizer.addseparator('-');
    analizer.addseparator(')');
    analizer.addseparator('!');
    cout << analizer.nextsubstring() << endl;
    cout << analizer.analizationend() << endl;
    analizer.delallsep();
    cout << analizer.nextsubstring() << endl;
    cout << analizer.nextsubstring() << endl;
    return 0;
}
