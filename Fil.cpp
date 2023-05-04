
#include <stdio.h>
int main()
{
	FILE *f;
	int dong, cot;	
	f = fopen("D:/matran.txt", "rt");
	int arr[10][10];
	if(f != NULL)
	{
		fscanf(f, "%d %d", &dong, &cot);
		// Doc du lieu tu file ra ma tran
		for(int i = 0; i < dong; i++)
		{
			for(int j = 0; j < cot; j++)
			{
				fscanf(f, "%d", &arr[i][j]);
			}
		}
		for(int i = 0; i < dong; i++)
		{
			for(int j = 0; j < cot; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		fclose(f);
	}
}
