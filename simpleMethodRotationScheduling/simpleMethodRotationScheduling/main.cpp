#include "course.h"

void main() {
	course c[5];
	printf("请输入五组程序优先数及运行时间。\n");
	for (int i = 0; i < 5; i++) {
		int j;
		printf("第%d组：\n运行时间：", i + 1);
		scanf_s("%d", &j);
		c[i].setNeedTime(j);
		c[i].setId(i);
		printf("\n");
	}
	printf("程序运行的顺序为：\n");
	int j = 0;
	for (int i = 0; i < 5; i++) {
		if (c[i].getNeedTime() == 0) {
			if (i == 4)i = 0;
			continue;
		}
		c[i].setNeedTime(c[i].getNeedTime() - 1);
		printf("第%d个运行的程序ID为：%d；开始运行时间为：%d；", j + 1, c[i].getId() + 1, j);
		j++;
		printf("结束运行时间为：%d", j);
		printf("\n");
		if (i == 4)i = 0;
	}
	getchar();
	getchar();
}