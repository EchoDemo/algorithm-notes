/*
题目描述
输入数组长度 n 
输入数组      a[1...n] 
输入查找个数m 
输入查找数字b[1...m] 
输出 YES or NO  查找有则YES 否则NO 。

输入
输入有多组数据。
每组输入n，然后输入n个整数，再输入m，然后再输入m个整数（1<=m<=n<=100）。

输出
如果在n个数组中输出YES否则输出NO。

样例输入
6
3 2 5 4 7 8
2
3 6
样例输出
YES
NO
 */


#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;


int main() {
	int n,i;
	while (cin >> n) {
		int *a = new int[n];
		for (i = 0;i < n;i++) {
			cin >> a[i];
		}
		int m;
		cin >> m;
		int *b = new int[m];
		for (i = 0;i < m;i++) {
			cin >> b[i];
		}

		for (i = 0;i < m;i++) {
			int k = 0;
			for (int j = 0;j < n;j++) {
				if (b[i] == a[j]) {
					break;
				}
				k++;
			}
			if (k < n) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
		delete[] b;
		delete[] a;
	}
	system("pause");
	return 0;
}
