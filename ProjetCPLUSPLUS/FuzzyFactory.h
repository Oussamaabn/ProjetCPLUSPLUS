#pragma once
#ifndef FUZZYFACTORY_H
#define FUZZYFACTORY_H
#include"ExpressionFactory.h"
#include"Is.h"

namespace fuzzy {
	template<class T>
	class FuzzyFactory : public fuzzy::ExpressionFactory<T>
	{
	public:
		FuzzyFactory();
		~FuzzyFactory();
		core::Expression<T> newAnd(core::Expression<T>* l, core::Expression<T>* r);
		core::Expression<T> newOr(core::Expression<T>* l, core::Expression<T>* r);
		core::Expression<T> newThen(core::Expression<T>* l, core::Expression<T>* r);
		core::Expression<T> newAgg(core::Expression<T>* l, core::Expression<T>* r);
		core::Expression<T> newDefuzz(core::Expression<T>* l, core::Expression<T>* r);
		core::Expression<T> newNot(core::Expression<T>* o);
		core::Expression<T> newIs(fuzzy::Is<T>* is, core::Expression<T>* o);
	private:
		core::UnaryExpression<T>*
	};
	template<class T>
	FuzzyFactory<T>::FuzzyFactory()
	{
	}

	template<class T>
	FuzzyFactory<T>::~FuzzyFactory()
	{
	}

}

#endif // !FUZZYFACTORY_H
