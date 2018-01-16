/*
题目描述
读入一串字符，判断是否是回文串。“回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。

输入
一行字符串，长度不超过255。

输出
如果是回文串，输出“YES”，否则输出“NO”。

样例输入
12321
样例输出
YES
*/



#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

const int max = 255;

int main() {
	char a[max];
	cin >> a;
	int j=0,len = strlen(a);
	for (int i = 0;i < len / 2;i++) {
		if (a[i] == a[len - 1 - i]) j++;
	}
	if (j == (len / 2))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	system("pause");
	return 0;
}
