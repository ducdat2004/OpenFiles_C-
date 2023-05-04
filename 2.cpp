#include <stdio.h>
int main()
{
	FILE *f;
	f = fopen("D:/a.txt.txt", "rt");
	char arr[100];
	int j = 0;
	if(f != NULL)
	{
		while(fscanf(f, "%c", &arr[j]) != NULL)
		{
			printf("%c", arr[j]);			
		}
	}
}
