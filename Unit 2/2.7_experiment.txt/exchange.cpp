/*
输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。要求用3个函数实现，分别为输入10个数、进行处理、输出10个数。
要求使用指针的方法进行处理。

输入:用空格隔开的10个整数。

输出:输出进行题目描述操作之后的10个整数，每个整数之后输出一个空格。请注意行尾输出换行。
*/

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cstring>

void input(int a[],int length) {
	for (int i = 0;i<length;i++) {
		scanf("%d", &a[i]);
	}
}

void exchange(int a[],int length) {
	int m, n, max, min;
	max = a[0];
	min = a[0];
	for (int i = 1;i<length;i++) {
		if (max<*(a+i)) {
			max= *(a+i);
			m = i;
		}

		if (min>*(a+i)) {
			min = *(a+i);
			n = i;
		}

	}

	*(a + m) = *(a + length - 1);
	*(a + length - 1) = max;

	*(a + n) = *a;
	*a=min ;

}

void print(int a[],int length) {
	for (int i = 0;i<length;i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}

int main() {
	int a[10];
	int len = sizeof(a) / sizeof(int);
	input(a,len);
	exchange(a,len);
	print(a,len);
	system("pause");
	return 0;
}

/*
这里是有关获取整型数组长度的问题。

1、C语言中，定义数组后可以用sizeof命令获得数组的长度（可容纳元素个数）。
例如：
int data[4];
int length;
length=sizeof(data)/sizeof(data[0]);  //数组占内存总空间，除以单个元素占内存空间大小
printf("length of data[4]=%d", length ); //输出length of data[4]=4

2、但是，通过传递数组名参数到子函数中，以获得数组长度是不可行的。
例如：
int getLength(int[] a){
    int length;
    length=sizeof(a)/sizeof(a[0]); //这样是错误的，得到的结果永远是1
    return length;
}
因为，a是函数参数，到了本函数中，a只是一个指针（地址，系统在本函数运行时，是不知道a所表示的地址有多大的数据存储空间，
这里只是告诉函数：一个数据存储空间首地址），所以，sizoef(a)的结果是指针变量a占内存的大小，一般在32位机上是4个字节。
a[0]是int类型，sizeof(a[0])也是4个字节，所以，结果永远是1。
*/


