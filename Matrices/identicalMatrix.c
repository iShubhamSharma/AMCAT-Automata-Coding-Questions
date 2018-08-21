#include<stdio.h>
#define N 3

int isIdentical(int mat1[N][N], int mat2[N][N])
{
	for(int i=0; i<N; i++)
	{
	for(int j=0; j<N; j++)
	{
	if(mat1[i][j]!=mat2[i][j])
	return 0;
	}
	}
	return 1;
	
	
}
int main()
{
	int mat1[N][N] = {{1,2,3},{4,8,6},{7,8,9}
			 };

	int mat2[N][N] = {{1,2,3},{4,8,6},{7,8,9}
			 };

	int output = isIdentical(mat1,mat2);
	if(output == 1)
	printf("\n Matrices Are identical \n");
	else
	printf("\n Matrices are not Identical \n ");
	return 0;
}
