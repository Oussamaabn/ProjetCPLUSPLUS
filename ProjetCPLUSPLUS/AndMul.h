#pragma once
#pragma once
#ifndef ANDMUL_H
#define ANDMUL_H

template<class T>
class AndMul :public And
{
public:
	AndMul();
	~AndMul();
	virtual T evaluate(Expression, Expression);
};
template<class T>
T AndMul<T>::evaluate(Expression l, Expression r)
{
	return (l.evaluate() * r.evaluate());
}

#endif // !AndMul