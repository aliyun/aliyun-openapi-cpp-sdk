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

set(paifeaturestore_public_header 
	include/alibabacloud/paifeaturestore/PaiFeatureStoreClient.h
	include/alibabacloud/paifeaturestore/PaiFeatureStoreExport.h )

set(paifeaturestore_public_header_model 
	include/alibabacloud/paifeaturestore/model/ChangeProjectFeatureEntityHotIdVersionRequest.h
	include/alibabacloud/paifeaturestore/model/ChangeProjectFeatureEntityHotIdVersionResult.h
	include/alibabacloud/paifeaturestore/model/CheckInstanceDatasourceRequest.h
	include/alibabacloud/paifeaturestore/model/CheckInstanceDatasourceResult.h
	include/alibabacloud/paifeaturestore/model/CreateDatasourceRequest.h
	include/alibabacloud/paifeaturestore/model/CreateDatasourceResult.h
	include/alibabacloud/paifeaturestore/model/CreateFeatureEntityRequest.h
	include/alibabacloud/paifeaturestore/model/CreateFeatureEntityResult.h
	include/alibabacloud/paifeaturestore/model/CreateFeatureViewRequest.h
	include/alibabacloud/paifeaturestore/model/CreateFeatureViewResult.h
	include/alibabacloud/paifeaturestore/model/CreateInstanceRequest.h
	include/alibabacloud/paifeaturestore/model/CreateInstanceResult.h
	include/alibabacloud/paifeaturestore/model/CreateLabelTableRequest.h
	include/alibabacloud/paifeaturestore/model/CreateLabelTableResult.h
	include/alibabacloud/paifeaturestore/model/CreateModelFeatureRequest.h
	include/alibabacloud/paifeaturestore/model/CreateModelFeatureResult.h
	include/alibabacloud/paifeaturestore/model/CreateModelFeatureTrainingSetFGTableRequest.h
	include/alibabacloud/paifeaturestore/model/CreateModelFeatureTrainingSetFGTableResult.h
	include/alibabacloud/paifeaturestore/model/CreateProjectRequest.h
	include/alibabacloud/paifeaturestore/model/CreateProjectResult.h
	include/alibabacloud/paifeaturestore/model/CreateServiceIdentityRoleRequest.h
	include/alibabacloud/paifeaturestore/model/CreateServiceIdentityRoleResult.h
	include/alibabacloud/paifeaturestore/model/DeleteDatasourceRequest.h
	include/alibabacloud/paifeaturestore/model/DeleteDatasourceResult.h
	include/alibabacloud/paifeaturestore/model/DeleteFeatureEntityRequest.h
	include/alibabacloud/paifeaturestore/model/DeleteFeatureEntityResult.h
	include/alibabacloud/paifeaturestore/model/DeleteFeatureViewRequest.h
	include/alibabacloud/paifeaturestore/model/DeleteFeatureViewResult.h
	include/alibabacloud/paifeaturestore/model/DeleteLabelTableRequest.h
	include/alibabacloud/paifeaturestore/model/DeleteLabelTableResult.h
	include/alibabacloud/paifeaturestore/model/DeleteModelFeatureRequest.h
	include/alibabacloud/paifeaturestore/model/DeleteModelFeatureResult.h
	include/alibabacloud/paifeaturestore/model/DeleteProjectRequest.h
	include/alibabacloud/paifeaturestore/model/DeleteProjectResult.h
	include/alibabacloud/paifeaturestore/model/ExportModelFeatureTrainingSetFGTableRequest.h
	include/alibabacloud/paifeaturestore/model/ExportModelFeatureTrainingSetFGTableResult.h
	include/alibabacloud/paifeaturestore/model/ExportModelFeatureTrainingSetTableRequest.h
	include/alibabacloud/paifeaturestore/model/ExportModelFeatureTrainingSetTableResult.h
	include/alibabacloud/paifeaturestore/model/GetDatasourceRequest.h
	include/alibabacloud/paifeaturestore/model/GetDatasourceResult.h
	include/alibabacloud/paifeaturestore/model/GetDatasourceTableRequest.h
	include/alibabacloud/paifeaturestore/model/GetDatasourceTableResult.h
	include/alibabacloud/paifeaturestore/model/GetFeatureEntityRequest.h
	include/alibabacloud/paifeaturestore/model/GetFeatureEntityResult.h
	include/alibabacloud/paifeaturestore/model/GetFeatureViewRequest.h
	include/alibabacloud/paifeaturestore/model/GetFeatureViewResult.h
	include/alibabacloud/paifeaturestore/model/GetInstanceRequest.h
	include/alibabacloud/paifeaturestore/model/GetInstanceResult.h
	include/alibabacloud/paifeaturestore/model/GetLabelTableRequest.h
	include/alibabacloud/paifeaturestore/model/GetLabelTableResult.h
	include/alibabacloud/paifeaturestore/model/GetModelFeatureRequest.h
	include/alibabacloud/paifeaturestore/model/GetModelFeatureResult.h
	include/alibabacloud/paifeaturestore/model/GetModelFeatureFGFeatureRequest.h
	include/alibabacloud/paifeaturestore/model/GetModelFeatureFGFeatureResult.h
	include/alibabacloud/paifeaturestore/model/GetModelFeatureFGInfoRequest.h
	include/alibabacloud/paifeaturestore/model/GetModelFeatureFGInfoResult.h
	include/alibabacloud/paifeaturestore/model/GetProjectRequest.h
	include/alibabacloud/paifeaturestore/model/GetProjectResult.h
	include/alibabacloud/paifeaturestore/model/GetProjectFeatureEntityRequest.h
	include/alibabacloud/paifeaturestore/model/GetProjectFeatureEntityResult.h
	include/alibabacloud/paifeaturestore/model/GetProjectFeatureEntityHotIdsRequest.h
	include/alibabacloud/paifeaturestore/model/GetProjectFeatureEntityHotIdsResult.h
	include/alibabacloud/paifeaturestore/model/GetProjectFeatureViewRequest.h
	include/alibabacloud/paifeaturestore/model/GetProjectFeatureViewResult.h
	include/alibabacloud/paifeaturestore/model/GetProjectModelFeatureRequest.h
	include/alibabacloud/paifeaturestore/model/GetProjectModelFeatureResult.h
	include/alibabacloud/paifeaturestore/model/GetServiceIdentityRoleRequest.h
	include/alibabacloud/paifeaturestore/model/GetServiceIdentityRoleResult.h
	include/alibabacloud/paifeaturestore/model/GetTaskRequest.h
	include/alibabacloud/paifeaturestore/model/GetTaskResult.h
	include/alibabacloud/paifeaturestore/model/ListDatasourceTablesRequest.h
	include/alibabacloud/paifeaturestore/model/ListDatasourceTablesResult.h
	include/alibabacloud/paifeaturestore/model/ListDatasourcesRequest.h
	include/alibabacloud/paifeaturestore/model/ListDatasourcesResult.h
	include/alibabacloud/paifeaturestore/model/ListFeatureEntitiesRequest.h
	include/alibabacloud/paifeaturestore/model/ListFeatureEntitiesResult.h
	include/alibabacloud/paifeaturestore/model/ListFeatureViewFieldRelationshipsRequest.h
	include/alibabacloud/paifeaturestore/model/ListFeatureViewFieldRelationshipsResult.h
	include/alibabacloud/paifeaturestore/model/ListFeatureViewRelationshipsRequest.h
	include/alibabacloud/paifeaturestore/model/ListFeatureViewRelationshipsResult.h
	include/alibabacloud/paifeaturestore/model/ListFeatureViewsRequest.h
	include/alibabacloud/paifeaturestore/model/ListFeatureViewsResult.h
	include/alibabacloud/paifeaturestore/model/ListInstancesRequest.h
	include/alibabacloud/paifeaturestore/model/ListInstancesResult.h
	include/alibabacloud/paifeaturestore/model/ListLabelTablesRequest.h
	include/alibabacloud/paifeaturestore/model/ListLabelTablesResult.h
	include/alibabacloud/paifeaturestore/model/ListModelFeatureAvailableFeaturesRequest.h
	include/alibabacloud/paifeaturestore/model/ListModelFeatureAvailableFeaturesResult.h
	include/alibabacloud/paifeaturestore/model/ListModelFeaturesRequest.h
	include/alibabacloud/paifeaturestore/model/ListModelFeaturesResult.h
	include/alibabacloud/paifeaturestore/model/ListProjectFeatureViewOwnersRequest.h
	include/alibabacloud/paifeaturestore/model/ListProjectFeatureViewOwnersResult.h
	include/alibabacloud/paifeaturestore/model/ListProjectFeatureViewTagsRequest.h
	include/alibabacloud/paifeaturestore/model/ListProjectFeatureViewTagsResult.h
	include/alibabacloud/paifeaturestore/model/ListProjectFeatureViewsRequest.h
	include/alibabacloud/paifeaturestore/model/ListProjectFeatureViewsResult.h
	include/alibabacloud/paifeaturestore/model/ListProjectsRequest.h
	include/alibabacloud/paifeaturestore/model/ListProjectsResult.h
	include/alibabacloud/paifeaturestore/model/ListTaskLogsRequest.h
	include/alibabacloud/paifeaturestore/model/ListTaskLogsResult.h
	include/alibabacloud/paifeaturestore/model/ListTasksRequest.h
	include/alibabacloud/paifeaturestore/model/ListTasksResult.h
	include/alibabacloud/paifeaturestore/model/PublishFeatureViewTableRequest.h
	include/alibabacloud/paifeaturestore/model/PublishFeatureViewTableResult.h
	include/alibabacloud/paifeaturestore/model/UpdateDatasourceRequest.h
	include/alibabacloud/paifeaturestore/model/UpdateDatasourceResult.h
	include/alibabacloud/paifeaturestore/model/UpdateLabelTableRequest.h
	include/alibabacloud/paifeaturestore/model/UpdateLabelTableResult.h
	include/alibabacloud/paifeaturestore/model/UpdateModelFeatureRequest.h
	include/alibabacloud/paifeaturestore/model/UpdateModelFeatureResult.h
	include/alibabacloud/paifeaturestore/model/UpdateModelFeatureFGFeatureRequest.h
	include/alibabacloud/paifeaturestore/model/UpdateModelFeatureFGFeatureResult.h
	include/alibabacloud/paifeaturestore/model/UpdateModelFeatureFGInfoRequest.h
	include/alibabacloud/paifeaturestore/model/UpdateModelFeatureFGInfoResult.h
	include/alibabacloud/paifeaturestore/model/UpdateProjectRequest.h
	include/alibabacloud/paifeaturestore/model/UpdateProjectResult.h
	include/alibabacloud/paifeaturestore/model/WriteFeatureViewTableRequest.h
	include/alibabacloud/paifeaturestore/model/WriteFeatureViewTableResult.h
	include/alibabacloud/paifeaturestore/model/WriteProjectFeatureEntityHotIdsRequest.h
	include/alibabacloud/paifeaturestore/model/WriteProjectFeatureEntityHotIdsResult.h )

set(paifeaturestore_src 
	src/PaiFeatureStoreClient.cc
	src/model/ChangeProjectFeatureEntityHotIdVersionRequest.cc
	src/model/ChangeProjectFeatureEntityHotIdVersionResult.cc
	src/model/CheckInstanceDatasourceRequest.cc
	src/model/CheckInstanceDatasourceResult.cc
	src/model/CreateDatasourceRequest.cc
	src/model/CreateDatasourceResult.cc
	src/model/CreateFeatureEntityRequest.cc
	src/model/CreateFeatureEntityResult.cc
	src/model/CreateFeatureViewRequest.cc
	src/model/CreateFeatureViewResult.cc
	src/model/CreateInstanceRequest.cc
	src/model/CreateInstanceResult.cc
	src/model/CreateLabelTableRequest.cc
	src/model/CreateLabelTableResult.cc
	src/model/CreateModelFeatureRequest.cc
	src/model/CreateModelFeatureResult.cc
	src/model/CreateModelFeatureTrainingSetFGTableRequest.cc
	src/model/CreateModelFeatureTrainingSetFGTableResult.cc
	src/model/CreateProjectRequest.cc
	src/model/CreateProjectResult.cc
	src/model/CreateServiceIdentityRoleRequest.cc
	src/model/CreateServiceIdentityRoleResult.cc
	src/model/DeleteDatasourceRequest.cc
	src/model/DeleteDatasourceResult.cc
	src/model/DeleteFeatureEntityRequest.cc
	src/model/DeleteFeatureEntityResult.cc
	src/model/DeleteFeatureViewRequest.cc
	src/model/DeleteFeatureViewResult.cc
	src/model/DeleteLabelTableRequest.cc
	src/model/DeleteLabelTableResult.cc
	src/model/DeleteModelFeatureRequest.cc
	src/model/DeleteModelFeatureResult.cc
	src/model/DeleteProjectRequest.cc
	src/model/DeleteProjectResult.cc
	src/model/ExportModelFeatureTrainingSetFGTableRequest.cc
	src/model/ExportModelFeatureTrainingSetFGTableResult.cc
	src/model/ExportModelFeatureTrainingSetTableRequest.cc
	src/model/ExportModelFeatureTrainingSetTableResult.cc
	src/model/GetDatasourceRequest.cc
	src/model/GetDatasourceResult.cc
	src/model/GetDatasourceTableRequest.cc
	src/model/GetDatasourceTableResult.cc
	src/model/GetFeatureEntityRequest.cc
	src/model/GetFeatureEntityResult.cc
	src/model/GetFeatureViewRequest.cc
	src/model/GetFeatureViewResult.cc
	src/model/GetInstanceRequest.cc
	src/model/GetInstanceResult.cc
	src/model/GetLabelTableRequest.cc
	src/model/GetLabelTableResult.cc
	src/model/GetModelFeatureRequest.cc
	src/model/GetModelFeatureResult.cc
	src/model/GetModelFeatureFGFeatureRequest.cc
	src/model/GetModelFeatureFGFeatureResult.cc
	src/model/GetModelFeatureFGInfoRequest.cc
	src/model/GetModelFeatureFGInfoResult.cc
	src/model/GetProjectRequest.cc
	src/model/GetProjectResult.cc
	src/model/GetProjectFeatureEntityRequest.cc
	src/model/GetProjectFeatureEntityResult.cc
	src/model/GetProjectFeatureEntityHotIdsRequest.cc
	src/model/GetProjectFeatureEntityHotIdsResult.cc
	src/model/GetProjectFeatureViewRequest.cc
	src/model/GetProjectFeatureViewResult.cc
	src/model/GetProjectModelFeatureRequest.cc
	src/model/GetProjectModelFeatureResult.cc
	src/model/GetServiceIdentityRoleRequest.cc
	src/model/GetServiceIdentityRoleResult.cc
	src/model/GetTaskRequest.cc
	src/model/GetTaskResult.cc
	src/model/ListDatasourceTablesRequest.cc
	src/model/ListDatasourceTablesResult.cc
	src/model/ListDatasourcesRequest.cc
	src/model/ListDatasourcesResult.cc
	src/model/ListFeatureEntitiesRequest.cc
	src/model/ListFeatureEntitiesResult.cc
	src/model/ListFeatureViewFieldRelationshipsRequest.cc
	src/model/ListFeatureViewFieldRelationshipsResult.cc
	src/model/ListFeatureViewRelationshipsRequest.cc
	src/model/ListFeatureViewRelationshipsResult.cc
	src/model/ListFeatureViewsRequest.cc
	src/model/ListFeatureViewsResult.cc
	src/model/ListInstancesRequest.cc
	src/model/ListInstancesResult.cc
	src/model/ListLabelTablesRequest.cc
	src/model/ListLabelTablesResult.cc
	src/model/ListModelFeatureAvailableFeaturesRequest.cc
	src/model/ListModelFeatureAvailableFeaturesResult.cc
	src/model/ListModelFeaturesRequest.cc
	src/model/ListModelFeaturesResult.cc
	src/model/ListProjectFeatureViewOwnersRequest.cc
	src/model/ListProjectFeatureViewOwnersResult.cc
	src/model/ListProjectFeatureViewTagsRequest.cc
	src/model/ListProjectFeatureViewTagsResult.cc
	src/model/ListProjectFeatureViewsRequest.cc
	src/model/ListProjectFeatureViewsResult.cc
	src/model/ListProjectsRequest.cc
	src/model/ListProjectsResult.cc
	src/model/ListTaskLogsRequest.cc
	src/model/ListTaskLogsResult.cc
	src/model/ListTasksRequest.cc
	src/model/ListTasksResult.cc
	src/model/PublishFeatureViewTableRequest.cc
	src/model/PublishFeatureViewTableResult.cc
	src/model/UpdateDatasourceRequest.cc
	src/model/UpdateDatasourceResult.cc
	src/model/UpdateLabelTableRequest.cc
	src/model/UpdateLabelTableResult.cc
	src/model/UpdateModelFeatureRequest.cc
	src/model/UpdateModelFeatureResult.cc
	src/model/UpdateModelFeatureFGFeatureRequest.cc
	src/model/UpdateModelFeatureFGFeatureResult.cc
	src/model/UpdateModelFeatureFGInfoRequest.cc
	src/model/UpdateModelFeatureFGInfoResult.cc
	src/model/UpdateProjectRequest.cc
	src/model/UpdateProjectResult.cc
	src/model/WriteFeatureViewTableRequest.cc
	src/model/WriteFeatureViewTableResult.cc
	src/model/WriteProjectFeatureEntityHotIdsRequest.cc
	src/model/WriteProjectFeatureEntityHotIdsResult.cc )

add_library(paifeaturestore ${LIB_TYPE}
	${paifeaturestore_public_header}
	${paifeaturestore_public_header_model}
	${paifeaturestore_src})

set_target_properties(paifeaturestore
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}paifeaturestore
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(paifeaturestore
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_PAIFEATURESTORE_LIBRARY)
endif()

target_include_directories(paifeaturestore
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(paifeaturestore
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(paifeaturestore
		jsoncpp)
	target_include_directories(paifeaturestore
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(paifeaturestore
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(paifeaturestore
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(paifeaturestore
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(paifeaturestore
		jsoncpp)
endif()

install(FILES ${paifeaturestore_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/paifeaturestore)
install(FILES ${paifeaturestore_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/paifeaturestore/model)
install(TARGETS paifeaturestore
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)