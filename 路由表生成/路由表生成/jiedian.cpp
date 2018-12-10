#include"jiedian.h"
int jiedian(int pre[], int tu[][num], int index[]) 
{
	int mm = 0;
	cout << "选择功能（1.删除节点  2.增加节点）：";
	cin >> mm;
	if (mm == 1) {
		int aa = 0;
		cout << "选择要删除的节点：";
		cin >> aa;
		for (int bb = 0; bb < num; bb++) {
			tu[aa][bb] = maxnum;
			tu[bb][aa] = maxnum;
		}
	}
	else {
		int sum = 0, dd = 0, ee = 0;
		cout << "输入增加节点的代号：";
		cin >> sum;
		if (sum >= num || sum < 0) {
			cout << "输入有误，重新输入：";
			cin >> sum;
		}
		for (int cc = 0; cc < num; cc++) {
			cout << "请输入与新编相连的节点代号：";
			cin >> dd;
			if (dd > num) { return 0; }
			else {
				cout << "请输入新的权值：";
				cin >> ee;
				tu[sum][dd] = ee;
				tu[dd][sum] = ee;
			}
		}
	}
	
}

