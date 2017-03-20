/*
  求1+2+3+...+100，
  要求用while语句实现

  输入:无

  输出:要求的和，末尾输出换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main(){
   int i=1,sum;
   while(i<=100){
      sum+=i;
      i++;
   }
   printf("%d\n",sum);
   system("pause");
   return 0;
}
