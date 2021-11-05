#pragma once

#include"Flight.h"

class IOrderList;

class Company
{
public:
	Company(IOrderList* pList);
	void add(int day, Flight& f);
	void remove(int day, Flight& flight);
	int quary(CTime& date, char from[], char to[], int m);
	int order(char name[], CTime& date, char fn[], int m);
	Flight* quary(int num, CTime& time, int& r);
	int remove(int num);
private:
	IOrderList* m_List;
	//CMapStringToOb flights;
	//CObList plan[7];
};