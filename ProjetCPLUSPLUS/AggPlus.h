#pragma once
#ifndef AGGPLUS
#define AGGPLUS
#include"Agg.h"
namespace fuzzy {
	template<class T>
	class AggPlus :public fuzzy::Agg<T>
	{
	public:
		AggPlus();
		~AggPlus();
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*);
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
	T AggPlus<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
	{
		return (l.evaluate() + r.evaluate());
	}
}
#endif // !AGGPLUS
