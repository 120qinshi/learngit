#include "stdafx.h"
#include "jiadian1.h"
#include<iostream>
#define maxnum 10000
#define num 11
using namespace std;


int jiedian(int pre[], int tu[][num], int index[]) {
	int mm = 0;
	cout << "ѡ���ܣ�1.ɾ���ڵ�  2.���ӽڵ㣩��";
	cin >> mm;
	if (mm == 1) {
		int aa = 0;
		cout << "ѡ��Ҫɾ���Ľڵ㣺";
		cin >> aa;
		for (int bb = 0; bb<num; bb++) {
			tu[aa][bb] = maxnum;
			tu[bb][aa] = maxnum;
		}
	}
	else {
		int sum = 0;
		for (int cc = 0; cc<num; cc++) {
			for (int dd = 0; dd<num; dd++) {
				if (tu[cc][dd] == maxnum) {
					sum++;
				}
				else {
					sum = 0;
					break;
				}
				if (sum == num) {
					cout << "�����ڵ���ţ�" << cc << endl;
					//cout<<"�������������ڵ������ߵ�Ȩֵ��";
					int ee = 0, ff = 0;
					for (int g = 0; g<num; g++) {
						cout << "���±������Ľڵ㣺";
						cin >> ee;
						if (ee<num&&ee >= 0) {
							cout << "   Ȩֵ��";
							cin >> ff;
							tu[cc][ee] = ff;
							tu[ee][cc] = ff;
						}
						else { break; }
					}
				}
			}
		}
	}
	return 0;
}
