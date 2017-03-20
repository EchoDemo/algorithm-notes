//for(循环变量赋初值,循环条件,循环变量改变)
//在c语言中值得注意的是不允许在for语句里面声明定义循环变量(int i)是不允许的,但是在c++当中可以这样做


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int i, sum = 0;
	for (i = 1;i <= 100;i++) {
		sum = sum + i;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}

