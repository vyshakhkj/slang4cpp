/*
 * NumericConstant.cpp
 *
 *  Created on: 01-May-2022
 *      Author: vysha
 */

#include "NumericConstant.h"

NumericConstant::NumericConstant(double value) {
	_value = value;
}

double NumericConstant::Evaluate() {
	return _value;
}


