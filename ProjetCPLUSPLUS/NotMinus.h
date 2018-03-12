#pragma once
#ifndef NOTMINUS_H
#define NOTMINUS_H
#include "Not.h"
template <class T>
class Not : public Not
{
public:
	NotMinus();
	~NotMinus();
	virtual T evaluate(Expression, Expression);

};
#endif // !NOTMINUS_H

template<class T>
inline Not<T>::NotMinus()
{
}

template<class T>
inline Not<T>::~NotMinus()
{
}

template<class T>
inline T Not<T>::evaluate(Expression, Expression)
{
	return T();
}
