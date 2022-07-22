// Making Table Using Nested for loop :

#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d\t",j,i,j*i,k++);
		}
		printf("\n");
	}
}
