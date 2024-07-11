//
// Created by Nardos Lemma on 7/9/24.
//

#ifndef UNTITLED_DIVIDE_H
#define UNTITLED_DIVIDE_H

#include "expression.h"
#include "subexpression.h"

class Divide : public SubExpression
{
public:
    Divide(Expression *left, Expression *right) : SubExpression(left, right) {}
    double evaluate() { return left->evaluate() / right->evaluate(); };
};
#endif //UNTITLED_DIVIDE_H

