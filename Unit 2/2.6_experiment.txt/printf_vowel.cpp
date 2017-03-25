/*
写一个函数，将一个字符串中的元音字母复制到另一个字符串中。在主函数中输入一个字符串，通过调用该函数，得到一个有该字符串中的元音字母组成的一个字符串，
并输出。

输入:一个字符串（一行字符）。
输出:该字符串所有元音字母构成的字符串。行尾换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cstring>

char* printf_vowel(char a[], char b[]) {
	int j = 0, n = strlen(a);
	for (int i = 0;i <n;i++) {
		if (a[i] == '0') break;
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
			b[j] = a[i];
			j++;
		}
	}
	b[j] = '\0';
	return b;

}

int main() {
	char a[20], b[20];
	scanf("%s", a);
	printf("%s\n", printf_vowel(a, b));
	system("pause");
	return 0;
}
