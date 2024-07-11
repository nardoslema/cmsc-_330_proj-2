//
// Created by Nardos Lemma on 7/9/24.
//

#include "average.h"

#include <string>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "average.h"

double Average::evaluate()
{
    double this_left = this->left->evaluate();
    double this_right = this->right->evaluate();

    double sum = this_left + this_right;
    return sum / 2;
}
