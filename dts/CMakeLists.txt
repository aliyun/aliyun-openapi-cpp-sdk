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

set(dts_public_header 
	include/alibabacloud/dts/DtsClient.h
	include/alibabacloud/dts/DtsExport.h )

set(dts_public_header_model 
	include/alibabacloud/dts/model/ConfigureMigrationJobRequest.h
	include/alibabacloud/dts/model/ConfigureMigrationJobResult.h
	include/alibabacloud/dts/model/ConfigureMigrationJobAlertRequest.h
	include/alibabacloud/dts/model/ConfigureMigrationJobAlertResult.h
	include/alibabacloud/dts/model/ConfigureSubscriptionInstanceRequest.h
	include/alibabacloud/dts/model/ConfigureSubscriptionInstanceResult.h
	include/alibabacloud/dts/model/ConfigureSubscriptionInstanceAlertRequest.h
	include/alibabacloud/dts/model/ConfigureSubscriptionInstanceAlertResult.h
	include/alibabacloud/dts/model/ConfigureSynchronizationJobRequest.h
	include/alibabacloud/dts/model/ConfigureSynchronizationJobResult.h
	include/alibabacloud/dts/model/ConfigureSynchronizationJobAlertRequest.h
	include/alibabacloud/dts/model/ConfigureSynchronizationJobAlertResult.h
	include/alibabacloud/dts/model/ConfigureSynchronizationJobReplicatorCompareRequest.h
	include/alibabacloud/dts/model/ConfigureSynchronizationJobReplicatorCompareResult.h
	include/alibabacloud/dts/model/CreateConsumerGroupRequest.h
	include/alibabacloud/dts/model/CreateConsumerGroupResult.h
	include/alibabacloud/dts/model/CreateMigrationJobRequest.h
	include/alibabacloud/dts/model/CreateMigrationJobResult.h
	include/alibabacloud/dts/model/CreateSubscriptionInstanceRequest.h
	include/alibabacloud/dts/model/CreateSubscriptionInstanceResult.h
	include/alibabacloud/dts/model/CreateSynchronizationJobRequest.h
	include/alibabacloud/dts/model/CreateSynchronizationJobResult.h
	include/alibabacloud/dts/model/DeleteConsumerGroupRequest.h
	include/alibabacloud/dts/model/DeleteConsumerGroupResult.h
	include/alibabacloud/dts/model/DeleteMigrationJobRequest.h
	include/alibabacloud/dts/model/DeleteMigrationJobResult.h
	include/alibabacloud/dts/model/DeleteSubscriptionInstanceRequest.h
	include/alibabacloud/dts/model/DeleteSubscriptionInstanceResult.h
	include/alibabacloud/dts/model/DeleteSynchronizationJobRequest.h
	include/alibabacloud/dts/model/DeleteSynchronizationJobResult.h
	include/alibabacloud/dts/model/DescribeConnectionStatusRequest.h
	include/alibabacloud/dts/model/DescribeConnectionStatusResult.h
	include/alibabacloud/dts/model/DescribeConsumerGroupRequest.h
	include/alibabacloud/dts/model/DescribeConsumerGroupResult.h
	include/alibabacloud/dts/model/DescribeDTSIPRequest.h
	include/alibabacloud/dts/model/DescribeDTSIPResult.h
	include/alibabacloud/dts/model/DescribeEndpointSwitchStatusRequest.h
	include/alibabacloud/dts/model/DescribeEndpointSwitchStatusResult.h
	include/alibabacloud/dts/model/DescribeInitializationStatusRequest.h
	include/alibabacloud/dts/model/DescribeInitializationStatusResult.h
	include/alibabacloud/dts/model/DescribeMigrationJobAlertRequest.h
	include/alibabacloud/dts/model/DescribeMigrationJobAlertResult.h
	include/alibabacloud/dts/model/DescribeMigrationJobDetailRequest.h
	include/alibabacloud/dts/model/DescribeMigrationJobDetailResult.h
	include/alibabacloud/dts/model/DescribeMigrationJobStatusRequest.h
	include/alibabacloud/dts/model/DescribeMigrationJobStatusResult.h
	include/alibabacloud/dts/model/DescribeMigrationJobsRequest.h
	include/alibabacloud/dts/model/DescribeMigrationJobsResult.h
	include/alibabacloud/dts/model/DescribeSubscriptionInstanceAlertRequest.h
	include/alibabacloud/dts/model/DescribeSubscriptionInstanceAlertResult.h
	include/alibabacloud/dts/model/DescribeSubscriptionInstanceStatusRequest.h
	include/alibabacloud/dts/model/DescribeSubscriptionInstanceStatusResult.h
	include/alibabacloud/dts/model/DescribeSubscriptionInstancesRequest.h
	include/alibabacloud/dts/model/DescribeSubscriptionInstancesResult.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobAlertRequest.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobAlertResult.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobReplicatorCompareRequest.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobReplicatorCompareResult.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobStatusRequest.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobStatusResult.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobStatusListRequest.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobStatusListResult.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobsRequest.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobsResult.h
	include/alibabacloud/dts/model/DescribeSynchronizationObjectModifyStatusRequest.h
	include/alibabacloud/dts/model/DescribeSynchronizationObjectModifyStatusResult.h
	include/alibabacloud/dts/model/ListTagResourcesRequest.h
	include/alibabacloud/dts/model/ListTagResourcesResult.h
	include/alibabacloud/dts/model/ModifyConsumerGroupPasswordRequest.h
	include/alibabacloud/dts/model/ModifyConsumerGroupPasswordResult.h
	include/alibabacloud/dts/model/ModifyConsumptionTimestampRequest.h
	include/alibabacloud/dts/model/ModifyConsumptionTimestampResult.h
	include/alibabacloud/dts/model/ModifySubscriptionObjectRequest.h
	include/alibabacloud/dts/model/ModifySubscriptionObjectResult.h
	include/alibabacloud/dts/model/ModifySynchronizationObjectRequest.h
	include/alibabacloud/dts/model/ModifySynchronizationObjectResult.h
	include/alibabacloud/dts/model/ResetSynchronizationJobRequest.h
	include/alibabacloud/dts/model/ResetSynchronizationJobResult.h
	include/alibabacloud/dts/model/ShieldPrecheckRequest.h
	include/alibabacloud/dts/model/ShieldPrecheckResult.h
	include/alibabacloud/dts/model/StartMigrationJobRequest.h
	include/alibabacloud/dts/model/StartMigrationJobResult.h
	include/alibabacloud/dts/model/StartSubscriptionInstanceRequest.h
	include/alibabacloud/dts/model/StartSubscriptionInstanceResult.h
	include/alibabacloud/dts/model/StartSynchronizationJobRequest.h
	include/alibabacloud/dts/model/StartSynchronizationJobResult.h
	include/alibabacloud/dts/model/StopMigrationJobRequest.h
	include/alibabacloud/dts/model/StopMigrationJobResult.h
	include/alibabacloud/dts/model/SuspendMigrationJobRequest.h
	include/alibabacloud/dts/model/SuspendMigrationJobResult.h
	include/alibabacloud/dts/model/SuspendSynchronizationJobRequest.h
	include/alibabacloud/dts/model/SuspendSynchronizationJobResult.h
	include/alibabacloud/dts/model/SwitchSynchronizationEndpointRequest.h
	include/alibabacloud/dts/model/SwitchSynchronizationEndpointResult.h
	include/alibabacloud/dts/model/TagResourcesRequest.h
	include/alibabacloud/dts/model/TagResourcesResult.h
	include/alibabacloud/dts/model/UntagResourcesRequest.h
	include/alibabacloud/dts/model/UntagResourcesResult.h )

set(dts_src 
	src/DtsClient.cc
	src/model/ConfigureMigrationJobRequest.cc
	src/model/ConfigureMigrationJobResult.cc
	src/model/ConfigureMigrationJobAlertRequest.cc
	src/model/ConfigureMigrationJobAlertResult.cc
	src/model/ConfigureSubscriptionInstanceRequest.cc
	src/model/ConfigureSubscriptionInstanceResult.cc
	src/model/ConfigureSubscriptionInstanceAlertRequest.cc
	src/model/ConfigureSubscriptionInstanceAlertResult.cc
	src/model/ConfigureSynchronizationJobRequest.cc
	src/model/ConfigureSynchronizationJobResult.cc
	src/model/ConfigureSynchronizationJobAlertRequest.cc
	src/model/ConfigureSynchronizationJobAlertResult.cc
	src/model/ConfigureSynchronizationJobReplicatorCompareRequest.cc
	src/model/ConfigureSynchronizationJobReplicatorCompareResult.cc
	src/model/CreateConsumerGroupRequest.cc
	src/model/CreateConsumerGroupResult.cc
	src/model/CreateMigrationJobRequest.cc
	src/model/CreateMigrationJobResult.cc
	src/model/CreateSubscriptionInstanceRequest.cc
	src/model/CreateSubscriptionInstanceResult.cc
	src/model/CreateSynchronizationJobRequest.cc
	src/model/CreateSynchronizationJobResult.cc
	src/model/DeleteConsumerGroupRequest.cc
	src/model/DeleteConsumerGroupResult.cc
	src/model/DeleteMigrationJobRequest.cc
	src/model/DeleteMigrationJobResult.cc
	src/model/DeleteSubscriptionInstanceRequest.cc
	src/model/DeleteSubscriptionInstanceResult.cc
	src/model/DeleteSynchronizationJobRequest.cc
	src/model/DeleteSynchronizationJobResult.cc
	src/model/DescribeConnectionStatusRequest.cc
	src/model/DescribeConnectionStatusResult.cc
	src/model/DescribeConsumerGroupRequest.cc
	src/model/DescribeConsumerGroupResult.cc
	src/model/DescribeDTSIPRequest.cc
	src/model/DescribeDTSIPResult.cc
	src/model/DescribeEndpointSwitchStatusRequest.cc
	src/model/DescribeEndpointSwitchStatusResult.cc
	src/model/DescribeInitializationStatusRequest.cc
	src/model/DescribeInitializationStatusResult.cc
	src/model/DescribeMigrationJobAlertRequest.cc
	src/model/DescribeMigrationJobAlertResult.cc
	src/model/DescribeMigrationJobDetailRequest.cc
	src/model/DescribeMigrationJobDetailResult.cc
	src/model/DescribeMigrationJobStatusRequest.cc
	src/model/DescribeMigrationJobStatusResult.cc
	src/model/DescribeMigrationJobsRequest.cc
	src/model/DescribeMigrationJobsResult.cc
	src/model/DescribeSubscriptionInstanceAlertRequest.cc
	src/model/DescribeSubscriptionInstanceAlertResult.cc
	src/model/DescribeSubscriptionInstanceStatusRequest.cc
	src/model/DescribeSubscriptionInstanceStatusResult.cc
	src/model/DescribeSubscriptionInstancesRequest.cc
	src/model/DescribeSubscriptionInstancesResult.cc
	src/model/DescribeSynchronizationJobAlertRequest.cc
	src/model/DescribeSynchronizationJobAlertResult.cc
	src/model/DescribeSynchronizationJobReplicatorCompareRequest.cc
	src/model/DescribeSynchronizationJobReplicatorCompareResult.cc
	src/model/DescribeSynchronizationJobStatusRequest.cc
	src/model/DescribeSynchronizationJobStatusResult.cc
	src/model/DescribeSynchronizationJobStatusListRequest.cc
	src/model/DescribeSynchronizationJobStatusListResult.cc
	src/model/DescribeSynchronizationJobsRequest.cc
	src/model/DescribeSynchronizationJobsResult.cc
	src/model/DescribeSynchronizationObjectModifyStatusRequest.cc
	src/model/DescribeSynchronizationObjectModifyStatusResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ModifyConsumerGroupPasswordRequest.cc
	src/model/ModifyConsumerGroupPasswordResult.cc
	src/model/ModifyConsumptionTimestampRequest.cc
	src/model/ModifyConsumptionTimestampResult.cc
	src/model/ModifySubscriptionObjectRequest.cc
	src/model/ModifySubscriptionObjectResult.cc
	src/model/ModifySynchronizationObjectRequest.cc
	src/model/ModifySynchronizationObjectResult.cc
	src/model/ResetSynchronizationJobRequest.cc
	src/model/ResetSynchronizationJobResult.cc
	src/model/ShieldPrecheckRequest.cc
	src/model/ShieldPrecheckResult.cc
	src/model/StartMigrationJobRequest.cc
	src/model/StartMigrationJobResult.cc
	src/model/StartSubscriptionInstanceRequest.cc
	src/model/StartSubscriptionInstanceResult.cc
	src/model/StartSynchronizationJobRequest.cc
	src/model/StartSynchronizationJobResult.cc
	src/model/StopMigrationJobRequest.cc
	src/model/StopMigrationJobResult.cc
	src/model/SuspendMigrationJobRequest.cc
	src/model/SuspendMigrationJobResult.cc
	src/model/SuspendSynchronizationJobRequest.cc
	src/model/SuspendSynchronizationJobResult.cc
	src/model/SwitchSynchronizationEndpointRequest.cc
	src/model/SwitchSynchronizationEndpointResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc )

add_library(dts ${LIB_TYPE}
	${dts_public_header}
	${dts_public_header_model}
	${dts_src})

set_target_properties(dts
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dts
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dts
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DTS_LIBRARY)
endif()

target_include_directories(dts
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dts
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dts
		jsoncpp)
	target_include_directories(dts
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dts
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dts
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dts
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dts
		jsoncpp)
endif()

install(FILES ${dts_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dts)
install(FILES ${dts_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dts/model)
install(TARGETS dts
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)