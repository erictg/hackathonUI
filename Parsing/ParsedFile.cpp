//
// Created by erictg97 on 10/2/16.
//

#include "ParsedFile.h"

string *ParsedFile::getTextWithHighlights() const {
    return textWithHighlights;
}

void ParsedFile::setTextWithHighlights(string *textWithHighlights) {
    ParsedFile::textWithHighlights = textWithHighlights;
}

bool ParsedFile::isHasErrors() const {
    return hasErrors;
}

void ParsedFile::setHasErrors(bool hasErrors) {
    ParsedFile::hasErrors = hasErrors;
}

ParsedFile::ParsedFile(string *textWithHighlights, bool hasErrors) : textWithHighlights(textWithHighlights),
                                                                     hasErrors(hasErrors) {}

ParsedFile::~ParsedFile() {
    SAFEDELETE(textWithHighlights);
}
