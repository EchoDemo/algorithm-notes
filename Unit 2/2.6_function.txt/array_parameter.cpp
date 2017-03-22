//函数的参数也可以是数组，且数组作为参数时，参数中数组的第一维不需要填写长度（如果是二维数组，那么二维需要填写长度）
//与局部变量不同的是，在函数中对数组元素的修改就等同于是对原数组原数组元素的修改。

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

void change(int a[],int b[][5]) {
	a[0] = 1;
	a[1] = 3;
	a[2] = 5;
	b[0][0] = 1;
}

int main() {
	int a[3] = { 0 };
	int b[5][5] = { 0 };
	change(a, b);
	for (int i = 0;i < 3;i++) {
		printf("%d\n", a[i]);
	}
	system("pause");
	return 0;
}
