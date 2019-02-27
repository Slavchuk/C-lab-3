#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
	int sum=0, min=0, max = 0;
	for (int i = 1; i < N; i++)
	{
		if (arr[i] < arr[min])
			min = i;
	}
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > arr[max])
			max = i;
	}
	if (min < max)
		for (int i = min + 1; i < max; i++)
			sum += arr[i];
	else
		for (int i = max + 1; i < min; i++)
			sum += arr[i];
	return sum;
}
