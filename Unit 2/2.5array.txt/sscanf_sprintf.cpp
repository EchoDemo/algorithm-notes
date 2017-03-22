/*
  事实上，scanf("%d",&n);printf("%d",n);可以写成scanf(screen,"%d",&n);和printf(screen,"%d",n);的形式。
  其意思是：scanf的输入是把screen的内容以"%d"的格式传输到n当中去（从左至右）
           printf的输出则是把n以"%d"的格式传输到screen（从右至左）
           
  sscanf和sprintf与上面的格式是相同的，只不过把screen换成了字符数组：
  sscanf(str,"%d",&n);sprintf(str,"%d",n);
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	int m,n=233333;
	char str1[100] = "123",str2[100];
  
	sscanf(str1, "%d", &m);
	printf("%d\n", m);

	sprintf(str2, "%d", n);
	printf("%s\n", str2);
	system("pause");
	return 0;
}
