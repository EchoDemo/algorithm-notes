1、

void selectSort(){//简单选择排序；
	for (int i = 1; i <=n; i++)
	{//进行n趟排序；
		int k=i;
		for (int j=i; j <=n; j++)
		{//选出未排序部分的最小值；
			if (A[j]<A[k])
			{
				k=j;
			}
		}
		int temp=A[i];
		A[i]=A[k];
		A[k]=temp;
	}
}


2、

int A[maxn],n;
void insertSort(){//直接插入排序；
	for(int i=2;i<=n;i++){
		int temp=A[i],j=i;
		while(j>1&&temp<A[j-1]){
			A[j]=A[j-1];
			j--;
		}
		A[j]=temp;
	}
}


3、Sort函数的应用：
#include<algorithm>
sort(首元素的地址(必填),尾元素的下一个地址(必填),比较函数(非必填))

(1)相关结构体的定义：

struct Student{
    char name[10];//姓名
    char id[10];  //准考证号
    int score;    //分数
    int r;        //排名
}stu[10010];

(2)cmp函数的编写：

bool cmp(Student a,Student b){
    if(a.score!=b.score) return a.score>b.score;
    else return strcmp(a.name,b.name)<0;
}

(3)排名的实现：

