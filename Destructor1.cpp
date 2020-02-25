#include<iostream>

using namespace std;

class demo
{
	int a;
	
	public:
		void show();
		demo();

	
	~demo()
	{
		cout<<"Destructur"<<endl;
	}
};
demo::demo()//Constructor defined outside the class
	{
		cout<<"Enter the value"<<endl;
		cin>>a;
		
	}
    	void demo::show()
	{
		cout<<a<<endl;
	}
	int main()
	{
		demo d;
		d.show();
		
		return 0;
	}
