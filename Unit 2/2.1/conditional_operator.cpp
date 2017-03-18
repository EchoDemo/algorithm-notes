//三目运算符较适合于简单的if_else的情况之下使用



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int a = 3, b = 5;
	int c = a > b ? 7 : 11;
	printf("%d\n",c);
	system("pause");
  return 0;
}

