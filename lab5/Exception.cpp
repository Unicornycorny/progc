//
// Created by Egor on 06.05.2022.
//

#include "Exception.h"
#include <string>

Exception::Exception(string message, int cod) { code = cod; err = message; }
Exception::~Exception() = default;
int Exception::Code() const {
    return code;
}
string Exception::What() const {
    return err;
}