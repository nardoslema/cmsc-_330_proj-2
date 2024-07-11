//
// Created by Nardos Lemma on 7/9/24.
//

#include "maximum.h"

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "maximum.h"

double Maximum::evaluate()
{
    double this_left = this->left->evaluate();
    double this_right = this->right->evaluate();

    if (this_left > this_right)
    {
        return this_left;
    }
    else
    {
        return this_right;
    }
}
