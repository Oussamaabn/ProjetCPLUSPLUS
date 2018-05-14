#pragma once
#ifndef UNARYEXPRESSIONMODEL_H
#define UNARYEXPRESSIONMODEL_H
#include"Expression.h"
#include"UnaryExpression.h"
namespace core {
	template<class T>
	class UnaryExpressionModel : public core::UnaryExpression<T>
	{
	public:
		UnaryExpressionModel();
		UnaryExpressionModel(core::UnaryExpressionModel<T> *ope,core::Expression<T> * o);
		~UnaryExpressionModel();
		virtual T evaluate(core::Expression<T> *l);
		virtual T evaluate();
	private:
		core::UnaryExpression<T> *_operator;
		core::Expression<T> *operand;
	};


	template<class T>
	UnaryExpressionModel<T>::UnaryExpressionModel()
	{
	}

	template<class T>
	UnaryExpressionModel<T>::UnaryExpressionModel(core::UnaryExpressionModel<T>* ope, core::Expression<T>* o)
		:_operator(ope),operand(o)
	{
	}

	template<class T>
	UnaryExpressionModel<T>::~UnaryExpressionModel()
	{
	}

	template<class T>
	T UnaryExpressionModel<T>::evaluate(core::Expression<T> *l)
	{
		if (_operator == null) throw NullExceptionOperator();
			return _operator->evaluate(l);
	}

	template<class T>
	T UnaryExpressionModel<T>::evaluate()
	{
		if (operand == null) throw NullExceptionOperator();
			return evaluate(operand);
	}
}
#endif // !UNARYEXPRESSIONMODEL_H