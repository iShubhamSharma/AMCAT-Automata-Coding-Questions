/* HCF of Two Nos */

#include<stdio.h>
int main()
{
	int num1,num2;
	int i,min,hcf=1;
		
	printf("\n Enter the first No: ");
	scanf("%d",&num1);

	printf("\n Enter the second No: ");
	scanf("%d",&num2);

	min = (num1 < num2) ? num1 : num2;
	
	for(i=1;i<=min;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			hcf = i;
			
		}	
	}
	printf("\n HCF of %d and %d is: %d",num1,num2,hcf);
	return 0;
}
