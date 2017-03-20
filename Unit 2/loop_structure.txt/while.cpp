//当while的判定为真时,则继续执行,对于if语句中的(!=0)和(==0)的技巧同样适用


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int n = 1, sum = 0;
	while (n <= 100) {
		sum = sum + n;
		n++;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}

