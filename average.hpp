//
// Created by Nardos Lemma on 7/9/24.
//

#ifndef UNTITLED_AVERAGE_H
#define UNTITLED_AVERAGE_H

#include "expression.h"
#include "subexpression.h"

class Average : public SubExpression
{
public:
    Average(Expression *left, Expression *right) : SubExpression(left, right) {}
    double evaluate();
};

#endif //UNTITLED_AVERAGE_H

