/*
题目描述
如题，输入一个日期，格式如：2010 10 24 ，判断这一天是这一年中的第几天。

输入
第一行输入一个数N（0<N<=100）,表示有N组测试数据。后面的N行输入多组输入数据，每行的输入数据都是一个按题目要求格式输入的日期。

输出
每组输入数据的输出占一行，输出判断出的天数n

样例输入
3
2000 4 5
2001 5 4
2010 10 24
样例输出
96
124
297
*/


#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

int dates(int i, int j, int k) {
	int d = 0,Months[] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
	d = Months[j - 1] + k;
	if ((j > 2) && (!(i % 400) || ((!i % 4) && (i % 100))))
		d++;//如果为闰年并且月份大于2则加1。
	return d;
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		int i, j, k;
		cin >> i >> j >> k;
		cout << dates(i, j, k)<< endl;
	}
	system("pause");
	return 0;
}
