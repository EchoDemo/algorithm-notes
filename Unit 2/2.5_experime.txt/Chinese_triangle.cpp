/*
按要求输入如下格式的杨辉三角

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

最多输出10层

输入:输入只包含一个正整数n，表示将要输出的杨辉三角的层数。
输出:对应于该输入，请输出相应层数的杨辉三角，每一层的整数之间用一个空格隔开
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	int n,a[10][10];
	scanf("%d", &n);

	/*
	这是另一种方法；
	for (int i = 0;i < n;i++) {//在i与j相等的时候和j等于0的时候都为1；
		a[i][0] = a[i][i] = 1;
	}

	for (int i = 2;i < n;i++)//从第三行开始，除了边界元素，其中的任何一个元素啊a[i][j]等于其上一行的a[i-1][j-1]与a[i-1][j]的和；
		for (int j = 1;j < i;j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

	for (int i = 0;i < n;i++) //打印输出，当i=j时就换行；
		for (int j = 0;j <= i;j++) {
			printf("%d ", a[i][j]);
			if (i == j)
				printf("\n");
	*/


	for (int i = 0;i < n;i++) {
		for (int j = 0;j <= i;j++) {
			if (i == j || j == 0)
				a[i][j] = 1;
			else
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			printf("%d ", a[i][j]);
			if (i == j)
				printf("\n");
		}
	}

	system("pause");
	return 0;
}




