#ifndef LAB5_EXCEPTION_H
#define LAB5_EXCEPTION_H


#include <string>
using namespace std;

class Exception {
public:
    Exception(string, int);
    ~Exception();
    int Code() const;
    string What() const;
private:
    string err;
    int code;
};


#endif //LAB5_EXCEPTION_H
