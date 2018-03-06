#ifndef UNARYEXPRESSION_H
#define UNARYEXPRESSION_H
#include "Expression.h"
template<class T>
class UnaryExpression
{
public:
	
	virtual T evaluate(Expression) = 0;
};

#endif