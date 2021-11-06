#pragma once

#include <atltime.h>
#include<vector>
#include<map>
#include "Flight.h"

class IOrder
{
public:
    IOrder(char* ownerName, const CTime& departDay, Flight* flight);
    int getNo(); // ��ȡ�������
    char* getName(); // ��ȡԤ��������
    CTime& getDepartDay(); // ��������
    Flight* getFlight(); // Ԥ������

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

    int create(char* ownerName, const CTime& t, Flight* pFlight); // ��������, ���ض������
    // search order
    IOrder* getOrder(int n); // ������ţ���ѯ����
    std::vector<IOrder*>& getOrder(char* ownerName);

    void remove(int n); // ������ţ� ��������

private:
    IOrderManager() = default;
    ~IOrderManager() = default;
    static IOrderManager* m_instance;
    std::map<int, IOrder*> m_Map;
};
