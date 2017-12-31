/*
  用如下公式
![](https://github.com/EchoDemo/algorithm-notes/blob/master/Unit2/2.4_experiment.txt/image/pi.jpg)
  求圆周率PI的近似值，直到发现某一项的绝对值小于10-6为止（该项不累加）。
  要求输出的结果总宽度占10位，其中小数部分为8位。
  程序中使用浮点型数据时，请定义为双精度double类型。
  如果需要计算绝对值，可以使用C语言数学库提供的函数fabs，如求x的绝对值，则为fabs(x).

  输入:无

  输出:
     PI=圆周率的近似值
     输出的结果总宽度占10位，其中小数部分为8位。
     末尾输出换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<math.h>

int main()
{
    int sign=1;
    double n=1.0,term=1.0,pi=0.0;
    while(fabs(term)>=(1e-6)){
        pi=pi+term;
        sign=-sign;
        n=n+2;
        term=sign/n;
    }
    pi=pi*4;
    printf("PI=%10.8f\n",pi);
    system("pause");
    return 0;
}
