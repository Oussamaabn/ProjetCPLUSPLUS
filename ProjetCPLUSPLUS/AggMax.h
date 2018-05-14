#pragma once
#ifndef AGGMAX_H
#define AGGMAX_H
#include "Agg.h"
namespace fuzzy {
	template<class T>
	class AggMax :public fuzzy::Agg<T>
	{
	public:
		AggMax();
		~AggMax();
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*);

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
	T AggMax<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
	{
		return (l.evaluate() > r.evaluate()) ? l.evaluate() : r.evaluate();
	}
}
#endif // !AGGMAX_H
