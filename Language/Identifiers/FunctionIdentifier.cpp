//
// Created by erictg97 on 10/1/16.
//

#include "FunctionIdentifier.h"

bool FunctionIdentifier::isUsesScopeIdentifiers() const {
    return usesScopeIdentifiers;
}

void FunctionIdentifier::setUsesScopeIdentifiers(bool usesScopeIdentifiers) {
    FunctionIdentifier::usesScopeIdentifiers = usesScopeIdentifiers;
}

bool FunctionIdentifier::isDefaultParams() const {
    return defaultParams;
}

void FunctionIdentifier::setDefaultParams(bool defaultParams) {
    FunctionIdentifier::defaultParams = defaultParams;
}

bool FunctionIdentifier::isDefinedTypeParams() const {
    return definedTypeParams;
}

void FunctionIdentifier::setDefinedTypeParams(bool definedTypeParams) {
    FunctionIdentifier::definedTypeParams = definedTypeParams;
}

std::string *FunctionIdentifier::getDeclarationKey() const {
    return declarationKey;
}

void FunctionIdentifier::setDeclarationKey(std::string *declarationKey) {
    FunctionIdentifier::declarationKey = declarationKey;
}

FunctionIdentifier::FunctionIdentifier(bool usesScopeIdentifiers, bool defaultParams, bool definedTypeParams,
                   std::string *declarationKey){
    setDeclarationKey(declarationKey);
    setDefaultParams(defaultParams);
    setUsesScopeIdentifiers(usesScopeIdentifiers);
    setDefinedTypeParams(definedTypeParams);
}

FunctionIdentifier::~FunctionIdentifier() {
    SAFEDELETE(declarationKey);
}


