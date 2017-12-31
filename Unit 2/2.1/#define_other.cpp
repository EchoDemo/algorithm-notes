//使用ADD（a,b）来代替a+b的功能

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

#define ADD(a,b) ((a)+(b)) //括号必须加，这里是错的：#define CAL(x) (x*2+1)


int main()
{
	int num1 = 3, num2 = 5;
	printf("%d\n", ADD(num1, num2));//宏定义是直接将对应的部分进行替换。printf("%d\n",CAL(a+1));
	system("pause");
        return 0;
}

