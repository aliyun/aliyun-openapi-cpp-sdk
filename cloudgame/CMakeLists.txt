#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(cloudgame_public_header 
	include/alibabacloud/cloudgame/CloudgameClient.h
	include/alibabacloud/cloudgame/CloudgameExport.h )

set(cloudgame_public_header_model 
	include/alibabacloud/cloudgame/model/ListGamesRequest.h
	include/alibabacloud/cloudgame/model/ListGamesResult.h
	include/alibabacloud/cloudgame/model/ListProjectsRequest.h
	include/alibabacloud/cloudgame/model/ListProjectsResult.h )

set(cloudgame_src 
	src/CloudgameClient.cc
	src/model/ListGamesRequest.cc
	src/model/ListGamesResult.cc
	src/model/ListProjectsRequest.cc
	src/model/ListProjectsResult.cc )

add_library(cloudgame ${LIB_TYPE}
	${cloudgame_public_header}
	${cloudgame_public_header_model}
	${cloudgame_src})

set_target_properties(cloudgame
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloudgame
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cloudgame
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CLOUDGAME_LIBRARY)
endif()

target_include_directories(cloudgame
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cloudgame
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cloudgame
		jsoncpp)
	target_include_directories(cloudgame
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cloudgame
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cloudgame
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cloudgame
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cloudgame
		jsoncpp)
endif()

install(FILES ${cloudgame_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloudgame)
install(FILES ${cloudgame_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloudgame/model)
install(TARGETS cloudgame
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)