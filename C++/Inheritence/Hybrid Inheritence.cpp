// Hybrid Level Inheritence

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
class B : public A
{
	public:
		void displayB()
		{
			cout<<"This Is Class B\n";
		}
};
class C : public A
{
	public:
		void displayC()
		{
			cout<<"This Is Class C\n";
		}
};
class D : public B, public C
{
	public:
		void displayD()
		{
			cout<<"This Is Class D";
		}
};

int main()
{
	B obj1;
	C obj2;
	D obj3;
	
	obj1.displayA();
	obj1.displayB();
	
	obj2.displayC();
	
	obj3.displayD();
	return 0;
}
