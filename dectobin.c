// convert decimal to binary
#include <stdio.h>
int main()
{
    int n, binary=0, r, temp, i = 1;
    printf("Enter the decimal number");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 2;
        n = n / 2;
        binary = binary + (r * i);
        i = i*10;
    }
    printf("Binary of %d is %d" ,n,binary);
 
}