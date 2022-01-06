/*
已知：每个苹果0.8元，第一天买两个，后一天买前一天的两倍，直到买的苹果个数不超过100。
求：天数与总费用
*/
#include <stdio.h>
int main()
{
    int i0, multi, limit_n, days = 1; //初次买的数量，倍数，数量限制
    float price, cost;                //单价，开销
    price = 0.8;
    multi = 2;
    i0 = 2;
    limit_n = 100;


    while (i0 <= limit_n)
    {
        days++;
        i0 = i0 * multi;
    }
    if(i0>limit_n){
        i0=i0/multi;
        days--;
    }
    cost=i0*price;
    printf("days=%d,cost=%.2f,n=%d\n",days,cost,i0);
    return 0;
}