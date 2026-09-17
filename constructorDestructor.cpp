#include<iostream>
using namespace std;
class Demo
{
	public:
		// constructor
		Demo()
		{
			cout<<"constructor is executed"<<endl;
		}
			
		//Destructor
		~Demo()
		{
			cout<<"Destructor is executed"<<endl;
		}
};
 int main()
 {
 	cout<<"Object is created"<<endl;
 	Demo obj;
 	cout<<"Object being used"<<endl;
 	return 0;
}