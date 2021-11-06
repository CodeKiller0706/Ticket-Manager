#include"Flight.h"

Flight::Flight(char* flightNum, char* from, char* to, CTime& takeOff, CTime& arrive, int seats)
    :m_FlightNum(flightNum)
    ,m_From(from)
    ,m_To(to)
    ,m_Depart(takeOff)
    ,m_Arrival(arrive)
    ,m_Seats(seats)
{}

Flight::~Flight()
{
    if (m_From)
        delete m_From;
    if (m_To)
        delete m_To;
    if (m_FlightNum)
        delete m_FlightNum;
}

char* Flight::getNo()
{
    return m_FlightNum;
}

void Flight::getFromTo(char*& from, char*& to)
{
    from = m_From;
    to = m_To;
}

int Flight::getSeats()
{
    return m_Seats;
}

void Flight::setPrice(int price)
{
    m_Price = price;
}

int Flight::getPrice()
{
    return m_Price;
}

void Flight::getFromToTime(CTime& departTime, CTime& arriveTime)
{
    departTime = m_Depart;
    arriveTime = m_Arrival;;
}

