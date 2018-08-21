#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i,sum=1;
	printf("\n Enter Any no: ");
	scanf("%d",&num);
	int n = num;
	
	for(i = 2; i*i<=num; i++)
	{
	if(num%i==0)
	sum = sum + i + num/i;
	}
	if(sum==num && num!=1)
	printf(" %d is Perfect No ",n);

	else
	{
	printf("\n %d is not Perfect No",n);
	return;
	}
	
	return 0;
}
