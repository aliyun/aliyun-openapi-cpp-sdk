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

set(jarvis-public_public_header 
	include/alibabacloud/jarvis-public/Jarvis_publicClient.h
	include/alibabacloud/jarvis-public/Jarvis_publicExport.h )

set(jarvis-public_public_header_model 
	include/alibabacloud/jarvis-public/model/DescribeAttackEventRequest.h
	include/alibabacloud/jarvis-public/model/DescribeAttackEventResult.h
	include/alibabacloud/jarvis-public/model/DescribeAttackedIpRequest.h
	include/alibabacloud/jarvis-public/model/DescribeAttackedIpResult.h
	include/alibabacloud/jarvis-public/model/DescribeCountAttackEventRequest.h
	include/alibabacloud/jarvis-public/model/DescribeCountAttackEventResult.h
	include/alibabacloud/jarvis-public/model/DescribePhoneInfoRequest.h
	include/alibabacloud/jarvis-public/model/DescribePhoneInfoResult.h )

set(jarvis-public_src 
	src/Jarvis-publicClient.cc
	src/model/DescribeAttackEventRequest.cc
	src/model/DescribeAttackEventResult.cc
	src/model/DescribeAttackedIpRequest.cc
	src/model/DescribeAttackedIpResult.cc
	src/model/DescribeCountAttackEventRequest.cc
	src/model/DescribeCountAttackEventResult.cc
	src/model/DescribePhoneInfoRequest.cc
	src/model/DescribePhoneInfoResult.cc )

add_library(jarvis-public ${LIB_TYPE}
	${jarvis-public_public_header}
	${jarvis-public_public_header_model}
	${jarvis-public_src})

set_target_properties(jarvis-public
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}jarvis-public
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(jarvis-public
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_JARVIS_PUBLIC_LIBRARY)
endif()

target_include_directories(jarvis-public
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(jarvis-public
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(jarvis-public
		jsoncpp)
	target_include_directories(jarvis-public
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(jarvis-public
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(jarvis-public
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(jarvis-public
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(jarvis-public
		jsoncpp)
endif()

install(FILES ${jarvis-public_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/jarvis-public)
install(FILES ${jarvis-public_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/jarvis-public/model)
install(TARGETS jarvis-public
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)