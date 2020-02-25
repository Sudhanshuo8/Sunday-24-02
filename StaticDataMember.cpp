#include<iostream>

using namespace std;

class Demo
{
	static int a,b;
	
	public:
		static void display()
		{
			cout<<a<<b;
			
		}
		
		void show()
		{
			cout<<a;
		}
};
    int Demo::a;
    int Demo::b;

   	int main()
   	{
   	   Demo d1;
	   Demo::display();
	   d1.show();	  	
    }
