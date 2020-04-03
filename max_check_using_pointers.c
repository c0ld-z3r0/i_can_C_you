#include<stdio.h>

void max_check(int *a,int *b,int *mx)
{
    if ( (*a) > (*b) )
        (*mx) = (*a);
    else if ( (*a) < (*b) )
        (*mx) = (*b);
}
int main()
{
    int n1,n2,max;
    printf("Enter two number to get maximum : ");
    scanf("%d %d",&n1,&n2);
    max_check(&n1,&n2,&max);
    printf("The maximum value is : %d",max);
    return 0;
}
