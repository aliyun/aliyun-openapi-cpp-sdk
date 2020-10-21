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

set(sae_public_header 
	include/alibabacloud/sae/SaeClient.h
	include/alibabacloud/sae/SaeExport.h )

set(sae_public_header_model 
	include/alibabacloud/sae/model/AbortAndRollbackChangeOrderRequest.h
	include/alibabacloud/sae/model/AbortAndRollbackChangeOrderResult.h
	include/alibabacloud/sae/model/AbortChangeOrderRequest.h
	include/alibabacloud/sae/model/AbortChangeOrderResult.h
	include/alibabacloud/sae/model/BatchStartApplicationsRequest.h
	include/alibabacloud/sae/model/BatchStartApplicationsResult.h
	include/alibabacloud/sae/model/BatchStopApplicationsRequest.h
	include/alibabacloud/sae/model/BatchStopApplicationsResult.h
	include/alibabacloud/sae/model/BindSlbRequest.h
	include/alibabacloud/sae/model/BindSlbResult.h
	include/alibabacloud/sae/model/ConfirmPipelineBatchRequest.h
	include/alibabacloud/sae/model/ConfirmPipelineBatchResult.h
	include/alibabacloud/sae/model/CreateApplicationRequest.h
	include/alibabacloud/sae/model/CreateApplicationResult.h
	include/alibabacloud/sae/model/CreateConfigMapRequest.h
	include/alibabacloud/sae/model/CreateConfigMapResult.h
	include/alibabacloud/sae/model/CreateIngressRequest.h
	include/alibabacloud/sae/model/CreateIngressResult.h
	include/alibabacloud/sae/model/CreateNamespaceRequest.h
	include/alibabacloud/sae/model/CreateNamespaceResult.h
	include/alibabacloud/sae/model/DeleteApplicationRequest.h
	include/alibabacloud/sae/model/DeleteApplicationResult.h
	include/alibabacloud/sae/model/DeleteConfigMapRequest.h
	include/alibabacloud/sae/model/DeleteConfigMapResult.h
	include/alibabacloud/sae/model/DeleteIngressRequest.h
	include/alibabacloud/sae/model/DeleteIngressResult.h
	include/alibabacloud/sae/model/DeleteNamespaceRequest.h
	include/alibabacloud/sae/model/DeleteNamespaceResult.h
	include/alibabacloud/sae/model/DeployApplicationRequest.h
	include/alibabacloud/sae/model/DeployApplicationResult.h
	include/alibabacloud/sae/model/DescribeApplicationConfigRequest.h
	include/alibabacloud/sae/model/DescribeApplicationConfigResult.h
	include/alibabacloud/sae/model/DescribeApplicationGroupsRequest.h
	include/alibabacloud/sae/model/DescribeApplicationGroupsResult.h
	include/alibabacloud/sae/model/DescribeApplicationImageRequest.h
	include/alibabacloud/sae/model/DescribeApplicationImageResult.h
	include/alibabacloud/sae/model/DescribeApplicationInstancesRequest.h
	include/alibabacloud/sae/model/DescribeApplicationInstancesResult.h
	include/alibabacloud/sae/model/DescribeApplicationSlbsRequest.h
	include/alibabacloud/sae/model/DescribeApplicationSlbsResult.h
	include/alibabacloud/sae/model/DescribeApplicationStatusRequest.h
	include/alibabacloud/sae/model/DescribeApplicationStatusResult.h
	include/alibabacloud/sae/model/DescribeChangeOrderRequest.h
	include/alibabacloud/sae/model/DescribeChangeOrderResult.h
	include/alibabacloud/sae/model/DescribeComponentsRequest.h
	include/alibabacloud/sae/model/DescribeComponentsResult.h
	include/alibabacloud/sae/model/DescribeConfigMapRequest.h
	include/alibabacloud/sae/model/DescribeConfigMapResult.h
	include/alibabacloud/sae/model/DescribeEdasContainersRequest.h
	include/alibabacloud/sae/model/DescribeEdasContainersResult.h
	include/alibabacloud/sae/model/DescribeIngressRequest.h
	include/alibabacloud/sae/model/DescribeIngressResult.h
	include/alibabacloud/sae/model/DescribeInstanceLogRequest.h
	include/alibabacloud/sae/model/DescribeInstanceLogResult.h
	include/alibabacloud/sae/model/DescribeInstanceSpecificationsRequest.h
	include/alibabacloud/sae/model/DescribeInstanceSpecificationsResult.h
	include/alibabacloud/sae/model/DescribeNamespaceRequest.h
	include/alibabacloud/sae/model/DescribeNamespaceResult.h
	include/alibabacloud/sae/model/DescribeNamespaceListRequest.h
	include/alibabacloud/sae/model/DescribeNamespaceListResult.h
	include/alibabacloud/sae/model/DescribeNamespaceResourcesRequest.h
	include/alibabacloud/sae/model/DescribeNamespaceResourcesResult.h
	include/alibabacloud/sae/model/DescribeNamespacesRequest.h
	include/alibabacloud/sae/model/DescribeNamespacesResult.h
	include/alibabacloud/sae/model/DescribeRegionsRequest.h
	include/alibabacloud/sae/model/DescribeRegionsResult.h
	include/alibabacloud/sae/model/ListAppEventsRequest.h
	include/alibabacloud/sae/model/ListAppEventsResult.h
	include/alibabacloud/sae/model/ListAppVersionsRequest.h
	include/alibabacloud/sae/model/ListAppVersionsResult.h
	include/alibabacloud/sae/model/ListApplicationsRequest.h
	include/alibabacloud/sae/model/ListApplicationsResult.h
	include/alibabacloud/sae/model/ListChangeOrdersRequest.h
	include/alibabacloud/sae/model/ListChangeOrdersResult.h
	include/alibabacloud/sae/model/ListConsumedServicesRequest.h
	include/alibabacloud/sae/model/ListConsumedServicesResult.h
	include/alibabacloud/sae/model/ListIngressesRequest.h
	include/alibabacloud/sae/model/ListIngressesResult.h
	include/alibabacloud/sae/model/ListLogConfigsRequest.h
	include/alibabacloud/sae/model/ListLogConfigsResult.h
	include/alibabacloud/sae/model/ListNamespaceChangeOrdersRequest.h
	include/alibabacloud/sae/model/ListNamespaceChangeOrdersResult.h
	include/alibabacloud/sae/model/ListNamespacedConfigMapsRequest.h
	include/alibabacloud/sae/model/ListNamespacedConfigMapsResult.h
	include/alibabacloud/sae/model/ListPublishedServicesRequest.h
	include/alibabacloud/sae/model/ListPublishedServicesResult.h
	include/alibabacloud/sae/model/ListTagResourcesRequest.h
	include/alibabacloud/sae/model/ListTagResourcesResult.h
	include/alibabacloud/sae/model/QueryResourceStaticsRequest.h
	include/alibabacloud/sae/model/QueryResourceStaticsResult.h
	include/alibabacloud/sae/model/RescaleApplicationRequest.h
	include/alibabacloud/sae/model/RescaleApplicationResult.h
	include/alibabacloud/sae/model/RescaleApplicationVerticallyRequest.h
	include/alibabacloud/sae/model/RescaleApplicationVerticallyResult.h
	include/alibabacloud/sae/model/RestartApplicationRequest.h
	include/alibabacloud/sae/model/RestartApplicationResult.h
	include/alibabacloud/sae/model/RollbackApplicationRequest.h
	include/alibabacloud/sae/model/RollbackApplicationResult.h
	include/alibabacloud/sae/model/StartApplicationRequest.h
	include/alibabacloud/sae/model/StartApplicationResult.h
	include/alibabacloud/sae/model/StopApplicationRequest.h
	include/alibabacloud/sae/model/StopApplicationResult.h
	include/alibabacloud/sae/model/TagResourcesRequest.h
	include/alibabacloud/sae/model/TagResourcesResult.h
	include/alibabacloud/sae/model/UnbindSlbRequest.h
	include/alibabacloud/sae/model/UnbindSlbResult.h
	include/alibabacloud/sae/model/UntagResourcesRequest.h
	include/alibabacloud/sae/model/UntagResourcesResult.h
	include/alibabacloud/sae/model/UpdateAppSecurityGroupRequest.h
	include/alibabacloud/sae/model/UpdateAppSecurityGroupResult.h
	include/alibabacloud/sae/model/UpdateConfigMapRequest.h
	include/alibabacloud/sae/model/UpdateConfigMapResult.h
	include/alibabacloud/sae/model/UpdateIngressRequest.h
	include/alibabacloud/sae/model/UpdateIngressResult.h
	include/alibabacloud/sae/model/UpdateNamespaceRequest.h
	include/alibabacloud/sae/model/UpdateNamespaceResult.h
	include/alibabacloud/sae/model/UpdateNamespaceVpcRequest.h
	include/alibabacloud/sae/model/UpdateNamespaceVpcResult.h )

set(sae_src 
	src/SaeClient.cc
	src/model/AbortAndRollbackChangeOrderRequest.cc
	src/model/AbortAndRollbackChangeOrderResult.cc
	src/model/AbortChangeOrderRequest.cc
	src/model/AbortChangeOrderResult.cc
	src/model/BatchStartApplicationsRequest.cc
	src/model/BatchStartApplicationsResult.cc
	src/model/BatchStopApplicationsRequest.cc
	src/model/BatchStopApplicationsResult.cc
	src/model/BindSlbRequest.cc
	src/model/BindSlbResult.cc
	src/model/ConfirmPipelineBatchRequest.cc
	src/model/ConfirmPipelineBatchResult.cc
	src/model/CreateApplicationRequest.cc
	src/model/CreateApplicationResult.cc
	src/model/CreateConfigMapRequest.cc
	src/model/CreateConfigMapResult.cc
	src/model/CreateIngressRequest.cc
	src/model/CreateIngressResult.cc
	src/model/CreateNamespaceRequest.cc
	src/model/CreateNamespaceResult.cc
	src/model/DeleteApplicationRequest.cc
	src/model/DeleteApplicationResult.cc
	src/model/DeleteConfigMapRequest.cc
	src/model/DeleteConfigMapResult.cc
	src/model/DeleteIngressRequest.cc
	src/model/DeleteIngressResult.cc
	src/model/DeleteNamespaceRequest.cc
	src/model/DeleteNamespaceResult.cc
	src/model/DeployApplicationRequest.cc
	src/model/DeployApplicationResult.cc
	src/model/DescribeApplicationConfigRequest.cc
	src/model/DescribeApplicationConfigResult.cc
	src/model/DescribeApplicationGroupsRequest.cc
	src/model/DescribeApplicationGroupsResult.cc
	src/model/DescribeApplicationImageRequest.cc
	src/model/DescribeApplicationImageResult.cc
	src/model/DescribeApplicationInstancesRequest.cc
	src/model/DescribeApplicationInstancesResult.cc
	src/model/DescribeApplicationSlbsRequest.cc
	src/model/DescribeApplicationSlbsResult.cc
	src/model/DescribeApplicationStatusRequest.cc
	src/model/DescribeApplicationStatusResult.cc
	src/model/DescribeChangeOrderRequest.cc
	src/model/DescribeChangeOrderResult.cc
	src/model/DescribeComponentsRequest.cc
	src/model/DescribeComponentsResult.cc
	src/model/DescribeConfigMapRequest.cc
	src/model/DescribeConfigMapResult.cc
	src/model/DescribeEdasContainersRequest.cc
	src/model/DescribeEdasContainersResult.cc
	src/model/DescribeIngressRequest.cc
	src/model/DescribeIngressResult.cc
	src/model/DescribeInstanceLogRequest.cc
	src/model/DescribeInstanceLogResult.cc
	src/model/DescribeInstanceSpecificationsRequest.cc
	src/model/DescribeInstanceSpecificationsResult.cc
	src/model/DescribeNamespaceRequest.cc
	src/model/DescribeNamespaceResult.cc
	src/model/DescribeNamespaceListRequest.cc
	src/model/DescribeNamespaceListResult.cc
	src/model/DescribeNamespaceResourcesRequest.cc
	src/model/DescribeNamespaceResourcesResult.cc
	src/model/DescribeNamespacesRequest.cc
	src/model/DescribeNamespacesResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/ListAppEventsRequest.cc
	src/model/ListAppEventsResult.cc
	src/model/ListAppVersionsRequest.cc
	src/model/ListAppVersionsResult.cc
	src/model/ListApplicationsRequest.cc
	src/model/ListApplicationsResult.cc
	src/model/ListChangeOrdersRequest.cc
	src/model/ListChangeOrdersResult.cc
	src/model/ListConsumedServicesRequest.cc
	src/model/ListConsumedServicesResult.cc
	src/model/ListIngressesRequest.cc
	src/model/ListIngressesResult.cc
	src/model/ListLogConfigsRequest.cc
	src/model/ListLogConfigsResult.cc
	src/model/ListNamespaceChangeOrdersRequest.cc
	src/model/ListNamespaceChangeOrdersResult.cc
	src/model/ListNamespacedConfigMapsRequest.cc
	src/model/ListNamespacedConfigMapsResult.cc
	src/model/ListPublishedServicesRequest.cc
	src/model/ListPublishedServicesResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/QueryResourceStaticsRequest.cc
	src/model/QueryResourceStaticsResult.cc
	src/model/RescaleApplicationRequest.cc
	src/model/RescaleApplicationResult.cc
	src/model/RescaleApplicationVerticallyRequest.cc
	src/model/RescaleApplicationVerticallyResult.cc
	src/model/RestartApplicationRequest.cc
	src/model/RestartApplicationResult.cc
	src/model/RollbackApplicationRequest.cc
	src/model/RollbackApplicationResult.cc
	src/model/StartApplicationRequest.cc
	src/model/StartApplicationResult.cc
	src/model/StopApplicationRequest.cc
	src/model/StopApplicationResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UnbindSlbRequest.cc
	src/model/UnbindSlbResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpdateAppSecurityGroupRequest.cc
	src/model/UpdateAppSecurityGroupResult.cc
	src/model/UpdateConfigMapRequest.cc
	src/model/UpdateConfigMapResult.cc
	src/model/UpdateIngressRequest.cc
	src/model/UpdateIngressResult.cc
	src/model/UpdateNamespaceRequest.cc
	src/model/UpdateNamespaceResult.cc
	src/model/UpdateNamespaceVpcRequest.cc
	src/model/UpdateNamespaceVpcResult.cc )

add_library(sae ${LIB_TYPE}
	${sae_public_header}
	${sae_public_header_model}
	${sae_src})

set_target_properties(sae
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sae
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(sae
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SAE_LIBRARY)
endif()

target_include_directories(sae
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(sae
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(sae
		jsoncpp)
	target_include_directories(sae
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(sae
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(sae
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(sae
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(sae
		jsoncpp)
endif()

install(FILES ${sae_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sae)
install(FILES ${sae_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sae/model)
install(TARGETS sae
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)