#include<stdio.h>
#include<stdlib.h>

int largestNo(int arr[],int n)
{
	int i;
	int max = arr[0];
	for(i=0;i < n;i++)
	{
	if(arr[i] > max)	
	{
		max = arr[i];
	}	
	}
	return max;
}

int main()
{
	int arr[] = {10,5,23,102,54,21,95};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("\n Largest No is: %d",largestNo(arr,n));
	return 0;

}
