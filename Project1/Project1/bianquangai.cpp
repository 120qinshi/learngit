#include "bianquangai.h"
void bian(int pre[], int tu[][num], int index[]) {
	int i = 0, j = 0, v = 0;
	cout << "������Ҫ���ıߵ�ΪR";
	cin >> i;
	cout << "~R";
	cin >> j;
	cout << "�µ�ȨֵΪ��";
	cin >> v;
	tu[i][j] = v;
	tu[j][i] = v;
}