#include "bianquangai.h"
void bian(int pre[], int tu[][num], int index[]) {
	int i = 0, j = 0, v = 0;
	cout << "请输入要更改边的为R";
	cin >> i;
	cout << "~R";
	cin >> j;
	cout << "新的权值为：";
	cin >> v;
	tu[i][j] = v;
	tu[j][i] = v;
}