#include"main.h"

int main() {
	// int num=11;
	int pre[num];  //��¼��ʼ�ڵ㵽��ǰ�ڵ���������ǰһ���ڵ�
	int tu[num][num];  //�洢����·����Ȩֵ
	int index[num];  //�洢��ʼ�ڵ㵽�������Ȩֵ

	int h = 0;
	initial(pre, tu, index);
	for (int k = 0; k < 8; k++) {
		cout << "��ѡ���ܣ�1.ֱ�����  2.�޸ı�  3.�޸Ľڵ�  4.�˳�����";
		cin >> h;
		int p;
		switch (h) {
		case 1://initial(pre,tu,index);
			cout << "����Ҫ���ҵĽڵ㣺";
			cin >> p;
			djikstra(pre, tu, index, p);
			output(pre, tu, index, p);
			break;
		case 2://initial(pre,tu,index);
			bian(pre, tu, index);   //�ߵ���ɾ
			cout << "����Ҫ���ҵĽڵ㣺";
			cin >> p;
			djikstra(pre, tu, index, p);
			output(pre, tu, index, p);    //�������
			break;
		case 3://initial(pre,tu,index);
			jiedian(pre, tu, index);
			cout << "����Ҫ���ҵĽڵ㣺";
			cin >> p;
			djikstra(pre, tu, index, p);
			output(pre, tu, index, p);
			break;
		case 4:return 0;
		}
	}
}