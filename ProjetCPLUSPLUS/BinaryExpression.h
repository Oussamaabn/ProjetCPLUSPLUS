#pragma once
template<class T>
class BinaryExpression
{
public:
	virtual T evaluate(Expression) = 0;
};

