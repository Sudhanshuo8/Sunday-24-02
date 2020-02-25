#include<iostream>

using namespace std;

class student
{
	int roll;
	static int count;
	
	public:
	
		student(int i)
		{
			
			roll=i;
			count++;
		}
		void show()
		{
			cout<<"Roll no :"<<roll<<endl;;
		}
		
		void counter()
		{
			cout<<"Total students :"<<count<<endl;
		}
		~student()
		{
			--count;
		}
	};
	
	int student::count;
    int main()
    {
    	student s1(21);
    	s1.show();
    	student s2(64);
    	s2.show();
		student s3(55);
		s3.show();
		s3.counter();
		{
			student s4(4);
			student s5(5);
		}
		s3.counter();
		return 0;
	    
			
	}
