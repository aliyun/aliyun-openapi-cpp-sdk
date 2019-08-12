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

set(sas_public_header 
	include/alibabacloud/sas/SasClient.h
	include/alibabacloud/sas/SasExport.h )

set(sas_public_header_model 
	include/alibabacloud/sas/model/DescribeAlarmEventDetailRequest.h
	include/alibabacloud/sas/model/DescribeAlarmEventDetailResult.h
	include/alibabacloud/sas/model/DescribeAlarmEventListRequest.h
	include/alibabacloud/sas/model/DescribeAlarmEventListResult.h
	include/alibabacloud/sas/model/DescribeSuspEventsRequest.h
	include/alibabacloud/sas/model/DescribeSuspEventsResult.h
	include/alibabacloud/sas/model/ModifySecurityCheckScheduleConfigRequest.h
	include/alibabacloud/sas/model/ModifySecurityCheckScheduleConfigResult.h
	include/alibabacloud/sas/model/DescribeConcernNecessityRequest.h
	include/alibabacloud/sas/model/DescribeConcernNecessityResult.h
	include/alibabacloud/sas/model/DescribeCheckWarningSummaryRequest.h
	include/alibabacloud/sas/model/DescribeCheckWarningSummaryResult.h
	include/alibabacloud/sas/model/DescribeEmgVulGroupRequest.h
	include/alibabacloud/sas/model/DescribeEmgVulGroupResult.h
	include/alibabacloud/sas/model/DescribeVulListRequest.h
	include/alibabacloud/sas/model/DescribeVulListResult.h
	include/alibabacloud/sas/model/DescribeAutoDelConfigRequest.h
	include/alibabacloud/sas/model/DescribeAutoDelConfigResult.h
	include/alibabacloud/sas/model/DescribeVulWhitelistRequest.h
	include/alibabacloud/sas/model/DescribeVulWhitelistResult.h
	include/alibabacloud/sas/model/ModifyRiskCheckStatusRequest.h
	include/alibabacloud/sas/model/ModifyRiskCheckStatusResult.h
	include/alibabacloud/sas/model/DescribeSecurityCheckScheduleConfigRequest.h
	include/alibabacloud/sas/model/DescribeSecurityCheckScheduleConfigResult.h
	include/alibabacloud/sas/model/StartBaselineSecurityCheckRequest.h
	include/alibabacloud/sas/model/StartBaselineSecurityCheckResult.h
	include/alibabacloud/sas/model/ModifyPushAllTaskRequest.h
	include/alibabacloud/sas/model/ModifyPushAllTaskResult.h
	include/alibabacloud/sas/model/DescribeRiskCheckResultRequest.h
	include/alibabacloud/sas/model/DescribeRiskCheckResultResult.h
	include/alibabacloud/sas/model/DescribeCheckWarningDetailRequest.h
	include/alibabacloud/sas/model/DescribeCheckWarningDetailResult.h
	include/alibabacloud/sas/model/DescribeSuspEventDetailRequest.h
	include/alibabacloud/sas/model/DescribeSuspEventDetailResult.h
	include/alibabacloud/sas/model/DescribeStratetyRequest.h
	include/alibabacloud/sas/model/DescribeStratetyResult.h
	include/alibabacloud/sas/model/DescribeRiskCheckItemResultRequest.h
	include/alibabacloud/sas/model/DescribeRiskCheckItemResultResult.h
	include/alibabacloud/sas/model/DescribeWarningMachinesRequest.h
	include/alibabacloud/sas/model/DescribeWarningMachinesResult.h
	include/alibabacloud/sas/model/ModifyRiskSingleResultStatusRequest.h
	include/alibabacloud/sas/model/ModifyRiskSingleResultStatusResult.h
	include/alibabacloud/sas/model/ModifyAutoDelConfigRequest.h
	include/alibabacloud/sas/model/ModifyAutoDelConfigResult.h
	include/alibabacloud/sas/model/ModifyEmgVulSubmitRequest.h
	include/alibabacloud/sas/model/ModifyEmgVulSubmitResult.h
	include/alibabacloud/sas/model/DescribeVulDetailsRequest.h
	include/alibabacloud/sas/model/DescribeVulDetailsResult.h
	include/alibabacloud/sas/model/ModifyCreateVulWhitelistRequest.h
	include/alibabacloud/sas/model/ModifyCreateVulWhitelistResult.h
	include/alibabacloud/sas/model/DescribeGroupedVulRequest.h
	include/alibabacloud/sas/model/DescribeGroupedVulResult.h
	include/alibabacloud/sas/model/ModifyDeleteVulWhitelistRequest.h
	include/alibabacloud/sas/model/ModifyDeleteVulWhitelistResult.h
	include/alibabacloud/sas/model/DescribeStrategyExecDetailRequest.h
	include/alibabacloud/sas/model/DescribeStrategyExecDetailResult.h
	include/alibabacloud/sas/model/DescribeRiskCheckSummaryRequest.h
	include/alibabacloud/sas/model/DescribeRiskCheckSummaryResult.h
	include/alibabacloud/sas/model/ModifyOperateVulRequest.h
	include/alibabacloud/sas/model/ModifyOperateVulResult.h
	include/alibabacloud/sas/model/DescribeRiskItemTypeRequest.h
	include/alibabacloud/sas/model/DescribeRiskItemTypeResult.h
	include/alibabacloud/sas/model/DescribeCheckWarningsRequest.h
	include/alibabacloud/sas/model/DescribeCheckWarningsResult.h
	include/alibabacloud/sas/model/DescribeUserBaselineAuthorizationRequest.h
	include/alibabacloud/sas/model/DescribeUserBaselineAuthorizationResult.h
	include/alibabacloud/sas/model/ModifyConcernNecessityRequest.h
	include/alibabacloud/sas/model/ModifyConcernNecessityResult.h )

set(sas_src 
	src/SasClient.cc
	src/model/DescribeAlarmEventDetailRequest.cc
	src/model/DescribeAlarmEventDetailResult.cc
	src/model/DescribeAlarmEventListRequest.cc
	src/model/DescribeAlarmEventListResult.cc
	src/model/DescribeSuspEventsRequest.cc
	src/model/DescribeSuspEventsResult.cc
	src/model/ModifySecurityCheckScheduleConfigRequest.cc
	src/model/ModifySecurityCheckScheduleConfigResult.cc
	src/model/DescribeConcernNecessityRequest.cc
	src/model/DescribeConcernNecessityResult.cc
	src/model/DescribeCheckWarningSummaryRequest.cc
	src/model/DescribeCheckWarningSummaryResult.cc
	src/model/DescribeEmgVulGroupRequest.cc
	src/model/DescribeEmgVulGroupResult.cc
	src/model/DescribeVulListRequest.cc
	src/model/DescribeVulListResult.cc
	src/model/DescribeAutoDelConfigRequest.cc
	src/model/DescribeAutoDelConfigResult.cc
	src/model/DescribeVulWhitelistRequest.cc
	src/model/DescribeVulWhitelistResult.cc
	src/model/ModifyRiskCheckStatusRequest.cc
	src/model/ModifyRiskCheckStatusResult.cc
	src/model/DescribeSecurityCheckScheduleConfigRequest.cc
	src/model/DescribeSecurityCheckScheduleConfigResult.cc
	src/model/StartBaselineSecurityCheckRequest.cc
	src/model/StartBaselineSecurityCheckResult.cc
	src/model/ModifyPushAllTaskRequest.cc
	src/model/ModifyPushAllTaskResult.cc
	src/model/DescribeRiskCheckResultRequest.cc
	src/model/DescribeRiskCheckResultResult.cc
	src/model/DescribeCheckWarningDetailRequest.cc
	src/model/DescribeCheckWarningDetailResult.cc
	src/model/DescribeSuspEventDetailRequest.cc
	src/model/DescribeSuspEventDetailResult.cc
	src/model/DescribeStratetyRequest.cc
	src/model/DescribeStratetyResult.cc
	src/model/DescribeRiskCheckItemResultRequest.cc
	src/model/DescribeRiskCheckItemResultResult.cc
	src/model/DescribeWarningMachinesRequest.cc
	src/model/DescribeWarningMachinesResult.cc
	src/model/ModifyRiskSingleResultStatusRequest.cc
	src/model/ModifyRiskSingleResultStatusResult.cc
	src/model/ModifyAutoDelConfigRequest.cc
	src/model/ModifyAutoDelConfigResult.cc
	src/model/ModifyEmgVulSubmitRequest.cc
	src/model/ModifyEmgVulSubmitResult.cc
	src/model/DescribeVulDetailsRequest.cc
	src/model/DescribeVulDetailsResult.cc
	src/model/ModifyCreateVulWhitelistRequest.cc
	src/model/ModifyCreateVulWhitelistResult.cc
	src/model/DescribeGroupedVulRequest.cc
	src/model/DescribeGroupedVulResult.cc
	src/model/ModifyDeleteVulWhitelistRequest.cc
	src/model/ModifyDeleteVulWhitelistResult.cc
	src/model/DescribeStrategyExecDetailRequest.cc
	src/model/DescribeStrategyExecDetailResult.cc
	src/model/DescribeRiskCheckSummaryRequest.cc
	src/model/DescribeRiskCheckSummaryResult.cc
	src/model/ModifyOperateVulRequest.cc
	src/model/ModifyOperateVulResult.cc
	src/model/DescribeRiskItemTypeRequest.cc
	src/model/DescribeRiskItemTypeResult.cc
	src/model/DescribeCheckWarningsRequest.cc
	src/model/DescribeCheckWarningsResult.cc
	src/model/DescribeUserBaselineAuthorizationRequest.cc
	src/model/DescribeUserBaselineAuthorizationResult.cc
	src/model/ModifyConcernNecessityRequest.cc
	src/model/ModifyConcernNecessityResult.cc )

add_library(sas ${LIB_TYPE}
	${sas_public_header}
	${sas_public_header_model}
	${sas_src})

set_target_properties(sas
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sas
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(sas
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SAS_LIBRARY)
endif()

target_include_directories(sas
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(sas
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(sas
		jsoncpp)
	target_include_directories(sas
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(sas
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(sas
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(sas
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(sas
		jsoncpp)
endif()

install(FILES ${sas_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sas)
install(FILES ${sas_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sas/model)
install(TARGETS sas
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)