//
// Created by erictg97 on 10/1/16.
//

#include "Symbol.h"

std::string *Symbol::getName() const {
    return Name;
}

void Symbol::setName(std::string *Name) {
    Symbol::Name = Name;
}

std::vector<std::unique_ptr<Function>> *Symbol::getFunction() const {
    return function;
}

void Symbol::setFunction(std::vector<std::unique_ptr<Function>> *function) {
    Symbol::function = function;
}

Symbol::Symbol(std::string *Name, std::vector<std::unique_ptr<Function>> *function) : Name(Name), function(function) {}

Symbol::~Symbol() {

    SAFEDELETE(function);
    SAFEDELETE(Name);
}
