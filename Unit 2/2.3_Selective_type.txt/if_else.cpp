//当if当中的条件成立时，则执行if后的大括号内容，否则就执行else后的大括号的内容



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
	else {
		printf("%d\n", n);
	}
	
        system("pause");
	return 0;
}



注：如果表达式是"!=0",则可以省略"!=0"直接用if(n)来替代if(n!=0)。同理，"==0"时也类似。
