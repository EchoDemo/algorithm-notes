//返回两个字符串大小的比较结果，比较原则按字典序，如果小于则返回一个负数；等于则返回0；大于返回正整数。

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cstring>

int main() {
	char str1[20], str2[20];
	gets_s(str1);
	gets_s(str2);
	int cmp = strcmp(str1, str2);
	if (cmp < 0) printf("str1<str2\n");
	else if (cmp > 0) printf("str1>str2\n");
	else printf("str1=str2\n");
	system("pause");
	return 0;
}
