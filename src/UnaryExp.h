/*
 * UnaryExp.h
 *
 *  Created on: 05-May-2022
 *      Author: vysha
 */

#ifndef UNARYEXP_H_
#define UNARYEXP_H_

#include "Exp.h"
#include "Operator.h"

class UnaryExp : public Exp {
private:
	Exp *_ex1;
	Operator _op;
public:
	UnaryExp(Exp *a, Operator op);
	double Evaluate();
};
#endif /* UNARYEXP_H_ */
