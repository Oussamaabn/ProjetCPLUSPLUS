#pragma once
#ifndef THENMIN_H
#define THENMIN_H
template<class T>
class ThenMin :public Then
{
public:
	ThenMin();
	~ThenMin();
	virtual T evaluate(Expression, Expression);
};
template<class T>
T ThenMin<T>::evaluate(Expression l, Expression r)
{
	return (l.evaluate() < r.evaluate()) ? l.evaluate() : r.evaluate();
}
#endif // !THENMIN_H
