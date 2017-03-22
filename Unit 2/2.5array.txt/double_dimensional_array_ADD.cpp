//两个二维数组相加





#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a[3][3], b[3][3];
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			scanf("%d", &a[i][j]);//输入二维数组a的元素；
		}
	}

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			scanf("%d", &b[i][j]);//输入二维数组b的元素；
		}
	}

	int c[3][3];
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			c[i][j] = a[i][j] + b[i][j];//求和；
		}
	}

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			printf("%d ", c[i][j]);//输出c;
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


