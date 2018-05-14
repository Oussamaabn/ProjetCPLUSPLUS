#pragma once
#ifndef ANDMIN_H
#define ANDMIN_H
#include"And.h"

namespace fuzzy {
	template<class T>
	class AndMin :public fuzzy::And<T>
	{
	public:
		AndMin();
		~AndMin();
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*);

	};
	template<class T>
	inline AndMin<T>::AndMin()
	{
	}
	template<class T>
	inline AndMin<T>::~AndMin()
	{
	}
	template<class T>
	T AndMin<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
	{
		return (l.evaluate() < r.evaluate()) ? l.evaluate() : r.evaluate();
	}
}
#endif // !AndMin

