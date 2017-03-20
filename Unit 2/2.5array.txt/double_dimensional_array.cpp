//相当于一维数组的每一个元素都是一个一维数组



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int i,j,a[5][6] = { {3,1,3},{8,4},{},{1,2,3,4,5} };
	for (i = 0;i < 5;i++) {
		for (int j = 0;j < 6;j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

