// Single Level Inheritence

#include<iostream>
using namespace std;

class A
{
	public:
		void displaA()
		{
			cout<<"This Is Class A\n";
		}
};
class B : public A
{
	public:
		void displayB()
		{
			cout<<"This Is Class B";
		}
};

main()
{
	B obj;
	
	obj.displaA();
	obj.displayB();
}
