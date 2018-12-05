#include "Êä³öÍ¼.h"
void outputtu(int tu[][num]) {
	int q = 0;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << tu[i][j] << "   ";
			q++;
			if (q%num == 0) {
				cout << endl;
			}
		}
	}
}
