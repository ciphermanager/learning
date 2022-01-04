/*
说明：计算并输出两数和
*/
#include <stdio.h>
int add(int a,int b);
int main(){
int a,b;
scanf("%d",&a);
scanf("%d",&b);
printf("%d",add(a,b));
    return 0;
}
int add(int a,int b){
// 计算两数和
    return a+b;
}