/*
  有如下分数序列
  http://www.codeup.cn/attached/image/20141023/20141023210955_16216.jpg
  求出次数列的前20项之和。请将结果的数据类型定义为double类型。

  输入:无

  输出:小数点后保留6位小数，末尾输出换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main(){
   int i=1;
   double tmp,a=1,b=2,sum=0;
   for(i=1;i<=20;i++){
      sum+=(b/a);
      tmp=a+b;
      a=b;
      b=tmp;
   }
   printf("%.6f\n",sum);
   system("pause");
   return 0;
}
