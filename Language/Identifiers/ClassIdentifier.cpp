//
// Created by erictg97 on 10/1/16.
//

#include "ClassIdentifier.h"

ClassIdentifier::ClassIdentifier() {
    setClassKey(NULL);
    setExtendsKey(NULL);
    setStartKey(NULL);
    setEndKey(NULL);
}

ClassIdentifier::ClassIdentifier(std::string *classKey, std::string *extendsKey, std::string *startKey,
                                 std::string *endKey) {
    setClassKey(classKey);
    setExtendsKey(extendsKey);
    setStartKey(startKey);
    setEndKey(endKey);
}

ClassIdentifier::~ClassIdentifier() {
    SAFEDELETE(classKey);
    SAFEDELETE(extendsKey);
    SAFEDELETE(startKey);
    SAFEDELETE(endKey);

}

std::string *ClassIdentifier::getClassKey() const {
    return classKey;
}

void ClassIdentifier::setClassKey(std::string *classKey) {
    ClassIdentifier::classKey = classKey;
}

std::string *ClassIdentifier::getExtendsKey() const {
    return extendsKey;
}

void ClassIdentifier::setExtendsKey(std::string *extendsKey) {
    ClassIdentifier::extendsKey = extendsKey;
}

std::string *ClassIdentifier::getStartKey() const {
    return startKey;
}

void ClassIdentifier::setStartKey(std::string *startKey) {
    ClassIdentifier::startKey = startKey;
}

std::string *ClassIdentifier::getEndKey() const {
    return endKey;
}

void ClassIdentifier::setEndKey(std::string *endKey) {
    ClassIdentifier::endKey = endKey;
}


