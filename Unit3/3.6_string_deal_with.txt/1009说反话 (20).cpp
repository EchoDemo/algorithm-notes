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

输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符

串，单词之间用1个空格分开，输入保证句子末尾没有多余的空格。

输出格式：每个测试用例的输出占一行，输出倒序后的句子。

输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
*/


方法一：


#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main() {
	char a[80], b[82][82];
	gets_s(a);//要用gets或者scanf，否则的话会出现乱码；
	int i = 0, j = 0, len = strlen(a);

	for (int k = 0;k < len;k++) {
		if (a[k] == ' ') {//如果为空格的话;
			b[i][j] = '\0';//末尾结束符；
			i++;//下一维继续存储；
			j = 0;
		}
		else {
			b[i][j++] = a[k];
		}
	}
	b[i][j] = '\0';
	for (int k = i;k >= 0;k--) {
		cout << b[k];
		if (k != 0)
			cout << " ";
	}
	system("pause");
	return 0;
}




方法二：

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main() {
	char s[80];
	gets_s(s);
	int len = strlen(s);
	int p = len;
	for (int i = len - 1; i >= 0; i--) {
		if (s[i] == ' ') {
			for (int j = i + 1; j <= p - 1; j++) {
				cout << s[j];
			}
			cout << " ";
			p = i;
		}
	}
	for (int i = 0; i <= p - 1; i++) {
		cout << s[i];
	}
	system("pause");
	return 0;
}
