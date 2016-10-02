//
// Created by erictg97 on 10/1/16.
//

#ifndef HACKATHON_PROCESSOR_SYMBOLIDENTIFIER_H
#define HACKATHON_PROCESSOR_SYMBOLIDENTIFIER_H

#include <string>
#include <cstddef>
#ifndef SAFEDELETE
#define SAFEDELETE(ptr) { delete(ptr); ptr = NULL; }
#endif

class SymbolIdentifier {

private:
    bool requiresDefinedType;


};


#endif //HACKATHON_PROCESSOR_SYMBOLIDENTIFIER_H
