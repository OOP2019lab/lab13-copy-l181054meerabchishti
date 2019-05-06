#include<iostream>
using namespace std;
//Exercise 1 Part(a)
template<typename T>

T GetMax(T x,T y)
{
	return (x > y) ? x : y;
}

template<typename V>

V GetMin(V z,V z1)
{
	if(z<z1)
		return z;
	else
		return z1;

}
//******************************
template<typename T,typename T1>

T GetMax(T x,T y)
{
	return (x > y) ? x : y;
}

template<typename V,typename V1>

V GetMin(V z,V z1)
{
	if(z<z1)
		return z;
	else
		return z1;

}
//******************************
template <class P>
class Pair
{
	P values[2];
public:
	
	Pair(P n1,P n2)
	{
		values[0]=n1;
		values[1]=n2;
	}
	P GetMax()
	{
		return (values[0] > values[1]) ?values[0] : values[1];
	}
	P GetMin();
	//template <typename T>
	friend ostream& operator<<( std::ostream& o, const Pair& anything  )
{
	o<<anything.values[0]<<","<<anything.values[1]<<endl;
	return o;
}
};
template<typename V>
V Pair<V>::GetMin()
{
	return (values[0] < values[1]) ?values[0] : values[1];

}
