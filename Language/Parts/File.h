//
// Created by erictg97 on 10/1/16.
//

#ifndef HACKATHON_PROCESSOR_FILE_H
#define HACKATHON_PROCESSOR_FILE_H

#include "Symbol.h"
#include <map>
#include <bits/unique_ptr.h>

class File {
public:
    virtual ~File();

    File(std::string *fileName, std::map<std::unique_ptr<std::string>, std::unique_ptr<Symbol>> *variables);

    std::string *getFileName() const;

    void setFileName(std::string *fileName);

    std::map<std::unique_ptr<std::string>, std::unique_ptr<Symbol>> *getVariables() const;

    void setVariables(std::map<std::unique_ptr<std::string>, std::unique_ptr<Symbol>> *variables);


private:

    std::string *fileName;

    // map<string,symbol> string will represent the encapsulation level, symbol will corespond to the type
    std::map<std::unique_ptr<std::string>, std::unique_ptr<Symbol>> *variables;

};


#endif //HACKATHON_PROCESSOR_FILE_H
