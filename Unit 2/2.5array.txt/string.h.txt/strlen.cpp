//得到字符数组中第一个"\0"前的字符的个数，格式：strlen(字符数组）；




#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cstring>


int main() {
	char str[10];
	gets_s(str);
	int len = strlen(str);
	printf("%d\n", len);
	system("pause");
	return 0;
}

