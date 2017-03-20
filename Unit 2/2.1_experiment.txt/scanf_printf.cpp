/*
  从键盘输入三个字符BOY，然后把他们输出到屏幕上
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main(){
   char a,b,c;
   scanf("%c%c%c",&a,&b,&c);
   printf("%c%c%c\n",a,b,c);
   system("pause");
   return 0;
}
