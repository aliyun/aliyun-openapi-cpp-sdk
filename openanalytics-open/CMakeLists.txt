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

set(openanalytics-open_public_header 
	include/alibabacloud/openanalytics-open/Openanalytics_openClient.h
	include/alibabacloud/openanalytics-open/Openanalytics_openExport.h )

set(openanalytics-open_public_header_model 
	include/alibabacloud/openanalytics-open/model/AddAccountRequest.h
	include/alibabacloud/openanalytics-open/model/AddAccountResult.h
	include/alibabacloud/openanalytics-open/model/AddEndPointRequest.h
	include/alibabacloud/openanalytics-open/model/AddEndPointResult.h
	include/alibabacloud/openanalytics-open/model/AddPartitionsRequest.h
	include/alibabacloud/openanalytics-open/model/AddPartitionsResult.h
	include/alibabacloud/openanalytics-open/model/AlterDatabaseRequest.h
	include/alibabacloud/openanalytics-open/model/AlterDatabaseResult.h
	include/alibabacloud/openanalytics-open/model/AlterTableRequest.h
	include/alibabacloud/openanalytics-open/model/AlterTableResult.h
	include/alibabacloud/openanalytics-open/model/CancelQueryByExecuteIdRequest.h
	include/alibabacloud/openanalytics-open/model/CancelQueryByExecuteIdResult.h
	include/alibabacloud/openanalytics-open/model/CancelQueryByIdRequest.h
	include/alibabacloud/openanalytics-open/model/CancelQueryByIdResult.h
	include/alibabacloud/openanalytics-open/model/CreateDatabaseRequest.h
	include/alibabacloud/openanalytics-open/model/CreateDatabaseResult.h
	include/alibabacloud/openanalytics-open/model/CreateInstanceRequest.h
	include/alibabacloud/openanalytics-open/model/CreateInstanceResult.h
	include/alibabacloud/openanalytics-open/model/CreateTableRequest.h
	include/alibabacloud/openanalytics-open/model/CreateTableResult.h
	include/alibabacloud/openanalytics-open/model/DeleteAccountRequest.h
	include/alibabacloud/openanalytics-open/model/DeleteAccountResult.h
	include/alibabacloud/openanalytics-open/model/DescribeTagsRequest.h
	include/alibabacloud/openanalytics-open/model/DescribeTagsResult.h
	include/alibabacloud/openanalytics-open/model/DropDatabaseRequest.h
	include/alibabacloud/openanalytics-open/model/DropDatabaseResult.h
	include/alibabacloud/openanalytics-open/model/DropPartitionRequest.h
	include/alibabacloud/openanalytics-open/model/DropPartitionResult.h
	include/alibabacloud/openanalytics-open/model/DropTableRequest.h
	include/alibabacloud/openanalytics-open/model/DropTableResult.h
	include/alibabacloud/openanalytics-open/model/GetAllDatabasesRequest.h
	include/alibabacloud/openanalytics-open/model/GetAllDatabasesResult.h
	include/alibabacloud/openanalytics-open/model/GetAllTablesRequest.h
	include/alibabacloud/openanalytics-open/model/GetAllTablesResult.h
	include/alibabacloud/openanalytics-open/model/GetAllowIPRequest.h
	include/alibabacloud/openanalytics-open/model/GetAllowIPResult.h
	include/alibabacloud/openanalytics-open/model/GetDatabaseRequest.h
	include/alibabacloud/openanalytics-open/model/GetDatabaseResult.h
	include/alibabacloud/openanalytics-open/model/GetEndPointRequest.h
	include/alibabacloud/openanalytics-open/model/GetEndPointResult.h
	include/alibabacloud/openanalytics-open/model/GetEndPointByDomainRequest.h
	include/alibabacloud/openanalytics-open/model/GetEndPointByDomainResult.h
	include/alibabacloud/openanalytics-open/model/GetJobDetailRequest.h
	include/alibabacloud/openanalytics-open/model/GetJobDetailResult.h
	include/alibabacloud/openanalytics-open/model/GetJobLogRequest.h
	include/alibabacloud/openanalytics-open/model/GetJobLogResult.h
	include/alibabacloud/openanalytics-open/model/GetJobStatusRequest.h
	include/alibabacloud/openanalytics-open/model/GetJobStatusResult.h
	include/alibabacloud/openanalytics-open/model/GetPartitionRequest.h
	include/alibabacloud/openanalytics-open/model/GetPartitionResult.h
	include/alibabacloud/openanalytics-open/model/GetPartitionsRequest.h
	include/alibabacloud/openanalytics-open/model/GetPartitionsResult.h
	include/alibabacloud/openanalytics-open/model/GetTableRequest.h
	include/alibabacloud/openanalytics-open/model/GetTableResult.h
	include/alibabacloud/openanalytics-open/model/GrantPrivilegesRequest.h
	include/alibabacloud/openanalytics-open/model/GrantPrivilegesResult.h
	include/alibabacloud/openanalytics-open/model/KillSparkJobRequest.h
	include/alibabacloud/openanalytics-open/model/KillSparkJobResult.h
	include/alibabacloud/openanalytics-open/model/ListSparkJobRequest.h
	include/alibabacloud/openanalytics-open/model/ListSparkJobResult.h
	include/alibabacloud/openanalytics-open/model/ListTagResourcesRequest.h
	include/alibabacloud/openanalytics-open/model/ListTagResourcesResult.h
	include/alibabacloud/openanalytics-open/model/QueryAccountListRequest.h
	include/alibabacloud/openanalytics-open/model/QueryAccountListResult.h
	include/alibabacloud/openanalytics-open/model/QueryEndPointListRequest.h
	include/alibabacloud/openanalytics-open/model/QueryEndPointListResult.h
	include/alibabacloud/openanalytics-open/model/ReleaseInstanceRequest.h
	include/alibabacloud/openanalytics-open/model/ReleaseInstanceResult.h
	include/alibabacloud/openanalytics-open/model/RemoveEndPointRequest.h
	include/alibabacloud/openanalytics-open/model/RemoveEndPointResult.h
	include/alibabacloud/openanalytics-open/model/ResetMainPasswordRequest.h
	include/alibabacloud/openanalytics-open/model/ResetMainPasswordResult.h
	include/alibabacloud/openanalytics-open/model/RevokePrivilegesRequest.h
	include/alibabacloud/openanalytics-open/model/RevokePrivilegesResult.h
	include/alibabacloud/openanalytics-open/model/SetAllowIPRequest.h
	include/alibabacloud/openanalytics-open/model/SetAllowIPResult.h
	include/alibabacloud/openanalytics-open/model/SubmitSparkJobRequest.h
	include/alibabacloud/openanalytics-open/model/SubmitSparkJobResult.h
	include/alibabacloud/openanalytics-open/model/TagResourcesRequest.h
	include/alibabacloud/openanalytics-open/model/TagResourcesResult.h
	include/alibabacloud/openanalytics-open/model/UnSubscribeRegionRequest.h
	include/alibabacloud/openanalytics-open/model/UnSubscribeRegionResult.h
	include/alibabacloud/openanalytics-open/model/UntagResourcesRequest.h
	include/alibabacloud/openanalytics-open/model/UntagResourcesResult.h
	include/alibabacloud/openanalytics-open/model/UpdateAccountPasswordRequest.h
	include/alibabacloud/openanalytics-open/model/UpdateAccountPasswordResult.h
	include/alibabacloud/openanalytics-open/model/UpgradeInstanceRequest.h
	include/alibabacloud/openanalytics-open/model/UpgradeInstanceResult.h
	include/alibabacloud/openanalytics-open/model/ValidateVirtualClusterNameRequest.h
	include/alibabacloud/openanalytics-open/model/ValidateVirtualClusterNameResult.h )

set(openanalytics-open_src 
	src/Openanalytics-openClient.cc
	src/model/AddAccountRequest.cc
	src/model/AddAccountResult.cc
	src/model/AddEndPointRequest.cc
	src/model/AddEndPointResult.cc
	src/model/AddPartitionsRequest.cc
	src/model/AddPartitionsResult.cc
	src/model/AlterDatabaseRequest.cc
	src/model/AlterDatabaseResult.cc
	src/model/AlterTableRequest.cc
	src/model/AlterTableResult.cc
	src/model/CancelQueryByExecuteIdRequest.cc
	src/model/CancelQueryByExecuteIdResult.cc
	src/model/CancelQueryByIdRequest.cc
	src/model/CancelQueryByIdResult.cc
	src/model/CreateDatabaseRequest.cc
	src/model/CreateDatabaseResult.cc
	src/model/CreateInstanceRequest.cc
	src/model/CreateInstanceResult.cc
	src/model/CreateTableRequest.cc
	src/model/CreateTableResult.cc
	src/model/DeleteAccountRequest.cc
	src/model/DeleteAccountResult.cc
	src/model/DescribeTagsRequest.cc
	src/model/DescribeTagsResult.cc
	src/model/DropDatabaseRequest.cc
	src/model/DropDatabaseResult.cc
	src/model/DropPartitionRequest.cc
	src/model/DropPartitionResult.cc
	src/model/DropTableRequest.cc
	src/model/DropTableResult.cc
	src/model/GetAllDatabasesRequest.cc
	src/model/GetAllDatabasesResult.cc
	src/model/GetAllTablesRequest.cc
	src/model/GetAllTablesResult.cc
	src/model/GetAllowIPRequest.cc
	src/model/GetAllowIPResult.cc
	src/model/GetDatabaseRequest.cc
	src/model/GetDatabaseResult.cc
	src/model/GetEndPointRequest.cc
	src/model/GetEndPointResult.cc
	src/model/GetEndPointByDomainRequest.cc
	src/model/GetEndPointByDomainResult.cc
	src/model/GetJobDetailRequest.cc
	src/model/GetJobDetailResult.cc
	src/model/GetJobLogRequest.cc
	src/model/GetJobLogResult.cc
	src/model/GetJobStatusRequest.cc
	src/model/GetJobStatusResult.cc
	src/model/GetPartitionRequest.cc
	src/model/GetPartitionResult.cc
	src/model/GetPartitionsRequest.cc
	src/model/GetPartitionsResult.cc
	src/model/GetTableRequest.cc
	src/model/GetTableResult.cc
	src/model/GrantPrivilegesRequest.cc
	src/model/GrantPrivilegesResult.cc
	src/model/KillSparkJobRequest.cc
	src/model/KillSparkJobResult.cc
	src/model/ListSparkJobRequest.cc
	src/model/ListSparkJobResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/QueryAccountListRequest.cc
	src/model/QueryAccountListResult.cc
	src/model/QueryEndPointListRequest.cc
	src/model/QueryEndPointListResult.cc
	src/model/ReleaseInstanceRequest.cc
	src/model/ReleaseInstanceResult.cc
	src/model/RemoveEndPointRequest.cc
	src/model/RemoveEndPointResult.cc
	src/model/ResetMainPasswordRequest.cc
	src/model/ResetMainPasswordResult.cc
	src/model/RevokePrivilegesRequest.cc
	src/model/RevokePrivilegesResult.cc
	src/model/SetAllowIPRequest.cc
	src/model/SetAllowIPResult.cc
	src/model/SubmitSparkJobRequest.cc
	src/model/SubmitSparkJobResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UnSubscribeRegionRequest.cc
	src/model/UnSubscribeRegionResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpdateAccountPasswordRequest.cc
	src/model/UpdateAccountPasswordResult.cc
	src/model/UpgradeInstanceRequest.cc
	src/model/UpgradeInstanceResult.cc
	src/model/ValidateVirtualClusterNameRequest.cc
	src/model/ValidateVirtualClusterNameResult.cc )

add_library(openanalytics-open ${LIB_TYPE}
	${openanalytics-open_public_header}
	${openanalytics-open_public_header_model}
	${openanalytics-open_src})

set_target_properties(openanalytics-open
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}openanalytics-open
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(openanalytics-open
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_OPENANALYTICS_OPEN_LIBRARY)
endif()

target_include_directories(openanalytics-open
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(openanalytics-open
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(openanalytics-open
		jsoncpp)
	target_include_directories(openanalytics-open
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(openanalytics-open
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(openanalytics-open
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(openanalytics-open
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(openanalytics-open
		jsoncpp)
endif()

install(FILES ${openanalytics-open_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/openanalytics-open)
install(FILES ${openanalytics-open_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/openanalytics-open/model)
install(TARGETS openanalytics-open
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)