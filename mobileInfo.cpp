#include<iostream>
using namespace std;
class mobile
{
	public:
		int mobileId;
		string mobSeries;
		float mobPrice;
		
		void accept()
		{
			cout<<"\n Enter Mobile id:";
			cin>>mobileId;
			
			cout<<"\n Enter Mobile Series:";
			cin>>mobSeries;
			
			cout<<"\n Enter mobile Price:";
			cin>>mobPrice;
			
		}
		void display()
		{
			cout<<" Mobile id:"<<mobileId<< endl;
			cout<<" Mobile Series:"<<mobSeries<< endl;
			cout<<" Mobile Price:"<<mobPrice<< endl;
		}
};
int main()
{

  mobile g[5] ;
  int i;
  cout<<"\n Enter Information of 5 mobiles:"<<endl;
  for(i=0;i<5;i++)
  {
  	cout<<"\n--- Mobile Information---:"<<i+1<<endl;
  	g[i].accept();
  }
  cout<<"\n---Display the details---\n"<<endl;
  for(i=0;i<5;i++)
  {
  	cout<<"\n Details of mobile:"<<i+1<<endl;
  	g[i].display();
  }
  return 0;
  
}

