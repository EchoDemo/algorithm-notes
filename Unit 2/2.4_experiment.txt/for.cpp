/*
  求1+2+3+...+100，即求
  要求用for语句实现

  输入:无

  输出:计算结果，末尾输出换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main(){
   int i,sum;
   for(i=1;i<=100;i++){
      sum+=i;
   }
   printf("%d\n",sum);
   system("pause");
   return 0;
}
