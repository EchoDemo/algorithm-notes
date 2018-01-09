/*
题目描述:
你的任务是计算a+b。

输入:
第一行是一个整数N，表示后面会有N行a和b，通过空格隔开。

输出:
对于输入的每对a和b，你需要在相应的行输出a、b的和。
如第二对a和b，对应的和也输出在第二行。
样例输入:
2
1 5
10 20
样例输出:
6
30
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	int a, b,T;
	scanf("%d\n", &T);
	while (T>0) {
		scanf("%d%d", &a, &b);
		printf("%d\n", a + b);
		T--;
	}
	system("pause");
	return 0;
}
