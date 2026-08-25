#include<iostream>
using namespace std;
class calculator
{
	private:
		int a,b,c,d;
	public:
		int add(int x,int y)
		{
			x=a;
			y=b;
			return a+b;
		}
		
		int add(int x,int y,int z)
		{
			x=a;
			y=b;
			z=c;
			return a+b+c;
		}
		int add(int x,int y,int z, int w)
		{
			x=a;
			y=b;
			z=c;
			w=d;
			return a+b+c+d;
		}
};
int main()
{
	calculator c1;
	cout<<"Addtion of 2 no:"<<c1.add(10,20)<<endl;
	cout<<"Addtion of 3 no:"<<c1.add(10,20,30)<<endl;
	cout<<"Addtion of 4 no:"<<c1.add(10,20,30,40)<<endl;
	return 0;
}