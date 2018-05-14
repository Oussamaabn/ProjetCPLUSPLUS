#ifndef VALUEMODEL_H
#define VALUEMODEL_H
#include "Expression.h"


namespace core {

	template<class T>
	class ValueModel :public Expression<T>
	{
	public:

		ValueModel();
		~ValueModel();
		T evaluate()const;
		void setValue(T);

	private:
		T value;
	};

	template<class T>
	 ValueModel<T>::ValueModel():
		 value(T(0))
	{
	}

	template<class T>
	 ValueModel<T>::~ValueModel()
	{
	}

	template<class T>
	T ValueModel<T>::evaluate() const
	{
		return value;
	}

	template<class T>
	void ValueModel<T>::setValue(T v)
	{
		value = v;
	}
}
#endif