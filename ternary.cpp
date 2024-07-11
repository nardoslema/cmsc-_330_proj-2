//
// Created by Nardos Lemma on 7/9/24.
//

#include "ternary.hpp"
#include <string>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "ternary.h"

double Ternary::evaluate()
{
    if (this->left->evaluate() != 0)
    {
        return this->right->evaluate();
    }
    else
    {
        return this->third->evaluate();
    }
}
