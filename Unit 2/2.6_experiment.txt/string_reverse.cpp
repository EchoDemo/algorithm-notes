/*
写一个函数将一个字符串按反序存放。在主函数中输入一个字符串，通过调用该函数，得到该字符串按反序存放后的字符串，并输出。
输入:一行字符串。
输出:输入字符串反序存放后的字符串。单独占一行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cstring>

char* reverse(char a[]) {
	int n = strlen(a);
	int i;
	for (i = 0;i < n;i++) {//判断字符数组中实际内容有多少；
		if (a[i] == '\0') break;
	}

	for (int j = 0;j <= (i / 2);j++) {
		char temp = a[j];
		a[j] = a[i - 1 - j];
		a[i - 1 - j] = temp;
	}

	return a;

}

int main() {
	char a[20];
	scanf("%s", a);
	printf("%s\n",reverse(a));
	system("pause");
	return 0;
}
