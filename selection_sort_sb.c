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
	for (int a=0; a < n ; a++)
	{
		printf("%d  ",arr[a]);
	}
	printf("\n\n");
	for (int i=0 ; i < n ; i++)
	{
		for (int j=i+1 ; j < n ; j++)
		{
			if(arr[i] > arr[j])
			{
				swapper = arr[i];
				arr[i] = arr[j];
				arr[j] = swapper;
			}
		}
		for (int a=0; a < n ; a++)
		{
			printf("%d  ",arr[a]);
		}
		printf("\n");
	}
	printf("\n\n");
	for (int a=0; a < n ; a++)
	{
		printf("%d  ",arr[a]);
	}
	return 0;
}