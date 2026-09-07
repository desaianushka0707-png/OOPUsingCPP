#include<iostream>
using namespace std;
class show
{
  public:
     int rn;
     string nm;
     int marks;
     
	 show(int r,string n,int m)
	 {
	 	rn=r;
	 	nm=n;
	 	marks=m;
	 }
	 show(show &obj)
	 {
	 	rn=obj.rn;
	 	cout<<"your roll no is:"<<rn<<endl;
	 	nm=obj.nm;
	 	cout<<"your name is:"<<nm<<endl;
	 	marks=obj.marks;
	 	cout<<"your marks are:"<<marks<<endl;
	 }
		 	
};
int main(){
  show s1(117,"anu",100);
  show s2=s1;
}
	
                      