#include"dij.h"
//dijkstra算法
void djikstra(int pre[], int tu[][num], int index[], int p) {
	for (int ppp = 0; ppp < num; ppp++) {
		index[ppp] = tu[p][ppp];
	}
	for (int qqq = 0; qqq < num; qqq++)
		pre[qqq] = -1;
	int t[num];  //t=u-s,-1代表不在此集合中，1代表在集合中
	for (int i = 0; i < num; i++) {
		t[i] = 1;
	}
	t[p] = -1;

	int m[num];
	for (int nnn = 0; nnn < num; nnn++)m[nnn] = -1;
	int j, sum = 0;

	for (int i = 0; i < num - 1; i++) {   //循环9次，每次挑选出一个节点进行更新
		for (j = 0; j < num; ++j) {
			if (t[j] != -1) {
				m[sum] = j;
				sum++;
			}
		}
		if (sum > 0) {
			//求出t中index最小的节点记为m[mi];
			int mi = 0;
			for (int a = 1; a < sum; a++) {
				if (index[m[mi]] > index[m[a]]) {
					mi = a;
				}
			}
			t[m[mi]] = -1;
			//比较index[i]和index[j]+tu[j][i]大小
			for (int c = 0; c < sum - 1; c++) {
				if (index[m[mi]] + tu[m[mi]][m[c]] < index[m[c]]) {
					index[m[c]] = index[m[mi]] + tu[m[mi]][m[c]];
					pre[m[c]] = m[mi];
				}
			}
			for (int d = 0; d < num; d++) {   //把m数组再次全部置为-1，相当于为空
				m[d] = -1;
			}
		}
		sum = 0;
	}
}
