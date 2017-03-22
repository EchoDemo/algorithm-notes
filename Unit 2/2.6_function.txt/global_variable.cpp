//全局变量；

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int x;
void change() {
	x = x + 1;
}

int main() {
	x = 10;
	change();
	printf("%d\n", x);
	system("pause");
	return 0;
}
