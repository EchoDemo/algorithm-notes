/*
  输入一个正整数N，求1+2+...+N，即求
  要求在程序中使用break语句。 

  输入:要求输入的数据一定是一个正整数。

  输出:计算的结果，连续N个自然数的和，末尾输出换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main(){
   int i=1,N,sum;
   scanf("%d",&N);
   while(1){
      if(i>N) break;
      sum+=i;
      i++;
   }
   printf("%d\n",sum);
   system("pause");
   return 0;
}
