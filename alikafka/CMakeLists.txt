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

set(alikafka_public_header 
	include/alibabacloud/alikafka/AlikafkaClient.h
	include/alibabacloud/alikafka/AlikafkaExport.h )

set(alikafka_public_header_model 
	include/alibabacloud/alikafka/model/ChangeResourceGroupRequest.h
	include/alibabacloud/alikafka/model/ChangeResourceGroupResult.h
	include/alibabacloud/alikafka/model/ConvertPostPayOrderRequest.h
	include/alibabacloud/alikafka/model/ConvertPostPayOrderResult.h
	include/alibabacloud/alikafka/model/CreateAclRequest.h
	include/alibabacloud/alikafka/model/CreateAclResult.h
	include/alibabacloud/alikafka/model/CreateConsumerGroupRequest.h
	include/alibabacloud/alikafka/model/CreateConsumerGroupResult.h
	include/alibabacloud/alikafka/model/CreatePostPayOrderRequest.h
	include/alibabacloud/alikafka/model/CreatePostPayOrderResult.h
	include/alibabacloud/alikafka/model/CreatePrePayOrderRequest.h
	include/alibabacloud/alikafka/model/CreatePrePayOrderResult.h
	include/alibabacloud/alikafka/model/CreateSaslUserRequest.h
	include/alibabacloud/alikafka/model/CreateSaslUserResult.h
	include/alibabacloud/alikafka/model/CreateTopicRequest.h
	include/alibabacloud/alikafka/model/CreateTopicResult.h
	include/alibabacloud/alikafka/model/DeleteAclRequest.h
	include/alibabacloud/alikafka/model/DeleteAclResult.h
	include/alibabacloud/alikafka/model/DeleteConsumerGroupRequest.h
	include/alibabacloud/alikafka/model/DeleteConsumerGroupResult.h
	include/alibabacloud/alikafka/model/DeleteInstanceRequest.h
	include/alibabacloud/alikafka/model/DeleteInstanceResult.h
	include/alibabacloud/alikafka/model/DeleteSaslUserRequest.h
	include/alibabacloud/alikafka/model/DeleteSaslUserResult.h
	include/alibabacloud/alikafka/model/DeleteTopicRequest.h
	include/alibabacloud/alikafka/model/DeleteTopicResult.h
	include/alibabacloud/alikafka/model/DescribeAclsRequest.h
	include/alibabacloud/alikafka/model/DescribeAclsResult.h
	include/alibabacloud/alikafka/model/DescribeSaslUsersRequest.h
	include/alibabacloud/alikafka/model/DescribeSaslUsersResult.h
	include/alibabacloud/alikafka/model/EnableAutoGroupCreationRequest.h
	include/alibabacloud/alikafka/model/EnableAutoGroupCreationResult.h
	include/alibabacloud/alikafka/model/EnableAutoTopicCreationRequest.h
	include/alibabacloud/alikafka/model/EnableAutoTopicCreationResult.h
	include/alibabacloud/alikafka/model/GetAllInstanceIdListRequest.h
	include/alibabacloud/alikafka/model/GetAllInstanceIdListResult.h
	include/alibabacloud/alikafka/model/GetAllowedIpListRequest.h
	include/alibabacloud/alikafka/model/GetAllowedIpListResult.h
	include/alibabacloud/alikafka/model/GetConsumerListRequest.h
	include/alibabacloud/alikafka/model/GetConsumerListResult.h
	include/alibabacloud/alikafka/model/GetConsumerProgressRequest.h
	include/alibabacloud/alikafka/model/GetConsumerProgressResult.h
	include/alibabacloud/alikafka/model/GetInstanceListRequest.h
	include/alibabacloud/alikafka/model/GetInstanceListResult.h
	include/alibabacloud/alikafka/model/GetQuotaTipRequest.h
	include/alibabacloud/alikafka/model/GetQuotaTipResult.h
	include/alibabacloud/alikafka/model/GetTopicListRequest.h
	include/alibabacloud/alikafka/model/GetTopicListResult.h
	include/alibabacloud/alikafka/model/GetTopicStatusRequest.h
	include/alibabacloud/alikafka/model/GetTopicStatusResult.h
	include/alibabacloud/alikafka/model/GetTopicSubscribeStatusRequest.h
	include/alibabacloud/alikafka/model/GetTopicSubscribeStatusResult.h
	include/alibabacloud/alikafka/model/ListTagResourcesRequest.h
	include/alibabacloud/alikafka/model/ListTagResourcesResult.h
	include/alibabacloud/alikafka/model/ModifyInstanceNameRequest.h
	include/alibabacloud/alikafka/model/ModifyInstanceNameResult.h
	include/alibabacloud/alikafka/model/ModifyPartitionNumRequest.h
	include/alibabacloud/alikafka/model/ModifyPartitionNumResult.h
	include/alibabacloud/alikafka/model/ModifyTopicRemarkRequest.h
	include/alibabacloud/alikafka/model/ModifyTopicRemarkResult.h
	include/alibabacloud/alikafka/model/QueryMessageRequest.h
	include/alibabacloud/alikafka/model/QueryMessageResult.h
	include/alibabacloud/alikafka/model/ReleaseInstanceRequest.h
	include/alibabacloud/alikafka/model/ReleaseInstanceResult.h
	include/alibabacloud/alikafka/model/ReopenInstanceRequest.h
	include/alibabacloud/alikafka/model/ReopenInstanceResult.h
	include/alibabacloud/alikafka/model/StartInstanceRequest.h
	include/alibabacloud/alikafka/model/StartInstanceResult.h
	include/alibabacloud/alikafka/model/StopInstanceRequest.h
	include/alibabacloud/alikafka/model/StopInstanceResult.h
	include/alibabacloud/alikafka/model/TagResourcesRequest.h
	include/alibabacloud/alikafka/model/TagResourcesResult.h
	include/alibabacloud/alikafka/model/UntagResourcesRequest.h
	include/alibabacloud/alikafka/model/UntagResourcesResult.h
	include/alibabacloud/alikafka/model/UpdateAllowedIpRequest.h
	include/alibabacloud/alikafka/model/UpdateAllowedIpResult.h
	include/alibabacloud/alikafka/model/UpdateConsumerOffsetRequest.h
	include/alibabacloud/alikafka/model/UpdateConsumerOffsetResult.h
	include/alibabacloud/alikafka/model/UpdateInstanceConfigRequest.h
	include/alibabacloud/alikafka/model/UpdateInstanceConfigResult.h
	include/alibabacloud/alikafka/model/UpdateTopicConfigRequest.h
	include/alibabacloud/alikafka/model/UpdateTopicConfigResult.h
	include/alibabacloud/alikafka/model/UpgradeInstanceVersionRequest.h
	include/alibabacloud/alikafka/model/UpgradeInstanceVersionResult.h
	include/alibabacloud/alikafka/model/UpgradePostPayOrderRequest.h
	include/alibabacloud/alikafka/model/UpgradePostPayOrderResult.h
	include/alibabacloud/alikafka/model/UpgradePrePayOrderRequest.h
	include/alibabacloud/alikafka/model/UpgradePrePayOrderResult.h )

set(alikafka_src 
	src/AlikafkaClient.cc
	src/model/ChangeResourceGroupRequest.cc
	src/model/ChangeResourceGroupResult.cc
	src/model/ConvertPostPayOrderRequest.cc
	src/model/ConvertPostPayOrderResult.cc
	src/model/CreateAclRequest.cc
	src/model/CreateAclResult.cc
	src/model/CreateConsumerGroupRequest.cc
	src/model/CreateConsumerGroupResult.cc
	src/model/CreatePostPayOrderRequest.cc
	src/model/CreatePostPayOrderResult.cc
	src/model/CreatePrePayOrderRequest.cc
	src/model/CreatePrePayOrderResult.cc
	src/model/CreateSaslUserRequest.cc
	src/model/CreateSaslUserResult.cc
	src/model/CreateTopicRequest.cc
	src/model/CreateTopicResult.cc
	src/model/DeleteAclRequest.cc
	src/model/DeleteAclResult.cc
	src/model/DeleteConsumerGroupRequest.cc
	src/model/DeleteConsumerGroupResult.cc
	src/model/DeleteInstanceRequest.cc
	src/model/DeleteInstanceResult.cc
	src/model/DeleteSaslUserRequest.cc
	src/model/DeleteSaslUserResult.cc
	src/model/DeleteTopicRequest.cc
	src/model/DeleteTopicResult.cc
	src/model/DescribeAclsRequest.cc
	src/model/DescribeAclsResult.cc
	src/model/DescribeSaslUsersRequest.cc
	src/model/DescribeSaslUsersResult.cc
	src/model/EnableAutoGroupCreationRequest.cc
	src/model/EnableAutoGroupCreationResult.cc
	src/model/EnableAutoTopicCreationRequest.cc
	src/model/EnableAutoTopicCreationResult.cc
	src/model/GetAllInstanceIdListRequest.cc
	src/model/GetAllInstanceIdListResult.cc
	src/model/GetAllowedIpListRequest.cc
	src/model/GetAllowedIpListResult.cc
	src/model/GetConsumerListRequest.cc
	src/model/GetConsumerListResult.cc
	src/model/GetConsumerProgressRequest.cc
	src/model/GetConsumerProgressResult.cc
	src/model/GetInstanceListRequest.cc
	src/model/GetInstanceListResult.cc
	src/model/GetQuotaTipRequest.cc
	src/model/GetQuotaTipResult.cc
	src/model/GetTopicListRequest.cc
	src/model/GetTopicListResult.cc
	src/model/GetTopicStatusRequest.cc
	src/model/GetTopicStatusResult.cc
	src/model/GetTopicSubscribeStatusRequest.cc
	src/model/GetTopicSubscribeStatusResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ModifyInstanceNameRequest.cc
	src/model/ModifyInstanceNameResult.cc
	src/model/ModifyPartitionNumRequest.cc
	src/model/ModifyPartitionNumResult.cc
	src/model/ModifyTopicRemarkRequest.cc
	src/model/ModifyTopicRemarkResult.cc
	src/model/QueryMessageRequest.cc
	src/model/QueryMessageResult.cc
	src/model/ReleaseInstanceRequest.cc
	src/model/ReleaseInstanceResult.cc
	src/model/ReopenInstanceRequest.cc
	src/model/ReopenInstanceResult.cc
	src/model/StartInstanceRequest.cc
	src/model/StartInstanceResult.cc
	src/model/StopInstanceRequest.cc
	src/model/StopInstanceResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpdateAllowedIpRequest.cc
	src/model/UpdateAllowedIpResult.cc
	src/model/UpdateConsumerOffsetRequest.cc
	src/model/UpdateConsumerOffsetResult.cc
	src/model/UpdateInstanceConfigRequest.cc
	src/model/UpdateInstanceConfigResult.cc
	src/model/UpdateTopicConfigRequest.cc
	src/model/UpdateTopicConfigResult.cc
	src/model/UpgradeInstanceVersionRequest.cc
	src/model/UpgradeInstanceVersionResult.cc
	src/model/UpgradePostPayOrderRequest.cc
	src/model/UpgradePostPayOrderResult.cc
	src/model/UpgradePrePayOrderRequest.cc
	src/model/UpgradePrePayOrderResult.cc )

add_library(alikafka ${LIB_TYPE}
	${alikafka_public_header}
	${alikafka_public_header_model}
	${alikafka_src})

set_target_properties(alikafka
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}alikafka
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(alikafka
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ALIKAFKA_LIBRARY)
endif()

target_include_directories(alikafka
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(alikafka
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(alikafka
		jsoncpp)
	target_include_directories(alikafka
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(alikafka
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(alikafka
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(alikafka
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(alikafka
		jsoncpp)
endif()

install(FILES ${alikafka_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/alikafka)
install(FILES ${alikafka_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/alikafka/model)
install(TARGETS alikafka
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)