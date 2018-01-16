/*
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用1个空格分开，输入保证句子末尾没有多余的空格。

输出格式：每个测试用例的输出占一行，输出倒序后的句子。

输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
*/



#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main() {
	char a[80], b[82][82];
	gets_s(a);//要用gets或者scanf，否则的话会出现乱码；
	int i=0,j=1,len = strlen(a);

	for (int k = 0;k < len;k++) {
		if (a[k] ==32 ) {//如果为空格的话；
			b[i][0] = j;//存储这一维的长度；
			i++;//下一维继续存储；
			j = 1;
		}else {
			b[i][j++] = a[k];
		}
	}

	for (int k = 1;k < j;k++) {//输出倒数第一个单词；
		cout << b[i][k];
	}
	cout << " ";
	for (int k = i-1;k >= 0;k--) {//输出其他的单词；
		for (j = 1;j < b[k][0];j++) {
			cout << b[k][j];
		}
		cout << " ";
	}
	system("pause");
	return 0;
}
