#pragma once
#ifndef THENMIN_H
#define THENMIN_H
#include "Then.h"
namespace fuzzy {
	template<class T>
	class ThenMin :public fuzzy::Then<T>
	{
	public:
		ThenMin();
		~ThenMin();
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*);
	};
	template<class T>
	inline ThenMin<T>::ThenMin()
	{
	}
	template<class T>
	inline ThenMin<T>::~ThenMin()
	{
	}
	template<class T>
	T ThenMin<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
	{
		return (l.evaluate() < r.evaluate()) ? l.evaluate() : r.evaluate();
	}
}
#endif // !THENMIN_H
