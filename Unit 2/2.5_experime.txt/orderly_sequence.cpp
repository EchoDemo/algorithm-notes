/*
  有一个已排好序的数组，要求输入一个数后，按原来排序的规律将它插入到数组中。
  假设数组长度为10，数组中前9个数（这9个数要求从键盘上输入，输入时要满足自小到大的输入顺序）已经按从小到大进行排序。
  然后再从键盘上输入一个整数，将此整数插入到前有序的9个数中，使得最终的10个数依然是从小到大有序的。

  输入:第一行输入以空格分隔的9个整数数，要求按从小到大的顺序输入。
       第二行输入一个整数

  输出:从小到大输出这10个数，每个数一行。
*/




#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	int i, a[10], tmp;
	for (i = 0;i <= 9;i++) {
		scanf("%d", &a[i]);//初始化数组;
        }
	for (i = 9;i >= 1;i--) {
		if (a[i]<a[i - 1]) {//排序;			
                        tmp = a[i];
			a[i] = a[i - 1];
			a[i - 1] = tmp;
		}
		else {
			break;
		}
	}
	for (i = 0;i <= 9;i++) {
		printf("%d\n", a[i]);
	}
	system("pause");
	return 0;
}

