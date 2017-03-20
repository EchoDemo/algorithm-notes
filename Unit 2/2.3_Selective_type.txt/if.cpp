//当条件为真时，则执行if紧接的大括号的内容

//这里是一个技巧：如果表达式是"!=0"或"==0",那么可以采用简单的方法表达,直接写上(n)或者(!n);

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int n = 5;
	if (n > 3) {
		n = 9;
		printf("%d\n", n);
	}
	system("pause");
	return 0;
}

