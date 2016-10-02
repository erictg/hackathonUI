//
// Created by erictg97 on 10/1/16.
//

#ifndef HACKATHON_PROCESSOR_METHOD_H
#define HACKATHON_PROCESSOR_METHOD_H

#include <string>
#include <vector>
#include <cstddef>
#include "Parameter.h"
#ifndef SAFEDELETE
#define SAFEDELETE(ptr) { delete(ptr); ptr = NULL; }
#endif

class Function {
public:
    virtual ~Function();

    Function(bool isMethod, std::string *name, std::vector<Parameter *> *params, std::string *returnType);

    bool isIsMethod() const;

    void setIsMethod(bool isMethod);

    std::string *getName() const;

    void setName(std::string *name);

    std::vector<Parameter *> *getParams() const;

    void setParams(std::vector<Parameter *> *params);

    std::string *getReturnType() const;

    void setReturnType(std::string *returnType);


private:

    bool isMethod;

    std::string *name;

    std::vector<Parameter *> *params;

    std::string *returnType;
};


#endif //HACKATHON_PROCESSOR_METHOD_H
