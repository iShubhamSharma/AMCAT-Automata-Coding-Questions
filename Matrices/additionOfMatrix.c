#include<stdio.h>
#define R 2
#define C 2
int main()
{
	int mat1[R][C];
	int mat2[R][C];
	int mat3[R][C];
	int i,j;
	printf("\n Enter the elements of Matrix 1: \n");
	for(i=0; i<R; i++)
	{
	for(j=0; j<C;j++)
	{
		scanf("%d",&mat1[i][j]);
	}
	}

	printf("\n Enter the elements of Matrix 2: \n");
	for(i=0; i<R; i++)
	{
	for(j=0; j<C;j++)
	{
		scanf("%d",&mat2[i][j]);
	}
	}

	printf("\n The elements of Matrix 1 is: \n");
	for(i=0; i<R; i++)
	{
	for(j=0; j<C;j++)
	{
		printf("%d\t",mat1[i][j]);
	}
	printf("\n");
	}

	printf("\n The elements of Matrix 2 is: \n");
	for(i=0; i<R; i++)
	{
	for(j=0; j<C;j++)
	{
		printf("%d\t",mat2[i][j]);
	}
	printf("\n");
	}

	
	for(i=0; i<R; i++)
	{
	for(j=0; j<C; j++)
	{
		mat3[i][j] = mat1[i][j] + mat2[i][j];
	}
	}

	printf("\n Addition of the two Matrices is: \n");
	for(i=0; i<R; i++)
	{
	for(j=0; j<C;j++)
	{
		printf("%d\t",mat3[i][j]);
	}
	printf("\n");
	}
}
