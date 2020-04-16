#include<stdio.h>
int main()
{
	int val = 0,i,j,num;
	printf("Enter the number upto which pattern will print :");
	scanf("%d",&val);
	for(i=0;i<val;i++)
	{
		for(j=0;j<=val-i;j++)
		{
			printf(" ");
		}
		for(num=1;num<=i;num++)
		{
			printf("%d",num);
		}
		for(num;num>=1;num--)
		{
			printf("%d",num);
		}
		num=1;
		printf("\n");
	}
	val=val-1;
	for(i=val;i>=1;i--)
	{
		printf("  ");
		for(j=0;j<=val-i;j++)
		{
			printf(" ");
		}
		for(num=1;num<i;num++)
		{
			printf("%d",num);
		}
		for(num;num>=1;num--)
		{
			printf("%d",num);
		}
		num=1;
		printf("\n");
	}
}
