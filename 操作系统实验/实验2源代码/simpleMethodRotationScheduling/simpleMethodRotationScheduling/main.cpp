#include "course.h"

void main() {
	course c[5];
	printf("�������������������������ʱ�䡣\n");
	for (int i = 0; i < 5; i++) {
		int j;
		printf("��%d�飺\n����ʱ�䣺", i + 1);
		scanf_s("%d", &j);
		c[i].setNeedTime(j);
		c[i].setId(i);
		printf("\n");
	}
	printf("�������е�˳��Ϊ��\n");
	int j = 0;
	for (int i = 0; i < 5; i++) {
		if (c[i].getNeedTime() == 0) {
			if (i == 4)i = 0;
			continue;
		}
		c[i].setNeedTime(c[i].getNeedTime() - 1);
		printf("��%d�����еĳ���IDΪ��%d����ʼ����ʱ��Ϊ��%d��", j + 1, c[i].getId() + 1, j);
		j++;
		printf("��������ʱ��Ϊ��%d", j);
		printf("\n");
		if (i == 4)i = 0;
	}
	getchar();
	getchar();
}