PROJECT(Ticket-Manager)

CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

AUX_SOURCE_DIRECTORY(inc DIR_INCS)
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