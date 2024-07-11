//
// Created by Nardos Lemma on 7/9/24.
//

#ifndef UNTITLED_MINIMUM_H
#define UNTITLED_MINIMUM_H


#include "expression.h"
#include "subexpression.h"

class Minimum : public SubExpression
{
public:
    Minimum(Expression *left, Expression *right) : SubExpression(left, right) {}
    double evaluate();
};


#endif //UNTITLED_MINIMUM_H

