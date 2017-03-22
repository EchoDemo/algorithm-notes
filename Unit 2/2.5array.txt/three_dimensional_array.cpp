/*
  注意：如果数组的大小较大（大概10^6级别），则需要将其定义在主函数的外部，否则会使进程异常退出，原因是函数内部申请的局部变量来自系统栈，
  允许申请的空间较小，而函数外部申请的全局变量来自静态存储区，允许申请的空间较大。
  //示例；
  #include "stdafx.h"
  #include<cstdio>
  #include<cstdlib>

  int a[1000000];
  int main()
  {
     for(int i=0;i<1000000;i++){
        a[i]=i;
     }
     system("pause");
     return 0;
  }
  
*/




#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int a[3][3][3];
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			for (int k = 0;k < 3;k++) {
				a[i][j][k] = i + k + j;
			}
		}
	}

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			for (int k = 0;k < 3;k++) {
				printf("%d\n", a[i][j][k]);
			}
		}
	}
	system("pause");
	return 0;
}

