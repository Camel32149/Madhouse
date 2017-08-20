//#pragma once
class API
{
public:
	API(bool f_flag, int* p1, int* p2);
	~API();
	int result;
	int *ptrE;
	int *ptrS;
protected:
	bool flag;
	//void Trans(int f_a);
	int getEnemyLastResult();
	int getSelfLastResult();
	virtual void core()=0;
};

