//
// Created by Nardos Lemma on 7/9/24.
//

#ifndef UNTITLED_LITERAL_H
#define UNTITLED_LITERAL_H

#endif
// CMSC 330 Advanced Programming Languages


class Literal: public Operand {
public:
    Literal(double value) {
        this->value = value;
    }
    double evaluate() {
        return value;
    }
private:
    double value;
};

