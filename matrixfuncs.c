#include "fun.h"

#include <stdio.h>

#define N 10
#define M 3

void work()
{
	int B[N][M];

	printf("Input matrix:\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("B[%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	printf("\n\n");

	printf("Your matrix:\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	  
	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j < M-1; j++)
		{
			if (B[i][j] > B[i][j+1] && B[i][j] > B[i][j-1])
			{
			printf("B[%d][%d]=%d\n", i, j, B[i][j]);
			}

		}
	}

}