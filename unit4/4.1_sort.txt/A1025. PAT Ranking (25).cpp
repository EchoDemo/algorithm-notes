/*
Programming Ability Test (PAT) is organized by the College of Computer Science and Technology of Zhejiang University. Each test is supposed to run simultaneously in several places, and the ranklists will be merged immediately after the test. Now it is your job to write a program to correctly merge all the ranklists and generate the final rank.

Input Specification:

Each input file contains one test case. For each case, the first line contains a positive number N (<=100), the number of test locations. Then N ranklists follow, each starts with a line containing a positive integer K (<=300), the number of testees, and then K lines containing the registration number (a 13-digit number) and the total score of each testee. All the numbers in a line are separated by a space.

Output Specification:

For each test case, first print in one line the total number of testees. Then print the final ranklist in the following format:

registration_number final_rank location_number local_rank

The locations are numbered from 1 to N. The output must be sorted in nondecreasing order of the final ranks. The testees with the same score must have the same rank, and the output must be sorted in nondecreasing order of their registration numbers.

Sample Input:
2
5
1234567890001 95
1234567890005 100
1234567890003 95
1234567890002 77
1234567890004 85
4
1234567890013 65
1234567890011 25
1234567890014 100
1234567890012 85
Sample Output:
9
1234567890005 1 1 1
1234567890014 1 2 1
1234567890001 3 1 2
1234567890003 3 1 2
1234567890004 5 1 4
1234567890012 5 2 2
1234567890002 7 1 5
1234567890013 8 2 3
1234567890011 9 2 4
 */


#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
using namespace std;

struct Student {
	char id[14];//序号；
	int score;//成绩；
	int location;//考场号；
	int r1;//整体排名；
	int r2;//所在考场排名；
}stu[30000];

bool cmp(Student a, Student b) {//比较函数；
	if(a.score!=b.score) return a.score > b.score;//若两者成绩不相等，则从大到小排列；
	else return strcmp(a.id, b.id)<0;//若两者成绩相等，则按id的大小排列；
}

int main() {
	int n,i,j=0,x=1;
	cin >> n;
	while (n--) {
		int m;
		cin >> m;
		for (i=j;i < m+j;i++) {
			cin >> stu[i].id >> stu[i].score;
			stu[i].location = x;
		}
		//考场排名；
		sort(stu+j, stu+i, cmp);
		stu[j].r2 = 1;
		for (int k = j+1;k < i;k++) {
			if (stu[k].score == stu[k - 1].score) stu[k].r2 = stu[k - 1].r2;//如果成绩与上一位相等，则排名也相等；
			else stu[k].r2 = k - j + 1;//否则，就等于当前下标减去本考场的初始下标加一；
		}
		j = i;	
		x++;//考场号自增；
	}
	//整体排名；
	sort(stu, stu+i, cmp);
	stu[0].r1 = 1;
	for (int k = 1;k < i;k++) {
		if (stu[k].score == stu[k - 1].score) stu[k].r1 = stu[k - 1].r1;//如果成绩与上一位相等，则排名也相等；
		else stu[k].r1 = k + 1;//否则，就等于当前下标加一；	
	}

	cout << i <<endl;
	for (int k = 0;k < i;k++) {
		cout << stu[k].id << " " << stu[k].r1 << " " <<stu[k].location<<" "<< stu[k].r2 << endl;
	}
	system("pause");
	return 0;
}