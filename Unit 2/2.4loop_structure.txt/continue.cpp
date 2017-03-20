//continue与break的不同之处在于,它仅仅是跳出当前这一轮循环,而不是跳出整个循环



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int i, sum = 0;
	for (i = 1;i <= 100;i++) {
		if (i % 2 == 1) continue;//跳出当前这一轮循环,实现偶数的相加
                sum = sum + i;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}
