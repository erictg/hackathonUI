//
// Created by erictg97 on 10/1/16.
//

#include "ControlStructureIdentifiers.h"

string *ControlStructureIdentifiers::getIfStartKey() const {
    return ifStartKey;
}

void ControlStructureIdentifiers::setIfStartKey(string *ifStartKey) {
    ControlStructureIdentifiers::ifStartKey = ifStartKey;
}

string *ControlStructureIdentifiers::getElseIfKey() const {
    return elseIfKey;
}

void ControlStructureIdentifiers::setElseIfKey(string *elseIfKey) {
    ControlStructureIdentifiers::elseIfKey = elseIfKey;
}

string *ControlStructureIdentifiers::getElseKey() const {
    return elseKey;
}

void ControlStructureIdentifiers::setElseKey(string *elseKey) {
    ControlStructureIdentifiers::elseKey = elseKey;
}

string *ControlStructureIdentifiers::getForDeclaration() const {
    return forDeclaration;
}

void ControlStructureIdentifiers::setForDeclaration(string *forDeclaration) {
    ControlStructureIdentifiers::forDeclaration = forDeclaration;
}

string *ControlStructureIdentifiers::getForeachDeclaration() const {
    return foreachDeclaration;
}

void ControlStructureIdentifiers::setForeachDeclaration(string *foreachDeclaration) {
    ControlStructureIdentifiers::foreachDeclaration = foreachDeclaration;
}

bool ControlStructureIdentifiers::isHasDo() const {
    return hasDo;
}

void ControlStructureIdentifiers::setHasDo(bool hasDo) {
    ControlStructureIdentifiers::hasDo = hasDo;
}

string *ControlStructureIdentifiers::getWhileKey() const {
    return whileKey;
}

void ControlStructureIdentifiers::setWhileKey(string *whileKey) {
    ControlStructureIdentifiers::whileKey = whileKey;
}

string *ControlStructureIdentifiers::getDoKey() const {
    return doKey;
}

void ControlStructureIdentifiers::setDoKey(string *doKey) {
    ControlStructureIdentifiers::doKey = doKey;
}

string *ControlStructureIdentifiers::getEncapsulationStartKey() const {
    return encapsulationStartKey;
}

void ControlStructureIdentifiers::setEncapsulationStartKey(string *encapsulationStartKey) {
    ControlStructureIdentifiers::encapsulationStartKey = encapsulationStartKey;
}

string *ControlStructureIdentifiers::getEncapsulationEndKey() const {
    return encapsulationEndKey;
}

void ControlStructureIdentifiers::setEncapsulationEndKey(string *encapsulationEndKey) {
    ControlStructureIdentifiers::encapsulationEndKey = encapsulationEndKey;
}

ControlStructureIdentifiers::ControlStructureIdentifiers(string *ifStartKey, string *elseIfKey, string *elseKey, string *endifKey,
                                                         string *forDeclaration, string *foreachDeclaration, bool hasDo,
                                                         string *whileKey, string *doKey, string *encapsulationStartKey,
                                                         string *encapsulationEndKey) : ifStartKey(ifStartKey),
                                                                                        elseIfKey(elseIfKey),
                                                                                        elseKey(elseKey),
                                                                                        endifKey(endifKey),
                                                                                        forDeclaration(forDeclaration),
                                                                                        foreachDeclaration(
                                                                                                foreachDeclaration),
                                                                                        hasDo(hasDo),
                                                                                        whileKey(whileKey),
                                                                                        doKey(doKey),
                                                                                        encapsulationStartKey(
                                                                                                encapsulationStartKey),
                                                                                        encapsulationEndKey(
                                                                                                encapsulationEndKey)
                                                                                        {}

ControlStructureIdentifiers::~ControlStructureIdentifiers() {
    SAFEDELETE(ifStartKey);
    SAFEDELETE(elseIfKey);
    SAFEDELETE(elseIfKey);
    SAFEDELETE(forDeclaration);
    SAFEDELETE(foreachDeclaration);
    SAFEDELETE(whileKey);
    SAFEDELETE(doKey);
    SAFEDELETE(encapsulationEndKey);
    SAFEDELETE(encapsulationStartKey);
    SAFEDELETE(endifKey);
}

string *ControlStructureIdentifiers::getEndifKey() const {
    return endifKey;
}

void ControlStructureIdentifiers::setEndifKey(string *endifKey) {
    ControlStructureIdentifiers::endifKey = endifKey;
}
