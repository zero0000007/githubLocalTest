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
	printf("�������������������������ʱ�䡣\n");
	for (int i = 0; i < 5; i++) {
		int j;
		//c[i] = new course;
		printf("��%d�飺\n������:", i+1);
		scanf_s("%d", &j);
		c[i].setPrior(j);
		printf("\n����ʱ�䣺");
		scanf_s("%d", &j);
		c[i].setNeedTime(j);
		c[i].setId(i);
		printf("\n");
	}
	sort(c, 5);
	printf("�������е�˳��Ϊ��\n");
	int j = 0;
	for (int i = 0; i < 5; i++) {
		printf("��%d�����еĳ���IDΪ��%d����ʼ����ʱ��Ϊ��%d��", i + 1, c[i].getId() + 1, j);
		j = j + c[i].getNeedTime();
		printf("��������ʱ��Ϊ��%d", j);
		printf("\n");
	}
	getchar();
	getchar();
}