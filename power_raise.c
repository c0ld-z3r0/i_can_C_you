#include<stdio.h>
int main()
{
	int num,pow,res=1,a;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Enter the power you want to raise : ");
	scanf("%d",&pow);
	for (a=1;a<=pow;a++)
	{
		res = res * num;
	}
	printf("%d to the power of %d is %d.",num,pow,res);
	return 0;
}
