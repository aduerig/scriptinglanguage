// Simple Expression Evaluation Header file
// This describes the functionality for evaluating very simple
// arithmetic expressions.  Given a string consisting of operators
// and operands, it will evaluate that expression and return its value.
//
// The expressions ma consist of the following:
// -- integer values
// -- integer variable names
// -- simple arithmetic operators ( +, -, *, /, % )
// -- the assignment operator to assign to variables
// -- matched parentheses for grouping
//
// All expressions are expected to have valid syntax.
// There is no specification on the length of any expression.

#include "vartree.h"

int evaluate( const char expr[], VarTree &vars );