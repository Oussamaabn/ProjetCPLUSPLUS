#pragma once
#ifndef ORPLUS_H
#define ORPLUS_H
template<class T>
class OrPlus :public Or
{
public:
	OrPlus();
	~OrPlus();
	virtual T evaluate(Expression, Expression);
};
template<class T>
inline OrPlus<T>::OrPlus()
{
}
template<class T>
inline OrPlus<T>::~OrPlus()
{
}
template<class T>
T OrPlus<T>::evaluate(Expression l, Expression r)
{
	return (l.evaluate() + r.evaluate());
}
#endif // !ORPLUS_H

