#include<stdio.h>
//void max_calc(int *,int *,int *);

int max_calc(int *a,int *b)
{
	int mx;
	if((*a) > (*b))
		{mx = (*a);}
	else if((*a) < (*b))
		{mx = (*b);}
	return (mx);
}
void main()
{
	int num1,num2,maximum;
	scanf("%d %d",&num1,&num2);
	printf(max_calc(&num1,&num2));
	
}
