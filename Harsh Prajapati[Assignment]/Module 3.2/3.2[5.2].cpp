// Find Out Even and Odd Numbers from using (FOR loop)

#include<stdio.h>

main()
{
	int i,num,even_count=0,odd_count=0,even_sum=0,odd_sum=0;
	
	for(i=1;i<=10;i++)
	{
		printf("Enter a Number : ");
		scanf("%d",&num);
		
		if(num%2==0)
		{
			even_count+=1;
			even_sum+=num;
		}
		else
		{
			odd_count+=1;
			odd_sum+=num;
		}
	}
	
	printf("\n\nTotal Even Numbers :%d",even_count);
	printf("\n\nTotal Odd Numbers :%d",odd_count);
	
	printf("\n\nSum of Even Numbers :%d",even_sum);
	printf("\n\nTotal Odd Numbers :%d",odd_sum);
}
