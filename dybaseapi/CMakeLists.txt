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

set(dybaseapi_public_header 
	include/alibabacloud/dybaseapi/DybaseapiClient.h
	include/alibabacloud/dybaseapi/DybaseapiExport.h )

set(dybaseapi_public_header_model 
	include/alibabacloud/dybaseapi/model/QueryTokenForMnsQueueRequest.h
	include/alibabacloud/dybaseapi/model/QueryTokenForMnsQueueResult.h )

set(dybaseapi_src 
	src/DybaseapiClient.cc
	src/model/QueryTokenForMnsQueueRequest.cc
	src/model/QueryTokenForMnsQueueResult.cc )

add_library(dybaseapi ${LIB_TYPE}
	${dybaseapi_public_header}
	${dybaseapi_public_header_model}
	${dybaseapi_src})

set_target_properties(dybaseapi
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dybaseapi
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dybaseapi
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DYBASEAPI_LIBRARY)
endif()

target_include_directories(dybaseapi
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dybaseapi
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dybaseapi
		jsoncpp)
	target_include_directories(dybaseapi
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dybaseapi
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dybaseapi
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dybaseapi
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dybaseapi
		jsoncpp)
endif()

install(FILES ${dybaseapi_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dybaseapi)
install(FILES ${dybaseapi_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dybaseapi/model)
install(TARGETS dybaseapi
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)