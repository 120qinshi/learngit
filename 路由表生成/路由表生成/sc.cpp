#include"sc.h"
void output(int pre[], int tu[][num], int index[], int p) {
	int prenum;
	cout << "�ﺣ��";
	for (int e = 0; e < num ; e++) {
		if (e != p && index[e] < maxnum) {
			cout << "Ŀ��ڵ㣺" << "R" << e << "  ";
			if (pre[e] != -1) {
				prenum = e;
				while (pre[prenum] != -1) {
					prenum = pre[prenum];
				}
				cout << "��һ����" << prenum << endl;
			}
			else { cout << "��һ����"<<e <<endl;}
		}
	}

}