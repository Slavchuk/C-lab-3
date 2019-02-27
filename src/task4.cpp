#include "task4.h"
#include <string.h> 


int getSum(char buf[])
{
	int sum = 0;
	int length = strlen(buf);
	for (int i = 0; i < length; i++)
	{
		if ((buf[i] >= '0') && (buf[i] <= '9'))
		{
			if ((buf[i + 1] >= '0') && (buf[i + 1] <= '9'))
			{
				sum = sum + (((int)buf[i] - 48) * 10) + ((int)buf[i + 1] - 48);
				i++;
			}
			else
			{
				sum = sum + ((int)buf[i] - 48);
			}
		}
		else
			continue;
	}
	return sum;
}