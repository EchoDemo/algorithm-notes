/*
输入两个非负10进制整数A和B(<=230-1)，输出A+B的D (1 < D <= 10)进制数。

输入格式：

输入在一行中依次给出3个整数A、B和D。

输出格式：

输出A+B的D进制数。

输入样例：
123 456 8
输出样例：
1103
*/



#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;


int main() {
	int A, B, D,i=0,c[30];
	long sum;
	cin >> A >> B >> D;
	sum = A + B;
	do {
		c[i++] = sum%D;
		sum = sum / D;
	} while (sum != 0);
	for (int j = i-1;j >=0;j--) {
		cout << c[j];
	}
	system("pause");
	return 0;
}
