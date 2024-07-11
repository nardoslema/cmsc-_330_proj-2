//
// Created by Nardos Lemma on 7/9/24.
//

#include "symboltable.hpp"


#include <string>
#include <vector>
using namespace std;

#include "symboltable.hpp"

void SymbolTable::insert(string variable, double value) {
    const Symbol& symbol = Symbol(variable, value);
    elements.push_back(symbol);
}

double SymbolTable::lookUp(string variable) const {
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
            return elements[i].value;
    return -1;
}


