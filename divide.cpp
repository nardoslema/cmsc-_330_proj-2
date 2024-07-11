//
//  divide.cpp
//  cmsc330_proj2
//
//  Created by Nardos Lemma on 7/9/24.
//

#include "divide.hpp"
class Average : public SubExpression
{
public:
    Average(Expression *left, Expression *right) : SubExpression(left, right) {}
    double evaluate();
};
