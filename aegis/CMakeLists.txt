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

set(aegis_public_header 
	include/alibabacloud/aegis/AegisClient.h
	include/alibabacloud/aegis/AegisExport.h )

set(aegis_public_header_model 
	include/alibabacloud/aegis/model/GetEntityListRequest.h
	include/alibabacloud/aegis/model/GetEntityListResult.h
	include/alibabacloud/aegis/model/GetStatisticsByUuidRequest.h
	include/alibabacloud/aegis/model/GetStatisticsByUuidResult.h
	include/alibabacloud/aegis/model/GetStatisticsRequest.h
	include/alibabacloud/aegis/model/GetStatisticsResult.h
	include/alibabacloud/aegis/model/DescribeVulDetailsRequest.h
	include/alibabacloud/aegis/model/DescribeVulDetailsResult.h
	include/alibabacloud/aegis/model/DeleteStrategyRequest.h
	include/alibabacloud/aegis/model/DeleteStrategyResult.h
	include/alibabacloud/aegis/model/GetCrackStatisticsRequest.h
	include/alibabacloud/aegis/model/GetCrackStatisticsResult.h
	include/alibabacloud/aegis/model/DescribeWarningRequest.h
	include/alibabacloud/aegis/model/DescribeWarningResult.h
	include/alibabacloud/aegis/model/ReleaseInstanceRequest.h
	include/alibabacloud/aegis/model/ReleaseInstanceResult.h
	include/alibabacloud/aegis/model/DescribeSuspiciousEventsRequest.h
	include/alibabacloud/aegis/model/DescribeSuspiciousEventsResult.h
	include/alibabacloud/aegis/model/CreateInstanceRequest.h
	include/alibabacloud/aegis/model/CreateInstanceResult.h
	include/alibabacloud/aegis/model/DescribeVulListRequest.h
	include/alibabacloud/aegis/model/DescribeVulListResult.h
	include/alibabacloud/aegis/model/UpgradeInstanceRequest.h
	include/alibabacloud/aegis/model/UpgradeInstanceResult.h
	include/alibabacloud/aegis/model/RenewInstanceRequest.h
	include/alibabacloud/aegis/model/RenewInstanceResult.h
	include/alibabacloud/aegis/model/DescribeStrategyTargetRequest.h
	include/alibabacloud/aegis/model/DescribeStrategyTargetResult.h
	include/alibabacloud/aegis/model/QueryLoginEventRequest.h
	include/alibabacloud/aegis/model/QueryLoginEventResult.h
	include/alibabacloud/aegis/model/GetAccountStatisticsRequest.h
	include/alibabacloud/aegis/model/GetAccountStatisticsResult.h
	include/alibabacloud/aegis/model/ModifyStrategyRequest.h
	include/alibabacloud/aegis/model/ModifyStrategyResult.h
	include/alibabacloud/aegis/model/ModifyStrategyTargetRequest.h
	include/alibabacloud/aegis/model/ModifyStrategyTargetResult.h
	include/alibabacloud/aegis/model/ModifyBatchIgnoreVulRequest.h
	include/alibabacloud/aegis/model/ModifyBatchIgnoreVulResult.h
	include/alibabacloud/aegis/model/DescribeWebshellRequest.h
	include/alibabacloud/aegis/model/DescribeWebshellResult.h
	include/alibabacloud/aegis/model/DescribeStratetyDetailRequest.h
	include/alibabacloud/aegis/model/DescribeStratetyDetailResult.h
	include/alibabacloud/aegis/model/DescribeStratetyRequest.h
	include/alibabacloud/aegis/model/DescribeStratetyResult.h
	include/alibabacloud/aegis/model/DescribeLoginLogsRequest.h
	include/alibabacloud/aegis/model/DescribeLoginLogsResult.h
	include/alibabacloud/aegis/model/QueryCrackEventRequest.h
	include/alibabacloud/aegis/model/QueryCrackEventResult.h )

set(aegis_src 
	src/AegisClient.cc
	src/model/GetEntityListRequest.cc
	src/model/GetEntityListResult.cc
	src/model/GetStatisticsByUuidRequest.cc
	src/model/GetStatisticsByUuidResult.cc
	src/model/GetStatisticsRequest.cc
	src/model/GetStatisticsResult.cc
	src/model/DescribeVulDetailsRequest.cc
	src/model/DescribeVulDetailsResult.cc
	src/model/DeleteStrategyRequest.cc
	src/model/DeleteStrategyResult.cc
	src/model/GetCrackStatisticsRequest.cc
	src/model/GetCrackStatisticsResult.cc
	src/model/DescribeWarningRequest.cc
	src/model/DescribeWarningResult.cc
	src/model/ReleaseInstanceRequest.cc
	src/model/ReleaseInstanceResult.cc
	src/model/DescribeSuspiciousEventsRequest.cc
	src/model/DescribeSuspiciousEventsResult.cc
	src/model/CreateInstanceRequest.cc
	src/model/CreateInstanceResult.cc
	src/model/DescribeVulListRequest.cc
	src/model/DescribeVulListResult.cc
	src/model/UpgradeInstanceRequest.cc
	src/model/UpgradeInstanceResult.cc
	src/model/RenewInstanceRequest.cc
	src/model/RenewInstanceResult.cc
	src/model/DescribeStrategyTargetRequest.cc
	src/model/DescribeStrategyTargetResult.cc
	src/model/QueryLoginEventRequest.cc
	src/model/QueryLoginEventResult.cc
	src/model/GetAccountStatisticsRequest.cc
	src/model/GetAccountStatisticsResult.cc
	src/model/ModifyStrategyRequest.cc
	src/model/ModifyStrategyResult.cc
	src/model/ModifyStrategyTargetRequest.cc
	src/model/ModifyStrategyTargetResult.cc
	src/model/ModifyBatchIgnoreVulRequest.cc
	src/model/ModifyBatchIgnoreVulResult.cc
	src/model/DescribeWebshellRequest.cc
	src/model/DescribeWebshellResult.cc
	src/model/DescribeStratetyDetailRequest.cc
	src/model/DescribeStratetyDetailResult.cc
	src/model/DescribeStratetyRequest.cc
	src/model/DescribeStratetyResult.cc
	src/model/DescribeLoginLogsRequest.cc
	src/model/DescribeLoginLogsResult.cc
	src/model/QueryCrackEventRequest.cc
	src/model/QueryCrackEventResult.cc )

add_library(aegis ${LIB_TYPE}
	${aegis_public_header}
	${aegis_public_header_model}
	${aegis_src})

set_target_properties(aegis
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}aegis
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(aegis
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_AEGIS_LIBRARY)
endif()

target_include_directories(aegis
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(aegis
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(aegis
		jsoncpp)
	target_include_directories(aegis
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(aegis
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(aegis
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(aegis
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(aegis
		jsoncpp)
endif()

install(FILES ${aegis_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aegis)
install(FILES ${aegis_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aegis/model)
install(TARGETS aegis
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)