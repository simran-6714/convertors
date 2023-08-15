//DECIMAL TO HEXADECIMAL
#include<stdio.h>
int main(){
    int n,hexadecimal=0,i=1,r;
    printf("Enter a decimal number");
    scanf("%d",&n);
    while(n!=0){
        r=n%16;
        n = n/16;
        hexadecimal= hexadecimal + (r*i);
        i = i*10;
    }
    printf("Hexa of %d is %X", n, hexadecimal);
   
   }
