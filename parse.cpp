//
// Created by Nardos Lemma on 7/9/24.
//

#include <cctype>
#include <sstream>
#include <string>
#include "variableexception.h" // Assuming VariableException is defined in variableexception.h
using namespace std;

string parseName(stringstream& in) {
    char alnum;
    string name = "";

    // Skip leading whitespace
    in >> ws;

    // Read alphanumeric characters and underscores until whitespace
    while (isalnum(in.peek()) || in.peek() == '_') {
        in >> alnum;
        name += alnum;
    }

    // Check if the name starts with an underscore
    if (name.empty() || name[0] == '_') {
        throw VariableException("Invalid variable name: starts with underscore");
    }

    return name;
}


