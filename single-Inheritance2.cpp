#include<iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"This is a vehicle"<<endl;
		}
};
class car: public Vehicle
{
	public:
		car()
		{
			cout<<"This is a car vehicle"<<endl;
		}
 };
 int main()
 {
 	car c;
 	
 	return 0;
  } 