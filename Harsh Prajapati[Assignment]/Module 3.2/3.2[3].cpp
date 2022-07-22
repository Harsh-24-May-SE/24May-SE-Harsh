// Find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int num;
	
	printf("Enter Any Number :");
	scanf("%d",&num);
	
	(num%2==0)?printf("This Is Even Number"):printf("This Is Odd Number");
}
