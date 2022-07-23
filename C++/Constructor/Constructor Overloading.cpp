// Constructor Overloading

#include<iostream>
using namespace std;

class Simple
{
	public:
		Simple()
		{
			cout<<"This Is Default Class"<<endl;
		}
		Simple(int a)
		{
			cout<<"A = "<<a<<endl;
		}
		Simple(int p,int q)
		{
			cout<<"P ="<<p<<" ";cout<<"Q = "<<q<<endl;
		}
		Simple(string name1, string name2, string name3)
		{
			cout<<"Name 1 = "<<name1<<endl;cout<<"Name 2 = "<<name2<<endl;cout<<"Name 3 = "<<name3<<endl;
		}
};

int main()
{
	Simple();
	Simple(55);
	Simple(52,53);
	Simple("My","Name Is","Harsh");
}

