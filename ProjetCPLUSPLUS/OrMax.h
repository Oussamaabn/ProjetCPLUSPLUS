#pragma once
#ifndef ORMAX_H
#define ORMAX_H


template<class T>
class OrMax :public Or
{
public:
	OrMax();
	~OrMax();
	virtual T evaluate(Expression, Expression);

};
template<class T>
T OrMax<T>::evaluate(Expression l, Expression r)
{
	return (l.evaluate() > r.evaluate()) ? l.evaluate() : r.evaluate();
}
#endif // !ORMAX_H
