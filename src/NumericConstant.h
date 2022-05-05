/*
 * NumericConstant.h
 *
 *  Created on: 01-May-2022
 *      Author: vysha
 */

#ifndef NUMERICCONSTANT_H_
#define NUMERICCONSTANT_H_

#include "Exp.h"

class NumericConstant: public Exp {
private:
	double _value;
public:
	NumericConstant(double value);
	double Evaluate();
};



#endif /* NUMERICCONSTANT_H_ */
