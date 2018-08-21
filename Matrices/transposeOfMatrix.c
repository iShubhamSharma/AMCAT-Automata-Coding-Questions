#include<stdio.h>
#include<stdlib.h>
#define R 3
#define C 3

void transpose(int mat[R][C])
{
	for(int i=0; i<R; i++)
	{
	for(int j=i; j<C; j++)
	{
	   int temp = mat[j][i];
	   mat[j][i] = mat[i][j];
	   mat[i][j] = temp;
	}
	}
}

void printmatrix(int mat[R][C])
{
	for(int i=0; i<R; i++)
	{
	for(int j=0; j<C; j++)
	{
	   printf("%d\t",mat[i][j]);
	}
	printf("\n");
	}
}
int main()
{
	int mat[R][C] = { {1,2,3}, {4,5,6}, {7,8,9}
			};	

	printf("\n The Matrix is: \n");
	for(int i=0; i<R; i++)
	{
	for(int j=0; j<C; j++)
	{
	   printf("%d\t",mat[i][j]);
	}
	printf("\n");
	}
	transpose(mat);
	printf("\n The Transpose of Matrix is: \n");
	printmatrix(mat);
	return 0;
	
}
