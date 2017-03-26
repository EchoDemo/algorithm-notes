//数组名称也可以作为数组的首地址使用；

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a[10] = { 1 };
	int* p = a;
	printf("%d\n",*p);//即输出a[0];
	system("pause");
	return 0;
}
