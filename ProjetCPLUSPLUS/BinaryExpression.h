#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H
#include "Expression.h"
namespace core {
	template<class T>
	class BinaryExpression
	{
	public:
		virtual T evaluate(core::Expression<T> *, core::Expression<T> *) const= 0;
	};
}
#endif