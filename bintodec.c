//binary to decimal
#include<stdio.h>
int main() {
    int decimal=0,n,temp,r,i=1;
    printf("Enter a binary number");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        r = n%10;
        n =n/10;
        decimal = decimal + (r*i);
        i = i*2;
}
printf("decimal number of %d is %d",temp,decimal);

}