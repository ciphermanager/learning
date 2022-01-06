/*
输入 n=3
输出
  *
 * *
* * * 
*/
#include <stdio.h>
int main(){
  int n,i,j;
  //scanf("%d",&n);
  printf("\n");
  for (i=1;i<=n;i++){
    for(j=1;j<2*n;j++){
      if(j==n-i+1||j==n+i-1||(i==n&&j%2==1)){
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