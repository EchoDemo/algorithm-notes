/*
题目描述
你的任务是计算两个整数的和。
输入
输入包含若干行，每行输入两个整数a和b，由空格分隔。
输出
对于每组输入，输出a和b的和，每行输出后接一个空行。
样例输入
1 5
10 20
样例输出
6

30
*/



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	int a,b;
	while (scanf("%d%d", &a,&b)!=EOF) {
		printf("%d\n\n", a+b);
	}
	system("pause");
	return 0;
}
