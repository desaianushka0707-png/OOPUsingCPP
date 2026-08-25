#include<iostream>
using namespace std;
class cal
{
	public:
		int a,b;
		 void get()
		 {
		 	cout<<"enter any 2 nos:";
		 	cin>>a>>b;
		 }
		 void display()
		 {
		 	cout<<"Maximum no is:"<<(a>b?a:b);
		 }
};
int main()
{
	cal c1;
	c1.get();
	c1.display();
	return 0;
}
