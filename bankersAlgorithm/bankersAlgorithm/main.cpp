#include<iostream>
#include "process.h"

void initialize(process p[]) {
	int max[5][3] = { {7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3} };
	int allocation[5][3] = { {0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2} };
	for (int i = 0; i < 5; i++) {
		p[i].setId(i);
		p[i].setMax(max[i]);
		p[i].setAllocation(allocation[i]);
	}
}

int lombard(process p[], int s[]) {
	char c[3] = { 'A','B','C' };
	int z = 0;
	for (int i = 0; i < 5; i++) {
		if (p[i].getState() == 2)continue;
		printf_s("进程%d要求资源。\n",p[i].getId());
		for (int j = 0; j < 3; j++)if (p[i].getMax()[j] - p[i].getAllocation()[j] > s[j]) {
			p[i].setState(1);
			printf_s("资源%c不足。", c[j]);
		}
		if (!p[i].getState()) {
			printf_s("请求通过，资源已分配。\n");
			printf_s("进程终了，资源释放A:%d B:%d C:%d。\n", p[i].getMax()[0], p[i].getMax()[1], p[i].getMax()[2]);
			p[i].setState(2);
			for (int j = 0; j < 3; j++)s[j] += p[i].getAllocation()[j];
			printf_s("现在系统资源：A:%d B:%d C:%d。\n", s[0], s[1], s[2]);
			process k = p[i];
			p[i] = p[z];
			p[z] = k;
			i = 0;
			z++;
			for (int o = z; o < 5; o++)if (p[o].getState() == 1)p[o].setState(0);
		}
		else printf_s("\n请求被拒绝，该进程进入等待状态。\n");
	}
	for (int i = 0; i < 5; i++)if (p[i].getState() == 1)return 0;
	return 1;
}

void main() {
	int systemAvaliable[3] = {3,3,2};
	process p[5];
	initialize(p);
	if (lombard(p, systemAvaliable)) {
		printf_s("程序运行顺序为：");
		for (int i = 0; i < 5; i++)printf_s("%d ", p[i].getId());
	}
	else std::cout << "该情况无解。" << std::endl;
	getchar();
}
