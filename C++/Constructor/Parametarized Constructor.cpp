// Parametarized Constructor

#include<iostream>
using namespace std;

class Simple
{
	public:
		Simple(int x,int y)
		{
			cout<<"X = "<<x<<endl;
			cout<<"Y = "<<y;
		}
};

int main()
{
	Simple(50,40);
	
	return 0;
}
