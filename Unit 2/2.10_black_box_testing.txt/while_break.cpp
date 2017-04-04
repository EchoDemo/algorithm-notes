//当输入的a和b都为0时结束输入

/*
#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF) {
		if (a == 0 && b == 0) break;
		printf("%d\n", a + b);
	}
	system("pause");
	return 0;
}
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	int a, b;
	while (scanf("%d%d", &a, &b),a||b) {
		printf("%d\n", a + b);
	}
	system("pause");
	return 0;
}
