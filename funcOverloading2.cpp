#include<iostream>
using namespace std;
class Area
{
	public:
		float area(float side)
		{
			return side*side;
		}
		
		float area(float l,float b)
		{
			return l*b;
		}
		
		float area(float b,float h,int x)
		{
			return 0.5*b*h;
		}
		
		float area(float r,int x)
		{
			return 3.14*r*r;
		}
};
int main()
{
	Area a1;
  cout<<"\n Area of square:"<<a1.area(5)<<endl;
  cout<<"\n Area of Rectangle:"<<a1.area(10.0f,5.0f)<<endl;
  cout<<"\n Area of Triangle:"<<a1.area(10.0f,6.0f,1)<<endl;
  cout<<"\n Area of Circle:"<<a1.area(7.0f,1)<<endl;
  return 0;
}