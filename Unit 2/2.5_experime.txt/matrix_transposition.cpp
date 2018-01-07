/*
将一个2行3列的矩阵（二维数组）行列互换，存储到另一个3行2列的矩阵中。

要求以整型数据为例来解答。

输入:输入2行数据，每行3个整数，以空格分隔。
输出:行列互换后的矩阵，3行，每行2个数据，以空格分隔。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a[2][3], b[3][2];
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 3;j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 2;j++) {
			b[i][j] = a[j][i];
			printf("%d", b[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
