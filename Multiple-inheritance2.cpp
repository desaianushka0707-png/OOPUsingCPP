#include<iostream>
using namespace std;
class Father
{
	public:
		 Father()
		{
			cout<<"Father's skills"<<endl;
		}
};
class Mother
{
	public:
		Mother()
		{
			cout<<"mothre's hobbies"<<endl;
		}
};
class child:public Father,public Mother
{
	public:
		child()
		{
			cout<<"child studies"<<endl;
		}
};
int main()
{
	child c;
	
	return 0;
}