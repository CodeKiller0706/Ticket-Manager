#pragma once

#include <atltime.h>
#include "Flight.h"

class IOrder
{
public:
	virtual int getNo(); // ��ȡ�������
	virtual char* getName(); // ��ȡԤ��������
	virtual CTime& getTime(); // ��������
	virtual Flight& getFlight(); // Ԥ������
	virtual int getNum(); //��λ����
	virtual int getPrice(); // ����ܼ�
};

class IOrderList
{
public:
	virtual int create(char name[], CTime& t, Flight* pFlight, int m) = 0; // ��������
	virtual IOrder* getOrder(int n) = 0; // ������ţ���ѯ����
	virtual int remove(int n) = 0; // ������ţ� ��������
};