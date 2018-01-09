/*
题目描述
你的任务是计算若干整数的和。
输入
输入的第一行为一个整数N，接下来N行每行先输入一个整数M，然后在同一行内输入M个整数。

输出
对于每组输入，输出M个数的和，每组输出之间输出一个空行。
样例输入
3
4 1 2 3 4
5 1 2 3 4 5
3 1 2 3
样例输出
10

15

6
*/



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	int a, N, M;
	scanf("%d\n", &N);
	while (N>0) {
		N--;
		int sum = 0;
		scanf("%d", &M);
		while (M > 0) {
			scanf("%d", &a);
			sum = sum + a;
			M--;
		}
		printf("%d\n\n", sum);
	}
	system("pause");
	return 0;
}
