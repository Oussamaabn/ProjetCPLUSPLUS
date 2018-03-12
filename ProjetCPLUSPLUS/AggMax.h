#pragma once
#ifndef AGGMAX_H
#define AGGMAX_H
template<class T>
class AggMax :public Agg
{
public:
	AggMax();
	~AggMax();
	virtual T evaluate(Expression, Expression);

};
template<class T>
inline AggMax<T>::AggMax()
{
}
template<class T>
inline AggMax<T>::~AggMax()
{
}
template<class T>
T AggMax<T>::evaluate(Expression l, Expression r)
{
	return (l.evaluate() > r.evaluate()) ? l.evaluate() : r.evaluate();
}
#endif // !AGGMAX_H
