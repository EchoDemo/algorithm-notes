//指针的减法，

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = a;
	int* q = &a[5];
	printf("q=%d\n", q);
	printf("p=%d\n", p);
	printf("q-p=%d\n", q - p);
	system("pause");
	return 0;
}
