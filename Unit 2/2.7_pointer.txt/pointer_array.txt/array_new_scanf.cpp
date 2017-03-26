//由于指针变量可以进行加减法，所以可以得到(a+i)首地址加i(就是首地址偏移i个int型变量的位置),等同于&a[i];如果需要访问其元素内容,则*(a+i)即可。


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a[10];
	for (int i = 0;i < 10;i++) {
		scanf("%d", a + i);
	}

	for (int i = 0;i < 10;i++) {
		printf("%d", *(a + i));
	}
	system("pause");
	return 0;
}
