#pragma once
#ifndef ISTRIANGLE_H
#define ISTRIANGLE_H
#include"Is.h"

namespace fuzzy {
	template<class T>
	class IsTriangle :public fuzzy::Is<T>
	{
		IsTriangle();
		IsTriangle(constT&, constT&, constT&);
		~IsTriangle();
		virtual T evaluate(core::Expression<T>*);
	private:
		T min, max, mid;
	};



	template<class T>
	 IsTriangle<T>::IsTriangle(constT& _min, constT& _max, constT& _mid) :
		min(_min), max(_max), mid(_mid)
	{
	}

	 template<class T>
	 IsTriangle<T>::IsTriangle() :
		 min(T(0)), max(T(0)), mid(T(0))
	 {
	 }

	template<class T>
	 IsTriangle<T>::~IsTriangle()
	{
	}

	template<class T>
	 T IsTriangle<T>::evaluate(core::Expression<T>* l)
	{
		 if (l->evaluate() < min || l->evaluate() > max)
			 return 0;

		 return (l->evaluate() <= mid) ?
			 (l->evaluate() - min) / (mid - min) :
			 (max - l->evaluate()) / (max - mid);
	}
}
#endif // !ISTRIANGLE_H