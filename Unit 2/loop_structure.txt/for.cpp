//for(循环变量赋初值,循环条件,循环变量改变)



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

