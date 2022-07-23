/*
	Constructer :
		It is member function which initialize a class.
   >A constructor has:
   		(1)Same as name as class
		(2)No return Type
  ->Types :
  	(1)Default Constructor
	(2)Parametarized Constructor
	(3)Copy Constructor
*/

#include<iostream>
using namespace std;

class Simple
{
	public:
		Simple()
		{
			cout<<"This Is Simple Class";
		}
};
int main()
{
	Simple obj;
}
