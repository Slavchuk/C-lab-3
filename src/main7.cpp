#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main()
{
	char line[256] = { 0 };
	int arr[256][2] = { 0 };
	puts("Vvedite stroky: ");
	fgets(line, SIZE, stdin);
	int i = 0, temp = 0;
	while (line[i] !='\n')
	{
		temp = line[i];
		arr[temp][0] = temp;
		arr[temp][1] = arr[temp][1] + 1;
		i++;
	}
	for (int j = 0; j < 256; j++)
	    arr[j][0] = j;	
	for (i = 0; i < 256; i++)
	{
		for (int j = 0; j < 256 - i - 1; j++)
		{			
			if (arr[j][1] < arr[j+1][1])
			{
				int temp = arr[j][1];
				arr[j][1] = arr[j+1][1];
				arr[j+1][1] = temp;
				temp = arr[j][0];
				arr[j][0] = arr[j + 1][0];
				arr[j + 1][0] = temp;
			}
		}		
	}
	for (int i = 0; i < 256; i++)
	{
		printf("%c\t%d\n", arr[i][0], arr[i][1]);
	}
	return 0;
}