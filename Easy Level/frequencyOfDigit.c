/* Question: Program to count frequency of occurence of digits in Array */

#include<stdio.h>

int main()
{
	int num;
	printf("\n Enter Any no: ");
	scanf("%d",&num);
	int freq[10];
	int lastDigit,i;
	for(i = 0;i < 10;i++)
	{
	freq[i] = 0;
	}
	while(num!=0)
	{
		lastDigit = num%10;
		freq[lastDigit]++;
		num = num/10;	
	}
	for(i = 0; i<10;i++)
	{
	printf("\n The frequency of %d is %d",i,freq[i]);
	
	}
	return 0; 
}

