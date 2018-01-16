/*
题目描述
正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。例如：给定A = 3862767，DA = 6，则A的“6部分”PA是66，因为A中有2个6。

现给定A、DA、B、DB，请编写程序计算PA + PB。

输入
输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0 < A, B < 1010。
输出
在一行中输出PA + PB的值。
样例输入
3862767 6 13530293 3
3862767 1 13530293 8
样例输出
399
0
*/


#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

int transform(int a, int b) {
	int i = 0,sum=0;
	while (a) {
		if ((a % 10) == b) {
			i++;
		}
		a /= 10;
	}
	while (i--) {
		sum += b;
		b = b * 10;
	}
	return sum;
}

int main() {
	int A, B, DA, DB, PA, PB;
	cin >> A >> DA >> B >> DB;
	PA = transform(A, DA);
	PB = transform(B, DB);
	cout << PA + PB << endl;
	system("pause");
	return 0;
}
