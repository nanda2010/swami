#include<stdio.h>
int main()
{
	int num,sum=0,d;
	printf("Enter a number whose digits are to be added:");
	scanf("%d",&num);
	while (num!=0)
	{
		d=num%10;
		sum=sum+d;
		num=num/10;
	}
	printf("The sum of the digits is %d",sum);
	return 0;
}
