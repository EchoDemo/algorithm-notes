/*
题目描述
第一行输入一个数，为n，第二行输入n个数，这n个数中，如果偶数比奇数多，输出NO，否则输出YES。

输入

输入有多组数据。
每组输入n，然后输入n个整数（1<=n<=1000）。


输出

如果偶数比奇数多，输出NO，否则输出YES。


样例输入
1
67 
7
0 69 24 78 58 62 64 
样例输出
YES
NO
*/


#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;


int main() {
	int n;
	while (cin >> n) {
		vector<int> a(n);//用于可变长的数组；
		for (int i = 0;i < n;i++) {//初始化数组；
			cin >> a[i];
		}
		int x = 0, y = 0;
		for (int i = 0;i < n;i++) {//统计偶数和奇数个数；
			if (a[i] % 2 == 0) {
				x++;
			}
			else {
				y++;
			}
		}
		if (x > y) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	system("pause");
	return 0;
}
