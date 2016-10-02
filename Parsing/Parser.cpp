//
// Created by erictg97 on 10/2/16.
//

#include <sstream>
#include "Parser.h"
#include <regex>
using namespace std;

bool Parser::Parse(std::string &text, std::string language, string fileExtension) {
    if(language == "c++" && (fileExtension == "h" || fileExtension == "cpp")){
        vector<string> line = Parser::SplitIntoVector(text);
        //check for #ifndef
        bool ifndef = checkIfndef(line);

        bool checkClass = Parser::checkClass(line);

        return ifndef && checkClass;

    }
    return false;

}
std::vector<std::string> Parser::SplitIntoVector(std::string &text){

    std::istringstream ss(text);
    std::string token;

    vector<string> playerInfoVector;
    while(std::getline(ss, token, '\n')) {
        playerInfoVector.push_back(token);
    }
    return playerInfoVector;
}

bool Parser::checkIfndef(std::vector<std::string> &line) {
    int ifndefCount = 0;
    int endifCount = 0;
    for(unsigned int x = 0; x < line.size(); x++){
        if(line[x].find("#ifndef") > -1){
            ifndefCount++;
        }else if(line[x].find("#endif") > -1){
            endifCount++;
        }
    }
    return ifndefCount == endifCount;
}

bool Parser::checkClass(std::vector<std::string> &text) {
    for(unsigned int x = 0; x < text.size(); x++){
        if(text[x].find("class") > -1){
            try {
                std::regex re(".*class\\s+([^{]+)\\s*[:]?([^{]+){");
                std::smatch match;
                if (std::regex_search(text[x], match, re) && match.size() > 1) {
                    for(unsigned int y = x; y < text.size(); y++){
                        if(text[y].find("};")){
                            return true;
                        }
                    }
                    return false;
                }else{
                    return false;
                }
            } catch (std::regex_error& e) {
                // Syntax error in the regular expression
                return false;
            }

        }
    }
    return false;//catch if it gets here;

}

bool Parser::checkFunction(std::vector<std::string> &text) {

}