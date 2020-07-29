#include<stdio.h>
main()
{
	int marks;
	printf(" Enter marks of the student::");
	scanf("%d",&marks);
	if(marks>85 && marks<100)
	{
		printf(" Grade A");
	}
	else if(marks<84 && marks>70)
	{
		printf(" Grade B");
	}
	else if(marks<69 && marks>55)
	{
		printf(" Grade C");
	}
	else if(marks<54 && marks>40)
	{
		printf(" Grade D");
	}
	else if(marks<40)
	{
		printf(" grade F");
	}
	else
	{
		printf("INVALID MARKS!!");
	}
}
