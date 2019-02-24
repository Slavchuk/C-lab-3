#include "task1.h"
#include <stdio.h> 
#include <string.h>

int wordCount(char buf[])
{
	int length = strlen(buf);
	int count = 0, i = 0;
	while (buf[i] == ' ')
		i++;
	if (buf[i] != '\n')
	{
		for (int j = i; j < length; j++)
		{
				if (buf[j] == ' ' && buf[j + 1] != ' ' && buf[j + 1] != '\n' || buf[j] == '\n' || buf[j + 1] == '\0')
					count++;
		}
		
	}
	return count;
}