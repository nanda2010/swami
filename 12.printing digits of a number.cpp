#include<stdio.h>
int main()
{
	int num,d;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("The digits of the number are : \n");
	while (num!=0)
	{
		d=num%10;
		printf("%d\n",d);
		num=num/10;
	}
	return 0;
}
