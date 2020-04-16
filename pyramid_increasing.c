#include<stdio.h>
int main()
{
	int i,j,val=3,num=1;
	for(i=1;i<=val;i++)
	{
		for(j=1;j<=val-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%d",num);
			num++;
		}
		for(j;j>1;j--)
		{
			printf("%d",num);
			num++;
		}
		printf("\n");
	}
	return 0;
}
