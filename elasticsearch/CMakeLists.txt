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

set(elasticsearch_public_header 
	include/alibabacloud/elasticsearch/ElasticsearchClient.h
	include/alibabacloud/elasticsearch/ElasticsearchExport.h )

set(elasticsearch_public_header_model 
	include/alibabacloud/elasticsearch/model/ActivateZonesRequest.h
	include/alibabacloud/elasticsearch/model/ActivateZonesResult.h
	include/alibabacloud/elasticsearch/model/CancelTaskRequest.h
	include/alibabacloud/elasticsearch/model/CancelTaskResult.h
	include/alibabacloud/elasticsearch/model/CloseHttpsRequest.h
	include/alibabacloud/elasticsearch/model/CloseHttpsResult.h
	include/alibabacloud/elasticsearch/model/CreateInstanceRequest.h
	include/alibabacloud/elasticsearch/model/CreateInstanceResult.h
	include/alibabacloud/elasticsearch/model/CreateProjectRequest.h
	include/alibabacloud/elasticsearch/model/CreateProjectResult.h
	include/alibabacloud/elasticsearch/model/DeactivateZonesRequest.h
	include/alibabacloud/elasticsearch/model/DeactivateZonesResult.h
	include/alibabacloud/elasticsearch/model/DeleteInstanceRequest.h
	include/alibabacloud/elasticsearch/model/DeleteInstanceResult.h
	include/alibabacloud/elasticsearch/model/DeleteProjectRequest.h
	include/alibabacloud/elasticsearch/model/DeleteProjectResult.h
	include/alibabacloud/elasticsearch/model/DescribeElasticsearchHealthRequest.h
	include/alibabacloud/elasticsearch/model/DescribeElasticsearchHealthResult.h
	include/alibabacloud/elasticsearch/model/DescribeInstanceRequest.h
	include/alibabacloud/elasticsearch/model/DescribeInstanceResult.h
	include/alibabacloud/elasticsearch/model/DescribeKibanaSettingsRequest.h
	include/alibabacloud/elasticsearch/model/DescribeKibanaSettingsResult.h
	include/alibabacloud/elasticsearch/model/GetRegionConfigurationRequest.h
	include/alibabacloud/elasticsearch/model/GetRegionConfigurationResult.h
	include/alibabacloud/elasticsearch/model/GetSuggestShrinkableNodesRequest.h
	include/alibabacloud/elasticsearch/model/GetSuggestShrinkableNodesResult.h
	include/alibabacloud/elasticsearch/model/GetTransferableNodesRequest.h
	include/alibabacloud/elasticsearch/model/GetTransferableNodesResult.h
	include/alibabacloud/elasticsearch/model/InstallKibanaSystemPluginRequest.h
	include/alibabacloud/elasticsearch/model/InstallKibanaSystemPluginResult.h
	include/alibabacloud/elasticsearch/model/InstallSystemPluginRequest.h
	include/alibabacloud/elasticsearch/model/InstallSystemPluginResult.h
	include/alibabacloud/elasticsearch/model/InstallUserPluginsRequest.h
	include/alibabacloud/elasticsearch/model/InstallUserPluginsResult.h
	include/alibabacloud/elasticsearch/model/ListAllNodeRequest.h
	include/alibabacloud/elasticsearch/model/ListAllNodeResult.h
	include/alibabacloud/elasticsearch/model/ListInstanceRequest.h
	include/alibabacloud/elasticsearch/model/ListInstanceResult.h
	include/alibabacloud/elasticsearch/model/ListKibanaPluginsRequest.h
	include/alibabacloud/elasticsearch/model/ListKibanaPluginsResult.h
	include/alibabacloud/elasticsearch/model/ListPluginsRequest.h
	include/alibabacloud/elasticsearch/model/ListPluginsResult.h
	include/alibabacloud/elasticsearch/model/ListSearchLogRequest.h
	include/alibabacloud/elasticsearch/model/ListSearchLogResult.h
	include/alibabacloud/elasticsearch/model/MoveResourceGroupRequest.h
	include/alibabacloud/elasticsearch/model/MoveResourceGroupResult.h
	include/alibabacloud/elasticsearch/model/OpenHttpsRequest.h
	include/alibabacloud/elasticsearch/model/OpenHttpsResult.h
	include/alibabacloud/elasticsearch/model/RestartInstanceRequest.h
	include/alibabacloud/elasticsearch/model/RestartInstanceResult.h
	include/alibabacloud/elasticsearch/model/RollbackInstanceRequest.h
	include/alibabacloud/elasticsearch/model/RollbackInstanceResult.h
	include/alibabacloud/elasticsearch/model/ShrinkNodeRequest.h
	include/alibabacloud/elasticsearch/model/ShrinkNodeResult.h
	include/alibabacloud/elasticsearch/model/TransferNodeRequest.h
	include/alibabacloud/elasticsearch/model/TransferNodeResult.h
	include/alibabacloud/elasticsearch/model/TriggerNetworkRequest.h
	include/alibabacloud/elasticsearch/model/TriggerNetworkResult.h
	include/alibabacloud/elasticsearch/model/UninstallKibanaPluginRequest.h
	include/alibabacloud/elasticsearch/model/UninstallKibanaPluginResult.h
	include/alibabacloud/elasticsearch/model/UninstallPluginRequest.h
	include/alibabacloud/elasticsearch/model/UninstallPluginResult.h
	include/alibabacloud/elasticsearch/model/UpdateAdminPasswordRequest.h
	include/alibabacloud/elasticsearch/model/UpdateAdminPasswordResult.h
	include/alibabacloud/elasticsearch/model/UpdateAdvancedSettingRequest.h
	include/alibabacloud/elasticsearch/model/UpdateAdvancedSettingResult.h
	include/alibabacloud/elasticsearch/model/UpdateAliwsDictRequest.h
	include/alibabacloud/elasticsearch/model/UpdateAliwsDictResult.h
	include/alibabacloud/elasticsearch/model/UpdateBlackIpsRequest.h
	include/alibabacloud/elasticsearch/model/UpdateBlackIpsResult.h
	include/alibabacloud/elasticsearch/model/UpdateDescriptionRequest.h
	include/alibabacloud/elasticsearch/model/UpdateDescriptionResult.h
	include/alibabacloud/elasticsearch/model/UpdateDictRequest.h
	include/alibabacloud/elasticsearch/model/UpdateDictResult.h
	include/alibabacloud/elasticsearch/model/UpdateHotIkDictsRequest.h
	include/alibabacloud/elasticsearch/model/UpdateHotIkDictsResult.h
	include/alibabacloud/elasticsearch/model/UpdateInstanceRequest.h
	include/alibabacloud/elasticsearch/model/UpdateInstanceResult.h
	include/alibabacloud/elasticsearch/model/UpdateInstanceSettingsRequest.h
	include/alibabacloud/elasticsearch/model/UpdateInstanceSettingsResult.h
	include/alibabacloud/elasticsearch/model/UpdateKibanaSettingsRequest.h
	include/alibabacloud/elasticsearch/model/UpdateKibanaSettingsResult.h
	include/alibabacloud/elasticsearch/model/UpdateKibanaWhiteIpsRequest.h
	include/alibabacloud/elasticsearch/model/UpdateKibanaWhiteIpsResult.h
	include/alibabacloud/elasticsearch/model/UpdatePrivateNetworkWhiteIpsRequest.h
	include/alibabacloud/elasticsearch/model/UpdatePrivateNetworkWhiteIpsResult.h
	include/alibabacloud/elasticsearch/model/UpdatePublicNetworkRequest.h
	include/alibabacloud/elasticsearch/model/UpdatePublicNetworkResult.h
	include/alibabacloud/elasticsearch/model/UpdatePublicWhiteIpsRequest.h
	include/alibabacloud/elasticsearch/model/UpdatePublicWhiteIpsResult.h
	include/alibabacloud/elasticsearch/model/UpdateSnapshotSettingRequest.h
	include/alibabacloud/elasticsearch/model/UpdateSnapshotSettingResult.h
	include/alibabacloud/elasticsearch/model/UpdateSynonymsDictsRequest.h
	include/alibabacloud/elasticsearch/model/UpdateSynonymsDictsResult.h
	include/alibabacloud/elasticsearch/model/UpdateWhiteIpsRequest.h
	include/alibabacloud/elasticsearch/model/UpdateWhiteIpsResult.h
	include/alibabacloud/elasticsearch/model/ValidateShrinkNodesRequest.h
	include/alibabacloud/elasticsearch/model/ValidateShrinkNodesResult.h
	include/alibabacloud/elasticsearch/model/ValidateTransferableNodesRequest.h
	include/alibabacloud/elasticsearch/model/ValidateTransferableNodesResult.h )

set(elasticsearch_src 
	src/ElasticsearchClient.cc
	src/model/ActivateZonesRequest.cc
	src/model/ActivateZonesResult.cc
	src/model/CancelTaskRequest.cc
	src/model/CancelTaskResult.cc
	src/model/CloseHttpsRequest.cc
	src/model/CloseHttpsResult.cc
	src/model/CreateInstanceRequest.cc
	src/model/CreateInstanceResult.cc
	src/model/CreateProjectRequest.cc
	src/model/CreateProjectResult.cc
	src/model/DeactivateZonesRequest.cc
	src/model/DeactivateZonesResult.cc
	src/model/DeleteInstanceRequest.cc
	src/model/DeleteInstanceResult.cc
	src/model/DeleteProjectRequest.cc
	src/model/DeleteProjectResult.cc
	src/model/DescribeElasticsearchHealthRequest.cc
	src/model/DescribeElasticsearchHealthResult.cc
	src/model/DescribeInstanceRequest.cc
	src/model/DescribeInstanceResult.cc
	src/model/DescribeKibanaSettingsRequest.cc
	src/model/DescribeKibanaSettingsResult.cc
	src/model/GetRegionConfigurationRequest.cc
	src/model/GetRegionConfigurationResult.cc
	src/model/GetSuggestShrinkableNodesRequest.cc
	src/model/GetSuggestShrinkableNodesResult.cc
	src/model/GetTransferableNodesRequest.cc
	src/model/GetTransferableNodesResult.cc
	src/model/InstallKibanaSystemPluginRequest.cc
	src/model/InstallKibanaSystemPluginResult.cc
	src/model/InstallSystemPluginRequest.cc
	src/model/InstallSystemPluginResult.cc
	src/model/InstallUserPluginsRequest.cc
	src/model/InstallUserPluginsResult.cc
	src/model/ListAllNodeRequest.cc
	src/model/ListAllNodeResult.cc
	src/model/ListInstanceRequest.cc
	src/model/ListInstanceResult.cc
	src/model/ListKibanaPluginsRequest.cc
	src/model/ListKibanaPluginsResult.cc
	src/model/ListPluginsRequest.cc
	src/model/ListPluginsResult.cc
	src/model/ListSearchLogRequest.cc
	src/model/ListSearchLogResult.cc
	src/model/MoveResourceGroupRequest.cc
	src/model/MoveResourceGroupResult.cc
	src/model/OpenHttpsRequest.cc
	src/model/OpenHttpsResult.cc
	src/model/RestartInstanceRequest.cc
	src/model/RestartInstanceResult.cc
	src/model/RollbackInstanceRequest.cc
	src/model/RollbackInstanceResult.cc
	src/model/ShrinkNodeRequest.cc
	src/model/ShrinkNodeResult.cc
	src/model/TransferNodeRequest.cc
	src/model/TransferNodeResult.cc
	src/model/TriggerNetworkRequest.cc
	src/model/TriggerNetworkResult.cc
	src/model/UninstallKibanaPluginRequest.cc
	src/model/UninstallKibanaPluginResult.cc
	src/model/UninstallPluginRequest.cc
	src/model/UninstallPluginResult.cc
	src/model/UpdateAdminPasswordRequest.cc
	src/model/UpdateAdminPasswordResult.cc
	src/model/UpdateAdvancedSettingRequest.cc
	src/model/UpdateAdvancedSettingResult.cc
	src/model/UpdateAliwsDictRequest.cc
	src/model/UpdateAliwsDictResult.cc
	src/model/UpdateBlackIpsRequest.cc
	src/model/UpdateBlackIpsResult.cc
	src/model/UpdateDescriptionRequest.cc
	src/model/UpdateDescriptionResult.cc
	src/model/UpdateDictRequest.cc
	src/model/UpdateDictResult.cc
	src/model/UpdateHotIkDictsRequest.cc
	src/model/UpdateHotIkDictsResult.cc
	src/model/UpdateInstanceRequest.cc
	src/model/UpdateInstanceResult.cc
	src/model/UpdateInstanceSettingsRequest.cc
	src/model/UpdateInstanceSettingsResult.cc
	src/model/UpdateKibanaSettingsRequest.cc
	src/model/UpdateKibanaSettingsResult.cc
	src/model/UpdateKibanaWhiteIpsRequest.cc
	src/model/UpdateKibanaWhiteIpsResult.cc
	src/model/UpdatePrivateNetworkWhiteIpsRequest.cc
	src/model/UpdatePrivateNetworkWhiteIpsResult.cc
	src/model/UpdatePublicNetworkRequest.cc
	src/model/UpdatePublicNetworkResult.cc
	src/model/UpdatePublicWhiteIpsRequest.cc
	src/model/UpdatePublicWhiteIpsResult.cc
	src/model/UpdateSnapshotSettingRequest.cc
	src/model/UpdateSnapshotSettingResult.cc
	src/model/UpdateSynonymsDictsRequest.cc
	src/model/UpdateSynonymsDictsResult.cc
	src/model/UpdateWhiteIpsRequest.cc
	src/model/UpdateWhiteIpsResult.cc
	src/model/ValidateShrinkNodesRequest.cc
	src/model/ValidateShrinkNodesResult.cc
	src/model/ValidateTransferableNodesRequest.cc
	src/model/ValidateTransferableNodesResult.cc )

add_library(elasticsearch ${LIB_TYPE}
	${elasticsearch_public_header}
	${elasticsearch_public_header_model}
	${elasticsearch_src})

set_target_properties(elasticsearch
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}elasticsearch
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(elasticsearch
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ELASTICSEARCH_LIBRARY)
endif()

target_include_directories(elasticsearch
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(elasticsearch
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(elasticsearch
		jsoncpp)
	target_include_directories(elasticsearch
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(elasticsearch
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(elasticsearch
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(elasticsearch
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(elasticsearch
		jsoncpp)
endif()

install(FILES ${elasticsearch_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/elasticsearch)
install(FILES ${elasticsearch_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/elasticsearch/model)
install(TARGETS elasticsearch
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)