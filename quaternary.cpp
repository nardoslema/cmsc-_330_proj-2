//
//  quaternary.cpp
//  cmsc330_proj2
//
//  Created by Nardos Lemma on 7/10/24.
//

#include "quaternary.hpp"

using namespace std;

#include "expression.hpp"
#include "subexpression.h"
#include "quaternary.h"

Quaternary::Quaternary(Expression *left, Expression *right, Expression *third, Expression *fourth) : SubExpression(left, right)
{
    this->third = third;
    this->fourth = fourth;
}

double Quaternary::evaluate()
{
    double this_left = this->left->evaluate();
    if (this_left < 0)
    {
        return this->right->evaluate();
    }
    else if (this_left == 0)
    {
        return this->third->evaluate();
    }
    else // left > 0
    {
        return this->fourth->evaluate();
    }
}
