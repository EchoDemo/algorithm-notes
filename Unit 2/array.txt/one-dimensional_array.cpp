//一维数组的初始化,需要给出用逗号隔开的从第一个元素开始的若干元素的值,并用大括号括住,后面未赋值的一般默认为0



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int i,a[10] = { 5,3,2,6,8,4 };
	for (i =0 ;i <10;i++) {
		printf("a[%d]=%d\n", i, a[i]);
	}
	system("pause");
	return 0;
}

