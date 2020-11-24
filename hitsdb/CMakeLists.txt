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

set(hitsdb_public_header 
	include/alibabacloud/hitsdb/HitsdbClient.h
	include/alibabacloud/hitsdb/HitsdbExport.h )

set(hitsdb_public_header_model 
	include/alibabacloud/hitsdb/model/CreateHiTSDBInstanceRequest.h
	include/alibabacloud/hitsdb/model/CreateHiTSDBInstanceResult.h
	include/alibabacloud/hitsdb/model/DeleteHiTSDBInstanceRequest.h
	include/alibabacloud/hitsdb/model/DeleteHiTSDBInstanceResult.h
	include/alibabacloud/hitsdb/model/DeleteHiTSDBInstanceDataRequest.h
	include/alibabacloud/hitsdb/model/DeleteHiTSDBInstanceDataResult.h
	include/alibabacloud/hitsdb/model/DeleteHiTSDBInstanceMetaRequest.h
	include/alibabacloud/hitsdb/model/DeleteHiTSDBInstanceMetaResult.h
	include/alibabacloud/hitsdb/model/DescribeHiTSDBInstanceRequest.h
	include/alibabacloud/hitsdb/model/DescribeHiTSDBInstanceResult.h
	include/alibabacloud/hitsdb/model/DescribeHiTSDBInstanceDataTtlRequest.h
	include/alibabacloud/hitsdb/model/DescribeHiTSDBInstanceDataTtlResult.h
	include/alibabacloud/hitsdb/model/DescribeHiTSDBInstanceListRequest.h
	include/alibabacloud/hitsdb/model/DescribeHiTSDBInstanceListResult.h
	include/alibabacloud/hitsdb/model/DescribeHiTSDBInstanceSecurityIpListRequest.h
	include/alibabacloud/hitsdb/model/DescribeHiTSDBInstanceSecurityIpListResult.h
	include/alibabacloud/hitsdb/model/DescribeRegionsRequest.h
	include/alibabacloud/hitsdb/model/DescribeRegionsResult.h
	include/alibabacloud/hitsdb/model/DescribeZonesRequest.h
	include/alibabacloud/hitsdb/model/DescribeZonesResult.h
	include/alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataRequest.h
	include/alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataResult.h
	include/alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataMetricListRequest.h
	include/alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataMetricListResult.h
	include/alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataTagKeyListRequest.h
	include/alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataTagKeyListResult.h
	include/alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataTagValueListRequest.h
	include/alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataTagValueListResult.h
	include/alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDeletionJobListRequest.h
	include/alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDeletionJobListResult.h
	include/alibabacloud/hitsdb/model/ModifyHiTSDBInstanceClassRequest.h
	include/alibabacloud/hitsdb/model/ModifyHiTSDBInstanceClassResult.h
	include/alibabacloud/hitsdb/model/ModifyHiTSDBInstanceSecurityIpListRequest.h
	include/alibabacloud/hitsdb/model/ModifyHiTSDBInstanceSecurityIpListResult.h
	include/alibabacloud/hitsdb/model/RenameHiTSDBInstanceAliasRequest.h
	include/alibabacloud/hitsdb/model/RenameHiTSDBInstanceAliasResult.h
	include/alibabacloud/hitsdb/model/RenewTSDBInstanceRequest.h
	include/alibabacloud/hitsdb/model/RenewTSDBInstanceResult.h
	include/alibabacloud/hitsdb/model/RestartHiTSDBInstanceRequest.h
	include/alibabacloud/hitsdb/model/RestartHiTSDBInstanceResult.h
	include/alibabacloud/hitsdb/model/SwitchHiTSDBInstancePublicNetRequest.h
	include/alibabacloud/hitsdb/model/SwitchHiTSDBInstancePublicNetResult.h
	include/alibabacloud/hitsdb/model/UpdateHiTSDBInstanceDataTtlRequest.h
	include/alibabacloud/hitsdb/model/UpdateHiTSDBInstanceDataTtlResult.h )

set(hitsdb_src 
	src/HitsdbClient.cc
	src/model/CreateHiTSDBInstanceRequest.cc
	src/model/CreateHiTSDBInstanceResult.cc
	src/model/DeleteHiTSDBInstanceRequest.cc
	src/model/DeleteHiTSDBInstanceResult.cc
	src/model/DeleteHiTSDBInstanceDataRequest.cc
	src/model/DeleteHiTSDBInstanceDataResult.cc
	src/model/DeleteHiTSDBInstanceMetaRequest.cc
	src/model/DeleteHiTSDBInstanceMetaResult.cc
	src/model/DescribeHiTSDBInstanceRequest.cc
	src/model/DescribeHiTSDBInstanceResult.cc
	src/model/DescribeHiTSDBInstanceDataTtlRequest.cc
	src/model/DescribeHiTSDBInstanceDataTtlResult.cc
	src/model/DescribeHiTSDBInstanceListRequest.cc
	src/model/DescribeHiTSDBInstanceListResult.cc
	src/model/DescribeHiTSDBInstanceSecurityIpListRequest.cc
	src/model/DescribeHiTSDBInstanceSecurityIpListResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeZonesRequest.cc
	src/model/DescribeZonesResult.cc
	src/model/ExploreHiTSDBInstanceDataRequest.cc
	src/model/ExploreHiTSDBInstanceDataResult.cc
	src/model/ExploreHiTSDBInstanceDataMetricListRequest.cc
	src/model/ExploreHiTSDBInstanceDataMetricListResult.cc
	src/model/ExploreHiTSDBInstanceDataTagKeyListRequest.cc
	src/model/ExploreHiTSDBInstanceDataTagKeyListResult.cc
	src/model/ExploreHiTSDBInstanceDataTagValueListRequest.cc
	src/model/ExploreHiTSDBInstanceDataTagValueListResult.cc
	src/model/ExploreHiTSDBInstanceDeletionJobListRequest.cc
	src/model/ExploreHiTSDBInstanceDeletionJobListResult.cc
	src/model/ModifyHiTSDBInstanceClassRequest.cc
	src/model/ModifyHiTSDBInstanceClassResult.cc
	src/model/ModifyHiTSDBInstanceSecurityIpListRequest.cc
	src/model/ModifyHiTSDBInstanceSecurityIpListResult.cc
	src/model/RenameHiTSDBInstanceAliasRequest.cc
	src/model/RenameHiTSDBInstanceAliasResult.cc
	src/model/RenewTSDBInstanceRequest.cc
	src/model/RenewTSDBInstanceResult.cc
	src/model/RestartHiTSDBInstanceRequest.cc
	src/model/RestartHiTSDBInstanceResult.cc
	src/model/SwitchHiTSDBInstancePublicNetRequest.cc
	src/model/SwitchHiTSDBInstancePublicNetResult.cc
	src/model/UpdateHiTSDBInstanceDataTtlRequest.cc
	src/model/UpdateHiTSDBInstanceDataTtlResult.cc )

add_library(hitsdb ${LIB_TYPE}
	${hitsdb_public_header}
	${hitsdb_public_header_model}
	${hitsdb_src})

set_target_properties(hitsdb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}hitsdb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(hitsdb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_HITSDB_LIBRARY)
endif()

target_include_directories(hitsdb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(hitsdb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(hitsdb
		jsoncpp)
	target_include_directories(hitsdb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(hitsdb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(hitsdb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(hitsdb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(hitsdb
		jsoncpp)
endif()

install(FILES ${hitsdb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/hitsdb)
install(FILES ${hitsdb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/hitsdb/model)
install(TARGETS hitsdb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)