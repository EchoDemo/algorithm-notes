/*
输入a和b两个整数，按先大后小的顺序输出a和b。注意请使用指针变量的方式进行比较和输出。

输入:两个用空格隔开的整数a和b。

输出:按先大后小的顺序输出a和b，用空格隔开。
请注意行尾输出换行。
*/

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a, b;
	scanf("%d %d", &a,&b);
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d %d\n", (*p1 > *p2) ? *p1 : *p2, (*p1>*p2)?*p2:*p1);
	system("pause");
	return 0;
}
