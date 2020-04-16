#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your Marks for grade : ");
	scanf("%d",&marks);
	if (marks>100 || marks < 0)
	{
		return 0;
	}
	else if(marks < 40)
	{
		printf("Your grade is E");
	}
	else if(marks >=40 && marks < 60)
	{
		printf("Your grade is D");
	}
	else if(marks >=60 && marks < 75)
        {
                printf("Your grade is C");
        }
	else if(marks >=75 && marks < 90)
        {
                printf("Your grade is B");
        }
	else if(marks >=90 && marks <= 100)
        {
                printf("Your grade is A");
        }
	return 0;
}
