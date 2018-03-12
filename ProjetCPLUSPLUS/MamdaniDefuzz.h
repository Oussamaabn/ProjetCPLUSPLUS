#pragma once
#ifndef MAMDANIDEFUZZ_H
#define MAMDANIDEFUZZ_H

template<class T>
class MamdaniDefuzz
{
public:
	MamdaniDefuzz();
	~MamdaniDefuzz();
	virtual T evaluate(Expression, Expression);
};
template<class T>
inline MamdaniDefuzz<T>::MamdaniDefuzz()
{
}
template<class T>
inline MamdaniDefuzz<T>::~MamdaniDefuzz()
{
}
template<class T>
T MamdaniDefuzz<T>::evaluate(Expression l, Expression r) {
	return T;
}

#endif // !MAMDANIDEFUZZ_H
