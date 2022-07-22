// Print the number in reverse order

#include<stdio.h>
main()
{
	int num,c,rem,rev=0;
	
	printf("Enter a Number : ");
	scanf("%d",&num);
	c=num;
	
	while(num>0)
	{
		rem = num%10;
		rev = (rev*10)+rem;
		num = num/10;
	}
	printf("\nReverse Number : %d",rev);
}
