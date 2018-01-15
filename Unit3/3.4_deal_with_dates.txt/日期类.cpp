/*
题目描述
编写一个日期类，要求按xxxx-xx-xx 的格式输出日期，实现加一天的操作。

输入
输入第一行表示测试用例的个数m，接下来m行每行有3个用空格隔开的整数，分别表示年月日。测试数据不会有闰年。

输出
输出m行。按xxxx-xx-xx的格式输出，表示输入日期的后一天的日期。

样例输入
2
1999 10 20
2001 1 31
样例输出
1999-10-21
2001-02-01
*/




#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;


int main() {
	int n, months[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	cin >> n;
	while (n--) {
		int i, j, k;
		cin >> i >> j >> k;
		if ((j == 12)&&(k==31)) {//如果为12月份且日期为31号，则年数加1，月份变为1月，日数变为1日。
			i++;
			j = 1;
			k = 1;
		}
		else {
			if (k != months[j])
				k++;//如果日数不等于当月的最大数，则日数直接加1。
			else {//如果日数等于当月最大数，则月份加1，日数变为1日。
				j++;
				k = 1;
			}
		}
		cout << i<<"-";
		if (j < 10) cout << 0;
		cout << j << "-";
		if (k < 10) cout << 0;
		cout <<k<< endl;
	}
	system("pause");
	return 0;
}




