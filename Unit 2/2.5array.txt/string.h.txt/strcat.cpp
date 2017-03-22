//将str2连接到str1的后面，格式：strcat(str1,str2);


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cstring>


int main() {
	char str1[20], str2[20];
	gets_s(str1);
	gets_s(str2);
	strcat(str1, str2);
	puts(str1);
	system("pause");
	return 0;
}
