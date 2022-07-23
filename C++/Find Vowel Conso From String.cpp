// Find Out Vowel Consonant From String

#include<iostream>
using namespace std;

main()
{
	char str[20];
	int i,v_count=0,c_count=0;
	
	cout<<"Enter String :";
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='A' || str[i]=='e'||str[i]=='E' || str[i]=='i'||str[i]=='I' || str[i]=='o'||str[i]=='O' || str[i]=='u'||str[i]=='U')
		{
			v_count++;
		}
		else
		{
			c_count++;
		}
	}
	cout<<endl<<"Vowels = "<<v_count;
	cout<<endl<<"Consonant = "<<c_count;
}
