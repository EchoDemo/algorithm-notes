/*
  求1+2+3+...+100，即求
  要求用do...while语句实现

  输入:无

  输出:计算结果，注意末尾输出换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main(){
   int i=1,sum;
   do{
      sum+=i;
      i++;
   }while(i<=100);
   printf("%d\n",sum);
   system("pause");
   return 0;
}
