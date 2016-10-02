//
// Created by erictg97 on 10/1/16.
//

#ifndef HACKATHON_PROCESSOR_LANGUAGE_H
#define HACKATHON_PROCESSOR_LANGUAGE_H

#include <memory>
#include <vector>
#include "Identifiers/ClassIdentifier.h"
#include "Identifiers/ControlStructureIdentifiers.h"
#include "Identifiers/FunctionIdentifier.h"

class Language {
public:
    ~Language();

    Language(ClassIdentifier *classIdentifier, ControlStructureIdentifiers *controlStructureIdentifiers,
             FunctionIdentifier *functionIdentifier, std::vector<std::unique_ptr<string>> *keywords);


    ClassIdentifier *getClassIdentifier() const;

    void setClassIdentifier(ClassIdentifier *classIdentifier);

    ControlStructureIdentifiers *getControlStructureIdentifiers() const;

    void setControlStructureIdentifiers(ControlStructureIdentifiers *controlStructureIdentifiers);

    FunctionIdentifier *getFunctionIdentifier() const;

    void setFunctionIdentifier(FunctionIdentifier *functionIdentifier);

    vector<unique_ptr<string>> *getKeywords() const;

    void setKeywords(vector<unique_ptr<string>> *keywords);

private:
    ClassIdentifier *classIdentifier;

    ControlStructureIdentifiers *controlStructureIdentifiers;

    FunctionIdentifier *functionIdentifier;

    std::vector<std::unique_ptr<string>> *keywords;
};


#endif //HACKATHON_PROCESSOR_LANGUAGE_H
