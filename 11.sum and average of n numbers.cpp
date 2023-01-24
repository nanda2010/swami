#include<stdio.h>
int main()
{
	int n,i,num;
	float sum=0;
	printf("number of terms=");
	scanf("%d",&n);
	printf("Enter %d numbers :\n",n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("Sum = %0.2f \n",sum);
	printf("Average = %0.2f",float(sum)/n);
	return 0;
}
