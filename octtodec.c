//Octal to decimal
#include<stdio.h>
int main(){
int n, decimal = 0, i=1 ,r;
printf("Enter the octal number");
scanf("%d",&n);
while(n!=0){
    r = n%10;
    n = n/10;
    decimal = decimal + (r * i);
    i = i*8;
}
printf("Decimal number of %d is %d",n,decimal);

}