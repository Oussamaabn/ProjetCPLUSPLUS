#pragma once
#ifndef COGDEFUZZ_H
#define COGDEFUZZ_H
#include "MamdaniDefuzz.h"
template<class T>
class CogDefuzz: public MamdaniDefuzz.h
{
public :
	CogDefuzz();
	~CogDefuzz();
	virtual T evaluate(Expression, Expression);
};
#endif // !COGDEFUZZ_H

template<class T>
inline CogDefuzz<T>::CogDefuzz()
{
}

template<class T>
inline CogDefuzz<T>::~CogDefuzz()
{
}

template<class T>
inline T CogDefuzz<T>::evaluate(Expression, Expression)
{
	return T();
}
