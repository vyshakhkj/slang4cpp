/*
 * BinaryExp.cpp
 *
 *  Created on: 01-May-2022
 *      Author: vysha
 */

#include "BinaryExp.h"

BinaryExp::BinaryExp(Exp *a, Exp *b, Operator op) {
	_ex1 = a;
	_ex2 = b;
	_op = op;
}

double BinaryExp::Evaluate() {
	switch(_op) {
		case PLUS:
			return (*_ex1).Evaluate() + (*_ex2).Evaluate();
		case MINUS:
			return (*_ex1).Evaluate() - (*_ex2).Evaluate();
		case DIV:
			return (*_ex1).Evaluate() / (*_ex2).Evaluate();
		case MUL:
			return (*_ex1).Evaluate() * (*_ex2).Evaluate();
	}
	return 0;
}


