/*
完成一个对候选人得票的统计程序。假设有3个候选人，名字分别为Li，Zhang和Fun。使用结构体存储每一个候选人的名字和得票数。记录每一张选票的得票人名，
输出每个候选人最终的得票数。结构体可以定义成如下的格式：
struct person {
    char name[20];
    int count;
}leader[3] = {“Li”, 0, “Zhang”, 0, “Fun”, 0};

输入:第一行有一个整数n，表示以下有n张选票信息将会输入。保证n不大于100。
以后的n行中，每一行包含一个人名，为选票的得票人。保证每一个人名都是Li，Zhang和Fun中的某一个。

输出:有三行，分别为Li，Zhang和Fun每人的得票数。格式为首先输出人名，其后输出一个冒号，最后输出候选人的得票数。
请注意行尾输出换行。
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<ctime>

struct person {
	char name[20];
	int count;
}leader[3] = { "Li",0,"Zhang",0,"Fun",0 };

int random(int m) {
	return rand() % m;//随机数生成在0-m-1之间。
}

int main(){
	int n;
	scanf("%d", &n);
	time_t t;//生成以当前时间作为种子的随机数。
	srand((unsigned) time(&t));
	for (int i = 1;i <= n;i++) {
		int j = random(3);
		leader[j].count++;
	}

	for (int i = 0;i <= 2;i++) {
		printf("%s:%d\n", leader[i].name, leader[i].count);
	}
	
	system("pause");
	return 0;
}



/*下面是有关rand()和srand()的介绍。

函数rand()是真正的随机数生成器，而srand()会设置供rand()使用的随机数种子。如果你在第一次调用rand()之前没有调用srand()，那么系统会为你自动调用srand()。

注意而使用同种子相同的数调用 rand()会导致相同的随机数序列被生成(所以我们通常生成以当前时间为种子的随机数，要包含<time.h>头部)。

因此我们如果要生成以m为随机数的种子首先要调用srand();当然要使用这两个函数需要头部#include <stdlib.h>或者在cpp下写成#include <cstdlib>;

生成以100,为种子的随机数10个,将他们控制在0~100之内.

#include <stdio.h>  
int random(int m){  
        return rand()%m;//將随机数控制在0~m-1之间  
}  
int main(){  
        int n=10,i,m=100;
        time_t t;//获取当前时间
        srand((unsigned) time(&t));//设置随机数种子  
        for(i=0;i<n;i++){  
                printf("%d ",random(m));  
        }  
        printf("\n");  
        return 0;  
}  

//如果需要生成X-Y之间的随机数，从X到Y，有Y－X＋1个数，所以要产生从X到Y的数，只需要这样写：k=rand()%(Y-X+1)+X；
*/
