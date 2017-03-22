//函数的嵌套调用；

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int max_1(int a, int b) {
	return a > b ? a : b;
}

int max_2(int a, int b, int c) {
	int temp = max_1(a, b);
	temp = max_1(temp, c);
	return temp;
}


int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d\n", max_2(a, b, c));
	system("pause");
	return 0;
}
