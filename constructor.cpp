#include<iostream>
using namespace std;
class Employee
{
	private:
		int empId;
		string name;
		float sal;
	public:
	   Employee()
	   {
	   	 empId=0;
	   	 name="unknown";
	   	 sal=0;
	   }
	   Employee(int id)
	   {
	   	 empId=id;
	   	 name="unknown";
	   	 sal=0;
	   }
	    Employee(int id, string n,float s)
	   {
	   	 empId=id;
	   	 name=n;
	   	 sal=s;
	   }
	   void display()
	   {
	   	
	   	cout<<"Employee Id="<<empId<<endl;
	   	cout<<"Employee name="<<name<<endl;
	   	cout<<"Employee salary="<<sal<<endl;
	 }		
};
int main()
{
	Employee e1;
	Employee e2(101);
	Employee e3(102,"anu",23000);
	e1.display();
	e2.display();
	e3.display();
	return 0;
}