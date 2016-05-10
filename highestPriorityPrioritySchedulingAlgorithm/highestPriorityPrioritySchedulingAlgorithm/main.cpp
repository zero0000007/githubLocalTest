#include "course.h"

void sort(course c[],int k) {
	for (int i = 0; i < k; i++) {
		for (int j = i; j < k; j++) {
			if (c[i].getPrior() < c[j].getPrior()) {
				course s = c[j];
				c[j] = c[i];
				c[i] = s;
			}
		}
	}
}

void main() {
	course c[5];
	printf("请输入五组程序优先数及运行时间。\n");
	for (int i = 0; i < 5; i++) {
		int j;
		//c[i] = new course;
		printf("第%d组：\n优先数:", i+1);
		scanf_s("%d", &j);
		c[i].setPrior(j);
		printf("\n运行时间：");
		scanf_s("%d", &j);
		c[i].setNeedTime(j);
		c[i].setId(i);
		printf("\n");
	}
	sort(c, 5);
	printf("程序运行的顺序为：\n");
	int j = 0;
	for (int i = 0; i < 5; i++) {
		printf("第%d个运行的程序ID为：%d；开始运行时间为：%d；", i + 1, c[i].getId() + 1, j);
		j = j + c[i].getNeedTime();
		printf("结束运行时间为：%d", j);
		printf("\n");
	}
	getchar();
	getchar();
}