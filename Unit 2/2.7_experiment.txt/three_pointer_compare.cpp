/*
输入a、b、c三个整数，按先大后小的顺序输出a、b和c。注意请使用指针变量的方式进行比较和输出。

输入:三个用空格隔开的整数a、b和c。

输出:按先大后小的顺序输出a、b和c，用空格隔开。
请注意行尾输出换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a, b,c;
	scanf("%d %d %d", &a,&b,&c);
	int *p1, *p2,*p3;
	p1 = &a;
	p2 = &b;
	p3 = &c;

	if (*p1 < *p2) {
		int temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
	if (*p1 < *p3) {
		int temp = *p1;
		*p1 = *p3;
		*p3 = temp;
	}
	if (*p2 < *p3) {
		int temp = *p3;
		*p3= *p2;
		*p2 = temp;
	}
	printf("%d %d %d\n",*p1,*p2,*p3);
	system("pause");
	return 0;
}
