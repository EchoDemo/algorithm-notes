//如果不是使用scanf函数的%s格式或gets_s函数输入字符串（如：getchar）,一定要在每个字符串的末尾加上'\0'，
//否则printf和puts输出字符串会因无法识别字符串末尾而输出乱码,因为在字符数组当中puts和printf就是通过识别'\0'来作为字符串的结尾来输出的。


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	//char str[15] = { 's' };//这种形式的初始化会自动添加'\0';
	//memset(str, 0, sizeof(str));//这个0是指ASCII值为零，也就是所有的单元都初始化为'\0',只要后来不把最末的'\0'换掉,就不会发生乱码;
	char str[15];
	for (int i = 0;i < 4;i++) {
		str[i] = getchar();	
        }
	//str[14] = '\0';//自己在字符数组的末尾添加'\0';
	puts(str);
	system("pause");
	return 0;
}

