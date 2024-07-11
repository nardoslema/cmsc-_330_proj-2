//
// Created by Nardos Lemma on 7/9/24.
//

#ifndef UNTITLED_TERNARY_H
#define UNTITLED_TERNARY_H

#include "subexpression.h"
#include "expression.h"

class Ternary : public SubExpression
{
public:
    Ternary(Expression *left, Expression *right, Expression *third) : SubExpression(left, right) { this->third = third; }
    double evaluate();

protected:
    Expression *third;
};


#endif //UNTITLED_TERNARY_H

