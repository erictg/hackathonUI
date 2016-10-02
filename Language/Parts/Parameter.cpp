//
// Created by erictg97 on 10/1/16.
//

#include "Parameter.h"

std::string *Parameter::getType() const {
    return type;
}

void Parameter::setType(std::string *type) {
    Parameter::type = type;
}

std::string *Parameter::getName() const {
    return name;
}

void Parameter::setName(std::string *name) {
    Parameter::name = name;
}

Parameter::Parameter(std::string *type, std::string *name) : type(type), name(name) {}

Parameter::~Parameter() {
    SAFEDELETE(name);
    SAFEDELETE(type);
}




