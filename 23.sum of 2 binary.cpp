#include<stdio.h>
int main()
{
	long bin1,bin2;
	int i=0,rem=0,sum[20];
	printf("enter the first binary num:");
	scanf("%ld",&bin1);
	printf("enter the second binary num:");
	scanf("%ld",&bin2);
	while (bin1!=0||bin2!=0)
	{
		sum[i++]=(bin1%10+bin2%10+rem)%2;
		rem=(bin1%10+bin2%10+rem)/2;
		bin1/=10;
		bin2/=10;
	}
	if (rem!=0)
		sum[i++]=rem;
	--i;
	printf("\nsum of two binary numbers:");
	while(i>=0)
		printf("%d",sum[i--]);
	return 0;
}
