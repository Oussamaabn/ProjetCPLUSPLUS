#pragma once
#ifndef AGGPLUS
#define AGGPLUS
template<class T>
class AggPlus :public Agg
{
public:
	AggPlus();
	~AggPlus();
	virtual T evaluate(Expression, Expression);
};
template<class T>
inline AggPlus<T>::AggPlus()
{
}
template<class T>
inline AggPlus<T>::~AggPlus()
{
}
template<class T>
T AggPlus<T>::evaluate(Expression l, Expression r)
{
	return (l.evaluate() + r.evaluate());
}
#endif // !AGGPLUS
