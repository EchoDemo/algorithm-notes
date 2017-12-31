//define和const的不同在于，末尾不需要加分号并且不需要声明常量的类型，当然它还可以用来定义任何语句或者片段，不过不推荐使用


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

#define pi 3.14   //定义常量；

int main()
{
	double r = 3;
	printf("%.2f\n", pi*r*r);//求圆的面积；
        system("pause");
	return 0;
}

