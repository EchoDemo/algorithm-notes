/*
题目描述
The task is really simple: given N exits on a highway which forms a simple cycle, you are supposed to tell the shortest distance between 

any pair of exits.

输入
Each input file contains one test case. For each case, the first line contains an integer N (in [3, 105]), followed by N integer distances 

D1 D2 ... DN, where Di is the distance between the i-th and the (i+1)-st exits, and DN is between the N-th and the 1st exits. All the 

numbers in a line are separated by a space. The second line gives a positive integer M (<=104), with M lines follow, each contains a pair 

of exit numbers, provided that the exits are numbered from 1 to N. It is guaranteed that the total round trip distance is no more than 107.

输出
For each test case, print your results in M lines, each contains the shortest distance between the corresponding given pair of exits.

样例输入
5 1 2 4 14 9
3
1 3
2 5
4 1

样例输出
3
10
7
*/



#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;



int main() {
	int n,sum=0;
	cin >> n;
	int *a = new int[n+1];
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
		sum += a[i];//统计一圈的总和；
	}

	int m;
	cin >> m;
	while (m--) {
		int i, j,s=0;
		cin >> i >> j;
		if (i > j) {//令i小j大；
			int temp = j;
			j = i;
			i = temp;
		}
		for (int k = i;k < j;k++) {
			s += a[k];//顺时针方向的路径长度；
		}
		cout << ((s < (sum - s)) ? s : sum - s) << endl;//输出最短路径长度；
	}
	delete[] a;//内存回收；
	system("pause");
	return 0;
}

