#include <stdio.h>
 #include <math.h>
int main()
{
long int octal, deci=0;
 int i=0;

printf("Enter an octal number: "); 
scanf("%ld", &octal); 
while (octal != 0)

{
	deci+=(octal % 10)*pow (8, i++);
	octal/=10;
}
printf("The decimal value is: %ld",deci);
return 0;
}
