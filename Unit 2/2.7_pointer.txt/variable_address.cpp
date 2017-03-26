//在C语言中用“指针”来表示内存地址（或者称指针指向了内存地址），而如果这个内存恰好是某个变量的地址，那么又称“这个指针指向该变量”
//可以不严谨的理解为“指针就是变量的地址”


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a = 1;
	printf("%d,%d\n", &a, a);//&a表示输出变量a的地址，指针其实是一个unsigned类型的整数。
	system("pause");
	return 0;
}
