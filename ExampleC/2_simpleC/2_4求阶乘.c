#include <stdio.h>
unsigned long int factorial(unsigned int n);
int main(){
    unsigned int n;
    //n=-1;
    scanf("%d",&n);
    printf("\n%ld\n",factorial(n));
    return 0;
}
unsigned long int factorial(unsigned int n){
    unsigned long int req=1;
    unsigned int i;
    if (n>31) return 0;//太大
    for (i=1;i<=n;i++) req=req*i;
    return req;
}