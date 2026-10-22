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
void paymentProcess(payment *ptr)
{
	ptr->pay();
}
int main()
{
	UPI u;
	card c;
	cash ash;
	
	paymentProcess(&u);
	paymentProcess(&c);
	paymentProcess(&ash);
	return 0;
}