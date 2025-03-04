////
////  main.cpp
////  cmsc330_proj2
////
////  Created by Nardos Lemma on 7/6/24.
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.hpp"

SymbolTable symbolTable;

void parseAssignments(stringstream& in);

int main() {
    const int SIZE = 256;
    Expression* expression;
    char paren, comma, line[SIZE];
 
    ifstream fin;
    fin = ifstream("input.txt");
    if (!(fin.is_open())) {
        cout << "File did not open" << endl;
        system("pause");
        return 1;
    }
    while (true) {
        fin.getline(line, SIZE);
        if (!fin)
            break;
        stringstream in(line, ios_base::in);
        in >> paren;
        cout << line << " ";
        try {
            expression = SubExpression::parse(in);
            in >> comma;
            parseAssignments(in);
            double result = expression->evaluate();
            cout << "Value = " << result << endl;
        }
        catch (string message) {
            cout << message << endl;
        }
    }
    system("pause");
    return 0;
}

void parseAssignments(stringstream& in) {
    char assignop, delimiter;
    string variable;
    int value;
    do {
        variable = parseName(in);
        in >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    }
    while (delimiter == ',');
}
   
