#pragma once
#ifndef ANDMIN_H
#define ANDMIN_H

template<class T>
class AndMin :public And
{
	public:
		AndMin();
		~AndMin();
		virtual T evaluate(Expression, Expression);

};
template<class T>
inline AndMin<T>::AndMin()
{
}
template<class T>
inline AndMin<T>::~AndMin()
{
}
template<class T>
T AndMin<T>::evaluate(Expression l, Expression r)
{
	return (l.evaluate() < r.evaluate()) ? l.evaluate() : r.evaluate();
}

#endif // !AndMin

