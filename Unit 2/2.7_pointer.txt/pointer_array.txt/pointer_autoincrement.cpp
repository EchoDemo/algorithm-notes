//指针变量的自增操作

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int* p=a;p<a+10;p++){
		printf("%d", *p);
	}
	system("pause");
	return 0;
}
