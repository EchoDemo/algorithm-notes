/*
题目描述
写个算法，对2个小于1000000000的输入，求结果。特殊乘法举例：123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5
输入
 两个小于1000000000的数

输出
 输入可能有多组数据，对于每一组数据，输出Input中的两个数按照题目要求的方法进行运算后得到的结果。

样例输入
24 65
42 66666
3 67
样例输出
66
180
39
*/



#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;


int main() {
	int m, n;
	while (cin >> m >> n) {//多次输入；
		int sum = 0, i = 0, j = 0, a[9], b[9];//注意定义,sum,i,j和数组要在第一个while内部进行定义。
		while (m) {//将m的各个位的数值存入数组；
			a[i++] = m % 10;
			m = m / 10;
		}
		while (n) {//将n的各个位的数值存入数组
			b[j++] = n % 10;
			n = n / 10;
		}
		for (int x = 0;x < i;x++) {//计算总和；
			for (int y = 0;y < j;y++) {
				sum = sum + a[x] * b[y];
			}
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}
