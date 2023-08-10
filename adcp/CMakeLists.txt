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

set(adcp_public_header 
	include/alibabacloud/adcp/AdcpClient.h
	include/alibabacloud/adcp/AdcpExport.h )

set(adcp_public_header_model 
	include/alibabacloud/adcp/model/AttachClusterToHubRequest.h
	include/alibabacloud/adcp/model/AttachClusterToHubResult.h
	include/alibabacloud/adcp/model/CreateHubClusterRequest.h
	include/alibabacloud/adcp/model/CreateHubClusterResult.h
	include/alibabacloud/adcp/model/DeleteHubClusterRequest.h
	include/alibabacloud/adcp/model/DeleteHubClusterResult.h
	include/alibabacloud/adcp/model/DeletePolicyInstanceRequest.h
	include/alibabacloud/adcp/model/DeletePolicyInstanceResult.h
	include/alibabacloud/adcp/model/DeleteUserPermissionRequest.h
	include/alibabacloud/adcp/model/DeleteUserPermissionResult.h
	include/alibabacloud/adcp/model/DeployPolicyInstanceRequest.h
	include/alibabacloud/adcp/model/DeployPolicyInstanceResult.h
	include/alibabacloud/adcp/model/DescribeHubClusterDetailsRequest.h
	include/alibabacloud/adcp/model/DescribeHubClusterDetailsResult.h
	include/alibabacloud/adcp/model/DescribeHubClusterKubeconfigRequest.h
	include/alibabacloud/adcp/model/DescribeHubClusterKubeconfigResult.h
	include/alibabacloud/adcp/model/DescribeHubClusterLogsRequest.h
	include/alibabacloud/adcp/model/DescribeHubClusterLogsResult.h
	include/alibabacloud/adcp/model/DescribeHubClustersRequest.h
	include/alibabacloud/adcp/model/DescribeHubClustersResult.h
	include/alibabacloud/adcp/model/DescribeManagedClustersRequest.h
	include/alibabacloud/adcp/model/DescribeManagedClustersResult.h
	include/alibabacloud/adcp/model/DescribePoliciesRequest.h
	include/alibabacloud/adcp/model/DescribePoliciesResult.h
	include/alibabacloud/adcp/model/DescribePolicyDetailsRequest.h
	include/alibabacloud/adcp/model/DescribePolicyDetailsResult.h
	include/alibabacloud/adcp/model/DescribePolicyGovernanceInClusterRequest.h
	include/alibabacloud/adcp/model/DescribePolicyGovernanceInClusterResult.h
	include/alibabacloud/adcp/model/DescribePolicyInstancesRequest.h
	include/alibabacloud/adcp/model/DescribePolicyInstancesResult.h
	include/alibabacloud/adcp/model/DescribePolicyInstancesStatusRequest.h
	include/alibabacloud/adcp/model/DescribePolicyInstancesStatusResult.h
	include/alibabacloud/adcp/model/DescribeRegionsRequest.h
	include/alibabacloud/adcp/model/DescribeRegionsResult.h
	include/alibabacloud/adcp/model/DescribeUserPermissionsRequest.h
	include/alibabacloud/adcp/model/DescribeUserPermissionsResult.h
	include/alibabacloud/adcp/model/DetachClusterFromHubRequest.h
	include/alibabacloud/adcp/model/DetachClusterFromHubResult.h
	include/alibabacloud/adcp/model/GrantUserPermissionRequest.h
	include/alibabacloud/adcp/model/GrantUserPermissionResult.h
	include/alibabacloud/adcp/model/GrantUserPermissionsRequest.h
	include/alibabacloud/adcp/model/GrantUserPermissionsResult.h
	include/alibabacloud/adcp/model/UpdateHubClusterFeatureRequest.h
	include/alibabacloud/adcp/model/UpdateHubClusterFeatureResult.h
	include/alibabacloud/adcp/model/UpdateUserPermissionRequest.h
	include/alibabacloud/adcp/model/UpdateUserPermissionResult.h )

set(adcp_src 
	src/AdcpClient.cc
	src/model/AttachClusterToHubRequest.cc
	src/model/AttachClusterToHubResult.cc
	src/model/CreateHubClusterRequest.cc
	src/model/CreateHubClusterResult.cc
	src/model/DeleteHubClusterRequest.cc
	src/model/DeleteHubClusterResult.cc
	src/model/DeletePolicyInstanceRequest.cc
	src/model/DeletePolicyInstanceResult.cc
	src/model/DeleteUserPermissionRequest.cc
	src/model/DeleteUserPermissionResult.cc
	src/model/DeployPolicyInstanceRequest.cc
	src/model/DeployPolicyInstanceResult.cc
	src/model/DescribeHubClusterDetailsRequest.cc
	src/model/DescribeHubClusterDetailsResult.cc
	src/model/DescribeHubClusterKubeconfigRequest.cc
	src/model/DescribeHubClusterKubeconfigResult.cc
	src/model/DescribeHubClusterLogsRequest.cc
	src/model/DescribeHubClusterLogsResult.cc
	src/model/DescribeHubClustersRequest.cc
	src/model/DescribeHubClustersResult.cc
	src/model/DescribeManagedClustersRequest.cc
	src/model/DescribeManagedClustersResult.cc
	src/model/DescribePoliciesRequest.cc
	src/model/DescribePoliciesResult.cc
	src/model/DescribePolicyDetailsRequest.cc
	src/model/DescribePolicyDetailsResult.cc
	src/model/DescribePolicyGovernanceInClusterRequest.cc
	src/model/DescribePolicyGovernanceInClusterResult.cc
	src/model/DescribePolicyInstancesRequest.cc
	src/model/DescribePolicyInstancesResult.cc
	src/model/DescribePolicyInstancesStatusRequest.cc
	src/model/DescribePolicyInstancesStatusResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeUserPermissionsRequest.cc
	src/model/DescribeUserPermissionsResult.cc
	src/model/DetachClusterFromHubRequest.cc
	src/model/DetachClusterFromHubResult.cc
	src/model/GrantUserPermissionRequest.cc
	src/model/GrantUserPermissionResult.cc
	src/model/GrantUserPermissionsRequest.cc
	src/model/GrantUserPermissionsResult.cc
	src/model/UpdateHubClusterFeatureRequest.cc
	src/model/UpdateHubClusterFeatureResult.cc
	src/model/UpdateUserPermissionRequest.cc
	src/model/UpdateUserPermissionResult.cc )

add_library(adcp ${LIB_TYPE}
	${adcp_public_header}
	${adcp_public_header_model}
	${adcp_src})

set_target_properties(adcp
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}adcp
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(adcp
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ADCP_LIBRARY)
endif()

target_include_directories(adcp
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(adcp
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(adcp
		jsoncpp)
	target_include_directories(adcp
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(adcp
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(adcp
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(adcp
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(adcp
		jsoncpp)
endif()

install(FILES ${adcp_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/adcp)
install(FILES ${adcp_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/adcp/model)
install(TARGETS adcp
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)