//把一个字符串复制给另一个字符串，格式：strcpy(字符数组1，字符数组2);
//是把字符数组2复制给字符数组1，包括'\0'在内。

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cstring>


int main() {
	char str1[20], str2[20];
	gets_s(str1);
	gets_s(str2);
	strcpy(str1, str2);
	puts(str1);
	system("pause");
	return 0;
}
