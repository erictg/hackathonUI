//
// Created by erictg97 on 10/2/16.
//

#ifndef HACKATHON_PROCESSOR_PARSE_H
#define HACKATHON_PROCESSOR_PARSE_H

#include "../Language/Language.h"
#include "ParsedFile.h"

class Parser {
public:
    static bool Parse(std::string &text, std::string language, std::string fileExtension);

    static std::vector<std::string> SplitIntoVector(std::string &text);

private:
    static bool checkIfndef(std::vector<std::string> &text);
    static bool checkClass(std::vector<std::string> &text);
    static bool checkFunction(std::vector<std::string> &text);
};


#endif //HACKATHON_PROCESSOR_PARSE_H
