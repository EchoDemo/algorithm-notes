/*
有一行电文，已按如下规律译成密码：

A-->Z        a-->z

B-->Y        b-->y

C-->X        c-->x

......          ......

即第一个字母变成第26个字母，第i个字母变成第（26-i+1)个字母，非字母字符不变。要求根据密码译回原文，并输出。

输入:输入一行密文
输出:解密后的原文，单独占一行。
*/

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	char a[20];
	scanf("%s", a);
	int i = 0;
	while(a[i]!='\0'){
		if (('A' <= a[i])&&(a[i] <= 'Z'))
			printf("%c", 155-a[i]);
		else if (('a' <= a[i])&&(a[i] <= 'z'))
			printf("%c", 219-a[i]);
		else
			printf("%c", a[i]);
		i++;
	}
	system("pause");
	return 0;
}
