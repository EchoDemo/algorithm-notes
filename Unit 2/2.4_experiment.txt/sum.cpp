/*
  编程实现求1+2+3+...和的程序，要求得到使使和数大于1000的最小正整数。

  输入：无
  
  输出：输出使1+2+3+...+N>1000的最小正整数N，末尾输出换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main(){
   int i=1,sum=0;
   while(sum<=1000){
      sum+=i;
      i++;
   }
   printf("%d\n",i-1);
   system("pause");
   return 0;
}
