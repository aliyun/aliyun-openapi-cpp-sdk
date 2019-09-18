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

set(drds_public_header 
	include/alibabacloud/drds/DrdsClient.h
	include/alibabacloud/drds/DrdsExport.h )

set(drds_public_header_model 
	include/alibabacloud/drds/model/CreateDrdsAccountRequest.h
	include/alibabacloud/drds/model/CreateDrdsAccountResult.h
	include/alibabacloud/drds/model/CreateDrdsDBRequest.h
	include/alibabacloud/drds/model/CreateDrdsDBResult.h
	include/alibabacloud/drds/model/CreateDrdsInstanceRequest.h
	include/alibabacloud/drds/model/CreateDrdsInstanceResult.h
	include/alibabacloud/drds/model/CreateReadOnlyAccountRequest.h
	include/alibabacloud/drds/model/CreateReadOnlyAccountResult.h
	include/alibabacloud/drds/model/DeleteDrdsDBRequest.h
	include/alibabacloud/drds/model/DeleteDrdsDBResult.h
	include/alibabacloud/drds/model/DeleteFailedDrdsDBRequest.h
	include/alibabacloud/drds/model/DeleteFailedDrdsDBResult.h
	include/alibabacloud/drds/model/DescribeCreateDrdsInstanceStatusRequest.h
	include/alibabacloud/drds/model/DescribeCreateDrdsInstanceStatusResult.h
	include/alibabacloud/drds/model/DescribeDrdsDBRequest.h
	include/alibabacloud/drds/model/DescribeDrdsDBResult.h
	include/alibabacloud/drds/model/DescribeDrdsDBIpWhiteListRequest.h
	include/alibabacloud/drds/model/DescribeDrdsDBIpWhiteListResult.h
	include/alibabacloud/drds/model/DescribeDrdsDBsRequest.h
	include/alibabacloud/drds/model/DescribeDrdsDBsResult.h
	include/alibabacloud/drds/model/DescribeDrdsInstanceRequest.h
	include/alibabacloud/drds/model/DescribeDrdsInstanceResult.h
	include/alibabacloud/drds/model/DescribeDrdsInstanceDbMonitorRequest.h
	include/alibabacloud/drds/model/DescribeDrdsInstanceDbMonitorResult.h
	include/alibabacloud/drds/model/DescribeDrdsInstanceMonitorRequest.h
	include/alibabacloud/drds/model/DescribeDrdsInstanceMonitorResult.h
	include/alibabacloud/drds/model/DescribeDrdsInstanceNetInfoForInnerRequest.h
	include/alibabacloud/drds/model/DescribeDrdsInstanceNetInfoForInnerResult.h
	include/alibabacloud/drds/model/DescribeDrdsInstancesRequest.h
	include/alibabacloud/drds/model/DescribeDrdsInstancesResult.h
	include/alibabacloud/drds/model/DescribeRdsListRequest.h
	include/alibabacloud/drds/model/DescribeRdsListResult.h
	include/alibabacloud/drds/model/DescribeReadOnlyAccountRequest.h
	include/alibabacloud/drds/model/DescribeReadOnlyAccountResult.h
	include/alibabacloud/drds/model/DescribeRegionsRequest.h
	include/alibabacloud/drds/model/DescribeRegionsResult.h
	include/alibabacloud/drds/model/DescribeShardDBsRequest.h
	include/alibabacloud/drds/model/DescribeShardDBsResult.h
	include/alibabacloud/drds/model/DescribeShardDbConnectionInfoRequest.h
	include/alibabacloud/drds/model/DescribeShardDbConnectionInfoResult.h
	include/alibabacloud/drds/model/ModifyDrdsDBPasswdRequest.h
	include/alibabacloud/drds/model/ModifyDrdsDBPasswdResult.h
	include/alibabacloud/drds/model/ModifyDrdsInstanceDescriptionRequest.h
	include/alibabacloud/drds/model/ModifyDrdsInstanceDescriptionResult.h
	include/alibabacloud/drds/model/ModifyDrdsIpWhiteListRequest.h
	include/alibabacloud/drds/model/ModifyDrdsIpWhiteListResult.h
	include/alibabacloud/drds/model/ModifyFullTableScanRequest.h
	include/alibabacloud/drds/model/ModifyFullTableScanResult.h
	include/alibabacloud/drds/model/ModifyRdsReadWeightRequest.h
	include/alibabacloud/drds/model/ModifyRdsReadWeightResult.h
	include/alibabacloud/drds/model/ModifyReadOnlyAccountPasswordRequest.h
	include/alibabacloud/drds/model/ModifyReadOnlyAccountPasswordResult.h
	include/alibabacloud/drds/model/QueryInstanceInfoByConnRequest.h
	include/alibabacloud/drds/model/QueryInstanceInfoByConnResult.h
	include/alibabacloud/drds/model/RemoveDrdsInstanceRequest.h
	include/alibabacloud/drds/model/RemoveDrdsInstanceResult.h
	include/alibabacloud/drds/model/RemoveReadOnlyAccountRequest.h
	include/alibabacloud/drds/model/RemoveReadOnlyAccountResult.h )

set(drds_src 
	src/DrdsClient.cc
	src/model/CreateDrdsAccountRequest.cc
	src/model/CreateDrdsAccountResult.cc
	src/model/CreateDrdsDBRequest.cc
	src/model/CreateDrdsDBResult.cc
	src/model/CreateDrdsInstanceRequest.cc
	src/model/CreateDrdsInstanceResult.cc
	src/model/CreateReadOnlyAccountRequest.cc
	src/model/CreateReadOnlyAccountResult.cc
	src/model/DeleteDrdsDBRequest.cc
	src/model/DeleteDrdsDBResult.cc
	src/model/DeleteFailedDrdsDBRequest.cc
	src/model/DeleteFailedDrdsDBResult.cc
	src/model/DescribeCreateDrdsInstanceStatusRequest.cc
	src/model/DescribeCreateDrdsInstanceStatusResult.cc
	src/model/DescribeDrdsDBRequest.cc
	src/model/DescribeDrdsDBResult.cc
	src/model/DescribeDrdsDBIpWhiteListRequest.cc
	src/model/DescribeDrdsDBIpWhiteListResult.cc
	src/model/DescribeDrdsDBsRequest.cc
	src/model/DescribeDrdsDBsResult.cc
	src/model/DescribeDrdsInstanceRequest.cc
	src/model/DescribeDrdsInstanceResult.cc
	src/model/DescribeDrdsInstanceDbMonitorRequest.cc
	src/model/DescribeDrdsInstanceDbMonitorResult.cc
	src/model/DescribeDrdsInstanceMonitorRequest.cc
	src/model/DescribeDrdsInstanceMonitorResult.cc
	src/model/DescribeDrdsInstanceNetInfoForInnerRequest.cc
	src/model/DescribeDrdsInstanceNetInfoForInnerResult.cc
	src/model/DescribeDrdsInstancesRequest.cc
	src/model/DescribeDrdsInstancesResult.cc
	src/model/DescribeRdsListRequest.cc
	src/model/DescribeRdsListResult.cc
	src/model/DescribeReadOnlyAccountRequest.cc
	src/model/DescribeReadOnlyAccountResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeShardDBsRequest.cc
	src/model/DescribeShardDBsResult.cc
	src/model/DescribeShardDbConnectionInfoRequest.cc
	src/model/DescribeShardDbConnectionInfoResult.cc
	src/model/ModifyDrdsDBPasswdRequest.cc
	src/model/ModifyDrdsDBPasswdResult.cc
	src/model/ModifyDrdsInstanceDescriptionRequest.cc
	src/model/ModifyDrdsInstanceDescriptionResult.cc
	src/model/ModifyDrdsIpWhiteListRequest.cc
	src/model/ModifyDrdsIpWhiteListResult.cc
	src/model/ModifyFullTableScanRequest.cc
	src/model/ModifyFullTableScanResult.cc
	src/model/ModifyRdsReadWeightRequest.cc
	src/model/ModifyRdsReadWeightResult.cc
	src/model/ModifyReadOnlyAccountPasswordRequest.cc
	src/model/ModifyReadOnlyAccountPasswordResult.cc
	src/model/QueryInstanceInfoByConnRequest.cc
	src/model/QueryInstanceInfoByConnResult.cc
	src/model/RemoveDrdsInstanceRequest.cc
	src/model/RemoveDrdsInstanceResult.cc
	src/model/RemoveReadOnlyAccountRequest.cc
	src/model/RemoveReadOnlyAccountResult.cc )

add_library(drds ${LIB_TYPE}
	${drds_public_header}
	${drds_public_header_model}
	${drds_src})

set_target_properties(drds
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}drds
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(drds
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DRDS_LIBRARY)
endif()

target_include_directories(drds
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(drds
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(drds
		jsoncpp)
	target_include_directories(drds
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(drds
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(drds
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(drds
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(drds
		jsoncpp)
endif()

install(FILES ${drds_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/drds)
install(FILES ${drds_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/drds/model)
install(TARGETS drds
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)