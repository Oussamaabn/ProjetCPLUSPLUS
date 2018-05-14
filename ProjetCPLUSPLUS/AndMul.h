#pragma once
#pragma once
#ifndef ANDMUL_H
#define ANDMUL_H
#include"And.h"

namespace fuzzy {
	template<class T>
	class AndMul :public fuzzy::And<T>
	{
	public:
		AndMul();
		~AndMul();
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*);
	};
	template<class T>
	inline AndMul<T>::AndMul()
	{
	}
	template<class T>
	inline AndMul<T>::~AndMul()
	{
	}
	template<class T>
	T AndMul<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
	{
		return (l.evaluate() * r.evaluate());
	}
}
#endif // !AndMul