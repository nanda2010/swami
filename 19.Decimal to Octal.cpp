#include<stdio.h>
#include<math.h> 
int convert(int dec);
int main()
{

int dec;
printf("Enter a decimal number: ");
scanf("%d", &dec);
printf("The octal number of %d is %d", dec, convert (dec));
 return 0;
}
int convert(int dec)
{
	int octal=0, i=1;
 	while(dec!=0)
	{
		octal+=(dec%8)*1;
		dec/=8;
		i*=10;
    }
    return octal;
}
