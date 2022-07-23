// Multiple Inheritence

#include<iostream>
using namespace std;

class A
{
	public:
		void displayA()
		{
			cout<<"This Is Class A\n";
		}
};

class B
{
	public:
		void displayB()
		{
			cout<<"This Is Class B\n";
		}
};

class C : public A, public B
{
	public:
		void displayC()
		{
			cout<<"This Is Class C";
		}
};

main()
{
	C obj;
	
	obj.displayA();
	obj.displayB();
	obj.displayC();
}
