#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		void displayName()
		{
		  cout<<"Name:"<<name<<endl;	
		}
};
class student: public person
 {
	public:
		int rollNo;
		void displayRollno()
		{
			cout<<"Roll No:"<<rollNo<<endl;
		}
 };
int main()
{
	student s;
	s.name="Anushka";
	s.rollNo=117;
	
	s.displayName();
	s.displayRollno();
	
	return 0;
}