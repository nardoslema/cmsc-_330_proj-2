//
// Created by Nardos Lemma on 7/9/24.
//
class Operand : public Expression
{
public:
    static Expression *parse(stringstream &in);
};

