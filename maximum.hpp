//
// Created by Nardos Lemma on 7/9/24.
//

#ifndef UNTITLED_MAXIMUM_H
#define UNTITLED_MAXIMUM_H

#include "subexpression.h"

class Maximum : public SubExpression
{
public:
    Maximum(Expression *left, Expression *right) : SubExpression(left, right) {}
    double evaluate();
};


#endif //UNTITLED_MAXIMUM_H

