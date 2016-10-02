//
// Created by erictg97 on 10/1/16.
//

#ifndef HACKATHON_PROCESSOR_CONTROLSTRUCTUREIDENTIFIERS_H
#define HACKATHON_PROCESSOR_CONTROLSTRUCTUREIDENTIFIERS_H
#include <string>
#include <cstddef>
#ifndef SAFEDELETE
#define SAFEDELETE(ptr) { delete(ptr); ptr = NULL; }
#endif

using namespace std;

class ControlStructureIdentifiers {
public:

    ControlStructureIdentifiers(string *ifStartKey, string *elseIfKey, string *elseKey, string *endifKey, string *forDeclaration,
                                string *foreachDeclaration, bool hasDo, string *whileKey, string *doKey,
                                string *encapsulationStartKey, string *encapsulationEndKey);

    virtual ~ControlStructureIdentifiers();

    string *getIfStartKey() const;

    void setIfStartKey(string *ifStartKey);

    string *getElseIfKey() const;

    void setElseIfKey(string *elseIfKey);

    string *getElseKey() const;

    void setElseKey(string *elseKey);

    string *getForDeclaration() const;

    void setForDeclaration(string *forDeclaration);

    string *getForeachDeclaration() const;

    void setForeachDeclaration(string *foreachDeclaration);

    bool isHasDo() const;

    void setHasDo(bool hasDo);

    string *getWhileKey() const;

    void setWhileKey(string *whileKey);

    string *getDoKey() const;

    void setDoKey(string *doKey);

    string *getEncapsulationStartKey() const;

    void setEncapsulationStartKey(string *encapsulationStartKey);

    string *getEncapsulationEndKey() const;

    void setEncapsulationEndKey(string *encapsulationEndKey);

    string *getEndifKey() const;

    void setEndifKey(string *endifKey);

private:
    //if statement
    string *ifStartKey;
    string *elseIfKey;
    string *elseKey;
    string *endifKey;
    //for
    string *forDeclaration;
    string *foreachDeclaration;

    //while
    bool hasDo;
    string *whileKey;
    string *doKey;

    //encapsulation
    string *encapsulationStartKey;
    string *encapsulationEndKey;
};


#endif //HACKATHON_PROCESSOR_CONTROLSTRUCTUREIDENTIFIERS_H
