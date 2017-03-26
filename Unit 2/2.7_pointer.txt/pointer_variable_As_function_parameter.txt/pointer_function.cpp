//指针类型作为函数的参数，视为把变量的地址传入函数，如果在函数中对这个地址中的元素进行改变，原先的数据确实会被改变。


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

void change(int* p) {
	*p = 2333;
}

int main() {
	int a = 1;
	int* p = &a;
	change(p);
	printf("%d\n", a);
	system("pause");
	return 0;
}
