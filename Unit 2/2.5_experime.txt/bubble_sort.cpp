/*
从键盘上输入10个整数，用冒泡法对这10个数进行排序（由小到大）。

输入:以空格分隔的10个整数
输出:依次输出排好序的10个整数，每个数占一行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int temp,a[10];
	for (int i = 0;i < 10;i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 1;i <10;i++) {
		for (int j = 0;j < 10 - i;j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0;i < 10;i++) {
		printf("%d\n", a[i]);
	}

	system("pause");
	return 0;
}
