#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <stdio.h>
#include <string.h>

int getSumInt(int arr[], int N)
{
	int reflective = 0, positive = 0, sum = 0, i = 0;
	while (arr[i] > 0 && arr[i] != '\0')
		i++;
	reflective = i;
	while (arr[N - 1] < 0)
		N--;
	positive = N-1;
	if (reflective > positive)
		sum = 0;
	else
		while (reflective <= positive)
		{
			sum = sum + arr[reflective];
			reflective++;
		}
	return sum;
}