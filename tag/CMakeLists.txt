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

set(tag_public_header 
	include/alibabacloud/tag/TagClient.h
	include/alibabacloud/tag/TagExport.h )

set(tag_public_header_model 
	include/alibabacloud/tag/model/AttachPolicyRequest.h
	include/alibabacloud/tag/model/AttachPolicyResult.h
	include/alibabacloud/tag/model/CheckCreatedByEnabledRequest.h
	include/alibabacloud/tag/model/CheckCreatedByEnabledResult.h
	include/alibabacloud/tag/model/CloseCreatedByRequest.h
	include/alibabacloud/tag/model/CloseCreatedByResult.h
	include/alibabacloud/tag/model/CreatePolicyRequest.h
	include/alibabacloud/tag/model/CreatePolicyResult.h
	include/alibabacloud/tag/model/CreateTagsRequest.h
	include/alibabacloud/tag/model/CreateTagsResult.h
	include/alibabacloud/tag/model/DeletePolicyRequest.h
	include/alibabacloud/tag/model/DeletePolicyResult.h
	include/alibabacloud/tag/model/DeleteTagRequest.h
	include/alibabacloud/tag/model/DeleteTagResult.h
	include/alibabacloud/tag/model/DescribeRegionsRequest.h
	include/alibabacloud/tag/model/DescribeRegionsResult.h
	include/alibabacloud/tag/model/DetachPolicyRequest.h
	include/alibabacloud/tag/model/DetachPolicyResult.h
	include/alibabacloud/tag/model/DisablePolicyTypeRequest.h
	include/alibabacloud/tag/model/DisablePolicyTypeResult.h
	include/alibabacloud/tag/model/EnablePolicyTypeRequest.h
	include/alibabacloud/tag/model/EnablePolicyTypeResult.h
	include/alibabacloud/tag/model/GenerateConfigRuleReportRequest.h
	include/alibabacloud/tag/model/GenerateConfigRuleReportResult.h
	include/alibabacloud/tag/model/GetConfigRuleReportRequest.h
	include/alibabacloud/tag/model/GetConfigRuleReportResult.h
	include/alibabacloud/tag/model/GetEffectivePolicyRequest.h
	include/alibabacloud/tag/model/GetEffectivePolicyResult.h
	include/alibabacloud/tag/model/GetPolicyRequest.h
	include/alibabacloud/tag/model/GetPolicyResult.h
	include/alibabacloud/tag/model/GetPolicyEnableStatusRequest.h
	include/alibabacloud/tag/model/GetPolicyEnableStatusResult.h
	include/alibabacloud/tag/model/ListConfigRulesForTargetRequest.h
	include/alibabacloud/tag/model/ListConfigRulesForTargetResult.h
	include/alibabacloud/tag/model/ListPoliciesRequest.h
	include/alibabacloud/tag/model/ListPoliciesResult.h
	include/alibabacloud/tag/model/ListPoliciesForTargetRequest.h
	include/alibabacloud/tag/model/ListPoliciesForTargetResult.h
	include/alibabacloud/tag/model/ListResourcesByTagRequest.h
	include/alibabacloud/tag/model/ListResourcesByTagResult.h
	include/alibabacloud/tag/model/ListSupportResourceTypesRequest.h
	include/alibabacloud/tag/model/ListSupportResourceTypesResult.h
	include/alibabacloud/tag/model/ListTagKeysRequest.h
	include/alibabacloud/tag/model/ListTagKeysResult.h
	include/alibabacloud/tag/model/ListTagResourcesRequest.h
	include/alibabacloud/tag/model/ListTagResourcesResult.h
	include/alibabacloud/tag/model/ListTagValuesRequest.h
	include/alibabacloud/tag/model/ListTagValuesResult.h
	include/alibabacloud/tag/model/ListTargetsForPolicyRequest.h
	include/alibabacloud/tag/model/ListTargetsForPolicyResult.h
	include/alibabacloud/tag/model/ModifyPolicyRequest.h
	include/alibabacloud/tag/model/ModifyPolicyResult.h
	include/alibabacloud/tag/model/OpenCreatedByRequest.h
	include/alibabacloud/tag/model/OpenCreatedByResult.h
	include/alibabacloud/tag/model/TagResourcesRequest.h
	include/alibabacloud/tag/model/TagResourcesResult.h
	include/alibabacloud/tag/model/UntagResourcesRequest.h
	include/alibabacloud/tag/model/UntagResourcesResult.h )

set(tag_src 
	src/TagClient.cc
	src/model/AttachPolicyRequest.cc
	src/model/AttachPolicyResult.cc
	src/model/CheckCreatedByEnabledRequest.cc
	src/model/CheckCreatedByEnabledResult.cc
	src/model/CloseCreatedByRequest.cc
	src/model/CloseCreatedByResult.cc
	src/model/CreatePolicyRequest.cc
	src/model/CreatePolicyResult.cc
	src/model/CreateTagsRequest.cc
	src/model/CreateTagsResult.cc
	src/model/DeletePolicyRequest.cc
	src/model/DeletePolicyResult.cc
	src/model/DeleteTagRequest.cc
	src/model/DeleteTagResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DetachPolicyRequest.cc
	src/model/DetachPolicyResult.cc
	src/model/DisablePolicyTypeRequest.cc
	src/model/DisablePolicyTypeResult.cc
	src/model/EnablePolicyTypeRequest.cc
	src/model/EnablePolicyTypeResult.cc
	src/model/GenerateConfigRuleReportRequest.cc
	src/model/GenerateConfigRuleReportResult.cc
	src/model/GetConfigRuleReportRequest.cc
	src/model/GetConfigRuleReportResult.cc
	src/model/GetEffectivePolicyRequest.cc
	src/model/GetEffectivePolicyResult.cc
	src/model/GetPolicyRequest.cc
	src/model/GetPolicyResult.cc
	src/model/GetPolicyEnableStatusRequest.cc
	src/model/GetPolicyEnableStatusResult.cc
	src/model/ListConfigRulesForTargetRequest.cc
	src/model/ListConfigRulesForTargetResult.cc
	src/model/ListPoliciesRequest.cc
	src/model/ListPoliciesResult.cc
	src/model/ListPoliciesForTargetRequest.cc
	src/model/ListPoliciesForTargetResult.cc
	src/model/ListResourcesByTagRequest.cc
	src/model/ListResourcesByTagResult.cc
	src/model/ListSupportResourceTypesRequest.cc
	src/model/ListSupportResourceTypesResult.cc
	src/model/ListTagKeysRequest.cc
	src/model/ListTagKeysResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ListTagValuesRequest.cc
	src/model/ListTagValuesResult.cc
	src/model/ListTargetsForPolicyRequest.cc
	src/model/ListTargetsForPolicyResult.cc
	src/model/ModifyPolicyRequest.cc
	src/model/ModifyPolicyResult.cc
	src/model/OpenCreatedByRequest.cc
	src/model/OpenCreatedByResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc )

add_library(tag ${LIB_TYPE}
	${tag_public_header}
	${tag_public_header_model}
	${tag_src})

set_target_properties(tag
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tag
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(tag
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_TAG_LIBRARY)
endif()

target_include_directories(tag
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(tag
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(tag
		jsoncpp)
	target_include_directories(tag
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(tag
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(tag
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(tag
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(tag
		jsoncpp)
endif()

install(FILES ${tag_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/tag)
install(FILES ${tag_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/tag/model)
install(TARGETS tag
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)