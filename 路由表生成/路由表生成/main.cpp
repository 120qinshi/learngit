#include"main.h"

int main() {
	// int num=11;
	int pre[num];  //记录初始节点到当前节点所经过的前一个节点
	int tu[num][num];  //存储所有路径的权值
	int index[num];  //存储初始节点到给定点的权值

	int h = 0;
	initial(pre, tu, index);
	for (int k = 0; k < 8; k++) {
		cout << "请选择功能（1.直接输出  2.修改边  3.修改节点  4.退出）：";
		cin >> h;
		int p;
		switch (h) {
		case 1://initial(pre,tu,index);
			cout << "输入要查找的节点：";
			cin >> p;
			djikstra(pre, tu, index, p);
			output(pre, tu, index, p);
			break;
		case 2://initial(pre,tu,index);
			bian(pre, tu, index);   //边的增删
			cout << "输入要查找的节点：";
			cin >> p;
			djikstra(pre, tu, index, p);
			output(pre, tu, index, p);    //输出函数
			break;
		case 3://initial(pre,tu,index);
			jiedian(pre, tu, index);
			cout << "输入要查找的节点：";
			cin >> p;
			djikstra(pre, tu, index, p);
			output(pre, tu, index, p);
			break;
		case 4:return 0;
		}
	}
}