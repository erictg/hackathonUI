//
// Created by erictg97 on 10/1/16.
//

#ifndef HACKATHON_PROCESSOR_PROGRAM_H
#define HACKATHON_PROCESSOR_PROGRAM_H

#include "Language.h"
#include "Parts/Function.h"
#include "Parts/Parameter.h"
#include "Parts/Symbol.h"

class Program {

private:
    //language of program
    Language *language;

    //for symbols
    std::vector<Symbol *> *symbols;

    std::vector<Symbol *> *variables;

    //for non member functions
    std::vector<Function *> *functions;

};


#endif //HACKATHON_PROCESSOR_PROGRAM_H
