/*
题目描述
输入n个学生的信息，每行包括学号、姓名、性别和年龄，每一个属性使用空格分开。最后再输入一学号，将该学号对应的学生信息输出。

输入
测试数据有多组，第一行为样例数m。对于每个样例，第一行为学生人数n(n不超过20)，接下来n行每行4个整数分别表示学号、姓名、性别和年龄，最后一行表示查询的学号。

输出
输出m行，每行表示查询的学生信息，格式参见样例。

样例输入
1
4
1 李江 男 21
2 刘唐 男 23
3 张军 男 19
4 王娜 女 19
2
样例输出
2 刘唐 男 23
 */


#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Student {
	int id;
	char name[10];
	char sex[5];
	int age;
}stu[20];

int main() {
	int m,i;
	cin >> m;
	while (m--) {
		int n,x;
		cin >> n;
		for (i = 0;i < n;i++) {
			cin >> stu[i].id >> stu[i].name >> stu[i].sex >> stu[i].age;
		}
		cin >> x;
		for (i = 0;i < n;i++) {
			if (stu[i].id == x)
				cout << stu[i].id << " " << stu[i].name << " " << stu[i].sex << " " << stu[i].age << endl;
		}
	}
	system("pause");
	return 0;
}



