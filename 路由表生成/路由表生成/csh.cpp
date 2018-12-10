#include"csh.h"
//³õÊ¼»¯º¯Êý
void initial(int pre[], int tu[][num], int index[]) {
	for (int pp = 0; pp < num; pp++) {
		for (int qq = 0; qq < num; qq++) {
			tu[pp][qq] = maxnum;
		}
	}
	tu[6][1] = tu[1][6] = 1;
	tu[1][7] = tu[7][1] = 1;
	tu[2][1] = tu[1][2] = 2;
	tu[3][2] = tu[2][3] = 2;
	tu[2][4] = tu[4][2] = 4;
	tu[4][3] = tu[3][4] = 1;
	tu[6][3] = tu[3][6] = 3;
	tu[3][7] = tu[7][3] = 2;
	tu[5][4] = tu[4][5] = 1;
	tu[4][7] = tu[7][4] = 6;
	tu[4][8] = tu[8][4] = 5;
	tu[9][4] = tu[4][9] = 2;
	tu[6][5] = tu[5][6] = 5;
	tu[7][6] = tu[6][7] = 1;
	tu[8][7] = tu[7][8] = 3;
	tu[9][8] = tu[8][9] = 2;
}
