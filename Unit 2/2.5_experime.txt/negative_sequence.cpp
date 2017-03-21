/*
  将一个长度为10的整型数组中的值按逆序重新存放。
  如：原来的顺序为1,2,3,4,5,6,7,8,9,0，要求改为0,9,8,7,6,5,4,3,2,1

  输入:从键盘上输入以空格分隔的10个整数。

  输出:按相反的顺序输出这10个数，每个数占一行。
*/




#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a[10];
	for (int i = 0;i <= 9;i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0;i <= 4;i++) {
		int tmp = a[i];
		a[i] = a[9 - i];
		a[9 - i] = tmp;
	}
	for (int i = 0;i <= 9;i++) {
		printf("%d\n", a[i]);
	}
	system("pause");
	return 0;
}

