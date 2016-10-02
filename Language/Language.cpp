//
// Created by erictg97 on 10/1/16.
//

#include "Language.h"


ClassIdentifier *Language::getClassIdentifier() const {
    return classIdentifier;
}

void Language::setClassIdentifier(ClassIdentifier *classIdentifier) {
    Language::classIdentifier = classIdentifier;
}

ControlStructureIdentifiers *Language::getControlStructureIdentifiers() const {
    return controlStructureIdentifiers;
}

void Language::setControlStructureIdentifiers(ControlStructureIdentifiers *controlStructureIdentifiers) {
    Language::controlStructureIdentifiers = controlStructureIdentifiers;
}

FunctionIdentifier *Language::getFunctionIdentifier() const {
    return functionIdentifier;
}

void Language::setFunctionIdentifier(FunctionIdentifier *functionIdentifier) {
    Language::functionIdentifier = functionIdentifier;
}

Language::Language(ClassIdentifier *classIdentifier, ControlStructureIdentifiers *controlStructureIdentifiers,
                   FunctionIdentifier *functionIdentifier, std::vector<std::unique_ptr<string>> *keyword) : classIdentifier(classIdentifier),
                                                             controlStructureIdentifiers(controlStructureIdentifiers),
                                                             functionIdentifier(functionIdentifier), keywords(keyword) {}

Language::~Language() {
    SAFEDELETE(classIdentifier);
    SAFEDELETE(controlStructureIdentifiers);
    SAFEDELETE(functionIdentifier);
    SAFEDELETE(keywords);
}

vector<unique_ptr<string>> *Language::getKeywords() const {
    return keywords;
}

void Language::setKeywords(vector<unique_ptr<string>> *keywords) {
    Language::keywords = keywords;
}
