/*
输入3个字符串，按从小到大的顺序输出。要求使用指针的方法进行处理。

输入:3行，每行一个用字符串。保证每个字符串的长度不超过20。

输出:按从小到大的顺序输出这3个字符串，每个字符串一行。请注意行尾输出换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cstring>

int compare(char a[], char b[]) {
	int i;
	for (i = 0;i < strlen(a)>strlen(b)?strlen(b):strlen(a);i++) {
		if (*(a + i) != *(b + i)) break;
	}
	return *(a + i) - *(b + i);
}

int main() {
	char a[20], b[20], c[20],t[20];
	gets_s(a);
	gets_s(b);
	gets_s(c);
	if (compare(a, b)>0) {
		strcpy(t, a);
		strcpy(a, b);
		strcpy(b, t);
	}
	if (compare(a, c)>0) {
		strcpy(t, a);
		strcpy(a, c);
		strcpy(c, t);
	}
	if (compare(b, c)>0) {
		strcpy(t, b);
		strcpy(b, c);
		strcpy(c, t);
	}
	printf("%s\n%s\n%s\n", a, b, c);
	system("pause");
	return 0;
}


