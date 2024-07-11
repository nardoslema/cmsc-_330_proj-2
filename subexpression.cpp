//
// Created by Nardos Lemma on 7/9/24.
//

#include "subexpression.hpp"

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.hpp"
#include "operand.h"
#include "plus.h"
#include "minus.h"

SubExpression::SubExpression(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

Expression* SubExpression::parse(stringstream& in) {
    Expression* left;
    Expression* right;
    char operation, paren;

    left = Operand::parse(in);
    in >> operation;
    right = Operand::parse(in);
    in >> paren;
    switch (operation) {
        case '+':
            return new Plus(left, right);
        case '-':
            return new Minus(left, right);
    }
    return 0;
}


