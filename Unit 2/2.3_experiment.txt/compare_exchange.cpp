/*
  从键盘输入2个实数，按照代数值由小到大的顺序输出这两个数。

  输入:用空格分隔的两个实数。

  输出:从小到大输出这两个实数，中间以空格来分隔，小数在前，大数在后。
      小数点后保留2位小数。
      末尾输出换行符。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main(){
   double a,b;
   scanf("%lf %lf",&a,&b);
   printf("%.2f %.2f\n",(a>b?b:a),(a>b?a:b));
   system("pause");
   return 0;
}
