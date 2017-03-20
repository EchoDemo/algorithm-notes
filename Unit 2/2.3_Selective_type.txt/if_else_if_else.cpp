//先判断第一个if的条件是否成立，如果不成立，则判断条件else if中的条件是否成立，如果仍然不成立，则else中的内容



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int n = 2;
	if (n > 3) {
		n = 9;
		printf("%d\n", n);
	}
	else if(n>2){
		printf("%d\n", n + 1);
	}
	else {
		printf("%d\n", n);
	}
	system("pause");
	return 0;
}

