/*
 * CallSlang.cpp
 *
 *  Created on: 01-May-2022
 *      Author: vysha
 */
#include <iostream>
#include "NumericConstant.h"
#include "BinaryExp.h"
#include "UnaryExp.h"

using namespace std;

int main(int argc, char *argv[]) {
	NumericConstant *v1 = new NumericConstant(30.0);
	NumericConstant *v2 = new NumericConstant(50.0);
	NumericConstant *v3 = new NumericConstant(10.0);

	BinaryExp *addExp = new BinaryExp(v1, v2, PLUS);

	BinaryExp *outerAddExp = new BinaryExp(v3, addExp, PLUS);

	UnaryExp *exp = new UnaryExp(outerAddExp, MINUS);

	cout<< "Result is : " << (*exp).Evaluate();

	delete(v1);
	delete(v2);
	delete(v3);
	delete(addExp);
	delete(outerAddExp);
	delete(exp);
}



