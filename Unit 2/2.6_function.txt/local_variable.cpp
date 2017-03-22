//局部变量；

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

void change(int x) {
	x = x + 1;
}

int main() {
	int x = 10;
	change(x);
	printf("%d\n", x);
	system("pause");
	return 0;
}
