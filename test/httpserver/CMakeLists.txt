cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)

add_executable(httpserver_for_ut
  HTTPServer.cpp
  ServerThread.cpp
  main.cpp
)

# httpserver_for_ut use pthread
find_package(Threads)
target_link_libraries(httpserver_for_ut ${CMAKE_THREAD_LIBS_INIT})

# copy httpserver_for_ut to the same directory as the core_ut binary
set_target_properties(httpserver_for_ut
  PROPERTIES
  OUTPUT_NAME httpserver_for_ut
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# httpserver_for_ut echo this message to client
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/index.html ${CMAKE_BINARY_DIR}/bin/index.html COPYONLY)
