#pragma once
#ifndef NOTMINUS_H
#define NOTMINUS_H
#include "Not.h"

namespace fuzzy {
	template <class T>
	class NotMinus : public fuzzy::Not<T>
	{
	public:
		NotMinus();
		~NotMinus();
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*);

	};

	
	template<class T>
	inline T NotMinus<T>::evaluate(core::Expression<T>*, core::Expression<T>*)
	{
		return T();
	}
	template<class T>
	inline NotMinus<T>::NotMinus()
	{
	}
	template<class T>
	inline NotMinus<T>::~NotMinus()
	{
	}
}
#endif // !NOTMINUS_H
