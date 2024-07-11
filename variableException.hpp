//
// Created by Nardos Lemma on 7/9/24.
//

#ifndef UNTITLED_VARIABLEEXCEPTION_H
#define UNTITLED_VARIABLEEXCEPTION_H

#include <string>  // Include string header

class VariableException {
public:
    VariableException(std::string error);  // Constructor declaration
    VariableException(const std::string &error);

    std::string getError() const;          // Optional: Function to retrieve the error message

private:
    std::string error;  // Member variable to store error message
};

#endif // UNTITLED_VARIABLEEXCEPTION_H

