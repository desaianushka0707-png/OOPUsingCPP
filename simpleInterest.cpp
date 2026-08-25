#include<iostream>
using namespace std;
class Bank
{
	public :
		float si(float p,float r,float t)
		{
			return p*r*t/100;
		}
		float si(float p,float r)
		{
			return p*r*3/100;
		}
};
int main()
{
	Bank s1;
	cout<<"Simple interest 1:"<<s1.si(1000.0,10.0,2.0)<<endl;
	cout<<"Simple interest 2:"<<s1.si(2000.0,10.0)<<endl;
	return 0;
}