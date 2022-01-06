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
    int n,i,j;
    scanf("%d",&n);
    printf("\n");
        for(i=n;i>0;i--){//行循环
            for(j=n;j>0;j--){//列循环
                if(i==1||i==n||j==1||j==n){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    return 0;
}