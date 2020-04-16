#include<stdio.h>
int main()
{
	int num,end,a=0;
	printf("Enter the number for table : ");
	scanf("%d",&num);
	printf("Enter the last number for table : ");
	scanf("%d",&end);
	for(a=1;a<=end;a++)
	{
		printf("\n%d X %d = %d",num,a,(num*a));
	}
	return 0;
}
