/*
已知：从第一天开始，猴子每天吃掉一半零一个桃子，到第i天没吃，还剩1个
问：桃子原来有几个
*/
/*
分析 
ai=a[i-1]/2-1
a[i-1]=2ai+2
共执行了i-1次
*/
#include <stdio.h>
int main(){

    int i,m;//第i天有m个桃子
    scanf("%d",&i);
    scanf("%d",&m);
    while(i>1){
        i--;//10,9,8,7,6,5,4,3,2
        m=2*m+2;
    }
    printf("%d,%d",i,m);


    return 0;
}