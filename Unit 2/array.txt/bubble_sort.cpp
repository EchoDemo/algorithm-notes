//冒泡排序是将具有n个元素的序列进行(n-1)趟比较,从而找出每一趟的最大数

/*两个数的交换
#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int a = 1, b = 2;
	int temp = a;
	a = b;
	b = temp;
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}
*/



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int i,j,a[5] = { 5,3,2,6,8};
	for (i = 1;i <=4;i++) {
		for (j = 0;j < 5 - i;j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0;i < 5;i++) {
		printf("%d\n", a[i]);
	}
	system("pause");
	return 0;
}


