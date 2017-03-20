//当条件为真时，则执行if紧接的大括号的内容



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

