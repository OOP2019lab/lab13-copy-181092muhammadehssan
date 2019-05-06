#include<iostream>
using namespace std;
template<typename T>
class Pair{
private:
	T  values[2];
	
public :
	Pair(T a,T b)
	{
		this->values[0]=a;
		this->values[1]=b;
	}
T GetMax();
T GetMin();
friend ostream & operator<<( ostream & out, Pair & a)
{
	out<<a.values[0]<<endl<<a.values[1]<<endl;
	return out;
}
};
template <typename T> //declare a template parameter before implementation
T Pair<T >::GetMin()
{
	if(this->values[0]<this->values[1])
		return this->values[0];
	else
		return this->values[1];
}
template <typename T> //declare a template parameter before implementation
T Pair<T >::GetMax()
{
	if(this->values[0]>this->values[1])
		return this->values[0];
	else
		return this->values[1];
}
 

