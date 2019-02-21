#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#define SIZE 256

int main()
{
	puts("Enter string: ");
	char str[SIZE] = { 0 };
	char buf[SIZE][SIZE] = { 0 };
	fgets(str, SIZE, stdin);
	int length = strlen(str);
	int start = 0, count = 0,k = 0,i= 0;
	while (str[start] == ' ')
		start++;
	if (str[start] != '\n')
	{
		for (int j = start; j < length; j++)
		{
			if (str[j] == ' ' && str[j + 1] != ' ' && str[j + 1] != '\n' || str[j] == '\n' || str[j + 1] == '\0')
				count++;
		}
	}
		for (int j = start; j < length; j++)
		{
			if (str[j] != ' ' && str[j] != '\n')
			{
				buf[k][i] = str[j];
				i++;
			}
			else
				if (str[j] == ' ' && str[j + 1] != ' ')
				{
					k++;
					i = 0;
				}			
		}
		for (int j = 0; j < count; j++)
		{
			printf("%s word length: %d\n", buf[j], strlen(buf[j]));
		}
		
	
	return 0;
}