//初始化字符数组；



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	char str[15] = { 'G','o','o','g','l','e',' ','p','l','a','y','!' };
	for (int i = 0;i < 12;i++) {
		printf("%c", str[i]);
	}
	system("pause");
	return 0;
}


