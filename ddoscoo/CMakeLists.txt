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

set(ddoscoo_public_header 
	include/alibabacloud/ddoscoo/DdoscooClient.h
	include/alibabacloud/ddoscoo/DdoscooExport.h )

set(ddoscoo_public_header_model 
	include/alibabacloud/ddoscoo/model/AddLayer7CCRuleRequest.h
	include/alibabacloud/ddoscoo/model/AddLayer7CCRuleResult.h
	include/alibabacloud/ddoscoo/model/CloseDomainSlsConfigRequest.h
	include/alibabacloud/ddoscoo/model/CloseDomainSlsConfigResult.h
	include/alibabacloud/ddoscoo/model/ConfigHealthCheckRequest.h
	include/alibabacloud/ddoscoo/model/ConfigHealthCheckResult.h
	include/alibabacloud/ddoscoo/model/ConfigLayer4RuleRequest.h
	include/alibabacloud/ddoscoo/model/ConfigLayer4RuleResult.h
	include/alibabacloud/ddoscoo/model/ConfigLayer4RuleAttributeRequest.h
	include/alibabacloud/ddoscoo/model/ConfigLayer4RuleAttributeResult.h
	include/alibabacloud/ddoscoo/model/ConfigLayer7BlackWhiteListRequest.h
	include/alibabacloud/ddoscoo/model/ConfigLayer7BlackWhiteListResult.h
	include/alibabacloud/ddoscoo/model/ConfigLayer7CCRuleRequest.h
	include/alibabacloud/ddoscoo/model/ConfigLayer7CCRuleResult.h
	include/alibabacloud/ddoscoo/model/ConfigLayer7CCTemplateRequest.h
	include/alibabacloud/ddoscoo/model/ConfigLayer7CCTemplateResult.h
	include/alibabacloud/ddoscoo/model/ConfigLayer7CertRequest.h
	include/alibabacloud/ddoscoo/model/ConfigLayer7CertResult.h
	include/alibabacloud/ddoscoo/model/ConfigLayer7RuleRequest.h
	include/alibabacloud/ddoscoo/model/ConfigLayer7RuleResult.h
	include/alibabacloud/ddoscoo/model/CreateAsyncTaskRequest.h
	include/alibabacloud/ddoscoo/model/CreateAsyncTaskResult.h
	include/alibabacloud/ddoscoo/model/CreateLayer4RuleRequest.h
	include/alibabacloud/ddoscoo/model/CreateLayer4RuleResult.h
	include/alibabacloud/ddoscoo/model/CreateLayer7RuleRequest.h
	include/alibabacloud/ddoscoo/model/CreateLayer7RuleResult.h
	include/alibabacloud/ddoscoo/model/DeleteAsyncTaskRequest.h
	include/alibabacloud/ddoscoo/model/DeleteAsyncTaskResult.h
	include/alibabacloud/ddoscoo/model/DeleteLayer4RuleRequest.h
	include/alibabacloud/ddoscoo/model/DeleteLayer4RuleResult.h
	include/alibabacloud/ddoscoo/model/DeleteLayer7CCRuleRequest.h
	include/alibabacloud/ddoscoo/model/DeleteLayer7CCRuleResult.h
	include/alibabacloud/ddoscoo/model/DeleteLayer7RuleRequest.h
	include/alibabacloud/ddoscoo/model/DeleteLayer7RuleResult.h
	include/alibabacloud/ddoscoo/model/DescribeBackSourceCidrRequest.h
	include/alibabacloud/ddoscoo/model/DescribeBackSourceCidrResult.h
	include/alibabacloud/ddoscoo/model/DescribeBatchSlsDispatchStatusRequest.h
	include/alibabacloud/ddoscoo/model/DescribeBatchSlsDispatchStatusResult.h
	include/alibabacloud/ddoscoo/model/DescribeDDoSEventsRequest.h
	include/alibabacloud/ddoscoo/model/DescribeDDoSEventsResult.h
	include/alibabacloud/ddoscoo/model/DescribeDDoSTrafficRequest.h
	include/alibabacloud/ddoscoo/model/DescribeDDoSTrafficResult.h
	include/alibabacloud/ddoscoo/model/DescribeDefenseCountStatisticsRequest.h
	include/alibabacloud/ddoscoo/model/DescribeDefenseCountStatisticsResult.h
	include/alibabacloud/ddoscoo/model/DescribeDomainAccessModeRequest.h
	include/alibabacloud/ddoscoo/model/DescribeDomainAccessModeResult.h
	include/alibabacloud/ddoscoo/model/DescribeDomainAttackEventsRequest.h
	include/alibabacloud/ddoscoo/model/DescribeDomainAttackEventsResult.h
	include/alibabacloud/ddoscoo/model/DescribeDomainQpsRequest.h
	include/alibabacloud/ddoscoo/model/DescribeDomainQpsResult.h
	include/alibabacloud/ddoscoo/model/DescribeDomainQpsWithCacheRequest.h
	include/alibabacloud/ddoscoo/model/DescribeDomainQpsWithCacheResult.h
	include/alibabacloud/ddoscoo/model/DescribeDomainSlsStatusRequest.h
	include/alibabacloud/ddoscoo/model/DescribeDomainSlsStatusResult.h
	include/alibabacloud/ddoscoo/model/DescribeDomainsRequest.h
	include/alibabacloud/ddoscoo/model/DescribeDomainsResult.h
	include/alibabacloud/ddoscoo/model/DescribeElasticBandwidthSpecRequest.h
	include/alibabacloud/ddoscoo/model/DescribeElasticBandwidthSpecResult.h
	include/alibabacloud/ddoscoo/model/DescribeHealthCheckListRequest.h
	include/alibabacloud/ddoscoo/model/DescribeHealthCheckListResult.h
	include/alibabacloud/ddoscoo/model/DescribeHealthCheckStatusListRequest.h
	include/alibabacloud/ddoscoo/model/DescribeHealthCheckStatusListResult.h
	include/alibabacloud/ddoscoo/model/DescribeInstanceDetailsRequest.h
	include/alibabacloud/ddoscoo/model/DescribeInstanceDetailsResult.h
	include/alibabacloud/ddoscoo/model/DescribeInstanceSpecsRequest.h
	include/alibabacloud/ddoscoo/model/DescribeInstanceSpecsResult.h
	include/alibabacloud/ddoscoo/model/DescribeInstanceStatisticsRequest.h
	include/alibabacloud/ddoscoo/model/DescribeInstanceStatisticsResult.h
	include/alibabacloud/ddoscoo/model/DescribeInstancesRequest.h
	include/alibabacloud/ddoscoo/model/DescribeInstancesResult.h
	include/alibabacloud/ddoscoo/model/DescribeIpTrafficRequest.h
	include/alibabacloud/ddoscoo/model/DescribeIpTrafficResult.h
	include/alibabacloud/ddoscoo/model/DescribeLayer4RuleAttributesRequest.h
	include/alibabacloud/ddoscoo/model/DescribeLayer4RuleAttributesResult.h
	include/alibabacloud/ddoscoo/model/DescribeLayer4RulesRequest.h
	include/alibabacloud/ddoscoo/model/DescribeLayer4RulesResult.h
	include/alibabacloud/ddoscoo/model/DescribeLayer7CCRulesRequest.h
	include/alibabacloud/ddoscoo/model/DescribeLayer7CCRulesResult.h
	include/alibabacloud/ddoscoo/model/DescribeLogStoreExistStatusRequest.h
	include/alibabacloud/ddoscoo/model/DescribeLogStoreExistStatusResult.h
	include/alibabacloud/ddoscoo/model/DescribeOpEntitiesRequest.h
	include/alibabacloud/ddoscoo/model/DescribeOpEntitiesResult.h
	include/alibabacloud/ddoscoo/model/DescribeSimpleDomainsRequest.h
	include/alibabacloud/ddoscoo/model/DescribeSimpleDomainsResult.h
	include/alibabacloud/ddoscoo/model/DescribeSlsAuthStatusRequest.h
	include/alibabacloud/ddoscoo/model/DescribeSlsAuthStatusResult.h
	include/alibabacloud/ddoscoo/model/DescribeSlsEmptyCountRequest.h
	include/alibabacloud/ddoscoo/model/DescribeSlsEmptyCountResult.h
	include/alibabacloud/ddoscoo/model/DescribeSlsLogstoreInfoRequest.h
	include/alibabacloud/ddoscoo/model/DescribeSlsLogstoreInfoResult.h
	include/alibabacloud/ddoscoo/model/DescribeSlsOpenStatusRequest.h
	include/alibabacloud/ddoscoo/model/DescribeSlsOpenStatusResult.h
	include/alibabacloud/ddoscoo/model/DescribleCertListRequest.h
	include/alibabacloud/ddoscoo/model/DescribleCertListResult.h
	include/alibabacloud/ddoscoo/model/DescribleLayer7InstanceRelationsRequest.h
	include/alibabacloud/ddoscoo/model/DescribleLayer7InstanceRelationsResult.h
	include/alibabacloud/ddoscoo/model/DisableLayer7CCRequest.h
	include/alibabacloud/ddoscoo/model/DisableLayer7CCResult.h
	include/alibabacloud/ddoscoo/model/DisableLayer7CCRuleRequest.h
	include/alibabacloud/ddoscoo/model/DisableLayer7CCRuleResult.h
	include/alibabacloud/ddoscoo/model/EmptySlsLogstoreRequest.h
	include/alibabacloud/ddoscoo/model/EmptySlsLogstoreResult.h
	include/alibabacloud/ddoscoo/model/EnableLayer7CCRequest.h
	include/alibabacloud/ddoscoo/model/EnableLayer7CCResult.h
	include/alibabacloud/ddoscoo/model/EnableLayer7CCRuleRequest.h
	include/alibabacloud/ddoscoo/model/EnableLayer7CCRuleResult.h
	include/alibabacloud/ddoscoo/model/ListAsyncTaskRequest.h
	include/alibabacloud/ddoscoo/model/ListAsyncTaskResult.h
	include/alibabacloud/ddoscoo/model/ListLayer7CustomPortsRequest.h
	include/alibabacloud/ddoscoo/model/ListLayer7CustomPortsResult.h
	include/alibabacloud/ddoscoo/model/ListTagKeysRequest.h
	include/alibabacloud/ddoscoo/model/ListTagKeysResult.h
	include/alibabacloud/ddoscoo/model/ListTagResourcesRequest.h
	include/alibabacloud/ddoscoo/model/ListTagResourcesResult.h
	include/alibabacloud/ddoscoo/model/ListValueAddedRequest.h
	include/alibabacloud/ddoscoo/model/ListValueAddedResult.h
	include/alibabacloud/ddoscoo/model/ModifyElasticBandWidthRequest.h
	include/alibabacloud/ddoscoo/model/ModifyElasticBandWidthResult.h
	include/alibabacloud/ddoscoo/model/ModifyFullLogTtlRequest.h
	include/alibabacloud/ddoscoo/model/ModifyFullLogTtlResult.h
	include/alibabacloud/ddoscoo/model/ModifyInstanceRemarkRequest.h
	include/alibabacloud/ddoscoo/model/ModifyInstanceRemarkResult.h
	include/alibabacloud/ddoscoo/model/OpenDomainSlsConfigRequest.h
	include/alibabacloud/ddoscoo/model/OpenDomainSlsConfigResult.h
	include/alibabacloud/ddoscoo/model/ReleaseInstanceRequest.h
	include/alibabacloud/ddoscoo/model/ReleaseInstanceResult.h
	include/alibabacloud/ddoscoo/model/ReleaseValueAddedRequest.h
	include/alibabacloud/ddoscoo/model/ReleaseValueAddedResult.h
	include/alibabacloud/ddoscoo/model/TagResourcesRequest.h
	include/alibabacloud/ddoscoo/model/TagResourcesResult.h
	include/alibabacloud/ddoscoo/model/UntagResourcesRequest.h
	include/alibabacloud/ddoscoo/model/UntagResourcesResult.h )

set(ddoscoo_src 
	src/DdoscooClient.cc
	src/model/AddLayer7CCRuleRequest.cc
	src/model/AddLayer7CCRuleResult.cc
	src/model/CloseDomainSlsConfigRequest.cc
	src/model/CloseDomainSlsConfigResult.cc
	src/model/ConfigHealthCheckRequest.cc
	src/model/ConfigHealthCheckResult.cc
	src/model/ConfigLayer4RuleRequest.cc
	src/model/ConfigLayer4RuleResult.cc
	src/model/ConfigLayer4RuleAttributeRequest.cc
	src/model/ConfigLayer4RuleAttributeResult.cc
	src/model/ConfigLayer7BlackWhiteListRequest.cc
	src/model/ConfigLayer7BlackWhiteListResult.cc
	src/model/ConfigLayer7CCRuleRequest.cc
	src/model/ConfigLayer7CCRuleResult.cc
	src/model/ConfigLayer7CCTemplateRequest.cc
	src/model/ConfigLayer7CCTemplateResult.cc
	src/model/ConfigLayer7CertRequest.cc
	src/model/ConfigLayer7CertResult.cc
	src/model/ConfigLayer7RuleRequest.cc
	src/model/ConfigLayer7RuleResult.cc
	src/model/CreateAsyncTaskRequest.cc
	src/model/CreateAsyncTaskResult.cc
	src/model/CreateLayer4RuleRequest.cc
	src/model/CreateLayer4RuleResult.cc
	src/model/CreateLayer7RuleRequest.cc
	src/model/CreateLayer7RuleResult.cc
	src/model/DeleteAsyncTaskRequest.cc
	src/model/DeleteAsyncTaskResult.cc
	src/model/DeleteLayer4RuleRequest.cc
	src/model/DeleteLayer4RuleResult.cc
	src/model/DeleteLayer7CCRuleRequest.cc
	src/model/DeleteLayer7CCRuleResult.cc
	src/model/DeleteLayer7RuleRequest.cc
	src/model/DeleteLayer7RuleResult.cc
	src/model/DescribeBackSourceCidrRequest.cc
	src/model/DescribeBackSourceCidrResult.cc
	src/model/DescribeBatchSlsDispatchStatusRequest.cc
	src/model/DescribeBatchSlsDispatchStatusResult.cc
	src/model/DescribeDDoSEventsRequest.cc
	src/model/DescribeDDoSEventsResult.cc
	src/model/DescribeDDoSTrafficRequest.cc
	src/model/DescribeDDoSTrafficResult.cc
	src/model/DescribeDefenseCountStatisticsRequest.cc
	src/model/DescribeDefenseCountStatisticsResult.cc
	src/model/DescribeDomainAccessModeRequest.cc
	src/model/DescribeDomainAccessModeResult.cc
	src/model/DescribeDomainAttackEventsRequest.cc
	src/model/DescribeDomainAttackEventsResult.cc
	src/model/DescribeDomainQpsRequest.cc
	src/model/DescribeDomainQpsResult.cc
	src/model/DescribeDomainQpsWithCacheRequest.cc
	src/model/DescribeDomainQpsWithCacheResult.cc
	src/model/DescribeDomainSlsStatusRequest.cc
	src/model/DescribeDomainSlsStatusResult.cc
	src/model/DescribeDomainsRequest.cc
	src/model/DescribeDomainsResult.cc
	src/model/DescribeElasticBandwidthSpecRequest.cc
	src/model/DescribeElasticBandwidthSpecResult.cc
	src/model/DescribeHealthCheckListRequest.cc
	src/model/DescribeHealthCheckListResult.cc
	src/model/DescribeHealthCheckStatusListRequest.cc
	src/model/DescribeHealthCheckStatusListResult.cc
	src/model/DescribeInstanceDetailsRequest.cc
	src/model/DescribeInstanceDetailsResult.cc
	src/model/DescribeInstanceSpecsRequest.cc
	src/model/DescribeInstanceSpecsResult.cc
	src/model/DescribeInstanceStatisticsRequest.cc
	src/model/DescribeInstanceStatisticsResult.cc
	src/model/DescribeInstancesRequest.cc
	src/model/DescribeInstancesResult.cc
	src/model/DescribeIpTrafficRequest.cc
	src/model/DescribeIpTrafficResult.cc
	src/model/DescribeLayer4RuleAttributesRequest.cc
	src/model/DescribeLayer4RuleAttributesResult.cc
	src/model/DescribeLayer4RulesRequest.cc
	src/model/DescribeLayer4RulesResult.cc
	src/model/DescribeLayer7CCRulesRequest.cc
	src/model/DescribeLayer7CCRulesResult.cc
	src/model/DescribeLogStoreExistStatusRequest.cc
	src/model/DescribeLogStoreExistStatusResult.cc
	src/model/DescribeOpEntitiesRequest.cc
	src/model/DescribeOpEntitiesResult.cc
	src/model/DescribeSimpleDomainsRequest.cc
	src/model/DescribeSimpleDomainsResult.cc
	src/model/DescribeSlsAuthStatusRequest.cc
	src/model/DescribeSlsAuthStatusResult.cc
	src/model/DescribeSlsEmptyCountRequest.cc
	src/model/DescribeSlsEmptyCountResult.cc
	src/model/DescribeSlsLogstoreInfoRequest.cc
	src/model/DescribeSlsLogstoreInfoResult.cc
	src/model/DescribeSlsOpenStatusRequest.cc
	src/model/DescribeSlsOpenStatusResult.cc
	src/model/DescribleCertListRequest.cc
	src/model/DescribleCertListResult.cc
	src/model/DescribleLayer7InstanceRelationsRequest.cc
	src/model/DescribleLayer7InstanceRelationsResult.cc
	src/model/DisableLayer7CCRequest.cc
	src/model/DisableLayer7CCResult.cc
	src/model/DisableLayer7CCRuleRequest.cc
	src/model/DisableLayer7CCRuleResult.cc
	src/model/EmptySlsLogstoreRequest.cc
	src/model/EmptySlsLogstoreResult.cc
	src/model/EnableLayer7CCRequest.cc
	src/model/EnableLayer7CCResult.cc
	src/model/EnableLayer7CCRuleRequest.cc
	src/model/EnableLayer7CCRuleResult.cc
	src/model/ListAsyncTaskRequest.cc
	src/model/ListAsyncTaskResult.cc
	src/model/ListLayer7CustomPortsRequest.cc
	src/model/ListLayer7CustomPortsResult.cc
	src/model/ListTagKeysRequest.cc
	src/model/ListTagKeysResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ListValueAddedRequest.cc
	src/model/ListValueAddedResult.cc
	src/model/ModifyElasticBandWidthRequest.cc
	src/model/ModifyElasticBandWidthResult.cc
	src/model/ModifyFullLogTtlRequest.cc
	src/model/ModifyFullLogTtlResult.cc
	src/model/ModifyInstanceRemarkRequest.cc
	src/model/ModifyInstanceRemarkResult.cc
	src/model/OpenDomainSlsConfigRequest.cc
	src/model/OpenDomainSlsConfigResult.cc
	src/model/ReleaseInstanceRequest.cc
	src/model/ReleaseInstanceResult.cc
	src/model/ReleaseValueAddedRequest.cc
	src/model/ReleaseValueAddedResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc )

add_library(ddoscoo ${LIB_TYPE}
	${ddoscoo_public_header}
	${ddoscoo_public_header_model}
	${ddoscoo_src})

set_target_properties(ddoscoo
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ddoscoo
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ddoscoo
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DDOSCOO_LIBRARY)
endif()

target_include_directories(ddoscoo
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ddoscoo
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ddoscoo
		jsoncpp)
	target_include_directories(ddoscoo
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ddoscoo
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ddoscoo
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ddoscoo
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ddoscoo
		jsoncpp)
endif()

install(FILES ${ddoscoo_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ddoscoo)
install(FILES ${ddoscoo_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ddoscoo/model)
install(TARGETS ddoscoo
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)