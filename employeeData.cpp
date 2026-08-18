#include<iostream>
using namespace std;
class employee
{
	private:
		int emp_id;
		string emp_nm;
		long long salary;
	
	public:	
		void accept()
		{
			cout<<"\n Enter employee id:";
			cin>>emp_id;
			
			cout<<" \n Enter employee name:";
			cin>>emp_nm;
			
			cout<<" \n Enter employee salary:";
			cin>>salary;
		}
		
		
		void dispaly()
		
		{
			cout<<"\n----Display the details of employee----"<<endl;
			cout<<" \n Employee Id:"<<emp_id<<endl;
			cout<<" Employee Name:"<<emp_nm<<endl;
			cout<<" Salary:"<<salary<<endl;
		}
};
int main()
{
	employee e1;
	e1.accept();
	e1.dispaly();
	
	return 0;
}
