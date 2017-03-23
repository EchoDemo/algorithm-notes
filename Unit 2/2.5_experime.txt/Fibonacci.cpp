/*
Fibonacci数列的特点：第1,2个数为1,1。从第3个数开始，概述是前面两个数之和。 

要求输出Fibonacci数列的前20个数。

输入:无
输出:Fibonacci数列的前20个数，每个数占一行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int Fibonacci(int i) {
	if (i == 1 || i == 2)
		return 1;
	else
		return Fibonacci(i - 1) + Fibonacci(i - 2);
}

int main() {
	int a[20];
	for (int i = 0;i < 20;i++) {
		a[i] = Fibonacci(i + 1);
		printf("%d\n", a[i]);
	}

	system("pause");
	return 0;
}
