/*
 * BinaryExp.h
 *
 *  Created on: 01-May-2022
 *      Author: vysha
 */

#ifndef BINARYEXP_H_
#define BINARYEXP_H_
#include "Exp.h"
#include "Operator.h"

class BinaryExp : public Exp {
private:
	Exp *_ex1, *_ex2;
	Operator _op;
public:
	BinaryExp (Exp *a, Exp *b, Operator op);
	double Evaluate();
};




#endif /* BINARYEXP_H_ */
