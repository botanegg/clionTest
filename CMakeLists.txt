cmake_minimum_required(VERSION 2.8.4)
project(clionTest)

set(CLIENT_EXE_NAME "${PROJECT_NAME}_client")
set(SERVER_EXE_NAME "${PROJECT_NAME}_server")

set(CLIENT_SRCS
	main.cpp
	staticClazz.cpp
	client/app.cpp
)

set(SERVER_SRCS
	main.cpp
	staticClazz.cpp
    server/app.cpp
    #src/server/game.cpp
)

add_executable(${CLIENT_EXE_NAME} ${CLIENT_SRCS})

add_executable(${SERVER_EXE_NAME} ${SERVER_SRCS})