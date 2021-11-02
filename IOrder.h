#pragma once

#include <atltime.h>
#include "Flight.h"

class IOrder
{
public:
	virtual int getNo(); // 获取订单编号
	virtual char* getName(); // 获取预定人姓名
	virtual CTime& getTime(); // 出发日期
	virtual Flight& getFlight(); // 预定航班
	virtual int getNum(); //座位数量
	virtual int getPrice(); // 获得总价
};

class IOrderList
{

};