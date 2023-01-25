#include <stdio.h>
int main(){
    long int binary1, binary2;
    int i = 0, rem = 0, sum[20];
    printf("Enter first binary number: ");
    scanf("%ld", &binary1);
    printf("Enter second binary number: ");
    scanf("%ld", &binary2);
    
    while (binary1 != 0 || binary2 != 0){
        sum[i++] = (binary1 %10 + binary2 % 10 + rem) % 2;
        rem = (binary1 %10 + binary2 % 10 + rem) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (rem != 0)
        sum[i++] = rem;
    --i;
    printf("Sum of two binary numbers is: ");
    while (i >= 0){
        printf("%d", sum[i--]);
    }
    return 0;
}
