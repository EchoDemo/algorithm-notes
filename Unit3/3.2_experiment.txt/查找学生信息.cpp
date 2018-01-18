/*
题目描述
输入N个学生的信息，然后进行查询。

输入
输入的第一行为N，即学生的个数(N<=1000)

接下来的N行包括N个学生的信息，信息格式如下：
01 李江 男 21
02 刘唐 男 23
03 张军 男 19
04 王娜 女 19
然后输入一个M(M<=10000),接下来会有M行，代表M次查询，每行输入一个学号，格式如下：
02
03
01
04
输出
输出M行，每行包括一个对应于查询的学生的信息。

如果没有对应的学生信息，则输出“No Answer!”
样例输入
5
001 张三 男 19
002 李四 男 20
003 王五 男 18
004 赵六 女 17
005 刘七 女 21
7
003
002
005
004
003
001
006
样例输出
003 王五 男 18
002 李四 男 20
005 刘七 女 21
004 赵六 女 17
003 王五 男 18
001 张三 男 19
No Answer!
 */


#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct Student {
	char id[5];
	char name[10];
	char sex[5];
	int age;
}stu[1000];

int main() {
	int n,i;
	while (cin >> n) {
		for (i = 0;i < n;i++) {//输入学生信息；
			cin >> stu[i].id >> stu[i].name >> stu[i].sex >> stu[i].age;
		}
	    int m;
		cin >> m;
		for (int j = 0;j < m;j++) {//查询m次；
			int k = 0;
			char num[5];
			cin >> num;
			for (i = 0;i < n;i++) {
				if (!strcmp(stu[i].id,num))
					break;//两个字符数组的相等与否不能用==来判别；
				k++;
			}
			if (k < n) cout << stu[i].id << " " << stu[i].name << " " << stu[i].sex << " " << stu[i].age << endl;
			else cout << "No Answer" << endl;
		}
	}
	system("pause");
	return 0;
}