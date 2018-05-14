#pragma once
#ifndef ORMAX_H
#define ORMAX_H
#include"Or.h"

namespace fuzzy {
	template<class T>
	class OrMax :public fuzzy::Or<T>
	{
	public:
		OrMax();
		~OrMax();
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*);

	};
	template<class T>
	inline OrMax<T>::
		OrMax()
	{
	}
	template<class T>
	inline OrMax<T>::~OrMax()
	{
	}
	template<class T>
	T OrMax<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
	{
		return (l.evaluate() > r.evaluate()) ? l.evaluate() : r.evaluate();
	}
}
#endif // !ORMAX_H
