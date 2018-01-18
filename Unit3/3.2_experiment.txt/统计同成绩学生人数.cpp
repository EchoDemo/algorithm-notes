/*
题目描述
读入N名学生的成绩，将获得某一给定分数的学生人数输出。

输入
测试输入包含若干测试用例，每个测试用例的格式为

第1行：N
第2行：N名学生的成绩，相邻两数字用一个空格间隔。
第3行：给定分数

当读到N=0时输入结束。其中N不超过1000，成绩分数为（包含）0到100之间的一个整数。

输出
对每个测试用例，将获得给定分数的学生人数输出。

样例输入
4
70 80 90 100
80
3
65 75 85
55
5
60 90 90 90 85
90
0
样例输出
1
0
3
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
		int m,j=0;
		cin >> m;
		for (int i = 0;i < n;i++) {
			if (a[i] == m)
				j++;
		}
		delete[] a;
		cout << j << endl;
	}
	system("pause");
	return 0;
}