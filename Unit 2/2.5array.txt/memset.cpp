//对数组中的每一个元素赋相同的值，格式：memset(数组名,值,sizeof(数组名));使用memset需要在程序开头添加#include<string.h>的文件头，
//只建议初学者使用memset赋0或-1，因为memset使用的是按字节赋值，（对每个字节赋同样的值），而由于0的二进制补码全为0，-1的二进制补码全为1。
//如果要对数组赋其他的数字，请使用fill函数，




#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a[5] = { 1,2,3,4,5 };

	memset(a, 0, sizeof(a));//赋0值；
	for (int i = 0;i < 5;i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	memset(a, -1, sizeof(a));//赋-1值；
	for (int i = 0;i < 5;i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

