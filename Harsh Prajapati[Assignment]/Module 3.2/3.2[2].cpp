// Program to show swap of two No's without using third variable

#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter Two Numbers: ");
	scanf("%d %d",&a,&b); // a=10 b=20
	
	printf("\nValues before Swap :%d %d",a,b);
	a=a+b; // ex : a= 10+20 = 30(a)
	b=a-b; // b= 30-20 = 10(b)
	a=a-b;
	
	printf("\nValues After Swap :%d %d",a,b);
}
