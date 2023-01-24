#include<stdio.h>
int main()
{
	int num;
	printf("Enter a integer:");
	scanf("%d",&num);
	if (num>0)
	printf("%d is a positive integer",num);
	if (num<0)
	printf("%d is a negative integer",num);
	if (num==0)
	printf("%d is neither positive nor negative integer",num);
	return 0;
}
