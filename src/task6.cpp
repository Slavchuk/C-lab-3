#define _CRT_SECURE_NO_WARNINGS
#include "task6.h"
#include <stdio.h>
#include <string.h>

int getSumMaxMin(int arr[], int N)
{
	int min = 0, max = 0, sum = 0, i = 0;
	while (i < N)
	{
		if (arr[i] < arr[min])
			min = i;
		else
			if (arr[i] > arr[max])
				max = i;
		i++;		
	}
	if (min > max)
		while (max < min && (max+1) != min)
		{
			sum = sum + arr[max+1];
			max++;
		}
	else
		while (min < max && (min+1) != max)
		{
			sum = sum + arr[min+1];
			min++;
		}
	return sum;
}