//Hexadecimal to decimal
#include<stdio.h>
int main(){
 int r,n, hexa,decimal=0,i=1;
 printf("Enter the hexa number");
 scanf("%d",&n);
 while(n!=0){
    r = n%10;
    n= n/10;
    decimal = decimal + (r*i);
    i = i*16; 
 }
 printf("Decimal no. of %X is %d", hexa, decimal);

}