#include<stdio.h>
int main()
{
	int a,b,c;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("\nBefore swapping : \na = %d\nb = %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter swapping : \na = %d\nb = %d",a,b);
	return 0;
}
