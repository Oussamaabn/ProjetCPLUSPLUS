#pragma once
#ifndef NOT_H
#define NOT_H
#include"UnaryExpression.h"

namespace fuzzy {
	template<class T>
	class Not :public core::UnaryExpression<T>
	{

	};
}
#endif // !NOT_H
