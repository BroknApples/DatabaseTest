cmake_minimum_required(VERSION 3.20)

add_subdirectory(dependencies/IXWebSocket)

################################## SERVER ##################################

project("DatabaseServer" LANGUAGES CXX)

set(SERVER_SOURCES 
  src/server-main.cpp 
  src/server-database.cpp 
)

add_executable("DatabaseServer" ${SERVER_SOURCES})
target_link_libraries("DatabaseServer" ixwebsocket)

# ################################## CLIENT ##################################

project("DatabaseClient" LANGUAGES CXX)

set(CLIENT_SOURCES 
  src/client-main.cpp 
  src/client-database.cpp
)

add_executable("DatabaseClient" ${CLIENT_SOURCES})
target_link_libraries("DatabaseClient" ixwebsocket)