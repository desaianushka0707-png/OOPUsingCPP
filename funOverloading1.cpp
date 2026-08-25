#include<iostream>
using namespace std;
class calculator
{
	public:
		int add(int a, int b)
		{
			return a+b;
		}
		
		int add(int a,int b,int c)
		{
			return a+b+c;
		}
};
int main()
{
	calculator c1;
	cout<<"\n Addition of 2 no. :";
	cout<<c1.add(10,20)<<endl;
	
	cout<<"\n Addition of 3 no. :";
	cout<<c1.add(10,20,30)<<endl;
	
	return 0;
	
}