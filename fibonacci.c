#include<stdio.h>
int main()
{
	int num1=0,num2=1,sum=0,end=0;
	printf("Enter the end number : ");
	scanf("%d",&end);
	printf("%d , %d",num1,num2);
	while(sum < end)
	{
		sum = num1+num2;
		if (sum >= end)
		{
			return 0;
		}
		printf(" , %d",sum);
		num1 = num2;
		num2 = sum;
	}
}
