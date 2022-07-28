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

set(dbs_public_header 
	include/alibabacloud/dbs/DbsClient.h
	include/alibabacloud/dbs/DbsExport.h )

set(dbs_public_header_model 
	include/alibabacloud/dbs/model/ConfigureBackupPlanRequest.h
	include/alibabacloud/dbs/model/ConfigureBackupPlanResult.h
	include/alibabacloud/dbs/model/CreateAndStartBackupPlanRequest.h
	include/alibabacloud/dbs/model/CreateAndStartBackupPlanResult.h
	include/alibabacloud/dbs/model/CreateBackupPlanRequest.h
	include/alibabacloud/dbs/model/CreateBackupPlanResult.h
	include/alibabacloud/dbs/model/CreateFullBackupSetDownloadRequest.h
	include/alibabacloud/dbs/model/CreateFullBackupSetDownloadResult.h
	include/alibabacloud/dbs/model/CreateGetDBListFromAgentTaskRequest.h
	include/alibabacloud/dbs/model/CreateGetDBListFromAgentTaskResult.h
	include/alibabacloud/dbs/model/CreateIncrementBackupSetDownloadRequest.h
	include/alibabacloud/dbs/model/CreateIncrementBackupSetDownloadResult.h
	include/alibabacloud/dbs/model/CreateRestoreTaskRequest.h
	include/alibabacloud/dbs/model/CreateRestoreTaskResult.h
	include/alibabacloud/dbs/model/DescribeBackupGatewayListRequest.h
	include/alibabacloud/dbs/model/DescribeBackupGatewayListResult.h
	include/alibabacloud/dbs/model/DescribeBackupPlanBillingRequest.h
	include/alibabacloud/dbs/model/DescribeBackupPlanBillingResult.h
	include/alibabacloud/dbs/model/DescribeBackupPlanListRequest.h
	include/alibabacloud/dbs/model/DescribeBackupPlanListResult.h
	include/alibabacloud/dbs/model/DescribeBackupSetDownloadTaskListRequest.h
	include/alibabacloud/dbs/model/DescribeBackupSetDownloadTaskListResult.h
	include/alibabacloud/dbs/model/DescribeDLAServiceRequest.h
	include/alibabacloud/dbs/model/DescribeDLAServiceResult.h
	include/alibabacloud/dbs/model/DescribeFullBackupListRequest.h
	include/alibabacloud/dbs/model/DescribeFullBackupListResult.h
	include/alibabacloud/dbs/model/DescribeIncrementBackupListRequest.h
	include/alibabacloud/dbs/model/DescribeIncrementBackupListResult.h
	include/alibabacloud/dbs/model/DescribeJobErrorCodeRequest.h
	include/alibabacloud/dbs/model/DescribeJobErrorCodeResult.h
	include/alibabacloud/dbs/model/DescribeNodeCidrListRequest.h
	include/alibabacloud/dbs/model/DescribeNodeCidrListResult.h
	include/alibabacloud/dbs/model/DescribePreCheckProgressListRequest.h
	include/alibabacloud/dbs/model/DescribePreCheckProgressListResult.h
	include/alibabacloud/dbs/model/DescribeRegionsRequest.h
	include/alibabacloud/dbs/model/DescribeRegionsResult.h
	include/alibabacloud/dbs/model/DescribeRestoreRangeInfoRequest.h
	include/alibabacloud/dbs/model/DescribeRestoreRangeInfoResult.h
	include/alibabacloud/dbs/model/DescribeRestoreTaskListRequest.h
	include/alibabacloud/dbs/model/DescribeRestoreTaskListResult.h
	include/alibabacloud/dbs/model/DisableBackupLogRequest.h
	include/alibabacloud/dbs/model/DisableBackupLogResult.h
	include/alibabacloud/dbs/model/EnableBackupLogRequest.h
	include/alibabacloud/dbs/model/EnableBackupLogResult.h
	include/alibabacloud/dbs/model/GetDBListFromAgentRequest.h
	include/alibabacloud/dbs/model/GetDBListFromAgentResult.h
	include/alibabacloud/dbs/model/InitializeDbsServiceLinkedRoleRequest.h
	include/alibabacloud/dbs/model/InitializeDbsServiceLinkedRoleResult.h
	include/alibabacloud/dbs/model/ModifyBackupObjectsRequest.h
	include/alibabacloud/dbs/model/ModifyBackupObjectsResult.h
	include/alibabacloud/dbs/model/ModifyBackupPlanNameRequest.h
	include/alibabacloud/dbs/model/ModifyBackupPlanNameResult.h
	include/alibabacloud/dbs/model/ModifyBackupSetDownloadRulesRequest.h
	include/alibabacloud/dbs/model/ModifyBackupSetDownloadRulesResult.h
	include/alibabacloud/dbs/model/ModifyBackupSourceEndpointRequest.h
	include/alibabacloud/dbs/model/ModifyBackupSourceEndpointResult.h
	include/alibabacloud/dbs/model/ModifyBackupStrategyRequest.h
	include/alibabacloud/dbs/model/ModifyBackupStrategyResult.h
	include/alibabacloud/dbs/model/ModifyStorageStrategyRequest.h
	include/alibabacloud/dbs/model/ModifyStorageStrategyResult.h
	include/alibabacloud/dbs/model/ReleaseBackupPlanRequest.h
	include/alibabacloud/dbs/model/ReleaseBackupPlanResult.h
	include/alibabacloud/dbs/model/RenewBackupPlanRequest.h
	include/alibabacloud/dbs/model/RenewBackupPlanResult.h
	include/alibabacloud/dbs/model/StartBackupPlanRequest.h
	include/alibabacloud/dbs/model/StartBackupPlanResult.h
	include/alibabacloud/dbs/model/StartRestoreTaskRequest.h
	include/alibabacloud/dbs/model/StartRestoreTaskResult.h
	include/alibabacloud/dbs/model/StopBackupPlanRequest.h
	include/alibabacloud/dbs/model/StopBackupPlanResult.h
	include/alibabacloud/dbs/model/UpgradeBackupPlanRequest.h
	include/alibabacloud/dbs/model/UpgradeBackupPlanResult.h )

set(dbs_src 
	src/DbsClient.cc
	src/model/ConfigureBackupPlanRequest.cc
	src/model/ConfigureBackupPlanResult.cc
	src/model/CreateAndStartBackupPlanRequest.cc
	src/model/CreateAndStartBackupPlanResult.cc
	src/model/CreateBackupPlanRequest.cc
	src/model/CreateBackupPlanResult.cc
	src/model/CreateFullBackupSetDownloadRequest.cc
	src/model/CreateFullBackupSetDownloadResult.cc
	src/model/CreateGetDBListFromAgentTaskRequest.cc
	src/model/CreateGetDBListFromAgentTaskResult.cc
	src/model/CreateIncrementBackupSetDownloadRequest.cc
	src/model/CreateIncrementBackupSetDownloadResult.cc
	src/model/CreateRestoreTaskRequest.cc
	src/model/CreateRestoreTaskResult.cc
	src/model/DescribeBackupGatewayListRequest.cc
	src/model/DescribeBackupGatewayListResult.cc
	src/model/DescribeBackupPlanBillingRequest.cc
	src/model/DescribeBackupPlanBillingResult.cc
	src/model/DescribeBackupPlanListRequest.cc
	src/model/DescribeBackupPlanListResult.cc
	src/model/DescribeBackupSetDownloadTaskListRequest.cc
	src/model/DescribeBackupSetDownloadTaskListResult.cc
	src/model/DescribeDLAServiceRequest.cc
	src/model/DescribeDLAServiceResult.cc
	src/model/DescribeFullBackupListRequest.cc
	src/model/DescribeFullBackupListResult.cc
	src/model/DescribeIncrementBackupListRequest.cc
	src/model/DescribeIncrementBackupListResult.cc
	src/model/DescribeJobErrorCodeRequest.cc
	src/model/DescribeJobErrorCodeResult.cc
	src/model/DescribeNodeCidrListRequest.cc
	src/model/DescribeNodeCidrListResult.cc
	src/model/DescribePreCheckProgressListRequest.cc
	src/model/DescribePreCheckProgressListResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeRestoreRangeInfoRequest.cc
	src/model/DescribeRestoreRangeInfoResult.cc
	src/model/DescribeRestoreTaskListRequest.cc
	src/model/DescribeRestoreTaskListResult.cc
	src/model/DisableBackupLogRequest.cc
	src/model/DisableBackupLogResult.cc
	src/model/EnableBackupLogRequest.cc
	src/model/EnableBackupLogResult.cc
	src/model/GetDBListFromAgentRequest.cc
	src/model/GetDBListFromAgentResult.cc
	src/model/InitializeDbsServiceLinkedRoleRequest.cc
	src/model/InitializeDbsServiceLinkedRoleResult.cc
	src/model/ModifyBackupObjectsRequest.cc
	src/model/ModifyBackupObjectsResult.cc
	src/model/ModifyBackupPlanNameRequest.cc
	src/model/ModifyBackupPlanNameResult.cc
	src/model/ModifyBackupSetDownloadRulesRequest.cc
	src/model/ModifyBackupSetDownloadRulesResult.cc
	src/model/ModifyBackupSourceEndpointRequest.cc
	src/model/ModifyBackupSourceEndpointResult.cc
	src/model/ModifyBackupStrategyRequest.cc
	src/model/ModifyBackupStrategyResult.cc
	src/model/ModifyStorageStrategyRequest.cc
	src/model/ModifyStorageStrategyResult.cc
	src/model/ReleaseBackupPlanRequest.cc
	src/model/ReleaseBackupPlanResult.cc
	src/model/RenewBackupPlanRequest.cc
	src/model/RenewBackupPlanResult.cc
	src/model/StartBackupPlanRequest.cc
	src/model/StartBackupPlanResult.cc
	src/model/StartRestoreTaskRequest.cc
	src/model/StartRestoreTaskResult.cc
	src/model/StopBackupPlanRequest.cc
	src/model/StopBackupPlanResult.cc
	src/model/UpgradeBackupPlanRequest.cc
	src/model/UpgradeBackupPlanResult.cc )

add_library(dbs ${LIB_TYPE}
	${dbs_public_header}
	${dbs_public_header_model}
	${dbs_src})

set_target_properties(dbs
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dbs
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dbs
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DBS_LIBRARY)
endif()

target_include_directories(dbs
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dbs
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dbs
		jsoncpp)
	target_include_directories(dbs
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dbs
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dbs
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dbs
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dbs
		jsoncpp)
endif()

install(FILES ${dbs_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dbs)
install(FILES ${dbs_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dbs/model)
install(TARGETS dbs
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)