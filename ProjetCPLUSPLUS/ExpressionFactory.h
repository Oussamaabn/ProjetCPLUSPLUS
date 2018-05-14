#ifndef EXPRESSIONFACTORY_H
#define EXPRESSIONFACTORY_H

#include "Expression.h"
#include "BinaryExpression.h"
#include "UnaryExpression.h"
#include "UnaryExpressionModel.h"
#include "BinaryExpressionModel.h"
#include <list>

namespace fuzzy {
template<T>
class ExpressionFactory
{
public:
	ExpressionFactory();
	~ExpressionFactory();
	core::Expression<T>* Hold(core::Expression<T> *e);
	core::Expression<T>* newUnary(core::UnaryExpression<T> * ope, core::Expression<T> *o);
	core::Expression<T>* newBinary(core::BinaryExpression<T> *ope, core::Expression<T> *l, core::Expression<T> *r);

private:
	std::list<core::Expression<T>*> memory;
};

ExpressionFactory<T>::ExpressionFactory()
{
}

ExpressionFactory<T>::~ExpressionFactory()
{
}

template<class T>
core::Expression<T>* ExpressionFactory<T>::Hold(core::Expression<T>*e)
{
	memory->push_back(e);
	return momery_back();
}

template<class T>
core::Expression<T>* ExpressionFactory<T>::newUnary(core::UnaryExpression<T>* ope, core::Expression<T>* o)
{
	core::UnaryExpressionModel<T> be(ope, o);
	return Hold(&be);
}

template<class T>
core::Expression<T>* ExpressionFactory<T>::newBinary(core::BinaryExpression<T>* ope, core::Expression<T>* l, core::Expression<T>* r)
{
	core::BinaryExpressionModel<T> o(ope,l,r);
	return Hold(&o);
}

}

#endif // !EXPRESSIONFACTORY_H

