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

set(dataworks-public_public_header 
	include/alibabacloud/dataworks-public/Dataworks_publicClient.h
	include/alibabacloud/dataworks-public/Dataworks_publicExport.h )

set(dataworks-public_public_header_model 
	include/alibabacloud/dataworks-public/model/CreateManualDagRequest.h
	include/alibabacloud/dataworks-public/model/CreateManualDagResult.h
	include/alibabacloud/dataworks-public/model/DeleteFileRequest.h
	include/alibabacloud/dataworks-public/model/DeleteFileResult.h
	include/alibabacloud/dataworks-public/model/DescribeEmrHiveTableRequest.h
	include/alibabacloud/dataworks-public/model/DescribeEmrHiveTableResult.h
	include/alibabacloud/dataworks-public/model/GetDataServiceApiAuthMapContextRequest.h
	include/alibabacloud/dataworks-public/model/GetDataServiceApiAuthMapContextResult.h
	include/alibabacloud/dataworks-public/model/GetDataServiceApiContextRequest.h
	include/alibabacloud/dataworks-public/model/GetDataServiceApiContextResult.h
	include/alibabacloud/dataworks-public/model/GetDataServiceConfigRequest.h
	include/alibabacloud/dataworks-public/model/GetDataServiceConfigResult.h
	include/alibabacloud/dataworks-public/model/GetDataServiceConnectionRequest.h
	include/alibabacloud/dataworks-public/model/GetDataServiceConnectionResult.h
	include/alibabacloud/dataworks-public/model/GetDataServiceContextUpdateEventRequest.h
	include/alibabacloud/dataworks-public/model/GetDataServiceContextUpdateEventResult.h
	include/alibabacloud/dataworks-public/model/GetDataServiceFunctionRequest.h
	include/alibabacloud/dataworks-public/model/GetDataServiceFunctionResult.h
	include/alibabacloud/dataworks-public/model/GetSwitchValueRequest.h
	include/alibabacloud/dataworks-public/model/GetSwitchValueResult.h
	include/alibabacloud/dataworks-public/model/GetTimeMachineTaskRequest.h
	include/alibabacloud/dataworks-public/model/GetTimeMachineTaskResult.h
	include/alibabacloud/dataworks-public/model/ListEmrHiveAuditLogsRequest.h
	include/alibabacloud/dataworks-public/model/ListEmrHiveAuditLogsResult.h
	include/alibabacloud/dataworks-public/model/ListEmrHiveDatabasesRequest.h
	include/alibabacloud/dataworks-public/model/ListEmrHiveDatabasesResult.h
	include/alibabacloud/dataworks-public/model/ListEmrHiveTablesRequest.h
	include/alibabacloud/dataworks-public/model/ListEmrHiveTablesResult.h
	include/alibabacloud/dataworks-public/model/ListGovernanceIssueDataServiceAPIsRequest.h
	include/alibabacloud/dataworks-public/model/ListGovernanceIssueDataServiceAPIsResult.h
	include/alibabacloud/dataworks-public/model/ListGovernanceIssueTablesRequest.h
	include/alibabacloud/dataworks-public/model/ListGovernanceIssueTablesResult.h
	include/alibabacloud/dataworks-public/model/ListGovernanceIssueTasksRequest.h
	include/alibabacloud/dataworks-public/model/ListGovernanceIssueTasksResult.h
	include/alibabacloud/dataworks-public/model/ListGovernanceRulesRequest.h
	include/alibabacloud/dataworks-public/model/ListGovernanceRulesResult.h
	include/alibabacloud/dataworks-public/model/ListHiveColumnLineagesRequest.h
	include/alibabacloud/dataworks-public/model/ListHiveColumnLineagesResult.h
	include/alibabacloud/dataworks-public/model/ListHiveTableLineagesRequest.h
	include/alibabacloud/dataworks-public/model/ListHiveTableLineagesResult.h
	include/alibabacloud/dataworks-public/model/ListTablePartitionsRequest.h
	include/alibabacloud/dataworks-public/model/ListTablePartitionsResult.h
	include/alibabacloud/dataworks-public/model/OpenDataWorksStandardServiceRequest.h
	include/alibabacloud/dataworks-public/model/OpenDataWorksStandardServiceResult.h
	include/alibabacloud/dataworks-public/model/SearchManualDagNodeInstanceRequest.h
	include/alibabacloud/dataworks-public/model/SearchManualDagNodeInstanceResult.h
	include/alibabacloud/dataworks-public/model/SendTaskMetaCallbackRequest.h
	include/alibabacloud/dataworks-public/model/SendTaskMetaCallbackResult.h
	include/alibabacloud/dataworks-public/model/SetSwitchValueRequest.h
	include/alibabacloud/dataworks-public/model/SetSwitchValueResult.h
	include/alibabacloud/dataworks-public/model/TriggerDataLoaderRequest.h
	include/alibabacloud/dataworks-public/model/TriggerDataLoaderResult.h
	include/alibabacloud/dataworks-public/model/TriggerTimeMachineTaskRequest.h
	include/alibabacloud/dataworks-public/model/TriggerTimeMachineTaskResult.h )

set(dataworks-public_src 
	src/Dataworks-publicClient.cc
	src/model/CreateManualDagRequest.cc
	src/model/CreateManualDagResult.cc
	src/model/DeleteFileRequest.cc
	src/model/DeleteFileResult.cc
	src/model/DescribeEmrHiveTableRequest.cc
	src/model/DescribeEmrHiveTableResult.cc
	src/model/GetDataServiceApiAuthMapContextRequest.cc
	src/model/GetDataServiceApiAuthMapContextResult.cc
	src/model/GetDataServiceApiContextRequest.cc
	src/model/GetDataServiceApiContextResult.cc
	src/model/GetDataServiceConfigRequest.cc
	src/model/GetDataServiceConfigResult.cc
	src/model/GetDataServiceConnectionRequest.cc
	src/model/GetDataServiceConnectionResult.cc
	src/model/GetDataServiceContextUpdateEventRequest.cc
	src/model/GetDataServiceContextUpdateEventResult.cc
	src/model/GetDataServiceFunctionRequest.cc
	src/model/GetDataServiceFunctionResult.cc
	src/model/GetSwitchValueRequest.cc
	src/model/GetSwitchValueResult.cc
	src/model/GetTimeMachineTaskRequest.cc
	src/model/GetTimeMachineTaskResult.cc
	src/model/ListEmrHiveAuditLogsRequest.cc
	src/model/ListEmrHiveAuditLogsResult.cc
	src/model/ListEmrHiveDatabasesRequest.cc
	src/model/ListEmrHiveDatabasesResult.cc
	src/model/ListEmrHiveTablesRequest.cc
	src/model/ListEmrHiveTablesResult.cc
	src/model/ListGovernanceIssueDataServiceAPIsRequest.cc
	src/model/ListGovernanceIssueDataServiceAPIsResult.cc
	src/model/ListGovernanceIssueTablesRequest.cc
	src/model/ListGovernanceIssueTablesResult.cc
	src/model/ListGovernanceIssueTasksRequest.cc
	src/model/ListGovernanceIssueTasksResult.cc
	src/model/ListGovernanceRulesRequest.cc
	src/model/ListGovernanceRulesResult.cc
	src/model/ListHiveColumnLineagesRequest.cc
	src/model/ListHiveColumnLineagesResult.cc
	src/model/ListHiveTableLineagesRequest.cc
	src/model/ListHiveTableLineagesResult.cc
	src/model/ListTablePartitionsRequest.cc
	src/model/ListTablePartitionsResult.cc
	src/model/OpenDataWorksStandardServiceRequest.cc
	src/model/OpenDataWorksStandardServiceResult.cc
	src/model/SearchManualDagNodeInstanceRequest.cc
	src/model/SearchManualDagNodeInstanceResult.cc
	src/model/SendTaskMetaCallbackRequest.cc
	src/model/SendTaskMetaCallbackResult.cc
	src/model/SetSwitchValueRequest.cc
	src/model/SetSwitchValueResult.cc
	src/model/TriggerDataLoaderRequest.cc
	src/model/TriggerDataLoaderResult.cc
	src/model/TriggerTimeMachineTaskRequest.cc
	src/model/TriggerTimeMachineTaskResult.cc )

add_library(dataworks-public ${LIB_TYPE}
	${dataworks-public_public_header}
	${dataworks-public_public_header_model}
	${dataworks-public_src})

set_target_properties(dataworks-public
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dataworks-public
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dataworks-public
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DATAWORKS_PUBLIC_LIBRARY)
endif()

target_include_directories(dataworks-public
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dataworks-public
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dataworks-public
		jsoncpp)
	target_include_directories(dataworks-public
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dataworks-public
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dataworks-public
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dataworks-public
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dataworks-public
		jsoncpp)
endif()

install(FILES ${dataworks-public_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dataworks-public)
install(FILES ${dataworks-public_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dataworks-public/model)
install(TARGETS dataworks-public
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)