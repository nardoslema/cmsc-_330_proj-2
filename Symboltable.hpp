//
// Created by Nardos Lemma on 7/9/24.
//
#include <string>
#include <vector>


#ifndef UNTITLED_SYMBOLTABLE_H
#define UNTITLED_SYMBOLTABLE_H


class SymbolTable {
public:
    SymbolTable() {}
    void insert(std::string variable, double value);
    double lookUp(std::string variable) const;
private:
    struct Symbol {
        Symbol(std::string variable, double value) {
            this->variable = variable;
            this->value = value;
        }
        std::string variable;
        double value;
    };
    std::vector<Symbol> elements;
};





#endif //UNTITLED_SYMBOLTABLE_H

