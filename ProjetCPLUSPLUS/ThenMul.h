#pragma once
#ifndef THENMUL_H
#define THENMUL_H
#include"Then.h"
namespace fuzzy {
	template<class T>
	class ThenMul :public fuzzy::Then<T>
	{
	public:
		ThenMul();
		~ThenMul();
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*);
	};
	template<class T>
	inline ThenMul<T>::ThenMul()
	{
	}
	template<class T>
	inline ThenMul<T>::~ThenMul()
	{
	}
	template<class T>
	T ThenMul<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
	{
		return (l.evaluate() * r.evaluate());
	}
}
#endif // !THENMUL_H