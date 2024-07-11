//
// Created by Nardos Lemma on 7/9/24.
//

#ifndef UNTITLED_MINUS_H
#define UNTITLED_MINUS_H

#endif

class Minus: public SubExpression {
public:
    Minus(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate() {
        return left->evaluate() - right->evaluate();
    }
};

