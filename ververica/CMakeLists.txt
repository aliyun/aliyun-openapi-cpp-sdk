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

set(ververica_public_header 
	include/alibabacloud/ververica/VervericaClient.h
	include/alibabacloud/ververica/VervericaExport.h )

set(ververica_public_header_model 
	include/alibabacloud/ververica/model/CreateConnectorRequest.h
	include/alibabacloud/ververica/model/CreateConnectorResult.h
	include/alibabacloud/ververica/model/CreateDeploymentRequest.h
	include/alibabacloud/ververica/model/CreateDeploymentResult.h
	include/alibabacloud/ververica/model/CreateFormatRequest.h
	include/alibabacloud/ververica/model/CreateFormatResult.h
	include/alibabacloud/ververica/model/CreateMemberRequest.h
	include/alibabacloud/ververica/model/CreateMemberResult.h
	include/alibabacloud/ververica/model/CreateSavepointRequest.h
	include/alibabacloud/ververica/model/CreateSavepointResult.h
	include/alibabacloud/ververica/model/CreateSecretValueRequest.h
	include/alibabacloud/ververica/model/CreateSecretValueResult.h
	include/alibabacloud/ververica/model/CreateUdfArtifactRequest.h
	include/alibabacloud/ververica/model/CreateUdfArtifactResult.h
	include/alibabacloud/ververica/model/DatabaseExistsRequest.h
	include/alibabacloud/ververica/model/DatabaseExistsResult.h
	include/alibabacloud/ververica/model/DeleteArtifactRequest.h
	include/alibabacloud/ververica/model/DeleteArtifactResult.h
	include/alibabacloud/ververica/model/DeleteConnectorRequest.h
	include/alibabacloud/ververica/model/DeleteConnectorResult.h
	include/alibabacloud/ververica/model/DeleteDeploymentRequest.h
	include/alibabacloud/ververica/model/DeleteDeploymentResult.h
	include/alibabacloud/ververica/model/DeleteFormatRequest.h
	include/alibabacloud/ververica/model/DeleteFormatResult.h
	include/alibabacloud/ververica/model/DeleteMemberRequest.h
	include/alibabacloud/ververica/model/DeleteMemberResult.h
	include/alibabacloud/ververica/model/DeleteSecretValueRequest.h
	include/alibabacloud/ververica/model/DeleteSecretValueResult.h
	include/alibabacloud/ververica/model/DeleteUdfArtifactRequest.h
	include/alibabacloud/ververica/model/DeleteUdfArtifactResult.h
	include/alibabacloud/ververica/model/ExecuteSqlScriptRequest.h
	include/alibabacloud/ververica/model/ExecuteSqlScriptResult.h
	include/alibabacloud/ververica/model/ExecuteSqlscriptsStatementsRequest.h
	include/alibabacloud/ververica/model/ExecuteSqlscriptsStatementsResult.h
	include/alibabacloud/ververica/model/ForcefullyCreateLockRequest.h
	include/alibabacloud/ververica/model/ForcefullyCreateLockResult.h
	include/alibabacloud/ververica/model/FunctionExistsRequest.h
	include/alibabacloud/ververica/model/FunctionExistsResult.h
	include/alibabacloud/ververica/model/GenerateResourcePlanRequest.h
	include/alibabacloud/ververica/model/GenerateResourcePlanResult.h
	include/alibabacloud/ververica/model/GetArtifactMetadataRequest.h
	include/alibabacloud/ververica/model/GetArtifactMetadataResult.h
	include/alibabacloud/ververica/model/GetCatalogRequest.h
	include/alibabacloud/ververica/model/GetCatalogResult.h
	include/alibabacloud/ververica/model/GetDatabaseRequest.h
	include/alibabacloud/ververica/model/GetDatabaseResult.h
	include/alibabacloud/ververica/model/GetDefaultDatabaseRequest.h
	include/alibabacloud/ververica/model/GetDefaultDatabaseResult.h
	include/alibabacloud/ververica/model/GetDeploymentRequest.h
	include/alibabacloud/ververica/model/GetDeploymentResult.h
	include/alibabacloud/ververica/model/GetDeploymentDefaultsRequest.h
	include/alibabacloud/ververica/model/GetDeploymentDefaultsResult.h
	include/alibabacloud/ververica/model/GetFunctionRequest.h
	include/alibabacloud/ververica/model/GetFunctionResult.h
	include/alibabacloud/ververica/model/GetGlobalDeploymentDefaultsRequest.h
	include/alibabacloud/ververica/model/GetGlobalDeploymentDefaultsResult.h
	include/alibabacloud/ververica/model/GetResourcePlanRequest.h
	include/alibabacloud/ververica/model/GetResourcePlanResult.h
	include/alibabacloud/ververica/model/GetTableRequest.h
	include/alibabacloud/ververica/model/GetTableResult.h
	include/alibabacloud/ververica/model/GetUdfArtifactRequest.h
	include/alibabacloud/ververica/model/GetUdfArtifactResult.h
	include/alibabacloud/ververica/model/ListArtifactsRequest.h
	include/alibabacloud/ververica/model/ListArtifactsResult.h
	include/alibabacloud/ververica/model/ListCatalogsRequest.h
	include/alibabacloud/ververica/model/ListCatalogsResult.h
	include/alibabacloud/ververica/model/ListConnectorsRequest.h
	include/alibabacloud/ververica/model/ListConnectorsResult.h
	include/alibabacloud/ververica/model/ListDatabasesRequest.h
	include/alibabacloud/ververica/model/ListDatabasesResult.h
	include/alibabacloud/ververica/model/ListDeploymentTargetsRequest.h
	include/alibabacloud/ververica/model/ListDeploymentTargetsResult.h
	include/alibabacloud/ververica/model/ListDeploymentsRequest.h
	include/alibabacloud/ververica/model/ListDeploymentsResult.h
	include/alibabacloud/ververica/model/ListFlinkVersionsRequest.h
	include/alibabacloud/ververica/model/ListFlinkVersionsResult.h
	include/alibabacloud/ververica/model/ListFormatsRequest.h
	include/alibabacloud/ververica/model/ListFormatsResult.h
	include/alibabacloud/ververica/model/ListFunctionsRequest.h
	include/alibabacloud/ververica/model/ListFunctionsResult.h
	include/alibabacloud/ververica/model/ListJobsRequest.h
	include/alibabacloud/ververica/model/ListJobsResult.h
	include/alibabacloud/ververica/model/ListNamespacesRequest.h
	include/alibabacloud/ververica/model/ListNamespacesResult.h
	include/alibabacloud/ververica/model/ListSavepointsRequest.h
	include/alibabacloud/ververica/model/ListSavepointsResult.h
	include/alibabacloud/ververica/model/ListSecretValuesRequest.h
	include/alibabacloud/ververica/model/ListSecretValuesResult.h
	include/alibabacloud/ververica/model/ListSessionClustersRequest.h
	include/alibabacloud/ververica/model/ListSessionClustersResult.h
	include/alibabacloud/ververica/model/ListTablesRequest.h
	include/alibabacloud/ververica/model/ListTablesResult.h
	include/alibabacloud/ververica/model/ParseConnectorRequest.h
	include/alibabacloud/ververica/model/ParseConnectorResult.h
	include/alibabacloud/ververica/model/ParseFormatRequest.h
	include/alibabacloud/ververica/model/ParseFormatResult.h
	include/alibabacloud/ververica/model/ReplaceDeploymentRequest.h
	include/alibabacloud/ververica/model/ReplaceDeploymentResult.h
	include/alibabacloud/ververica/model/SetDeploymentResourceModeRequest.h
	include/alibabacloud/ververica/model/SetDeploymentResourceModeResult.h
	include/alibabacloud/ververica/model/TableExistsRequest.h
	include/alibabacloud/ververica/model/TableExistsResult.h
	include/alibabacloud/ververica/model/UpdateConnectorRequest.h
	include/alibabacloud/ververica/model/UpdateConnectorResult.h
	include/alibabacloud/ververica/model/UpdateDeploymentRequest.h
	include/alibabacloud/ververica/model/UpdateDeploymentResult.h
	include/alibabacloud/ververica/model/UpdateDeploymentDesiredStateRequest.h
	include/alibabacloud/ververica/model/UpdateDeploymentDesiredStateResult.h
	include/alibabacloud/ververica/model/UpdateFormatRequest.h
	include/alibabacloud/ververica/model/UpdateFormatResult.h
	include/alibabacloud/ververica/model/UpdateMemberRequest.h
	include/alibabacloud/ververica/model/UpdateMemberResult.h
	include/alibabacloud/ververica/model/UpdateUdfArtifactRequest.h
	include/alibabacloud/ververica/model/UpdateUdfArtifactResult.h
	include/alibabacloud/ververica/model/ValidateSqlScriptRequest.h
	include/alibabacloud/ververica/model/ValidateSqlScriptResult.h )

set(ververica_src 
	src/VervericaClient.cc
	src/model/CreateConnectorRequest.cc
	src/model/CreateConnectorResult.cc
	src/model/CreateDeploymentRequest.cc
	src/model/CreateDeploymentResult.cc
	src/model/CreateFormatRequest.cc
	src/model/CreateFormatResult.cc
	src/model/CreateMemberRequest.cc
	src/model/CreateMemberResult.cc
	src/model/CreateSavepointRequest.cc
	src/model/CreateSavepointResult.cc
	src/model/CreateSecretValueRequest.cc
	src/model/CreateSecretValueResult.cc
	src/model/CreateUdfArtifactRequest.cc
	src/model/CreateUdfArtifactResult.cc
	src/model/DatabaseExistsRequest.cc
	src/model/DatabaseExistsResult.cc
	src/model/DeleteArtifactRequest.cc
	src/model/DeleteArtifactResult.cc
	src/model/DeleteConnectorRequest.cc
	src/model/DeleteConnectorResult.cc
	src/model/DeleteDeploymentRequest.cc
	src/model/DeleteDeploymentResult.cc
	src/model/DeleteFormatRequest.cc
	src/model/DeleteFormatResult.cc
	src/model/DeleteMemberRequest.cc
	src/model/DeleteMemberResult.cc
	src/model/DeleteSecretValueRequest.cc
	src/model/DeleteSecretValueResult.cc
	src/model/DeleteUdfArtifactRequest.cc
	src/model/DeleteUdfArtifactResult.cc
	src/model/ExecuteSqlScriptRequest.cc
	src/model/ExecuteSqlScriptResult.cc
	src/model/ExecuteSqlscriptsStatementsRequest.cc
	src/model/ExecuteSqlscriptsStatementsResult.cc
	src/model/ForcefullyCreateLockRequest.cc
	src/model/ForcefullyCreateLockResult.cc
	src/model/FunctionExistsRequest.cc
	src/model/FunctionExistsResult.cc
	src/model/GenerateResourcePlanRequest.cc
	src/model/GenerateResourcePlanResult.cc
	src/model/GetArtifactMetadataRequest.cc
	src/model/GetArtifactMetadataResult.cc
	src/model/GetCatalogRequest.cc
	src/model/GetCatalogResult.cc
	src/model/GetDatabaseRequest.cc
	src/model/GetDatabaseResult.cc
	src/model/GetDefaultDatabaseRequest.cc
	src/model/GetDefaultDatabaseResult.cc
	src/model/GetDeploymentRequest.cc
	src/model/GetDeploymentResult.cc
	src/model/GetDeploymentDefaultsRequest.cc
	src/model/GetDeploymentDefaultsResult.cc
	src/model/GetFunctionRequest.cc
	src/model/GetFunctionResult.cc
	src/model/GetGlobalDeploymentDefaultsRequest.cc
	src/model/GetGlobalDeploymentDefaultsResult.cc
	src/model/GetResourcePlanRequest.cc
	src/model/GetResourcePlanResult.cc
	src/model/GetTableRequest.cc
	src/model/GetTableResult.cc
	src/model/GetUdfArtifactRequest.cc
	src/model/GetUdfArtifactResult.cc
	src/model/ListArtifactsRequest.cc
	src/model/ListArtifactsResult.cc
	src/model/ListCatalogsRequest.cc
	src/model/ListCatalogsResult.cc
	src/model/ListConnectorsRequest.cc
	src/model/ListConnectorsResult.cc
	src/model/ListDatabasesRequest.cc
	src/model/ListDatabasesResult.cc
	src/model/ListDeploymentTargetsRequest.cc
	src/model/ListDeploymentTargetsResult.cc
	src/model/ListDeploymentsRequest.cc
	src/model/ListDeploymentsResult.cc
	src/model/ListFlinkVersionsRequest.cc
	src/model/ListFlinkVersionsResult.cc
	src/model/ListFormatsRequest.cc
	src/model/ListFormatsResult.cc
	src/model/ListFunctionsRequest.cc
	src/model/ListFunctionsResult.cc
	src/model/ListJobsRequest.cc
	src/model/ListJobsResult.cc
	src/model/ListNamespacesRequest.cc
	src/model/ListNamespacesResult.cc
	src/model/ListSavepointsRequest.cc
	src/model/ListSavepointsResult.cc
	src/model/ListSecretValuesRequest.cc
	src/model/ListSecretValuesResult.cc
	src/model/ListSessionClustersRequest.cc
	src/model/ListSessionClustersResult.cc
	src/model/ListTablesRequest.cc
	src/model/ListTablesResult.cc
	src/model/ParseConnectorRequest.cc
	src/model/ParseConnectorResult.cc
	src/model/ParseFormatRequest.cc
	src/model/ParseFormatResult.cc
	src/model/ReplaceDeploymentRequest.cc
	src/model/ReplaceDeploymentResult.cc
	src/model/SetDeploymentResourceModeRequest.cc
	src/model/SetDeploymentResourceModeResult.cc
	src/model/TableExistsRequest.cc
	src/model/TableExistsResult.cc
	src/model/UpdateConnectorRequest.cc
	src/model/UpdateConnectorResult.cc
	src/model/UpdateDeploymentRequest.cc
	src/model/UpdateDeploymentResult.cc
	src/model/UpdateDeploymentDesiredStateRequest.cc
	src/model/UpdateDeploymentDesiredStateResult.cc
	src/model/UpdateFormatRequest.cc
	src/model/UpdateFormatResult.cc
	src/model/UpdateMemberRequest.cc
	src/model/UpdateMemberResult.cc
	src/model/UpdateUdfArtifactRequest.cc
	src/model/UpdateUdfArtifactResult.cc
	src/model/ValidateSqlScriptRequest.cc
	src/model/ValidateSqlScriptResult.cc )

add_library(ververica ${LIB_TYPE}
	${ververica_public_header}
	${ververica_public_header_model}
	${ververica_src})

set_target_properties(ververica
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ververica
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ververica
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_VERVERICA_LIBRARY)
endif()

target_include_directories(ververica
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ververica
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ververica
		jsoncpp)
	target_include_directories(ververica
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ververica
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ververica
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ververica
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ververica
		jsoncpp)
endif()

install(FILES ${ververica_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ververica)
install(FILES ${ververica_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ververica/model)
install(TARGETS ververica
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)