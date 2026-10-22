#include<iostream>
using namespace std;
class payment
{
	public:
	  virtual void pay()
		{
			cout<<"payment processing"<<endl;
		}
};
class UPI:piblic payment
{
	public:
		void pay()
		{
			cout<<"payment through UPI"<<endl;
		}
};
class card:public payment
{
	public:
		void pay()
		{
			cout<<"payment through card"<<endl;
		}
};
class cash:public payment
{
	public:
		void pay()
		{
			cout<<"payment through cash"<<endl;
		}
};

int main()
{
	payment *ptr;
	UPI u;
	card c;
	cash ash;
	
    ptr=&u;
	ptr->pay(); 
	
	ptr=&c;
	ptr->pay(); 
	
	ptr=&ash;
	ptr->pay(); 
	return 0;
}