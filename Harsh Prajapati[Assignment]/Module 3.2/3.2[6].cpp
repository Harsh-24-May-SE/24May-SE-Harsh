// Factorial of Number

#include<stdio.h>
main()
{
	int num,i,factorial=1;
	
	printf("Enter Any Number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		factorial=factorial*i; // 1->2->6->24->120
	}
	printf("Factorial of %d is=%d",num,factorial);
}
