#include<iostream>

using namespace std;

class Demo
{
	static int a;
	       int b;
		   
    public:
	    static void display();
		void show();		   	
	
};

	void Demo::show()
	{
		cout<<a<<endl;
	}
	
	void Demo::display()
		{
				cout<<a<<endl;
		}
	int Demo::a;
				
			int main()
			{
			  Demo d;
			  d.show();
			  Demo::display();
			  return 0;	
				
				
			}
