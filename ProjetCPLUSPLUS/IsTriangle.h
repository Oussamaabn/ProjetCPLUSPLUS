#pragma once
#ifndef ISTRIANGLE_H
#define ISTRIANGLE_H
#include"Is.h"
template<class T>
class IsTriangle :public Is
{
	IsTriangle();
	~IsTriangle();
	virtual T evaluate(Expression, Expression);
private:
	T min, max, mid;
};

#endif // !ISTRIANGLE_H

template<class T>
inline IsTriangle<T>::IsTriangle()
{
}

template<class T>
inline IsTriangle<T>::~IsTriangle()
{
}

template<class T>
inline T IsTriangle<T>::evaluate(Expression, Expression)
{
	return T();
}
