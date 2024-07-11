//
// Created by Nardos Lemma on 7/9/24.
//
#include <sstream>
#include "expression.h"

#ifndef UNTITLED_SUBEXPRESSION_H
#define UNTITLED_SUBEXPRESSION_H




#endif
class SubExpression: public Expression {
public:
    SubExpression(Expression* left, Expression* right);
    static Expression* parse(std::stringstream& in);
protected:
    Expression* left;
    Expression* right;
};

