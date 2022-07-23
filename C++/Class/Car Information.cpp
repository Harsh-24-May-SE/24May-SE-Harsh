// Array With in class

#include<iostream>
using namespace std;

class Car
{
	public:
		
		int id;
		string c_name;
		float speed[3];
		
		void input()
		{
			cout<<"Enter Car Id :";
			cin>>id;
			
			cout<<"Enter Car Name :";
			cin>>c_name;
			
			for(int i=0;i<3;i++)
			{
				cout<<"Enter Car Speed :";
				cin>>speed[i];
			}
		}
		void display()
		{
			cout<<"\nCar Id ="<<id<<endl;
			cout<<"Name = "<<c_name<<endl;
			
			for(int i=0;i<3;i++)
			{
				cout<<"Speed :"<<speed[i]<<endl;
			}
		}
};
main()
{
	Car obj[2];
	
	for(int i=0;i<2;i++)
	{
		obj[i].input();
		
		obj[i].display();
		cout<<"\n";
	}
}
