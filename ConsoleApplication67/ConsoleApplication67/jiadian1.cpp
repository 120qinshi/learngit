#include "stdafx.h"
#include "jiadian1.h"
#include<iostream>
#define maxnum 10000
#define num 11
using namespace std;


int jiedian(int pre[], int tu[][num], int index[]) {
	int mm = 0;
	cout << "选择功能（1.删除节点  2.增加节点）：";
	cin >> mm;
	if (mm == 1) {
		int aa = 0;
		cout << "选择要删除的节点：";
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
					cout << "新增节点代号：" << cc << endl;
					//cout<<"请输入与新增节点相连边的权值：";
					int ee = 0, ff = 0;
					for (int g = 0; g<num; g++) {
						cout << "与新边相连的节点：";
						cin >> ee;
						if (ee<num&&ee >= 0) {
							cout << "   权值：";
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
