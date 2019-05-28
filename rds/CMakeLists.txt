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

set(rds_public_header 
	include/alibabacloud/rds/RdsClient.h
	include/alibabacloud/rds/RdsExport.h )

set(rds_public_header_model 
	include/alibabacloud/rds/model/DescribeReadDBInstanceDelayRequest.h
	include/alibabacloud/rds/model/DescribeReadDBInstanceDelayResult.h
	include/alibabacloud/rds/model/SwitchDBInstanceVpcRequest.h
	include/alibabacloud/rds/model/SwitchDBInstanceVpcResult.h
	include/alibabacloud/rds/model/DescribeAvailableInstanceClassRequest.h
	include/alibabacloud/rds/model/DescribeAvailableInstanceClassResult.h
	include/alibabacloud/rds/model/RequestServiceOfCloudDBExpertRequest.h
	include/alibabacloud/rds/model/RequestServiceOfCloudDBExpertResult.h
	include/alibabacloud/rds/model/MigrateSecurityIPModeRequest.h
	include/alibabacloud/rds/model/MigrateSecurityIPModeResult.h
	include/alibabacloud/rds/model/DescribeProxyFunctionSupportRequest.h
	include/alibabacloud/rds/model/DescribeProxyFunctionSupportResult.h
	include/alibabacloud/rds/model/DescribeCloudDbExpertServiceRequest.h
	include/alibabacloud/rds/model/DescribeCloudDbExpertServiceResult.h
	include/alibabacloud/rds/model/DescribeMetaListRequest.h
	include/alibabacloud/rds/model/DescribeMetaListResult.h
	include/alibabacloud/rds/model/EvaluateSupportByokShowRequest.h
	include/alibabacloud/rds/model/EvaluateSupportByokShowResult.h
	include/alibabacloud/rds/model/CheckInstanceExistRequest.h
	include/alibabacloud/rds/model/CheckInstanceExistResult.h
	include/alibabacloud/rds/model/MigrateToOtherRegionRequest.h
	include/alibabacloud/rds/model/MigrateToOtherRegionResult.h
	include/alibabacloud/rds/model/RestoreTableRequest.h
	include/alibabacloud/rds/model/RestoreTableResult.h
	include/alibabacloud/rds/model/DescribeInstanceVpcMigrateInfoRequest.h
	include/alibabacloud/rds/model/DescribeInstanceVpcMigrateInfoResult.h
	include/alibabacloud/rds/model/AllocateInstanceVpcNetworkTypeRequest.h
	include/alibabacloud/rds/model/AllocateInstanceVpcNetworkTypeResult.h
	include/alibabacloud/rds/model/ModifyMySQLDBInstanceDelayRequest.h
	include/alibabacloud/rds/model/ModifyMySQLDBInstanceDelayResult.h
	include/alibabacloud/rds/model/DescribeCollationTimeZonesRequest.h
	include/alibabacloud/rds/model/DescribeCollationTimeZonesResult.h
	include/alibabacloud/rds/model/DescribeTemplatesListRequest.h
	include/alibabacloud/rds/model/DescribeTemplatesListResult.h
	include/alibabacloud/rds/model/DescribeLogBackupFilesRequest.h
	include/alibabacloud/rds/model/DescribeLogBackupFilesResult.h )

set(rds_src 
	src/RdsClient.cc
	src/model/DescribeReadDBInstanceDelayRequest.cc
	src/model/DescribeReadDBInstanceDelayResult.cc
	src/model/SwitchDBInstanceVpcRequest.cc
	src/model/SwitchDBInstanceVpcResult.cc
	src/model/DescribeAvailableInstanceClassRequest.cc
	src/model/DescribeAvailableInstanceClassResult.cc
	src/model/RequestServiceOfCloudDBExpertRequest.cc
	src/model/RequestServiceOfCloudDBExpertResult.cc
	src/model/MigrateSecurityIPModeRequest.cc
	src/model/MigrateSecurityIPModeResult.cc
	src/model/DescribeProxyFunctionSupportRequest.cc
	src/model/DescribeProxyFunctionSupportResult.cc
	src/model/DescribeCloudDbExpertServiceRequest.cc
	src/model/DescribeCloudDbExpertServiceResult.cc
	src/model/DescribeMetaListRequest.cc
	src/model/DescribeMetaListResult.cc
	src/model/EvaluateSupportByokShowRequest.cc
	src/model/EvaluateSupportByokShowResult.cc
	src/model/CheckInstanceExistRequest.cc
	src/model/CheckInstanceExistResult.cc
	src/model/MigrateToOtherRegionRequest.cc
	src/model/MigrateToOtherRegionResult.cc
	src/model/RestoreTableRequest.cc
	src/model/RestoreTableResult.cc
	src/model/DescribeInstanceVpcMigrateInfoRequest.cc
	src/model/DescribeInstanceVpcMigrateInfoResult.cc
	src/model/AllocateInstanceVpcNetworkTypeRequest.cc
	src/model/AllocateInstanceVpcNetworkTypeResult.cc
	src/model/ModifyMySQLDBInstanceDelayRequest.cc
	src/model/ModifyMySQLDBInstanceDelayResult.cc
	src/model/DescribeCollationTimeZonesRequest.cc
	src/model/DescribeCollationTimeZonesResult.cc
	src/model/DescribeTemplatesListRequest.cc
	src/model/DescribeTemplatesListResult.cc
	src/model/DescribeLogBackupFilesRequest.cc
	src/model/DescribeLogBackupFilesResult.cc )

add_library(rds ${LIB_TYPE}
	${rds_public_header}
	${rds_public_header_model}
	${rds_src})

set_target_properties(rds
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}rds
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(rds
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_RDS_LIBRARY)
endif()

target_include_directories(rds
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(rds
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(rds
		jsoncpp)
	target_include_directories(rds
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(rds
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(rds
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(rds
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(rds
		jsoncpp)
endif()

install(FILES ${rds_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/rds)
install(FILES ${rds_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/rds/model)
install(TARGETS rds
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)