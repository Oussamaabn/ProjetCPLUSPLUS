#ifndef VALUEMODEL_H
#define VALUEMODEL_H
template<class T>
class ValueModel :public Expression
{
public:
	
	ValueModel();
	~ValueModel();
	T evaluate();
	void setValue(T);

private:
	T value;
};

template<class T>
T ValueModel<T>::evaluate()
{
	return T;
}

template<class T>
void ValueModel<T>::setValue(T v)
{
	value = v;
}


#endif