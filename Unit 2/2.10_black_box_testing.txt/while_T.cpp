//给定了测试数据的组数；


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	int a, b,T;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d", &a, &b);
		printf("%d\n", a + b);
	}
	system("pause");
	return 0;
}
