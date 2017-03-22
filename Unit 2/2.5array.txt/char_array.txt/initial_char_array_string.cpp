//字符数组也可以通过直接赋值字符串来初始化（仅限于初始化，程序其他位置不允许直接赋值整个字符串）




#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	char str[15] ="Google play!";
	for (int i = 0;i < 12;i++) {
		printf("%c", str[i]);
	}
	system("pause");
	return 0;
}

