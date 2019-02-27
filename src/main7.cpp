#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

#define SIZEBUF 256

int main()
{
	printf("Enter a string\n");
	char buf[SIZEBUF];
	int num[SIZEBUF] = { 0 };
	int count = 0;

	fgets(buf, SIZEBUF, stdin);

	for (int i = 0; i < strlen(buf); i++)	
	{
		for (int j = 0; j <= strlen(buf); j++)
		{
			if (buf[i] == buf[j])
			{
				count++;
			}
			if (buf[j] == 0)
			{
				num[i] = count;
				count = 0;
			}
		}
	}

	for (int i = 0; i < strlen(buf) - count; i++)
	{
		for (int j = i + 1; j < strlen(buf) - count; j++)
		{
			if (buf[i] == buf[j])
			{
				for (int k = j; k< strlen(buf) - count; k++)
				{
					num[k] = num[k + 1];
					buf[k] = buf[k + 1];
				}
				count++;
				i = 0;
			}
		}
	}
	for (int i = 0; i < strlen(buf); )		
	{
		if (num[i + 1] > num[i])
		{
			int temp1 = num[i];
			char temp2 = buf[i];

			num[i] = num[i + 1];
			num[i + 1] = temp1;

			buf[i] = buf[i + 1];
			buf[i + 1] = temp2;
			i = 0;
		}
		else
		{
			i++;
		}
	}

	printf("Symbol and his frequency\n");
	for (int i = 0; i < strlen(buf); i++)
	{
		if (buf[i + 1] == 0 || buf[i + 1] == '\n')
			i = strlen(buf);
		else
			printf("%5c %5d\n", buf[i], num[i]);
	}

	return 0;
}