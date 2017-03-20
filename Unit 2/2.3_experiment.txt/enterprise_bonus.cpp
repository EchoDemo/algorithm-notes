/*
  某企业发放的奖金根据利润提成。利润I低于或等于100000时，奖金可提10%；利润高于100000元，低于200000元（100000<I<=200000）时，
  低于100000元的部分仍按10%提成，高于100000元的部分提成比例为7.5%；200000<I<=400000时，低于200000元的部分仍按上述方法提成（下同），
  高于200000元的部分按5%提成；400000<I<=600000元时，高于400000元的部分按3%提成；600000<I<=1000000时，高于600000元的部分按1.5%提成；
  I>1000000元时，超过1000000元的部分按1%提成。从键盘输出当月利润I，求应发奖金数，奖金精确到分。要求用if语句实现。

  输入:企业利润，小数，双精度double类型

  输出:应发奖金数，保留2位小数，末尾换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main(){
    double I,p;
    scanf("%lf",&I);
    if(I<=100000){
        p=I*0.1;
    }else if(I<=200000){
        p=100000*0.1+(I-100000)*0.075;
    }else if(I<=400000){
        p=100000*0.1+100000*0.075+(I-200000)*0.05;
    }else if(I<=600000){
        p=100000*0.1+100000*0.075+200000*0.05+(I-400000)*0.03;
   }else if(I<=1000000){
        p=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(I-600000)*0.015;
   }else{
        p=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(I-1000000)*0.001;
   }
    printf("%.2f\n",p);
    system("pause");
    return 0;
}
