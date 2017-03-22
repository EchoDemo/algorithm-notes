//输入和输出单个字符




#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	char str[3][3];
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			str[i][j] = getchar();
		}
		getchar();//这是为了把输入中的每行末尾的换行符吸收掉；
	}

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			putchar(str[i][j]);
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}

