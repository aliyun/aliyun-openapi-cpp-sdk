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

set(cams_public_header 
	include/alibabacloud/cams/CamsClient.h
	include/alibabacloud/cams/CamsExport.h )

set(cams_public_header_model 
	include/alibabacloud/cams/model/CheckContactsRequest.h
	include/alibabacloud/cams/model/CheckContactsResult.h
	include/alibabacloud/cams/model/SendMessageRequest.h
	include/alibabacloud/cams/model/SendMessageResult.h )

set(cams_src 
	src/CamsClient.cc
	src/model/CheckContactsRequest.cc
	src/model/CheckContactsResult.cc
	src/model/SendMessageRequest.cc
	src/model/SendMessageResult.cc )

add_library(cams ${LIB_TYPE}
	${cams_public_header}
	${cams_public_header_model}
	${cams_src})

set_target_properties(cams
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cams
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cams
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CAMS_LIBRARY)
endif()

target_include_directories(cams
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cams
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cams
		jsoncpp)
	target_include_directories(cams
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cams
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cams
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cams
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cams
		jsoncpp)
endif()

install(FILES ${cams_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cams)
install(FILES ${cams_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cams/model)
install(TARGETS cams
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)