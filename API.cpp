//#include "stdafx.h"
#include "API.h"


API::API(bool f_flag, int *p1, int *p2)
{	
	flag = f_flag;
	ptrE = p1;
	ptrS = p2;
	//core();
}


API::~API()
{
}


/*void API::Trans(int f_a)
{
	result = f_a;
}*/

int API::getEnemyLastResult()
{

	return *ptrE;
}

int API::getSelfLastResult()
{

	return *ptrS;
}