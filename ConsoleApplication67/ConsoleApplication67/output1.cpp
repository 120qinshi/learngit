#include "stdafx.h"
#include "output1.h"
#include<iostream>

#define maxnum 10000
#define num 11
using namespace std;

void output(int pre[], int tu[][num], int index[], int p) {
	int prenum;
	for (int e = 0; e<num - 1; e++) {
		if (e != p&&index[e]<maxnum) {
			cout << "Ŀ��ڵ㣺" << "R" << e << "  ";
			if (pre[e] != -1) {
				prenum = e;
				while (pre[prenum] != -1) {
					prenum = pre[prenum];
				}
				cout << "��һ����" << prenum << endl;
			}
			else { cout << "ֱ�ӽ���" << endl; }
		}
	}

}
