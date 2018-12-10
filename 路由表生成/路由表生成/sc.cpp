#include"sc.h"
void output(int pre[], int tu[][num], int index[], int p) {
	int prenum;
	cout << "田海洋";
	for (int e = 0; e < num ; e++) {
		if (e != p && index[e] < maxnum) {
			cout << "目标节点：" << "R" << e << "  ";
			if (pre[e] != -1) {
				prenum = e;
				while (pre[prenum] != -1) {
					prenum = pre[prenum];
				}
				cout << "下一跳：" << prenum << endl;
			}
			else { cout << "下一跳："<<e <<endl;}
		}
	}

}