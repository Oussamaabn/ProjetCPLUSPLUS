#pragma once
#ifndef UNARYEXPRESSIONMODEL_H
#define UNARYEXPRESSIONMODEL_H
#include"Expression.h"
#include"UnaryExpression.h"
template<class T>
class UnaryExpressionModel : public UnaryExpression, Expression
{
public:
	UnaryExpressionModel();
	~UnaryExpressionModel();
	virtual T evaluate(Expression l, Expression r);
	virtual T evaluate();
private:
	UnaryExpression operator;
	Expression Operand;
};
#endif // !UNARYEXPRESSIONMODEL_H

template<class T>
inline UnaryExpressionModel<T>::UnaryExpressionModel()
{
}

template<class T>
inline UnaryExpressionModel<T>::~UnaryExpressionModel()
{
}

template<class T>
inline T UnaryExpressionModel<T>::evaluate(Expression l, Expression r)
{
	if (operator != null)
		return operator.evaluate(o);
}

template<class T>
inline T UnaryExpressionModel<T>::evaluate()
{
	if (operand != null)
		return evaluate(operand);
}
