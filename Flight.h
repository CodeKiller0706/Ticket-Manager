#pragma once

#include <atltime.h>

class Flight
{
public:
	Flight(char n[], char f[], char t[], CTime& d, CTime& a, int m);
	char* getNo(); // 航班编号
	void getFromTo(char f[], char t[]); // 出发地 目的地
	int getNum(); // 座位总数
	void setPrice(); // 价格

private:
	char _no[16]; //航班编号
	char _f[32];
	char _t[32];
	CTime _depart;
	CTime _arrival;
	int _totalNum;
	int _price;
};