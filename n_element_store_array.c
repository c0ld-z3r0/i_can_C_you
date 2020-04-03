#include<stdio.h>
int main()
{
    int n,val;
    printf("Enter total number of elements you want to store in the array : ");
    scanf("%d",&n);
    int arr[n];
    for (int a = 0 ; a < n ; a++)
    {
        val = 0;
        printf("Enter %d element : ",a);
        scanf("%d",&val);
        arr[a] = val;
        printf("\n");
    }
    printf("The array elements are : \n");
    for (int b = 0 ; b < n ; b++)
    {
        printf("%d  ",arr[b]);
    }
    return 0;
}
