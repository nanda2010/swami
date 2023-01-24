#include<stdio.h>
int main()
{
	int r,num;
	printf("Enter a number to be reversed:");
	scanf("%d",&num);
	while (num!=0)
	{
		r=num%10;
		printf("%d",r);
		num=num/10;
	}
	return 0;
}

