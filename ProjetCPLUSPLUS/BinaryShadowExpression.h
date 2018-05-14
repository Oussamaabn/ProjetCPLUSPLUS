#ifndef BINARYSHADOWEXPRESSION_H
#define BINARYSHADOWEXPRESSION_H
#include"BinaryExpression.h"

namespace shadow {
	template<class T>
	class BinaryShadowExpression :public core::BinaryExpression<T>
	{
	public:
		BinaryShadowExpression();
		~BinaryShadowExpression();

	private:
	};
}

#endif // !BINARYSHADOWEXPRESSION_H
