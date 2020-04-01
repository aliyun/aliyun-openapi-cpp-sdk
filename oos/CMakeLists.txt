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

set(oos_public_header 
	include/alibabacloud/oos/OosClient.h
	include/alibabacloud/oos/OosExport.h )

set(oos_public_header_model 
	include/alibabacloud/oos/model/CancelExecutionRequest.h
	include/alibabacloud/oos/model/CancelExecutionResult.h
	include/alibabacloud/oos/model/CreateTemplateRequest.h
	include/alibabacloud/oos/model/CreateTemplateResult.h
	include/alibabacloud/oos/model/DeleteExecutionsRequest.h
	include/alibabacloud/oos/model/DeleteExecutionsResult.h
	include/alibabacloud/oos/model/DeleteTemplateRequest.h
	include/alibabacloud/oos/model/DeleteTemplateResult.h
	include/alibabacloud/oos/model/DeleteTemplatesRequest.h
	include/alibabacloud/oos/model/DeleteTemplatesResult.h
	include/alibabacloud/oos/model/DescribeRegionsRequest.h
	include/alibabacloud/oos/model/DescribeRegionsResult.h
	include/alibabacloud/oos/model/GenerateExecutionPolicyRequest.h
	include/alibabacloud/oos/model/GenerateExecutionPolicyResult.h
	include/alibabacloud/oos/model/GetExecutionTemplateRequest.h
	include/alibabacloud/oos/model/GetExecutionTemplateResult.h
	include/alibabacloud/oos/model/GetTemplateRequest.h
	include/alibabacloud/oos/model/GetTemplateResult.h
	include/alibabacloud/oos/model/ListActionsRequest.h
	include/alibabacloud/oos/model/ListActionsResult.h
	include/alibabacloud/oos/model/ListExecutionLogsRequest.h
	include/alibabacloud/oos/model/ListExecutionLogsResult.h
	include/alibabacloud/oos/model/ListExecutionRiskyTasksRequest.h
	include/alibabacloud/oos/model/ListExecutionRiskyTasksResult.h
	include/alibabacloud/oos/model/ListExecutionsRequest.h
	include/alibabacloud/oos/model/ListExecutionsResult.h
	include/alibabacloud/oos/model/ListTagKeysRequest.h
	include/alibabacloud/oos/model/ListTagKeysResult.h
	include/alibabacloud/oos/model/ListTagResourcesRequest.h
	include/alibabacloud/oos/model/ListTagResourcesResult.h
	include/alibabacloud/oos/model/ListTagValuesRequest.h
	include/alibabacloud/oos/model/ListTagValuesResult.h
	include/alibabacloud/oos/model/ListTaskExecutionsRequest.h
	include/alibabacloud/oos/model/ListTaskExecutionsResult.h
	include/alibabacloud/oos/model/ListTemplatesRequest.h
	include/alibabacloud/oos/model/ListTemplatesResult.h
	include/alibabacloud/oos/model/NotifyExecutionRequest.h
	include/alibabacloud/oos/model/NotifyExecutionResult.h
	include/alibabacloud/oos/model/StartExecutionRequest.h
	include/alibabacloud/oos/model/StartExecutionResult.h
	include/alibabacloud/oos/model/TagResourcesRequest.h
	include/alibabacloud/oos/model/TagResourcesResult.h
	include/alibabacloud/oos/model/TriggerExecutionRequest.h
	include/alibabacloud/oos/model/TriggerExecutionResult.h
	include/alibabacloud/oos/model/UntagResourcesRequest.h
	include/alibabacloud/oos/model/UntagResourcesResult.h
	include/alibabacloud/oos/model/UpdateTemplateRequest.h
	include/alibabacloud/oos/model/UpdateTemplateResult.h
	include/alibabacloud/oos/model/ValidateTemplateContentRequest.h
	include/alibabacloud/oos/model/ValidateTemplateContentResult.h )

set(oos_src 
	src/OosClient.cc
	src/model/CancelExecutionRequest.cc
	src/model/CancelExecutionResult.cc
	src/model/CreateTemplateRequest.cc
	src/model/CreateTemplateResult.cc
	src/model/DeleteExecutionsRequest.cc
	src/model/DeleteExecutionsResult.cc
	src/model/DeleteTemplateRequest.cc
	src/model/DeleteTemplateResult.cc
	src/model/DeleteTemplatesRequest.cc
	src/model/DeleteTemplatesResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/GenerateExecutionPolicyRequest.cc
	src/model/GenerateExecutionPolicyResult.cc
	src/model/GetExecutionTemplateRequest.cc
	src/model/GetExecutionTemplateResult.cc
	src/model/GetTemplateRequest.cc
	src/model/GetTemplateResult.cc
	src/model/ListActionsRequest.cc
	src/model/ListActionsResult.cc
	src/model/ListExecutionLogsRequest.cc
	src/model/ListExecutionLogsResult.cc
	src/model/ListExecutionRiskyTasksRequest.cc
	src/model/ListExecutionRiskyTasksResult.cc
	src/model/ListExecutionsRequest.cc
	src/model/ListExecutionsResult.cc
	src/model/ListTagKeysRequest.cc
	src/model/ListTagKeysResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ListTagValuesRequest.cc
	src/model/ListTagValuesResult.cc
	src/model/ListTaskExecutionsRequest.cc
	src/model/ListTaskExecutionsResult.cc
	src/model/ListTemplatesRequest.cc
	src/model/ListTemplatesResult.cc
	src/model/NotifyExecutionRequest.cc
	src/model/NotifyExecutionResult.cc
	src/model/StartExecutionRequest.cc
	src/model/StartExecutionResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/TriggerExecutionRequest.cc
	src/model/TriggerExecutionResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpdateTemplateRequest.cc
	src/model/UpdateTemplateResult.cc
	src/model/ValidateTemplateContentRequest.cc
	src/model/ValidateTemplateContentResult.cc )

add_library(oos ${LIB_TYPE}
	${oos_public_header}
	${oos_public_header_model}
	${oos_src})

set_target_properties(oos
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}oos
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(oos
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_OOS_LIBRARY)
endif()

target_include_directories(oos
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(oos
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(oos
		jsoncpp)
	target_include_directories(oos
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(oos
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(oos
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(oos
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(oos
		jsoncpp)
endif()

install(FILES ${oos_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/oos)
install(FILES ${oos_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/oos/model)
install(TARGETS oos
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)