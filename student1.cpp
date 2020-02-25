#include<iostream>

using namespace std;

class student
{
	int roll;
	static int count;
	
	public:
		void student(int);
		void counter();
		
};
	void student(int input)
	{
		cout<<"Enter the roll no"<<endl;
		cout<<"roll="roll;
		
		count++;
	}
	void counter()
	{
		cout<<"Total student"<<count;
	}
