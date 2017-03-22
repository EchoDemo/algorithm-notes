//函数的递归调用；

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int F(int n) {
	if (n == 0) return 1;
	else return F(n - 1)*n;
}


int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", F(n));
	system("pause");
	return 0;
}
