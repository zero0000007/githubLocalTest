#include "course.h"

void sort(course *c[],int k) {
	for (int i = 0; i < k; i++) {
		for (int j = i; j < k; j++) {
			if (c[i]->getPrior() < c[j]->getPrior()) {
				course *s = c[j];
				c[j] = c[i];
				c[i] = s;
			}
		}
	}
}

void main() {
	course *c[5] = { new course };
	printf("�������������������������ʱ�䡣\n");
	for (int i = 0; i < 5; i++) {
		int j;
		printf("��%d�飺\n������:", i);
		scanf("%d", j);
		c[i]->setPrior(j);
		printf("\n����ʱ�䣺");
		scanf("%d", j);
		c[i]->setNeedTime(j);
		c[i]->setId(i);
		printf("\n");
	}
	sort(c, 5);
	printf("�������е�˳��Ϊ��\n");
	for (int i = 0; i < 5; i++) {
		int j = 0;
		printf("��%d�����еĳ���IDΪ��%d����ʼ����ʱ��Ϊ��%d��", i, c[i]->getId(), j);
		j += c[i]->getNeedTime;
		printf("��������ʱ��Ϊ��%d", j);
		printf("\n");
	}
}