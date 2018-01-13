/*
题目描述
给定两个整数A和B，其表示形式是：从个位开始，每三位数用逗号","隔开。
现在请计算A+B的结果，并以正常形式输出。

输入
输入包含多组数据的数据，每组数据占一行，由两个整数A和B组成（-10^9 < A,B < 10^9）。

输出
请计算A+B的结果，并以正常形式输出，每组数据占一行。

样例输入
-234,567,890 123,456,789
1,234 2,345,678
样例输出
-111111101
2346912
*/



#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long transform(char str[],int len) {//将字符串转化为数值；
	int i,j=1;
	long sum = 0;
	for (i=len-1;i >=0;i--) {
		if (str[i] >= '0'&&str[i] <= '9') {
			sum += (str[i]-48) * j;//将得到的字符转化成相应的数再乘以它的数位。
			j = j * 10;
		}
	}
	if (str[0] == '-')
		sum = -sum;//如果为负，则添负号；
	        return sum;
}

int main()
{
	char str1[13], str2[13];
	long A, B;
	while (scanf("%s%s", str1, str2) != EOF) {
		int len1 = strlen(str1);
		int len2 = strlen(str2);

		A = transform(str1, len1);
		B = transform(str2, len2);

		printf("%ld\n", A + B);
	}
	system("pause");
        return 0;
}



