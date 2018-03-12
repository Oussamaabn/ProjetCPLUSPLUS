#pragma once
#ifndef INARYEXPRESSIONMODEL_H
#define INARYEXPRESSIONMODEL_H
#include"BinaryExpression.h"
#include"Expression.h"
template<class T>
class BinaryExpressionModel :public BinaryExpression, Expression
{
public:
	BinaryExpressionModel();
	~BinaryExpressionModel();
	virtual T evaluate(Expression l, Expression r);
	virtual T evaluate();
private:
	BinaryExpression operator;
	Expression left, right;

};
#endif // !INARYEXPRESSIONMODEL_H

template<class T>
inline BinaryExpressionModel<T>::BinaryExpressionModel()
{
}

template<class T>
inline BinaryExpressionModel<T>::~BinaryExpressionModel()
{
}

template<class T>
inline T BinaryExpressionModel<T>::evaluate(Expression l, Expression r)
{	if(operator!=null)
	return operator.evaluate(l,r);
}

template<class T>
inline T BinaryExpressionModel<T>::evaluate()
{
	if (left != null && right != null)
		return evaluate(left, right);
}
