#include<iostream>
using namespace std;
class cal
{
	public:
		int max(int a,int b)
		{
			return (a>b)?a:b;
		}
		int max(int a,int b,int c)
		{
			int m =(a>b)?a:b;
			return ( m>c)?m:c;
		}
		int max(int a,int b,int c,int d)
		{
			int m= (a>b)?a:b;
		     m=( m>c)?m:c;
			return (m>d)?m:d;
		}
};
int main()
{
	cal c1;
	cout<<"max between 2 no:"<<c1.max(2,4)<<endl;
	cout<<"max between 3 no:"<<c1.max(5,6,7)<<endl;
	cout<<"max between 2 no:"<<c1.max(8,9,10)<<endl;
	return 0;	
}