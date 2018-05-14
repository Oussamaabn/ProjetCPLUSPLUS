#ifndef UNARYSHADOWEXPRESSION_H
#define UNARYSHADOWEXPRESSION_H
#include"UnaryExpression.h"

namespace shadow {
	template<class T>
	class UnaryShadowExpression :public core::UnaryExpression<T>
	{
	public:
		UnaryShadowExpression();
		~UnaryShadowExpression();

	private:

	};
}

#endif // !UNARYSHADOWEXPRESSION_H
