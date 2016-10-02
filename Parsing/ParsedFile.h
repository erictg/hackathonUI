//
// Created by erictg97 on 10/2/16.
//

#ifndef HACKATHON_PROCESSOR_PARSEDFILE_H
#define HACKATHON_PROCESSOR_PARSEDFILE_H

#include "../Language/Language.h"

class ParsedFile {
public:
    ParsedFile(string *textWithHighlights, bool hasErrors);

    virtual ~ParsedFile();

    string *getTextWithHighlights() const;

    void setTextWithHighlights(string *textWithHighlights);

    bool isHasErrors() const;

    void setHasErrors(bool hasErrors);

private:
    std::string *textWithHighlights;

    bool hasErrors;
};


#endif //HACKATHON_PROCESSOR_PARSEDFILE_H
