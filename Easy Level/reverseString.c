/* Question: Reverse a String Without Using Inbuilt Function */

#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	char rev[20];
	int i,j=0;
	printf("\n Enter your String: ");
	scanf("%[^\n]s",str);
	
	
	int len = strlen(str);
	for(i = len - 1;i >=0; i--)
	{	
	  rev[j++] = str[i];
	}
	rev[i] = '\0';
	
	printf("\n Reversed String is: %s",rev);
	return 0;	
}
