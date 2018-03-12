#pragma once
#ifndef THENMUL_H
#define THENMUL_H
template<class T>
class ThenMul :public Then
{
public:
	ThenMul();
	~ThenMul();
	virtual T evaluate(Expression, Expression);
};
template<class T>
T ThenMul<T>::evaluate(Expression l, Expression r)
{
	return (l.evaluate() * r.evaluate());
}
#endif // !THENMUL_H