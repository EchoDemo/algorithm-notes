//如果不是使用scanf函数的%s格式或gets_s函数输入字符串（如：getchar）,一定要在每个字符串的末尾加入“\0”，
//否则printf和puts输出字符串会因无法识别字符串末尾而输出一大堆乱码。




#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	char str[15];
	for (int i = 0;i < 3;i++) {
		str[i] = getchar();
	}
	puts(str);
	system("pause");
	return 0;
}

