/*
  从键盘输入3个实数a, b, c，通过比较交换，将最小值存储在变量a中，最大值存储在变量c中，中间值存储在变量b中，并按照从小到大的顺序输出这三个数a, b, c。
  末尾输出换行。

  输入:输入以空格分隔的三个实数

  输出:按照从小到大的顺序输出这三个实数，中间以空格分隔，最小值在前，最大值在后。小数点后保留2位小数。
       注意末尾的换行。
 */
 
 
#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main(){
   double a,b,c,d;
   scanf("%lf %lf %lf",&a,&b,&c);
   if(a>b){
      d=a;
      a=b;
      b=d;
   }
   if(a>c){
         d=c;
         c=a;
         a=d;
   }  
   if(b>c){
             d=c;
             c=b;
             b=d;
         }
   printf("%.2f %.2f %.2f\n",a,b,c);
   system("pause");
   return 0;
}
