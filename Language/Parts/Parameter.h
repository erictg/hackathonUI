//
// Created by erictg97 on 10/1/16.
//

#ifndef HACKATHON_PROCESSOR_PARAMETER_H
#define HACKATHON_PROCESSOR_PARAMETER_H
#include <string>
#include <cstddef>
#ifndef SAFEDELETE
#define SAFEDELETE(ptr) { delete(ptr); ptr = NULL; }
#endif

class Parameter {
public:
    virtual ~Parameter();

    Parameter(std::string *type, std::string *name);

    std::string *getType() const;

    void setType(std::string *type);

    std::string *getName() const;

    void setName(std::string *name);

private:
    std::string *type;
    std::string *name;
};


#endif //HACKATHON_PROCESSOR_PARAMETER_H
