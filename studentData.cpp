#include<iostream>
using namespace std;
class student
{
	private:
		int rn;
		string nm;
		long long mobNo;

	public:	
		void accept()
		{
			cout<<"\n Enter student roll no:";
			cin>>rn;
			
			cout<<" \n Enter student name:";
			cin>>nm;
			
			cout<<" \n Enter student mobile no:";
			cin>>mobNo;
		}
		
		
		void dispaly()
		
		{
			cout<<"\n----Display the details----"<<endl;
			cout<<" \n Roll No:"<<rn<<endl;
			cout<<" Name:"<<nm<<endl;
			cout<<" Mobile No:"<<mobNo<<endl;
		}
};
int main()
{
	student s1;
	s1.accept();
	s1.dispaly();
	
	return 0;
}
