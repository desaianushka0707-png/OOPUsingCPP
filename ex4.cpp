#include<iostream>
using namespace std;
class show
{
  public:
     int rn;
     
	 show(int r)
	 {
	 	rn=r;
	 
	 }
	 show(show &obj)
	 {
	 	rn=obj.rn;
	 	cout<<"your roll no is:"<<rn<<endl;
	 
	 }
		 	
};
int main(){
  show s1(117);
  show s2(s1);
}
	
