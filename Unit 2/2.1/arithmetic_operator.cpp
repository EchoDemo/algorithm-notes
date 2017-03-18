//实现加减乘除法，对于除法运算，需要注意的是，当被除数跟除数都是整数时，并不会得到一个double浮点型的数,而是向下取整

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int a = 5, b = 4,m=5,n=6;
	double c = 1.23, d = 4;
	printf("%d %d\n", a + b, a - b);
	printf("%f\n",c*d);
  printf("%d %d %d\n",a/b,a/c,a/d);	
  system("pause");
    return 0;
}





