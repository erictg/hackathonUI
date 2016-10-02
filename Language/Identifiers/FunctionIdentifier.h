//
// Created by erictg97 on 10/1/16.
//

#ifndef HACKATHON_PROCESSOR_FUNCTIONIDENTIFIER_H
#define HACKATHON_PROCESSOR_FUNCTIONIDENTIFIER_H
#include <string>
#include <string>
#include <cstddef>
#ifndef SAFEDELETE
#define SAFEDELETE(ptr) { delete(ptr); ptr = NULL; }
#endif
class FunctionIdentifier {
public:
    FunctionIdentifier(bool usesScopeIdentifiers, bool defaultParams, bool definedTypeParams,
                       std::string *declarationKey);

    virtual ~FunctionIdentifier();

    bool isUsesScopeIdentifiers() const;

    void setUsesScopeIdentifiers(bool usesScopeIdentifiers);

    bool isDefaultParams() const;

    void setDefaultParams(bool defaultParams);

    bool isDefinedTypeParams() const;

    void setDefinedTypeParams(bool definedTypeParams);

    std::string *getDeclarationKey() const;

    void setDeclarationKey(std::string *declarationKey);

private:
    bool usesScopeIdentifiers;
    bool defaultParams;
    bool definedTypeParams;

    std::string *declarationKey;


};


#endif //HACKATHON_PROCESSOR_FUNCTIONIDENTIFIER_H
