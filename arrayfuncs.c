#include "fun.h"

#include <stdio.h>

#define N 6

void work()
{
	int A[N];

	printf("Input array:\n");
	for (int i = 0; i < N; i++)
	{
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	printf("\n\n");

	printf("Output array: ");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n\n");
	

	for (int i = 1; i < N-1; i++)
	{
		if (A[i] > A[i+1] && A[i] > A[i-1])
		{
			printf("A[%d]=%d\n", i, A[i]);
		}
	}

}