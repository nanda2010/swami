#include<stdio.h>
int main()
{
	int n1=0,n2=1,i,n,sum;
	printf("Number of terms : ");
	scanf("%d",&n);
	printf("Fibonacci series : %d %d ",n1,n2);
	for (i=3;i<=n;i++)
	{
		sum=n1+n2;
		printf("%d ",sum);
		n1=n2;
		n2=sum;
	}
	return 0;
}
