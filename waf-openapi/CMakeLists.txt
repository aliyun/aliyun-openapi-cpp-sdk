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

set(waf-openapi_public_header 
	include/alibabacloud/waf-openapi/Waf_openapiClient.h
	include/alibabacloud/waf-openapi/Waf_openapiExport.h )

set(waf-openapi_public_header_model 
	include/alibabacloud/waf-openapi/model/CreateCertificateRequest.h
	include/alibabacloud/waf-openapi/model/CreateCertificateResult.h
	include/alibabacloud/waf-openapi/model/CreateCertificateByCertificateIdRequest.h
	include/alibabacloud/waf-openapi/model/CreateCertificateByCertificateIdResult.h
	include/alibabacloud/waf-openapi/model/CreateDomainRequest.h
	include/alibabacloud/waf-openapi/model/CreateDomainResult.h
	include/alibabacloud/waf-openapi/model/CreateProtectionModuleRuleRequest.h
	include/alibabacloud/waf-openapi/model/CreateProtectionModuleRuleResult.h
	include/alibabacloud/waf-openapi/model/DeleteDomainRequest.h
	include/alibabacloud/waf-openapi/model/DeleteDomainResult.h
	include/alibabacloud/waf-openapi/model/DeleteInstanceRequest.h
	include/alibabacloud/waf-openapi/model/DeleteInstanceResult.h
	include/alibabacloud/waf-openapi/model/DeleteProtectionModuleRuleRequest.h
	include/alibabacloud/waf-openapi/model/DeleteProtectionModuleRuleResult.h
	include/alibabacloud/waf-openapi/model/DescribeCertMatchStatusRequest.h
	include/alibabacloud/waf-openapi/model/DescribeCertMatchStatusResult.h
	include/alibabacloud/waf-openapi/model/DescribeCertificatesRequest.h
	include/alibabacloud/waf-openapi/model/DescribeCertificatesResult.h
	include/alibabacloud/waf-openapi/model/DescribeDomainRequest.h
	include/alibabacloud/waf-openapi/model/DescribeDomainResult.h
	include/alibabacloud/waf-openapi/model/DescribeDomainAdvanceConfigsRequest.h
	include/alibabacloud/waf-openapi/model/DescribeDomainAdvanceConfigsResult.h
	include/alibabacloud/waf-openapi/model/DescribeDomainBasicConfigsRequest.h
	include/alibabacloud/waf-openapi/model/DescribeDomainBasicConfigsResult.h
	include/alibabacloud/waf-openapi/model/DescribeDomainListRequest.h
	include/alibabacloud/waf-openapi/model/DescribeDomainListResult.h
	include/alibabacloud/waf-openapi/model/DescribeDomainNamesRequest.h
	include/alibabacloud/waf-openapi/model/DescribeDomainNamesResult.h
	include/alibabacloud/waf-openapi/model/DescribeDomainRuleGroupRequest.h
	include/alibabacloud/waf-openapi/model/DescribeDomainRuleGroupResult.h
	include/alibabacloud/waf-openapi/model/DescribeInstanceInfoRequest.h
	include/alibabacloud/waf-openapi/model/DescribeInstanceInfoResult.h
	include/alibabacloud/waf-openapi/model/DescribeInstanceSpecInfoRequest.h
	include/alibabacloud/waf-openapi/model/DescribeInstanceSpecInfoResult.h
	include/alibabacloud/waf-openapi/model/DescribeLogServiceStatusRequest.h
	include/alibabacloud/waf-openapi/model/DescribeLogServiceStatusResult.h
	include/alibabacloud/waf-openapi/model/DescribeProtectionModuleCodeConfigRequest.h
	include/alibabacloud/waf-openapi/model/DescribeProtectionModuleCodeConfigResult.h
	include/alibabacloud/waf-openapi/model/DescribeProtectionModuleModeRequest.h
	include/alibabacloud/waf-openapi/model/DescribeProtectionModuleModeResult.h
	include/alibabacloud/waf-openapi/model/DescribeProtectionModuleRulesRequest.h
	include/alibabacloud/waf-openapi/model/DescribeProtectionModuleRulesResult.h
	include/alibabacloud/waf-openapi/model/DescribeProtectionModuleStatusRequest.h
	include/alibabacloud/waf-openapi/model/DescribeProtectionModuleStatusResult.h
	include/alibabacloud/waf-openapi/model/DescribeRuleGroupsRequest.h
	include/alibabacloud/waf-openapi/model/DescribeRuleGroupsResult.h
	include/alibabacloud/waf-openapi/model/DescribeRulesRequest.h
	include/alibabacloud/waf-openapi/model/DescribeRulesResult.h
	include/alibabacloud/waf-openapi/model/DescribeWafSourceIpSegmentRequest.h
	include/alibabacloud/waf-openapi/model/DescribeWafSourceIpSegmentResult.h
	include/alibabacloud/waf-openapi/model/ModifyDomainRequest.h
	include/alibabacloud/waf-openapi/model/ModifyDomainResult.h
	include/alibabacloud/waf-openapi/model/ModifyDomainIpv6StatusRequest.h
	include/alibabacloud/waf-openapi/model/ModifyDomainIpv6StatusResult.h
	include/alibabacloud/waf-openapi/model/ModifyLogRetrievalStatusRequest.h
	include/alibabacloud/waf-openapi/model/ModifyLogRetrievalStatusResult.h
	include/alibabacloud/waf-openapi/model/ModifyLogServiceStatusRequest.h
	include/alibabacloud/waf-openapi/model/ModifyLogServiceStatusResult.h
	include/alibabacloud/waf-openapi/model/ModifyProtectionModuleModeRequest.h
	include/alibabacloud/waf-openapi/model/ModifyProtectionModuleModeResult.h
	include/alibabacloud/waf-openapi/model/ModifyProtectionModuleRuleRequest.h
	include/alibabacloud/waf-openapi/model/ModifyProtectionModuleRuleResult.h
	include/alibabacloud/waf-openapi/model/ModifyProtectionModuleStatusRequest.h
	include/alibabacloud/waf-openapi/model/ModifyProtectionModuleStatusResult.h
	include/alibabacloud/waf-openapi/model/ModifyProtectionRuleCacheStatusRequest.h
	include/alibabacloud/waf-openapi/model/ModifyProtectionRuleCacheStatusResult.h
	include/alibabacloud/waf-openapi/model/ModifyProtectionRuleStatusRequest.h
	include/alibabacloud/waf-openapi/model/ModifyProtectionRuleStatusResult.h
	include/alibabacloud/waf-openapi/model/MoveResourceGroupRequest.h
	include/alibabacloud/waf-openapi/model/MoveResourceGroupResult.h
	include/alibabacloud/waf-openapi/model/SetDomainRuleGroupRequest.h
	include/alibabacloud/waf-openapi/model/SetDomainRuleGroupResult.h )

set(waf-openapi_src 
	src/Waf-openapiClient.cc
	src/model/CreateCertificateRequest.cc
	src/model/CreateCertificateResult.cc
	src/model/CreateCertificateByCertificateIdRequest.cc
	src/model/CreateCertificateByCertificateIdResult.cc
	src/model/CreateDomainRequest.cc
	src/model/CreateDomainResult.cc
	src/model/CreateProtectionModuleRuleRequest.cc
	src/model/CreateProtectionModuleRuleResult.cc
	src/model/DeleteDomainRequest.cc
	src/model/DeleteDomainResult.cc
	src/model/DeleteInstanceRequest.cc
	src/model/DeleteInstanceResult.cc
	src/model/DeleteProtectionModuleRuleRequest.cc
	src/model/DeleteProtectionModuleRuleResult.cc
	src/model/DescribeCertMatchStatusRequest.cc
	src/model/DescribeCertMatchStatusResult.cc
	src/model/DescribeCertificatesRequest.cc
	src/model/DescribeCertificatesResult.cc
	src/model/DescribeDomainRequest.cc
	src/model/DescribeDomainResult.cc
	src/model/DescribeDomainAdvanceConfigsRequest.cc
	src/model/DescribeDomainAdvanceConfigsResult.cc
	src/model/DescribeDomainBasicConfigsRequest.cc
	src/model/DescribeDomainBasicConfigsResult.cc
	src/model/DescribeDomainListRequest.cc
	src/model/DescribeDomainListResult.cc
	src/model/DescribeDomainNamesRequest.cc
	src/model/DescribeDomainNamesResult.cc
	src/model/DescribeDomainRuleGroupRequest.cc
	src/model/DescribeDomainRuleGroupResult.cc
	src/model/DescribeInstanceInfoRequest.cc
	src/model/DescribeInstanceInfoResult.cc
	src/model/DescribeInstanceSpecInfoRequest.cc
	src/model/DescribeInstanceSpecInfoResult.cc
	src/model/DescribeLogServiceStatusRequest.cc
	src/model/DescribeLogServiceStatusResult.cc
	src/model/DescribeProtectionModuleCodeConfigRequest.cc
	src/model/DescribeProtectionModuleCodeConfigResult.cc
	src/model/DescribeProtectionModuleModeRequest.cc
	src/model/DescribeProtectionModuleModeResult.cc
	src/model/DescribeProtectionModuleRulesRequest.cc
	src/model/DescribeProtectionModuleRulesResult.cc
	src/model/DescribeProtectionModuleStatusRequest.cc
	src/model/DescribeProtectionModuleStatusResult.cc
	src/model/DescribeRuleGroupsRequest.cc
	src/model/DescribeRuleGroupsResult.cc
	src/model/DescribeRulesRequest.cc
	src/model/DescribeRulesResult.cc
	src/model/DescribeWafSourceIpSegmentRequest.cc
	src/model/DescribeWafSourceIpSegmentResult.cc
	src/model/ModifyDomainRequest.cc
	src/model/ModifyDomainResult.cc
	src/model/ModifyDomainIpv6StatusRequest.cc
	src/model/ModifyDomainIpv6StatusResult.cc
	src/model/ModifyLogRetrievalStatusRequest.cc
	src/model/ModifyLogRetrievalStatusResult.cc
	src/model/ModifyLogServiceStatusRequest.cc
	src/model/ModifyLogServiceStatusResult.cc
	src/model/ModifyProtectionModuleModeRequest.cc
	src/model/ModifyProtectionModuleModeResult.cc
	src/model/ModifyProtectionModuleRuleRequest.cc
	src/model/ModifyProtectionModuleRuleResult.cc
	src/model/ModifyProtectionModuleStatusRequest.cc
	src/model/ModifyProtectionModuleStatusResult.cc
	src/model/ModifyProtectionRuleCacheStatusRequest.cc
	src/model/ModifyProtectionRuleCacheStatusResult.cc
	src/model/ModifyProtectionRuleStatusRequest.cc
	src/model/ModifyProtectionRuleStatusResult.cc
	src/model/MoveResourceGroupRequest.cc
	src/model/MoveResourceGroupResult.cc
	src/model/SetDomainRuleGroupRequest.cc
	src/model/SetDomainRuleGroupResult.cc )

add_library(waf-openapi ${LIB_TYPE}
	${waf-openapi_public_header}
	${waf-openapi_public_header_model}
	${waf-openapi_src})

set_target_properties(waf-openapi
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}waf-openapi
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(waf-openapi
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_WAF_OPENAPI_LIBRARY)
endif()

target_include_directories(waf-openapi
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(waf-openapi
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(waf-openapi
		jsoncpp)
	target_include_directories(waf-openapi
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(waf-openapi
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(waf-openapi
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(waf-openapi
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(waf-openapi
		jsoncpp)
endif()

install(FILES ${waf-openapi_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/waf-openapi)
install(FILES ${waf-openapi_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/waf-openapi/model)
install(TARGETS waf-openapi
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)