/*
 * UnaryExp.cpp
 *
 *  Created on: 05-May-2022
 *      Author: vysha
 */

#include "UnaryExp.h"

UnaryExp::UnaryExp(Exp *a, Operator op) {
	_ex1 = a;
	_op = op;
}

double UnaryExp::Evaluate() {
	switch (_op) {
		case PLUS:
			return (*_ex1).Evaluate();
		case MINUS:
			return -1 * (*_ex1).Evaluate();
	}

	return 0;
}
