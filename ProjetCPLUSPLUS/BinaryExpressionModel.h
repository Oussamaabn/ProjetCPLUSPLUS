#pragma once
#ifndef INARYEXPRESSIONMODEL_H
#define INARYEXPRESSIONMODEL_H
#include"BinaryExpression.h"
#include"Expression.h"

namespace core {
	template<class T>
	class BinaryExpressionModel :public core::BinaryExpression<T>, public core::Expression<T>
	{
	public:
		BinaryExpressionModel();
		BinaryExpressionModel(core::BinaryExpression<T> *,core::Expression<T> *,core::Expression<T> *);
		~BinaryExpressionModel();
		T evaluate(core::Expression<T> *, core::Expression<T> *) const;
		T evaluate() const;
		virtual BinaryExpression<T>* getOprator() const;
	private:
		core::BinaryExpression<T> *oper;
		core::Expression<T> *left;
		core::Expression<T> *right;

	};


	template<class T>
	BinaryExpressionModel<T>::BinaryExpressionModel():oper(NULL),left(NULL),right(NULL)
	{
	}

	template<class T>
	BinaryExpressionModel<T>::BinaryExpressionModel(core::BinaryExpression<T>* _oper, core::Expression<T>* _left, core::Expression<T>* _right)
		:oper(_oper), left(_left), right(_right)
	{
	}

	template<class T>
	BinaryExpressionModel<T>::~BinaryExpressionModel()
	{
	}

	template<class T>
	T BinaryExpressionModel<T>::evaluate(core::Expression<T> *l, core::Expression<T> *r)const
	{
		if (oper == null) throw NullOperatorException();//créer une classe exception
			return oper->evaluate(l, r);
	}

	template<class T>
	T BinaryExpressionModel<T>::evaluate()const
	{
		if (left != null && right != null) throw NullOperandException();//créer un classe exception
			return evaluate(left, right);
	}
	template<class T>
	inline BinaryExpression<T>* BinaryExpressionModel<T>::getOprator() const
	{
		return oper;
	}
}
#endif // !INARYEXPRESSIONMODEL_H