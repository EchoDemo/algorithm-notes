/*
  求一元二次方程ax2+bx+c=0的根，三个系数a, b, c由键盘输入，且a不能为0，且保证b2-4ac>0。
  程序中所涉及的变量均为double类型。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<math.h>

int main(){
   double a,b,c,d;
   scanf("%lf %lf %lf\n",&a,&b,&c);
   d=b*b-4*a*c;
   if(!a){
      printf("error,a=0");//a为零，则输出error;
   }
   else{
      if(d<0){
         printf("error,b*b-4*a*c<0");//如果b的平方减4ac小于0,报错;
      }
      else{
         printf("r1=%7.2f\nr2=%7.2f",(-b+ sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
      }
   }
   system("pause");
   return 0;
}   
