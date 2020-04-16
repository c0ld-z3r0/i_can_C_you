#include <stdio.h>

int main()
{
	int n=10,swapper=0;
	int arr[n];
	for (int a=0; a < n ; a++)
	{	
		int b = a+1;
		printf("Enter %d Element : ",b);
		scanf("%d",&arr[a]);
	}
	for (int i=0; i < 9; i++)
	{
		for(int j=0; j < (10-i); j++)
		{
			if(arr[j] > arr[j+1])
			{
				swapper = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swapper;
			}
		}
	}
	for (int a=0; a < n ; a++)
	{
		printf("%d  ",arr[a]);
	}
	return 0;
}