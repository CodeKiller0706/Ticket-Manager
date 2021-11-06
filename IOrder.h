#pragma once

#include <atltime.h>
#include<vector>
#include<map>
#include "Flight.h"

class IOrder
{
public:
    IOrder(char* ownerName, const CTime& departDay, Flight* flight);
    int getNo(); // 获取订单编号
    char* getName(); // 获取预定人姓名
    CTime& getDepartDay(); // 出发日期
    Flight* getFlight(); // 预定航班

private:
    char* m_OwnerName;
    Flight* m_Flight;
    int m_OrderNum;
    CTime m_DepartDay;
};

class IOrderManager
{
public:
    static IOrderManager* getInstance()
    {
        if (m_instance == nullptr)
            m_instance = new IOrderManager;
        return m_instance;
    }

    int create(char* ownerName, const CTime& t, Flight* pFlight); // 建立订单, 返回订单编号
    // search order
    IOrder* getOrder(int n); // 给定编号，查询订单
    std::vector<IOrder*>& getOrder(char* ownerName);

    void remove(int n); // 给定编号， 撤销订单

private:
    IOrderManager() = default;
    ~IOrderManager() = default;
    static IOrderManager* m_instance;
    std::map<int, IOrder*> m_Map;
};
