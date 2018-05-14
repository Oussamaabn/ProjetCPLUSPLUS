#pragma once
#ifndef ORPLUS_H
#define ORPLUS_H
#include"Or.h"

namespace fuzzy {
	template<class T>
	class OrPlus :public fuzzy::Or<T>
	{
	public:
		OrPlus();
		~OrPlus();
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*);
	};
	template<class T>
	inline OrPlus<T>::OrPlus()
	{
	}
	template<class T>
	inline OrPlus<T>::~OrPlus()
	{
	}
	template<class T>
	T OrPlus<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
	{
		return (l.evaluate() + r.evaluate());
	}
}
#endif // !ORPLUS_H

