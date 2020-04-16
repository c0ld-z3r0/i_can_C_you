#include<stdio.h>
int main(void)
{
	int len,b,temp;
	printf("Enter the length of array you want to enter : ");
	scanf("%d",&len);
	int arr[len];
	for (int i=0 ; i < len; i++) // This part of the block takes the len n.o of inputs
	{	
		b = i+1;
		printf("Enter element N.o %d : ",b);
		scanf("%d",&arr[i]);
	}
	for (int i=0 ; i < len; i++) // This part will check for duplicates and give them some value so that it is recognizable
	{
		temp = arr[i];
		for (int j = i+1; j < len;j++)
		{
			if (temp == arr[j])
			arr[j]=-99999;
		}
	}
	printf("The Unique elements int this array is\n");
	for (int i=0 ; i < len; i++) // This part will print the array after ignoring duplicates
	{
		if (arr[i] != -99999)
		printf("%d    ",arr[i]);
	}
}
// This program is written by c0ld_Z3r0
// https://github.com/c0ld-z3r0/
