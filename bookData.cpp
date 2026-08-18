#include<iostream>
using namespace std;
class book
{
	private:
		float bId;
		string bTitle;
		float bPrice;
	
	public:	
		void accept()
		{
			cout<<"\n Enter book id:";
			cin>>bId;
			
			cout<<" \n Enter book title:";
			cin>>bTitle;
			
			cout<<" \n Enter book price:";
			cin>>bPrice;
		}
		
		
		void dispaly()
		
		{
			cout<<"\n----Display the details----"<<endl;
			cout<<" \n Book Id:"<<bId<<endl;
			cout<<"Book title:"<<bTitle<<endl;
			cout<<" Book price:"<<bPrice<<endl;
		}
};
int main()
{ 
     book b1;
	b1.accept();
	b1.dispaly();
	
	return 0;
}
