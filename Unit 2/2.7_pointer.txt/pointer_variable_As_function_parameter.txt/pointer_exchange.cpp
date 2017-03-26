/*
一般方式交换两个数；
#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a = 1,b=2;
	int temp = a;
	a = b;
	b = temp;
	printf("a=%d,b=%d\n", a,b);
	system("pause");
	return 0;
}


函数方式交换两个数，在调用交换函数时相当于产生了一个副本，而这个副本不会影响main函数中a,b的值，称之为单向一次性的值传递。

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 1,b=2;
	printf("a=%d,b=%d\n", a,b);
	system("pause");
	return 0;
}
*/


//指针变量作为函数的参数
#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 1,b=2;
	int *p1 = &a, *p2 = &b;
	swap(p1, p2);
	printf("a=%d,b=%d\n", *p1,*p2);
	system("pause");
	return 0;
}
