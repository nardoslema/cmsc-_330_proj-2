//
// Created by Nardos Lemma on 7/9/24.
//

#ifndef UNTITLED_MODULUS_H
#define UNTITLED_MODULUS_H

#include "subexpression.h"

class Modulus : public SubExpression
{
public:
    Modulus(Expression *left, Expression *right) : SubExpression(left, right) {}
    double evaluate() { return static_cast<int>(left->evaluate()) % static_cast<int>(right->evaluate()); };
};
#endif //UNTITLED_MODULUS_H

