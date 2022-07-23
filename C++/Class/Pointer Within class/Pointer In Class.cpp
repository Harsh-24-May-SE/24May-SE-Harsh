// Pointer Within Class

#include<iostream>
using namespace std;

class A
{
	public:
		void display()
		{
			cout<<"This Is Class A";
		}
};
main()
{
	A obj;
	
	A *ptr;
	
	ptr=&obj;
	
	ptr->display();
}
