#pragma once

#include <atltime.h>

class Flight
{
public:
	Flight(char n[], char f[], char t[], CTime& d, CTime& a, int m);
	char* getNo(); // ������
	void getFromTo(char f[], char t[]); // ������ Ŀ�ĵ�
	int getNum(); // ��λ����
	void setPrice(); // �۸�

private:
	char _no[16]; //������
	char _f[32];
	char _t[32];
	CTime _depart;
	CTime _arrival;
	int _totalNum;
	int _price;
};