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

set(arms_public_header 
	include/alibabacloud/arms/ARMSClient.h
	include/alibabacloud/arms/ARMSExport.h )

set(arms_public_header_model 
	include/alibabacloud/arms/model/SearchAlertContactRequest.h
	include/alibabacloud/arms/model/SearchAlertContactResult.h
	include/alibabacloud/arms/model/ListTraceAppsRequest.h
	include/alibabacloud/arms/model/ListTraceAppsResult.h
	include/alibabacloud/arms/model/DeleteRetcodeAppRequest.h
	include/alibabacloud/arms/model/DeleteRetcodeAppResult.h
	include/alibabacloud/arms/model/SearchTraceAppByPageRequest.h
	include/alibabacloud/arms/model/SearchTraceAppByPageResult.h
	include/alibabacloud/arms/model/ImportAppAlertRulesRequest.h
	include/alibabacloud/arms/model/ImportAppAlertRulesResult.h
	include/alibabacloud/arms/model/CreateAlertContactGroupRequest.h
	include/alibabacloud/arms/model/CreateAlertContactGroupResult.h
	include/alibabacloud/arms/model/QueryDatasetRequest.h
	include/alibabacloud/arms/model/QueryDatasetResult.h
	include/alibabacloud/arms/model/SearchRetcodeAppByPageRequest.h
	include/alibabacloud/arms/model/SearchRetcodeAppByPageResult.h
	include/alibabacloud/arms/model/SearchTraceAppByNameRequest.h
	include/alibabacloud/arms/model/SearchTraceAppByNameResult.h
	include/alibabacloud/arms/model/ListRetcodeAppsRequest.h
	include/alibabacloud/arms/model/ListRetcodeAppsResult.h
	include/alibabacloud/arms/model/SearchAlertContactGroupRequest.h
	include/alibabacloud/arms/model/SearchAlertContactGroupResult.h
	include/alibabacloud/arms/model/CreateAlertContactRequest.h
	include/alibabacloud/arms/model/CreateAlertContactResult.h
	include/alibabacloud/arms/model/QueryMetricRequest.h
	include/alibabacloud/arms/model/QueryMetricResult.h
	include/alibabacloud/arms/model/CreateRetcodeAppRequest.h
	include/alibabacloud/arms/model/CreateRetcodeAppResult.h )

set(arms_src 
	src/ARMSClient.cc
	src/model/SearchAlertContactRequest.cc
	src/model/SearchAlertContactResult.cc
	src/model/ListTraceAppsRequest.cc
	src/model/ListTraceAppsResult.cc
	src/model/DeleteRetcodeAppRequest.cc
	src/model/DeleteRetcodeAppResult.cc
	src/model/SearchTraceAppByPageRequest.cc
	src/model/SearchTraceAppByPageResult.cc
	src/model/ImportAppAlertRulesRequest.cc
	src/model/ImportAppAlertRulesResult.cc
	src/model/CreateAlertContactGroupRequest.cc
	src/model/CreateAlertContactGroupResult.cc
	src/model/QueryDatasetRequest.cc
	src/model/QueryDatasetResult.cc
	src/model/SearchRetcodeAppByPageRequest.cc
	src/model/SearchRetcodeAppByPageResult.cc
	src/model/SearchTraceAppByNameRequest.cc
	src/model/SearchTraceAppByNameResult.cc
	src/model/ListRetcodeAppsRequest.cc
	src/model/ListRetcodeAppsResult.cc
	src/model/SearchAlertContactGroupRequest.cc
	src/model/SearchAlertContactGroupResult.cc
	src/model/CreateAlertContactRequest.cc
	src/model/CreateAlertContactResult.cc
	src/model/QueryMetricRequest.cc
	src/model/QueryMetricResult.cc
	src/model/CreateRetcodeAppRequest.cc
	src/model/CreateRetcodeAppResult.cc )

add_library(arms ${LIB_TYPE}
	${arms_public_header}
	${arms_public_header_model}
	${arms_src})

set_target_properties(arms
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}arms
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(arms
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ARMS_LIBRARY)
endif()

target_include_directories(arms
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(arms
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(arms
		jsoncpp)
	target_include_directories(arms
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(arms
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(arms
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(arms
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(arms
		jsoncpp)
endif()

install(FILES ${arms_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/arms)
install(FILES ${arms_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/arms/model)
install(TARGETS arms
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)