/*
题目描述
你的任务是计算若干整数的和。

输入
每行的第一个数N，表示本行后面有N个数。

输出
对于每一行数据需要在相应的行输出和。

样例输入
4 1 2 3 4
5 1 2 3 4 5
样例输出
10
15
*/



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	int a,N;
	while (scanf("%d\n", &N)!=EOF) {
		int sum = 0;
		while (N > 0) {
			scanf("%d", &a);
			sum = sum + a;
			N--;
		}
		printf("%d\n", sum);
	}
	system("pause");
	return 0;
}
