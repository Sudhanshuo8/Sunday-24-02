#include<iostream>

using namespace std;

class demo
{
	int a;
	
	public:
		void display();
		void show();
};

   void demo::display()
   {
   	
     static int a;
   	cout<<a<<endl;
   	a++;
   }
   
   /*void demo::show()
   {
   	cout<<a;
   }*/
   
   int main()
   {
   	 demo d1;
   	 d1.display();
   	 d1.display();
   }
