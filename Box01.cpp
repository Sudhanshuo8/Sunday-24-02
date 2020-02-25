#include<iostream>

using namespace std;

class Box
{
	int l,b,h;
	
	public:
	  void show();
	  
	Box()
	{
		cout<<"Enter the value of l b h"<<endl;
		cin>>l>>b>>h;
	}
	Box(int input_1)
	{
		l=b=h=input_1;
	}
	Box(int i,int j,int k)
	{
		l=i;
		b=j;
		h=k;
	}
	Box(Box &p)
	{
		l=p.l;
		b=p.b;
		h=p.h;
	}
	  
};
   void Box::show()
   {
   	cout<<l<<b<<h<<endl;
   }
   
   int main()
   {
   	 Box b;
   	 b.show();
   	 Box b1(7);
   	 b1.show();
   	 Box b2(1,2,3);
   	 b2.show();
   	 Box b3(b2);
   	 b3.show();
   	 
   	 return 0;
   	 
   	 
   	 
   	 
   }
