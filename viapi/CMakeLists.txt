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

set(viapi_public_header 
	include/alibabacloud/viapi/ViapiClient.h
	include/alibabacloud/viapi/ViapiExport.h )

set(viapi_public_header_model 
	include/alibabacloud/viapi/model/CancelWaitingAsyncJobRequest.h
	include/alibabacloud/viapi/model/CancelWaitingAsyncJobResult.h
	include/alibabacloud/viapi/model/GetAsyncJobResultRequest.h
	include/alibabacloud/viapi/model/GetAsyncJobResultResult.h
	include/alibabacloud/viapi/model/QueryAsyncJobListRequest.h
	include/alibabacloud/viapi/model/QueryAsyncJobListResult.h )

set(viapi_src 
	src/ViapiClient.cc
	src/model/CancelWaitingAsyncJobRequest.cc
	src/model/CancelWaitingAsyncJobResult.cc
	src/model/GetAsyncJobResultRequest.cc
	src/model/GetAsyncJobResultResult.cc
	src/model/QueryAsyncJobListRequest.cc
	src/model/QueryAsyncJobListResult.cc )

add_library(viapi ${LIB_TYPE}
	${viapi_public_header}
	${viapi_public_header_model}
	${viapi_src})

set_target_properties(viapi
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}viapi
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(viapi
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_VIAPI_LIBRARY)
endif()

target_include_directories(viapi
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(viapi
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(viapi
		jsoncpp)
	target_include_directories(viapi
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(viapi
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(viapi
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(viapi
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(viapi
		jsoncpp)
endif()

install(FILES ${viapi_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/viapi)
install(FILES ${viapi_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/viapi/model)
install(TARGETS viapi
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)