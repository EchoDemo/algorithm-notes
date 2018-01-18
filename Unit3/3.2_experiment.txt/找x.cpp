/*
题目描述
输入一个数n，然后输入n个数值各不相同，再输入一个值x，输出这个值在这个数组中的下标（从0开始，若不在数组中则输出-1）。

输入
测试数据有多组，输入n(1<=n<=200)，接着输入n个数，然后输入x。

输出
对于每组输入,请输出结果。

样例输入
4
1 2 3 4
3
样例输出
2
 */


#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;


int main() {
	int n;
	while (cin >> n) {
		int *a = new int[n];
		for (int i = 0;i < n;i++) {
			cin >> a[i];
		}
		int m,i;
		cin >> m;
		for (i = 0;i < n;i++) {
			if (a[i] == m)
				break;
		}
		delete[] a;
		cout << i << endl;
	}
	system("pause");
	return 0;
}