//gets_s用来输入一行字符串（注意：gets_s识别换行符作为输入结束，因此scanf完一个整数后，如果要使用gets_s,需要先用getchar接受整数后的换行符）
//并将其存放在一维数组中，puts用来输出一行字符串，并紧跟换行。

//注意：由于vs当中使用了新的c标准，故原来的gets变成gets_s才能运行。




#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	char str1[20];
	char str2[5][10];
	gets_s(str1);
	for (int i = 0;i < 3;i++) {
		gets_s(str2[i]);
	}

	puts(str1);
	for (int i = 0;i < 3;i++) {
		puts(str2[i]);
	}

	system("pause");
	return 0;
}

