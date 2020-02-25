#include<iostream>

using namespace std;

class demo
{
	static int a;
		   int b;
		   
		public:
		   void display()
		   {
		   	cout<<a;
		   	
		   }

};

	int demo::a;
	
	int main()
	{
		demo d;
		d.display();
	}
