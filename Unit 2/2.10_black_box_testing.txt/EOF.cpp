/*
scanf函数也有返回值，其值为成功读入的参数的个数。而scanf在正常的控制台（屏幕黑框框）中的输入一般是不会失败的，只有在读取文件时到达文件末尾导致的无法读取
现象才会产生读入失败，此时，scanf函数会返回-1而不是0，c语言中使用EOF（即End Of File）来代表-1。因此，当题目没有说明有多少数据需要读入时，就可以利用
scanf函数的返回值是否为EOF来判断输入是否结束，形如：

while(scanf("%d",&n)!=EOF){
  ......
}

如果读入的是字符串：

while(scanf("%s",str)!=EOF){
  ......
}

while(gets(str)!=NULL){
  ......
}

以下的代码，在黑框中输入数据时，并不会触发EOF状态，因此想要触发EOF，可以按三次《Ctrl+Z》组合键，再按enter就可以结束。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF) {
		printf("%d\n", a + b);
	}
	system("pause");
	return 0;
}

