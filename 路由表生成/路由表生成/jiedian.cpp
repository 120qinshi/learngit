#include"jiedian.h"
int jiedian(int pre[], int tu[][num], int index[]) 
{
	int mm = 0;
	cout << "ѡ���ܣ�1.ɾ���ڵ�  2.���ӽڵ㣩��";
	cin >> mm;
	if (mm == 1) {
		int aa = 0;
		cout << "ѡ��Ҫɾ���Ľڵ㣺";
		cin >> aa;
		for (int bb = 0; bb < num; bb++) {
			tu[aa][bb] = maxnum;
			tu[bb][aa] = maxnum;
		}
	}
	else {
		int sum = 0, dd = 0, ee = 0;
		cout << "�������ӽڵ�Ĵ��ţ�";
		cin >> sum;
		if (sum >= num || sum < 0) {
			cout << "���������������룺";
			cin >> sum;
		}
		for (int cc = 0; cc < num; cc++) {
			cout << "���������±������Ľڵ���ţ�";
			cin >> dd;
			if (dd > num) { return 0; }
			else {
				cout << "�������µ�Ȩֵ��";
				cin >> ee;
				tu[sum][dd] = ee;
				tu[dd][sum] = ee;
			}
		}
	}
	
}

