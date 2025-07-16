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

set(lingmou_public_header 
	include/alibabacloud/lingmou/LingMouClient.h
	include/alibabacloud/lingmou/LingMouExport.h )

set(lingmou_public_header_model 
	include/alibabacloud/lingmou/model/CreateChatSessionRequest.h
	include/alibabacloud/lingmou/model/CreateChatSessionResult.h )

set(lingmou_src 
	src/LingMouClient.cc
	src/model/CreateChatSessionRequest.cc
	src/model/CreateChatSessionResult.cc )

add_library(lingmou ${LIB_TYPE}
	${lingmou_public_header}
	${lingmou_public_header_model}
	${lingmou_src})

set_target_properties(lingmou
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}lingmou
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(lingmou
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_LINGMOU_LIBRARY)
endif()

target_include_directories(lingmou
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(lingmou
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(lingmou
		jsoncpp)
	target_include_directories(lingmou
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(lingmou
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(lingmou
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(lingmou
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(lingmou
		jsoncpp)
endif()

install(FILES ${lingmou_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/lingmou)
install(FILES ${lingmou_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/lingmou/model)
install(TARGETS lingmou
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)