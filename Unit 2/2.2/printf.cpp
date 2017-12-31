

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int a = 123, b = 1234567;
	float f1 = 1243.4, f2 = 3556.6;
	double d1 = 3464.3, d2 = 4966.3;
	printf("%f\n%f\n",f1*f2,d1*d2);//在printf中使用转义字符\n,

	printf("%5d\n", a);//%md的输出方式，可以使不足m位的int型变量以m位进行右对齐输出，高位用空格补齐，若本身超过m位，则保持原样
	printf("%5d\n", b);

	printf("%05d\n", a);//与上面的不同之处在于原本空格的填充变成0来填充
	printf("%05d\n", b);

	printf("%7.4f\n", d1);//表示宽度为7位，小数点后保留四位的数据输出
	printf("%7.3f\n", d2);

	system("pause");
    return 0;
}



注：

对于double类型的变量，其输出格式变成了%f，而在scanf中却是%lf。(浮点型就用double)

