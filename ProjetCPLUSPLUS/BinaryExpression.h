#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H
#include "Expression.h"
template<class T>
class BinaryExpression
{
public:
	virtual T evaluate(Expression,Expression) = 0;
};

#endif