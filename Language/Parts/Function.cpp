//
// Created by erictg97 on 10/1/16.
//

#include "Function.h"

bool Function::isIsMethod() const {
    return isMethod;
}

void Function::setIsMethod(bool isMethod) {
    Function::isMethod = isMethod;
}

std::string *Function::getName() const {
    return name;
}

void Function::setName(std::string *name) {
    Function::name = name;
}

std::vector<Parameter *> *Function::getParams() const {
    return params;
}

void Function::setParams(std::vector<Parameter *> *params) {
    Function::params = params;
}

std::string *Function::getReturnType() const {
    return returnType;
}

void Function::setReturnType(std::string *returnType) {
    Function::returnType = returnType;
}

Function::Function(bool isMethod, std::string *name, std::vector<Parameter *> *params, std::string *returnType)
        : isMethod(isMethod), name(name), params(params), returnType(returnType) {}

Function::~Function() {
    SAFEDELETE(params);
    SAFEDELETE(name);
    SAFEDELETE(returnType);
}
