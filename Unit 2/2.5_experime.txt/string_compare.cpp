/*
比较两个字符串s1和s2的大小，如果s1>s2，则输出一个正数；若s1=s2，则输出0；若s1<s2，则输出一个负数。

要求：不用strcpy函数；两个字符串用gets函数读入。

例如："A"与"C"相比，由于"A"<"C"，应输出负数，同时由于"A"与"C"的ASCII码差值为2，因此应输出"-2"。

同理："And"和"Aid"比较，根据第2个字符比较的结果，"n"比"i"大5，因此应该输出"5"

输入:输入2行字符串

输出:一个整数，表示这两个字符串 比较的差值，单独占一行。
*/

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	char a[20], b[20];
	gets_s(a);
	gets_s(b);
	int i = 0;
	while (1) {
		if (a[i] == b[i]) {
			i++;
		}
		else {
			printf("%d\n", a[i] - b[i]);
			break;
		}
	}
	system("pause");
	return 0;
}
