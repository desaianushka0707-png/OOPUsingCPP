#include<iostream>
using namespace std;
class grandfather
{
	public:
		void house()
		{
			cout<<"grandfather has house"<<endl;
		}
};
class father:public grandfather
{
	public:
	 void car()
	{
		cout<<"father has car"<<endl;
	}
};
class child : public father
{
	public:
	 void bike()
	{
		cout<<"child has bike"<<endl;
	}
};
int main()
{
	child c;
	c.house();
	c.car();
	c.bike();
	return 0;
}