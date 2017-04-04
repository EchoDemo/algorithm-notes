//两组输出数据之间有一个空行，最后一组没有空行。

/*
输出一行N个整数，每两个整数之间用空格隔开，最后一个整数后面不允许加上空格。

for(int i=0;i<N;i++){
  printf("%d",a[i]);
  if(i<N-1) printf("");
  else printf("\n");
}

*/

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main() {
	int a, n,T;
	scanf("%d", &T);
	while (T--) {
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d",&a);
      sum+=a;
    }
    printf("%d\n",sum);
    if(T>0) printf("\n");
	}
	system("pause");
	return 0;
}
