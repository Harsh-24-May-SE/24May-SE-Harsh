// Find Space , Alphabets , Digits From String

#include<iostream>
using namespace std;

main()
{
	char name[20];
	int i,space=0,digit=0,alpha=0;
	
	cout<<"Enter String :";
	cin>>name;
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
			space++;
		}
		else if(name[i]>='0' && name[i]<='9')
		{
			digit++;
		}
		else if((name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z'))
		{
			alpha++;
		}
	}
	cout<<endl<<"Space = "<<space;
	cout<<endl<<"Digits = "<<digit;
	cout<<endl<<"Alphabets = "<<alpha;
}

