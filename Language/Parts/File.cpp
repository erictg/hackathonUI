//
// Created by erictg97 on 10/1/16.
//

#include "File.h"

std::string *File::getFileName() const {
    return fileName;
}

void File::setFileName(std::string *fileName) {
    File::fileName = fileName;
}

std::map<std::unique_ptr<std::string>, std::unique_ptr<Symbol>> *File::getVariables() const {
    return variables;
}

void File::setVariables(std::map<std::unique_ptr<std::string>, std::unique_ptr<Symbol>> *variables) {
    File::variables = variables;
}

File::File(std::string *fileName, std::map<std::unique_ptr<std::string>, std::unique_ptr<Symbol>> *variables) : fileName(fileName),
                                                                                  variables(variables) {}

File::~File() {
    SAFEDELETE(variables);
    SAFEDELETE(fileName);
}
