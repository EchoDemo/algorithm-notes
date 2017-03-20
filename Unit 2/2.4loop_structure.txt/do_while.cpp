//与while的不同之处在于，一定会先执行一次循环,而且实用性远不如while



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int n = 1, sum = 0;
	do {
		sum = sum + n;
		n++;
	} while (n <= 100); 
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}
