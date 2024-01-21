#include<stdio.h>

int add()
{
	static int count =0;
	count++;
	return count;
}

int main()
{
	//calls the function multiple times
	printf("%d\n", add());
	printf("%d\n", add());
	return 0;
}

