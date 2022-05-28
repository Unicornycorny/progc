#include <iostream>
#include "massiv.h"
//#include "massiv.cpp"
#include "Exception.h"

using namespace std;

template <typename T>
T minn (T first, T second) {
    return first < second?first:second;
}

int main() {
    int a = 5, b = 6;
    cout << minn(a, b) << endl;
    massiv<10, int> arr;
    try {
        arr.set(a, b);
        arr.getI(a);
        arr.getI(11);
    }
    catch (Exception & ex) {
        cout << "Message: " << ex.What() << endl <<"Code: " << ex.Code() << endl;
    }
    return 0;
}
