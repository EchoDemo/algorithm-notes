/*
  输入一个正整数n，求Fibonacci数列的第n个数。Fibonacci数列的特点：第1,2个数为1,1。从第3个数开始，概述是前面两个数之和。即：
  要求输入的正整数n不超过50.

  输入:一个不超过50的正整数

  输出:Fibonacci数列的第n个数，末尾输出换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int fabonacci(int n){
   if(n==1||n==2){
      return 1;
   }
  else{
      return fabonacci(n-1)+fabonacci(n-2);
   }
}

int main(){
   int n;
   scanf("%d\n",&n);
   printf("%d\n",fabonacci(n));
   system("pause");
   return 0;
}
