/*
从键盘上输入3个字符串，求出其中最大者。
输入:输入3行，每行均为一个字符串。

输出:一行，输入三个字符串中最大者。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cstring>

int main() {
	char a[10], b[10],c[10];
	gets_s(a);
	gets_s(b);
	gets_s(c);
	if (strcmp(a, b)>=0) {
		if (strcmp(a, c)>=0) {
			printf("%s", a);
		}else{
			printf("%s", c);
		}
	}
	else {
		if (strcmp(b, c)>=0) {
			printf("%s", b);
		}
		else {
			printf("%s", c);
		}
	}
	system("pause");
	return 0;
}
