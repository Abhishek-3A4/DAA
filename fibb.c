#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	return fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	fib(n);
	printf("Nth fibonnacci no is %d",fib(n));
	return 0;
}
