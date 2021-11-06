#pragma once

#include <atltime.h>

class Flight
{
public:
    Flight(char* flightNum, char* from, char* to, CTime& takeOff, CTime& arrive, int seats);
    ~Flight();
    char* getNo(); // 航班编号
    void getFromTo(char*& from, char*& to); // 出发地 目的地
    int getSeats(); // 座位总数
    void setPrice(int price); // 价格
    int getPrice();
    void getFromToTime(CTime& departTime, CTime& arriveTime);

private:
    char* m_FlightNum; //航班编号
    char* m_From;
    char* m_To;
    CTime m_Depart;
    CTime m_Arrival;
    int m_Seats;
    int m_Price;
};
