// Menu Driven For Circle,triangle,rectangle :

#include<iostream>
using namespace std;

main()
{
	int ch;
	float c_area,p=3.14,r,t_area,b,h,r_area,l,bt;
	
	cout<<"Enter Choice From Below : ";
	cout<<endl<<"1.Area Of Circle";
	cout<<endl<<"2.Area Of Tirangle";
	cout<<endl<<"3.Area Of Rectangle";
	cout<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<endl<<"Enter Radius Of Circle :";
			cin>>r;
			c_area=p*r*r;
			cout<<"Area Of Circle = "<<c_area;
		break;
		
		case 2:
			cout<<endl<<"Enter Breadth :";
			cin>>b;
			cout<<endl<<"Enter Height :";
			cin>>h;
			t_area=b*h/2;
			cout<<"Area Of Triangle = "<<t_area;
		break;
		
		case 3:
			cout<<endl<<"Enter Length :";
			cin>>l;
			cout<<endl<<"Enter Breadth :";
			cin>>bt;
			r_area=l*bt;
			cout<<"Area Of Rectangle = "<<r_area;
		break;
		
		default:
			cout<<"Choice Not Valid";
	}
}
