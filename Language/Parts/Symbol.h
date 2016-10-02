//
// Created by erictg97 on 10/1/16.
//

#ifndef HACKATHON_PROCESSOR_SYMBOL_H
#define HACKATHON_PROCESSOR_SYMBOL_H

#include <string>
#include <cstddef>
#ifndef SAFEDELETE
#define SAFEDELETE(ptr) { delete(ptr); ptr = NULL; }
#endif

#include "Function.h"
#include <memory>
class Symbol {
public:
    virtual ~Symbol();

    Symbol(std::string *Name, std::vector<std::unique_ptr<Function>> *function);

    std::string *getName() const;

    void setName(std::string *Name);

    std::vector<std::unique_ptr<Function>> *getFunction() const;

    void setFunction(std::vector<std::unique_ptr<Function>> *function);

private:
    std::string *Name;

    std::vector<std::unique_ptr<Function>> *function;
};


#endif //HACKATHON_PROCESSOR_SYMBOL_H
