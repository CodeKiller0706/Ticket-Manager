PROJECT(Ticket-Manager)

CMAKE_MINIMUM_REQUIRED(VERSION 2.8.2)

SET(Inc 
Flight.h
IOrder.h
)


SET(Src
main.cpp
)

SOURCE_GROUP("inc" FILES ${Inc})
SOURCE_GROUP("src" FILES ${Src})
