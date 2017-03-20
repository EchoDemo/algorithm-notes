//break出了可以在switch当中强制退出外，同样可以用于循环语句,在条件满足的情况下,直接跳出循环



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int i, sum = 0;
	for (i = 1;i <= 100;i++) {
		sum = sum + i;
		if (sum >= 2000) break;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}

