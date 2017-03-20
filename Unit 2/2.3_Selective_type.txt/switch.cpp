//switch语句需要注意的点是,break如果不加就会执行当前执行语句后的所有语句,可以试着把break删掉试试看

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int a = 1, b = 2;
	switch (a + b) {
	case 2:
		printf("%d\n", a);
		break;
	case 3:
		printf("%d\n", b);
		break;
	case 4:
		printf("%d\n", a + b);
		break;
	default:
		printf("what the hell?\n");
	}
	system("pause");
	return 0;
}

