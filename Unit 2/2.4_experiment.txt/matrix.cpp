/*
  输出以下4*5的矩阵

  1  2  3  4  5

  2  4  6  8 10

  3  6  9 12 15

  4  8 12 16 20

  要求使用循环实现，注意每行输出5个数字，每个数字占3个字符的宽度，右对齐。

  输入:无
  
  输出:每行输出5个数字，每个数字占3个字符的宽度，右对齐。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main(){
   int i,j;
   int a[4][5]={{1,2,3,4,5},{2,4,6,8,10},{3,6,9,12,15},{4,8,12,16,20}};
   for(i=0;i<4;i++){
      for(j=0;j<5;j++){
         printf("%3d",a[i][j]);
      }
      printf("\n");
   }
   system("pause");
   return 0;
}
