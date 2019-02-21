#include "task4.h"
#include <stdio.h>
#include <string.h>

int getSum(char buf[])
{
	int sum = 0, temp = 0;
	for (int i = 0, n = 0; buf[i+1] != '\0'; i++)
	{
		if (buf[i] >= '0' && buf[i] <= '9')
		{
			if (n < 3)
			{
				temp = temp * 10;
				temp = temp + (buf[i] - '0');
				n++;
			}
			else
			{
				sum = sum + temp;
				temp = 0;			
				n = 0;
				i--;
			}
		}
		else
		{
			sum = sum + temp;
			temp = 0;
			n = 0;
		}
	}
	sum = sum + temp;
	return sum;
}