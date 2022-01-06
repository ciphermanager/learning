/*
输入 a,b
输出 sum=a+b
*/
#include <stdio.h>
int add(int a,int b);
int main(){
    int a,b,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    sum=add(a,b);
    printf("%d",sum);
    return 0;
}
int add(int a,int b){
    int sum=a+b;
    return sum;
}