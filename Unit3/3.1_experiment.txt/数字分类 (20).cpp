/*
题目描述
给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：

A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。
输入
每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。
输出
对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出“N”。

样例输入
13 1 2 3 4 5 6 7 8 9 10 20 16 18
8 1 2 4 5 6 7 9 16
样例输出
30 11 2 9.7 9
N 11 2 N 9
*/



#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

int A1(int a[],int n) {
	int sum = 0, i = 0;
	for (int j = 0;j < n;j++) {
		if ((a[j] % 5==0) && (a[j] % 2==0)) {
			sum += a[j];
			i++;
		}
	}
	if (i == 0) return -1;
	else return sum;
}

int A2(int a[],int n) {
	int sum = 0,i = 0,k=1;
	for (int j = 0;j < n;j++) {
		if ((a[j] % 5) == 1) {
			a[j] = a[j] * k;
			sum += a[j];
			k = -k;
			i++;
		}
	}
	if (i == 0) return -1;
	else return sum;
}

int A3(int a[], int n) {
	int i = 0;
	for (int j = 0;j < n;j++) {
		if ((a[j] % 5)==2) {
			i++;
		}
	}
	if (i == 0) return -1;
	else return i;
}

double A4(int a[], int n) {
	int i = 0;
	double sum = 0;
	for (int j = 0;j < n;j++) {
		if ((a[j] % 5)==3) {
			sum += a[j];
			i++;
		}
	}
	if (i == 0) return -1;
	else return sum/i;
}

int A5(int a[], int n) {
	int i = 0,max=0;
	for (int j = 0;j < n;j++) {
		if ((a[j] % 5)==4) {
			if (a[j] > max) max = a[j];
			i++;
		}
	}
	if (i == 0) return -1;
	else return max;
}


int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}

	int x1, x2, x3, x5;
	double x4;
	x1 = A1(a, n);
	x2 = A2(a, n);
	x3 = A3(a, n);
	x4 = A4(a, n);
	x5 = A5(a, n);
	
	if (x1 == -1)
		cout << "N ";
	else
		cout << x1<<" ";

	if (x2 == -1)
		cout << "N ";
	else
		cout << x2 << " ";

	if (x3 == -1)
		cout << "N ";
	else
		cout << x3 << " ";

	if (x4 == -1)
		cout << "N ";
	else
		printf("%.1f ", x4);

	if (x5 == -1)
		cout << "N ";
	else
		cout << x5 << " ";

	system("pause");
	return 0;
}
