/*
输入一个数n，然后输入n个数值各不相同，再输入一个值x，输出这个值在这个数组中的下标（从0开始，若不在数组中则输出-1）。

输入:测试数据有多组，输入n(1<=n<=200)，接着输入n个数，然后输入x。

输出:对于每组输入,请输出结果。

样例输入
4
1 2 3 4
3
样例输出
2
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cstring>


int main() {
	int x,n,a[200];
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);//输入n个数；
		}

		scanf("%d", &x);//输入需要查询的数；

		int flag = -1;
		for (int i = 0; i < n; i++) {
			if (a[i] == x) {
				flag = i;
				break;
			}
		}
		printf("%d\n", flag);
	}
	system("pause");
	return 0;
}
