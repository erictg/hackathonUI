//
// Created by erictg97 on 10/1/16.
//

#ifndef HACKATHON_PROCESSOR_CLASSIDENTIFIER_H
#define HACKATHON_PROCESSOR_CLASSIDENTIFIER_H
#include <string>
#include <cstddef>
#ifndef SAFEDELETE
#define SAFEDELETE(ptr) { delete(ptr); ptr = NULL; }
#endif
class ClassIdentifier {
public:
    ClassIdentifier();
    ClassIdentifier(std::string *classKey, std::string *extendsKey, std::string *startKey, std::string *endKey);
    ~ClassIdentifier();

    std::string *getClassKey() const;

    void setClassKey(std::string *classKey);

    std::string *getExtendsKey() const;

    void setExtendsKey(std::string *extendsKey);

    std::string *getStartKey() const;

    void setStartKey(std::string *startKey);

    std::string *getEndKey() const;

    void setEndKey(std::string *endKey);

private:
    std::string *classKey;
    std::string *extendsKey;
    std::string *startKey;
    std::string *endKey;
};


#endif //HACKATHON_PROCESSOR_CLASSIDENTIFIER_H
