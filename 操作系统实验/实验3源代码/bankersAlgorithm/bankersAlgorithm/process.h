#pragma once
class process
{
private:
	int id;
	int state = 0;//����̬���ȴ�̬�����̬�ֱ�Ϊ0��1��2
	int max[3];
	int allocation[3];
	int order = 0;
public:
	process();
	~process();
	int getId();
	void setId(int id);
	int getState();
	void setState(int state);
	int* getMax();
	void setMax(int max[]);
	int* getAllocation();
	void setAllocation(int allocation[]);
};

