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

set(alidns_public_header 
	include/alibabacloud/alidns/AlidnsClient.h
	include/alibabacloud/alidns/AlidnsExport.h )

set(alidns_public_header_model 
	include/alibabacloud/alidns/model/AddDomainRequest.h
	include/alibabacloud/alidns/model/AddDomainResult.h
	include/alibabacloud/alidns/model/AddDomainBackupRequest.h
	include/alibabacloud/alidns/model/AddDomainBackupResult.h
	include/alibabacloud/alidns/model/AddDomainGroupRequest.h
	include/alibabacloud/alidns/model/AddDomainGroupResult.h
	include/alibabacloud/alidns/model/AddDomainRecordRequest.h
	include/alibabacloud/alidns/model/AddDomainRecordResult.h
	include/alibabacloud/alidns/model/AddGtmAccessStrategyRequest.h
	include/alibabacloud/alidns/model/AddGtmAccessStrategyResult.h
	include/alibabacloud/alidns/model/AddGtmAddressPoolRequest.h
	include/alibabacloud/alidns/model/AddGtmAddressPoolResult.h
	include/alibabacloud/alidns/model/AddGtmMonitorRequest.h
	include/alibabacloud/alidns/model/AddGtmMonitorResult.h
	include/alibabacloud/alidns/model/AddGtmRecoveryPlanRequest.h
	include/alibabacloud/alidns/model/AddGtmRecoveryPlanResult.h
	include/alibabacloud/alidns/model/ChangeDomainGroupRequest.h
	include/alibabacloud/alidns/model/ChangeDomainGroupResult.h
	include/alibabacloud/alidns/model/ChangeDomainOfDnsProductRequest.h
	include/alibabacloud/alidns/model/ChangeDomainOfDnsProductResult.h
	include/alibabacloud/alidns/model/DeleteDomainRequest.h
	include/alibabacloud/alidns/model/DeleteDomainResult.h
	include/alibabacloud/alidns/model/DeleteDomainGroupRequest.h
	include/alibabacloud/alidns/model/DeleteDomainGroupResult.h
	include/alibabacloud/alidns/model/DeleteDomainRecordRequest.h
	include/alibabacloud/alidns/model/DeleteDomainRecordResult.h
	include/alibabacloud/alidns/model/DeleteGtmAccessStrategyRequest.h
	include/alibabacloud/alidns/model/DeleteGtmAccessStrategyResult.h
	include/alibabacloud/alidns/model/DeleteGtmAddressPoolRequest.h
	include/alibabacloud/alidns/model/DeleteGtmAddressPoolResult.h
	include/alibabacloud/alidns/model/DeleteGtmRecoveryPlanRequest.h
	include/alibabacloud/alidns/model/DeleteGtmRecoveryPlanResult.h
	include/alibabacloud/alidns/model/DeleteSubDomainRecordsRequest.h
	include/alibabacloud/alidns/model/DeleteSubDomainRecordsResult.h
	include/alibabacloud/alidns/model/DescribeBatchResultCountRequest.h
	include/alibabacloud/alidns/model/DescribeBatchResultCountResult.h
	include/alibabacloud/alidns/model/DescribeBatchResultDetailRequest.h
	include/alibabacloud/alidns/model/DescribeBatchResultDetailResult.h
	include/alibabacloud/alidns/model/DescribeDNSSLBSubDomainsRequest.h
	include/alibabacloud/alidns/model/DescribeDNSSLBSubDomainsResult.h
	include/alibabacloud/alidns/model/DescribeDnsProductInstanceRequest.h
	include/alibabacloud/alidns/model/DescribeDnsProductInstanceResult.h
	include/alibabacloud/alidns/model/DescribeDnsProductInstancesRequest.h
	include/alibabacloud/alidns/model/DescribeDnsProductInstancesResult.h
	include/alibabacloud/alidns/model/DescribeDomainGroupsRequest.h
	include/alibabacloud/alidns/model/DescribeDomainGroupsResult.h
	include/alibabacloud/alidns/model/DescribeDomainInfoRequest.h
	include/alibabacloud/alidns/model/DescribeDomainInfoResult.h
	include/alibabacloud/alidns/model/DescribeDomainLogsRequest.h
	include/alibabacloud/alidns/model/DescribeDomainLogsResult.h
	include/alibabacloud/alidns/model/DescribeDomainNsRequest.h
	include/alibabacloud/alidns/model/DescribeDomainNsResult.h
	include/alibabacloud/alidns/model/DescribeDomainRecordInfoRequest.h
	include/alibabacloud/alidns/model/DescribeDomainRecordInfoResult.h
	include/alibabacloud/alidns/model/DescribeDomainRecordsRequest.h
	include/alibabacloud/alidns/model/DescribeDomainRecordsResult.h
	include/alibabacloud/alidns/model/DescribeDomainStatisticsRequest.h
	include/alibabacloud/alidns/model/DescribeDomainStatisticsResult.h
	include/alibabacloud/alidns/model/DescribeDomainStatisticsSummaryRequest.h
	include/alibabacloud/alidns/model/DescribeDomainStatisticsSummaryResult.h
	include/alibabacloud/alidns/model/DescribeDomainsRequest.h
	include/alibabacloud/alidns/model/DescribeDomainsResult.h
	include/alibabacloud/alidns/model/DescribeGtmAccessStrategiesRequest.h
	include/alibabacloud/alidns/model/DescribeGtmAccessStrategiesResult.h
	include/alibabacloud/alidns/model/DescribeGtmAccessStrategyRequest.h
	include/alibabacloud/alidns/model/DescribeGtmAccessStrategyResult.h
	include/alibabacloud/alidns/model/DescribeGtmAccessStrategyAvailableConfigRequest.h
	include/alibabacloud/alidns/model/DescribeGtmAccessStrategyAvailableConfigResult.h
	include/alibabacloud/alidns/model/DescribeGtmAvailableAlertGroupRequest.h
	include/alibabacloud/alidns/model/DescribeGtmAvailableAlertGroupResult.h
	include/alibabacloud/alidns/model/DescribeGtmInstanceRequest.h
	include/alibabacloud/alidns/model/DescribeGtmInstanceResult.h
	include/alibabacloud/alidns/model/DescribeGtmInstanceAddressPoolRequest.h
	include/alibabacloud/alidns/model/DescribeGtmInstanceAddressPoolResult.h
	include/alibabacloud/alidns/model/DescribeGtmInstanceAddressPoolsRequest.h
	include/alibabacloud/alidns/model/DescribeGtmInstanceAddressPoolsResult.h
	include/alibabacloud/alidns/model/DescribeGtmInstanceStatusRequest.h
	include/alibabacloud/alidns/model/DescribeGtmInstanceStatusResult.h
	include/alibabacloud/alidns/model/DescribeGtmInstanceSystemCnameRequest.h
	include/alibabacloud/alidns/model/DescribeGtmInstanceSystemCnameResult.h
	include/alibabacloud/alidns/model/DescribeGtmInstancesRequest.h
	include/alibabacloud/alidns/model/DescribeGtmInstancesResult.h
	include/alibabacloud/alidns/model/DescribeGtmLogsRequest.h
	include/alibabacloud/alidns/model/DescribeGtmLogsResult.h
	include/alibabacloud/alidns/model/DescribeGtmMonitorAvailableConfigRequest.h
	include/alibabacloud/alidns/model/DescribeGtmMonitorAvailableConfigResult.h
	include/alibabacloud/alidns/model/DescribeGtmMonitorConfigRequest.h
	include/alibabacloud/alidns/model/DescribeGtmMonitorConfigResult.h
	include/alibabacloud/alidns/model/DescribeGtmRecoveryPlanRequest.h
	include/alibabacloud/alidns/model/DescribeGtmRecoveryPlanResult.h
	include/alibabacloud/alidns/model/DescribeGtmRecoveryPlanAvailableConfigRequest.h
	include/alibabacloud/alidns/model/DescribeGtmRecoveryPlanAvailableConfigResult.h
	include/alibabacloud/alidns/model/DescribeGtmRecoveryPlansRequest.h
	include/alibabacloud/alidns/model/DescribeGtmRecoveryPlansResult.h
	include/alibabacloud/alidns/model/DescribeRecordLogsRequest.h
	include/alibabacloud/alidns/model/DescribeRecordLogsResult.h
	include/alibabacloud/alidns/model/DescribeRecordStatisticsRequest.h
	include/alibabacloud/alidns/model/DescribeRecordStatisticsResult.h
	include/alibabacloud/alidns/model/DescribeRecordStatisticsSummaryRequest.h
	include/alibabacloud/alidns/model/DescribeRecordStatisticsSummaryResult.h
	include/alibabacloud/alidns/model/DescribeSubDomainRecordsRequest.h
	include/alibabacloud/alidns/model/DescribeSubDomainRecordsResult.h
	include/alibabacloud/alidns/model/DescribeSupportLinesRequest.h
	include/alibabacloud/alidns/model/DescribeSupportLinesResult.h
	include/alibabacloud/alidns/model/ExecuteGtmRecoveryPlanRequest.h
	include/alibabacloud/alidns/model/ExecuteGtmRecoveryPlanResult.h
	include/alibabacloud/alidns/model/GetMainDomainNameRequest.h
	include/alibabacloud/alidns/model/GetMainDomainNameResult.h
	include/alibabacloud/alidns/model/ModifyHichinaDomainDNSRequest.h
	include/alibabacloud/alidns/model/ModifyHichinaDomainDNSResult.h
	include/alibabacloud/alidns/model/OperateBatchDomainRequest.h
	include/alibabacloud/alidns/model/OperateBatchDomainResult.h
	include/alibabacloud/alidns/model/PreviewGtmRecoveryPlanRequest.h
	include/alibabacloud/alidns/model/PreviewGtmRecoveryPlanResult.h
	include/alibabacloud/alidns/model/RollbackGtmRecoveryPlanRequest.h
	include/alibabacloud/alidns/model/RollbackGtmRecoveryPlanResult.h
	include/alibabacloud/alidns/model/SetDNSSLBStatusRequest.h
	include/alibabacloud/alidns/model/SetDNSSLBStatusResult.h
	include/alibabacloud/alidns/model/SetDomainRecordStatusRequest.h
	include/alibabacloud/alidns/model/SetDomainRecordStatusResult.h
	include/alibabacloud/alidns/model/SetGtmAccessModeRequest.h
	include/alibabacloud/alidns/model/SetGtmAccessModeResult.h
	include/alibabacloud/alidns/model/SetGtmMonitorStatusRequest.h
	include/alibabacloud/alidns/model/SetGtmMonitorStatusResult.h
	include/alibabacloud/alidns/model/UpdateDNSSLBWeightRequest.h
	include/alibabacloud/alidns/model/UpdateDNSSLBWeightResult.h
	include/alibabacloud/alidns/model/UpdateDomainGroupRequest.h
	include/alibabacloud/alidns/model/UpdateDomainGroupResult.h
	include/alibabacloud/alidns/model/UpdateDomainRecordRequest.h
	include/alibabacloud/alidns/model/UpdateDomainRecordResult.h
	include/alibabacloud/alidns/model/UpdateDomainRecordRemarkRequest.h
	include/alibabacloud/alidns/model/UpdateDomainRecordRemarkResult.h
	include/alibabacloud/alidns/model/UpdateDomainRemarkRequest.h
	include/alibabacloud/alidns/model/UpdateDomainRemarkResult.h
	include/alibabacloud/alidns/model/UpdateGtmAccessStrategyRequest.h
	include/alibabacloud/alidns/model/UpdateGtmAccessStrategyResult.h
	include/alibabacloud/alidns/model/UpdateGtmAddressPoolRequest.h
	include/alibabacloud/alidns/model/UpdateGtmAddressPoolResult.h
	include/alibabacloud/alidns/model/UpdateGtmInstanceGlobalConfigRequest.h
	include/alibabacloud/alidns/model/UpdateGtmInstanceGlobalConfigResult.h
	include/alibabacloud/alidns/model/UpdateGtmMonitorRequest.h
	include/alibabacloud/alidns/model/UpdateGtmMonitorResult.h
	include/alibabacloud/alidns/model/UpdateGtmRecoveryPlanRequest.h
	include/alibabacloud/alidns/model/UpdateGtmRecoveryPlanResult.h )

set(alidns_src 
	src/AlidnsClient.cc
	src/model/AddDomainRequest.cc
	src/model/AddDomainResult.cc
	src/model/AddDomainBackupRequest.cc
	src/model/AddDomainBackupResult.cc
	src/model/AddDomainGroupRequest.cc
	src/model/AddDomainGroupResult.cc
	src/model/AddDomainRecordRequest.cc
	src/model/AddDomainRecordResult.cc
	src/model/AddGtmAccessStrategyRequest.cc
	src/model/AddGtmAccessStrategyResult.cc
	src/model/AddGtmAddressPoolRequest.cc
	src/model/AddGtmAddressPoolResult.cc
	src/model/AddGtmMonitorRequest.cc
	src/model/AddGtmMonitorResult.cc
	src/model/AddGtmRecoveryPlanRequest.cc
	src/model/AddGtmRecoveryPlanResult.cc
	src/model/ChangeDomainGroupRequest.cc
	src/model/ChangeDomainGroupResult.cc
	src/model/ChangeDomainOfDnsProductRequest.cc
	src/model/ChangeDomainOfDnsProductResult.cc
	src/model/DeleteDomainRequest.cc
	src/model/DeleteDomainResult.cc
	src/model/DeleteDomainGroupRequest.cc
	src/model/DeleteDomainGroupResult.cc
	src/model/DeleteDomainRecordRequest.cc
	src/model/DeleteDomainRecordResult.cc
	src/model/DeleteGtmAccessStrategyRequest.cc
	src/model/DeleteGtmAccessStrategyResult.cc
	src/model/DeleteGtmAddressPoolRequest.cc
	src/model/DeleteGtmAddressPoolResult.cc
	src/model/DeleteGtmRecoveryPlanRequest.cc
	src/model/DeleteGtmRecoveryPlanResult.cc
	src/model/DeleteSubDomainRecordsRequest.cc
	src/model/DeleteSubDomainRecordsResult.cc
	src/model/DescribeBatchResultCountRequest.cc
	src/model/DescribeBatchResultCountResult.cc
	src/model/DescribeBatchResultDetailRequest.cc
	src/model/DescribeBatchResultDetailResult.cc
	src/model/DescribeDNSSLBSubDomainsRequest.cc
	src/model/DescribeDNSSLBSubDomainsResult.cc
	src/model/DescribeDnsProductInstanceRequest.cc
	src/model/DescribeDnsProductInstanceResult.cc
	src/model/DescribeDnsProductInstancesRequest.cc
	src/model/DescribeDnsProductInstancesResult.cc
	src/model/DescribeDomainGroupsRequest.cc
	src/model/DescribeDomainGroupsResult.cc
	src/model/DescribeDomainInfoRequest.cc
	src/model/DescribeDomainInfoResult.cc
	src/model/DescribeDomainLogsRequest.cc
	src/model/DescribeDomainLogsResult.cc
	src/model/DescribeDomainNsRequest.cc
	src/model/DescribeDomainNsResult.cc
	src/model/DescribeDomainRecordInfoRequest.cc
	src/model/DescribeDomainRecordInfoResult.cc
	src/model/DescribeDomainRecordsRequest.cc
	src/model/DescribeDomainRecordsResult.cc
	src/model/DescribeDomainStatisticsRequest.cc
	src/model/DescribeDomainStatisticsResult.cc
	src/model/DescribeDomainStatisticsSummaryRequest.cc
	src/model/DescribeDomainStatisticsSummaryResult.cc
	src/model/DescribeDomainsRequest.cc
	src/model/DescribeDomainsResult.cc
	src/model/DescribeGtmAccessStrategiesRequest.cc
	src/model/DescribeGtmAccessStrategiesResult.cc
	src/model/DescribeGtmAccessStrategyRequest.cc
	src/model/DescribeGtmAccessStrategyResult.cc
	src/model/DescribeGtmAccessStrategyAvailableConfigRequest.cc
	src/model/DescribeGtmAccessStrategyAvailableConfigResult.cc
	src/model/DescribeGtmAvailableAlertGroupRequest.cc
	src/model/DescribeGtmAvailableAlertGroupResult.cc
	src/model/DescribeGtmInstanceRequest.cc
	src/model/DescribeGtmInstanceResult.cc
	src/model/DescribeGtmInstanceAddressPoolRequest.cc
	src/model/DescribeGtmInstanceAddressPoolResult.cc
	src/model/DescribeGtmInstanceAddressPoolsRequest.cc
	src/model/DescribeGtmInstanceAddressPoolsResult.cc
	src/model/DescribeGtmInstanceStatusRequest.cc
	src/model/DescribeGtmInstanceStatusResult.cc
	src/model/DescribeGtmInstanceSystemCnameRequest.cc
	src/model/DescribeGtmInstanceSystemCnameResult.cc
	src/model/DescribeGtmInstancesRequest.cc
	src/model/DescribeGtmInstancesResult.cc
	src/model/DescribeGtmLogsRequest.cc
	src/model/DescribeGtmLogsResult.cc
	src/model/DescribeGtmMonitorAvailableConfigRequest.cc
	src/model/DescribeGtmMonitorAvailableConfigResult.cc
	src/model/DescribeGtmMonitorConfigRequest.cc
	src/model/DescribeGtmMonitorConfigResult.cc
	src/model/DescribeGtmRecoveryPlanRequest.cc
	src/model/DescribeGtmRecoveryPlanResult.cc
	src/model/DescribeGtmRecoveryPlanAvailableConfigRequest.cc
	src/model/DescribeGtmRecoveryPlanAvailableConfigResult.cc
	src/model/DescribeGtmRecoveryPlansRequest.cc
	src/model/DescribeGtmRecoveryPlansResult.cc
	src/model/DescribeRecordLogsRequest.cc
	src/model/DescribeRecordLogsResult.cc
	src/model/DescribeRecordStatisticsRequest.cc
	src/model/DescribeRecordStatisticsResult.cc
	src/model/DescribeRecordStatisticsSummaryRequest.cc
	src/model/DescribeRecordStatisticsSummaryResult.cc
	src/model/DescribeSubDomainRecordsRequest.cc
	src/model/DescribeSubDomainRecordsResult.cc
	src/model/DescribeSupportLinesRequest.cc
	src/model/DescribeSupportLinesResult.cc
	src/model/ExecuteGtmRecoveryPlanRequest.cc
	src/model/ExecuteGtmRecoveryPlanResult.cc
	src/model/GetMainDomainNameRequest.cc
	src/model/GetMainDomainNameResult.cc
	src/model/ModifyHichinaDomainDNSRequest.cc
	src/model/ModifyHichinaDomainDNSResult.cc
	src/model/OperateBatchDomainRequest.cc
	src/model/OperateBatchDomainResult.cc
	src/model/PreviewGtmRecoveryPlanRequest.cc
	src/model/PreviewGtmRecoveryPlanResult.cc
	src/model/RollbackGtmRecoveryPlanRequest.cc
	src/model/RollbackGtmRecoveryPlanResult.cc
	src/model/SetDNSSLBStatusRequest.cc
	src/model/SetDNSSLBStatusResult.cc
	src/model/SetDomainRecordStatusRequest.cc
	src/model/SetDomainRecordStatusResult.cc
	src/model/SetGtmAccessModeRequest.cc
	src/model/SetGtmAccessModeResult.cc
	src/model/SetGtmMonitorStatusRequest.cc
	src/model/SetGtmMonitorStatusResult.cc
	src/model/UpdateDNSSLBWeightRequest.cc
	src/model/UpdateDNSSLBWeightResult.cc
	src/model/UpdateDomainGroupRequest.cc
	src/model/UpdateDomainGroupResult.cc
	src/model/UpdateDomainRecordRequest.cc
	src/model/UpdateDomainRecordResult.cc
	src/model/UpdateDomainRecordRemarkRequest.cc
	src/model/UpdateDomainRecordRemarkResult.cc
	src/model/UpdateDomainRemarkRequest.cc
	src/model/UpdateDomainRemarkResult.cc
	src/model/UpdateGtmAccessStrategyRequest.cc
	src/model/UpdateGtmAccessStrategyResult.cc
	src/model/UpdateGtmAddressPoolRequest.cc
	src/model/UpdateGtmAddressPoolResult.cc
	src/model/UpdateGtmInstanceGlobalConfigRequest.cc
	src/model/UpdateGtmInstanceGlobalConfigResult.cc
	src/model/UpdateGtmMonitorRequest.cc
	src/model/UpdateGtmMonitorResult.cc
	src/model/UpdateGtmRecoveryPlanRequest.cc
	src/model/UpdateGtmRecoveryPlanResult.cc )

add_library(alidns ${LIB_TYPE}
	${alidns_public_header}
	${alidns_public_header_model}
	${alidns_src})

set_target_properties(alidns
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}alidns
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(alidns
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ALIDNS_LIBRARY)
endif()

target_include_directories(alidns
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(alidns
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(alidns
		jsoncpp)
	target_include_directories(alidns
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(alidns
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(alidns
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(alidns
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(alidns
		jsoncpp)
endif()

install(FILES ${alidns_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/alidns)
install(FILES ${alidns_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/alidns/model)
install(TARGETS alidns
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)