/*
要求：
输入一个数字
输出指定数字大小的正方形
形如n=4
****
*  *
*  *
****
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("*\n");
        break;
    case 2:
        printf("**\n**\n");
        break;
    

    
    default:
        break;
    }
}