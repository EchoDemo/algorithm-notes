//在函数的参数类型后面，即参数前加一个&（注意：这里的&并不是取地址的意思）就可以了，引用不产生副本，而是给原变量起一个别名，都指向同一个东西，
//对引用变量的操作就是对原变量的操作。


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

void change(int &x) {
	x = 1;
}

int main() {
	int x = 10;
	change(x);
	printf("%d\n", x);
	system("pause");
	return 0;
}
