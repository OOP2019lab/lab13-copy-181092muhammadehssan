#include<iostream>
#include"Header.h"
using namespace std;
template<typename T>
T GetMax (T x,T y)
{
	if(x>y)
		return x;
	else if(x<y)
		return y;
}
template <typename X>
X GetMin(X i,X j)
{
	if(i<j)
		return i;
	else if(i>j)
		return j;

}

template <typename A,typename B>
B GetMin(A x,B y)
{
	if(x<y)
		return x;
	else if(x>y)
		return y;
}
template <typename A,typename B>
B GetMax(A x,B y)
{
	if(x>y)
		return x;
	else if(x<y)
		return y;
}

//int main () 
//{
//  int i=5, j=6, k;
//  long l=10, m=5, n;
//  k=GetMax<int>(i,j);
//  n=GetMin<long>(l,m);
//  cout << k << endl;
//  cout << n << endl;
//}
//  int main () 
//{
//  char i='Z';
//  int  j=6, k;
//  long l=10, m=5, n;
//  k=GetMax<int,long>(i,m);
//  n=GetMin<int,char>(j,l);
//  cout << k << endl;
//  cout << n << endl;
//  return 0;
//
//
//  /*char i='Z';
//  int  j=6, k;
//  long l=10, m=5, n;
//  k=GetMax(i,m);
//  n=GetMin(j,l);
//  cout << k << endl;
//  cout << n << endl;
//  return 0;*/
//
//}

/////////////////Exercise 2
int main () 
{
  Pair <double> myobject (1.012, 1.01234);
	cout<<myobject.GetMax()<<endl;
  cout<<myobject.GetMin()<<endl;
	cout<<myobject<<endl; // << operator in pairs should be overloaded (inline)
  return 0;
}
