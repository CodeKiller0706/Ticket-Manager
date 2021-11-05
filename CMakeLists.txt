PROJECT(Ticket-Manager)

CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

INCLUDE_DIRECTORIES(inc)

SET(
DIR_INCS
"inc/Company.h"
"inc/Flight.h"
"inc/IOrder.h"
)

AUX_SOURCE_DIRECTORY(src DIR_SRCS)

file(
    GLOB
    AllFile
    "inc/*.h"
    "src/*.cpp"
)

ADD_EXECUTABLE(main ${AllFile})

SOURCE_GROUP("include" FILES ${DIR_INCS})
SOURCE_GROUP("source" FILES ${DIR_SRCS})