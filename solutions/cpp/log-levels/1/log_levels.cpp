#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    auto firstSpace = line.find(' ') ;
    
    return line.substr(firstSpace+1 , line.size()) ;
}

std::string log_level(std::string line) {
    // return the log level
    std::string logLevel = "" ;
    for(auto ch : line){
        if(ch == '[')continue ;
        if(ch == ']')break ;
         logLevel += ch ;
    }

    return logLevel ;
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string msg = message(line) ;
    std::string logLevel = log_level(line) ;
    return msg+" "+'('+logLevel+')' ;
}
}  // namespace log_line
