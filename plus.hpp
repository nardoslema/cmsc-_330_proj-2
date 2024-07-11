//
// Created by Nardos Lemma on 7/9/24.
//

#ifndef UNTITLED_PLUS_H
#define UNTITLED_PLUS_H

#endif

class Plus: public SubExpression {
public:
    Plus(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
        return left->evaluate() + right->evaluate();
    }
};

