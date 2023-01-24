#include<stdio.h>
int main()
{
	int i=1,n,fact=1;
	printf("Enter a number to find the factorial:");
	scanf("%d",&n);
	while (i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("The factorial of %d = %d",n,fact);
	return 0;
}
