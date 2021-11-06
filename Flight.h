#pragma once

#include <atltime.h>

class Flight
{
public:
    Flight(char* flightNum, char* from, char* to, CTime& takeOff, CTime& arrive, int seats);
    ~Flight();
    char* getNo(); // ������
    void getFromTo(char*& from, char*& to); // ������ Ŀ�ĵ�
    int getSeats(); // ��λ����
    void setPrice(int price); // �۸�
    int getPrice();
    void getFromToTime(CTime& departTime, CTime& arriveTime);

private:
    char* m_FlightNum; //������
    char* m_From;
    char* m_To;
    CTime m_Depart;
    CTime m_Arrival;
    int m_Seats;
    int m_Price;
};
