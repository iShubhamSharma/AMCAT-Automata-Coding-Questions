#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	printf("\n Enter any No: ");
	scanf("%d",&num);
	int n = num;
	int divisor = 1;
	while( num/divisor >= 10 )
	{
		divisor = divisor*10;
	}
	while(num != 0)
	{
		int lead = num/divisor;
		int trail = num%10;

		if(lead != trail)
		{
		printf(" %d is not Palindrome",n);
		exit(0);
		
		}
		
		num = (num%divisor)/10;
		divisor = divisor/100;
	}
	printf("\n %d is Palindrome ",n);
	return 0;
	
}
