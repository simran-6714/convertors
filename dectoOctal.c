//Decimal to octal
#include<stdio.h>
int main(){
    int n, octal = 0, i=1,r;
    printf("Enter a decimal number");
    scanf("%d ",&n);
    while(n!=0){
        r = n%8;
        n= n/8;
        octal = octal + (r *i);
        i = i*10;
    }
    printf("Octal of %d is %d",n,octal);
return 0;
}