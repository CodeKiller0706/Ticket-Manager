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

};