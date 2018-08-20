/* Question: Print all Prime Nos between 1 to N */

#include<stdio.h>
int main()
{
	int range;
	printf("\n Enter the range: ");
	scanf("%d",&range);

	int i,j,isPrime,num=0;
	for(i = 2;i <= range; i++)
	{
		isPrime = 1;
		for(j=2; j <=i/2;j++)
		{
			if(i%j==0)
			{
			isPrime = 0;
			break;
			}
		}
		if(isPrime==1)
		{
		printf("%d is Prime",i);
		printf("\n");
		}
	}
}
