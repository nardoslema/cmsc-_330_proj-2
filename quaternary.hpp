//
// Created by Nardos Lemma on 7/9/24.
//

#ifndef UNTITLED_QUATERNARY_H
#define UNTITLED_QUATERNARY_H


#include "subexpression.h"

class Quaternary : public SubExpression
{
public:
    Quaternary(Expression *left, Expression *right, Expression *third, Expression *fourth);
    double evaluate();

protected:
    Expression *third;
    Expression *fourth;
};


#endif //UNTITLED_QUATERNARY_H

