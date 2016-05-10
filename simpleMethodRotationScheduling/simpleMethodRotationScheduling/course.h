#pragma once
#include <string>
	class course
	{
	private:
		int id;
		std::string name;
		int prior;
		int needTime;
		int haveTime;
	public:
		course(int prior, int needTime);
		course();
		~course();
		void setPrior(int prior);
		int getPrior();
		void setNeedTime(int time);
		int getNeedTime();
		void setId(int id);
		int getId();
	};

