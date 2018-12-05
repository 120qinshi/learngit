#include"csh.h"
//³õÊ¼»¯º¯Êý
void initial(int pre[], int tu[][num], int index[]) {
	for (int pp = 0; pp < num; pp++) {
		for (int qq = 0; qq < num; qq++) {
			tu[pp][qq] = maxnum;
		}
	}
	tu[5][0] = tu[0][5] = 1;
	tu[0][6] = tu[6][0] = 1;
	tu[1][0] = tu[0][1] = 2;
	tu[2][1] = tu[1][2] = 2;
	tu[1][3] = tu[3][1] = 4;
	tu[3][2] = tu[2][3] = 1;
	tu[5][2] = tu[2][5] = 3;
	tu[2][6] = tu[6][2] = 2;
	tu[4][3] = tu[3][4] = 1;
	tu[3][6] = tu[6][3] = 6;
	tu[3][7] = tu[7][3] = 5;
	tu[8][3] = tu[3][8] = 2;
	tu[5][4] = tu[4][5] = 5;
	tu[6][5] = tu[5][6] = 1;
	tu[7][6] = tu[6][7] = 3;
	tu[8][7] = tu[7][8] = 2;
}
