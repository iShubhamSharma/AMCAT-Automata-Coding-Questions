/* Question: LCM of Two Nos */

#include<stdio.h>
int main()
{
	int num1,num2;
	int i,lcm,max;
	printf("\n Enter first no: ");
	scanf("%d",&num1);
	
	printf("\n Enter second no: ");
	scanf("%d",&num2);

	max = (num1 > num2) ? num1 : num2;
	i = max;	
	
	while(1)
	{
	if((i%num1==0)&&(i%num2==0))
	{
		lcm = i;
		break;
	}
	i = i+max;
	}
	printf("\n LCM of %d and %d is: %d",num1,num2,lcm);
	
}
