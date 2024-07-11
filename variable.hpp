//
// Created by Nardos Lemma on 7/9/24.
//

#ifndef UNTITLED_VARIABLE_H
#define UNTITLED_VARIABLE_H
#include <string>
#include "operand.h"


class Variable: public Operand {
public:
    Variable(std::string name) {
        this->name = name;
    }
    double evaluate();
private:
    std::string name;
};


#endif //UNTITLED_VARIABLE_H

