#include "Header.h"

void deleteArr(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		delete[] * (arr + i);
	}
	delete[] arr;
}

int* createNewArr(int** arr, int n, int n2) 
{
	int* newArr = new int[n2];
	for (int j = 0; j < n2; j++)
	{
		int sum = 0;
		int lastNeg = -1;
		for (int i = 0; i < n; i++)
		{
			if (*(*(arr + i) + j) < 0) lastNeg = i;
		}
		for (int i = 0; i < lastNeg; i++) 
		{
			sum += *(*(arr + i) + j);
		}
		
		if(lastNeg == -1) *(newArr + j) = -1;
		else *(newArr + j) = sum;
	}
	deleteArr(arr, n);
	return newArr;
}


