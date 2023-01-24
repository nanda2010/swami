#include<stdio.h>
int main()
{
	int sum=0,r,n,i,k;
	printf("Enter a number:");
	scanf("%d",&n);
	k=n;
	while (k!=0)
	{
		r=k%10;
		sum=sum+(r*r*r);
		k=k/10;
	}
	if (sum==n)
		printf("%d is a armstrong number",n);
	else
		printf("%d is not a armstrong number",n);
	return 0;
}
