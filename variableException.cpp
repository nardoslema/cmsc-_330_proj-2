
// Created by Nardos Lemma on 7/9/24.

#include "variableException.h"
#include <string>

VariableException::VariableException(const std::string& error) : error(error) {
}

std::string VariableException::getError() const {
    return error;
}

