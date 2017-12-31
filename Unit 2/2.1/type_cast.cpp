//c语言好像不管是向下还是向上强制类型转换都会出错，所以最好需要类型转换时都使用强制类型转换更安全


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main()
{
	double r = 12.56;
	int a = 3, b = 5;
	//double c = a + 3.5;
	printf("%d\n", (int)r);
	printf("%d\n", a / b);
	printf("%.1f\n", (double)a / (double)b);//保留一位小数输出；

	printf("%d\n", r);
	printf("%f%f\n", (double)a, b);
	//printf("%f\n", c);
	system("pause");
    return 0;
}

