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

set(resourcecenter_public_header 
	include/alibabacloud/resourcecenter/ResourceCenterClient.h
	include/alibabacloud/resourcecenter/ResourceCenterExport.h )

set(resourcecenter_public_header_model 
	include/alibabacloud/resourcecenter/model/AssociateDefaultFilterRequest.h
	include/alibabacloud/resourcecenter/model/AssociateDefaultFilterResult.h
	include/alibabacloud/resourcecenter/model/CreateFilterRequest.h
	include/alibabacloud/resourcecenter/model/CreateFilterResult.h
	include/alibabacloud/resourcecenter/model/CreateSavedQueryRequest.h
	include/alibabacloud/resourcecenter/model/CreateSavedQueryResult.h
	include/alibabacloud/resourcecenter/model/DeleteFilterRequest.h
	include/alibabacloud/resourcecenter/model/DeleteFilterResult.h
	include/alibabacloud/resourcecenter/model/DeleteSavedQueryRequest.h
	include/alibabacloud/resourcecenter/model/DeleteSavedQueryResult.h
	include/alibabacloud/resourcecenter/model/DisableMultiAccountResourceCenterRequest.h
	include/alibabacloud/resourcecenter/model/DisableMultiAccountResourceCenterResult.h
	include/alibabacloud/resourcecenter/model/DisableResourceCenterRequest.h
	include/alibabacloud/resourcecenter/model/DisableResourceCenterResult.h
	include/alibabacloud/resourcecenter/model/DisassociateDefaultFilterRequest.h
	include/alibabacloud/resourcecenter/model/DisassociateDefaultFilterResult.h
	include/alibabacloud/resourcecenter/model/EnableMultiAccountResourceCenterRequest.h
	include/alibabacloud/resourcecenter/model/EnableMultiAccountResourceCenterResult.h
	include/alibabacloud/resourcecenter/model/EnableResourceCenterRequest.h
	include/alibabacloud/resourcecenter/model/EnableResourceCenterResult.h
	include/alibabacloud/resourcecenter/model/ExecuteMultiAccountSQLQueryRequest.h
	include/alibabacloud/resourcecenter/model/ExecuteMultiAccountSQLQueryResult.h
	include/alibabacloud/resourcecenter/model/ExecuteSQLQueryRequest.h
	include/alibabacloud/resourcecenter/model/ExecuteSQLQueryResult.h
	include/alibabacloud/resourcecenter/model/GetExampleQueryRequest.h
	include/alibabacloud/resourcecenter/model/GetExampleQueryResult.h
	include/alibabacloud/resourcecenter/model/GetMultiAccountResourceCenterServiceStatusRequest.h
	include/alibabacloud/resourcecenter/model/GetMultiAccountResourceCenterServiceStatusResult.h
	include/alibabacloud/resourcecenter/model/GetMultiAccountResourceConfigurationRequest.h
	include/alibabacloud/resourcecenter/model/GetMultiAccountResourceConfigurationResult.h
	include/alibabacloud/resourcecenter/model/GetResourceCenterServiceStatusRequest.h
	include/alibabacloud/resourcecenter/model/GetResourceCenterServiceStatusResult.h
	include/alibabacloud/resourcecenter/model/GetResourceConfigurationRequest.h
	include/alibabacloud/resourcecenter/model/GetResourceConfigurationResult.h
	include/alibabacloud/resourcecenter/model/GetResourceCountsRequest.h
	include/alibabacloud/resourcecenter/model/GetResourceCountsResult.h
	include/alibabacloud/resourcecenter/model/GetSavedQueryRequest.h
	include/alibabacloud/resourcecenter/model/GetSavedQueryResult.h
	include/alibabacloud/resourcecenter/model/ListExampleQueriesRequest.h
	include/alibabacloud/resourcecenter/model/ListExampleQueriesResult.h
	include/alibabacloud/resourcecenter/model/ListFiltersRequest.h
	include/alibabacloud/resourcecenter/model/ListFiltersResult.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountResourceGroupsRequest.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountResourceGroupsResult.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountResourceRelationshipsRequest.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountResourceRelationshipsResult.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountTagKeysRequest.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountTagKeysResult.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountTagValuesRequest.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountTagValuesResult.h
	include/alibabacloud/resourcecenter/model/ListResourceRelationshipsRequest.h
	include/alibabacloud/resourcecenter/model/ListResourceRelationshipsResult.h
	include/alibabacloud/resourcecenter/model/ListResourceTypesRequest.h
	include/alibabacloud/resourcecenter/model/ListResourceTypesResult.h
	include/alibabacloud/resourcecenter/model/ListSavedQueriesRequest.h
	include/alibabacloud/resourcecenter/model/ListSavedQueriesResult.h
	include/alibabacloud/resourcecenter/model/ListTagKeysRequest.h
	include/alibabacloud/resourcecenter/model/ListTagKeysResult.h
	include/alibabacloud/resourcecenter/model/ListTagValuesRequest.h
	include/alibabacloud/resourcecenter/model/ListTagValuesResult.h
	include/alibabacloud/resourcecenter/model/SearchMultiAccountResourcesRequest.h
	include/alibabacloud/resourcecenter/model/SearchMultiAccountResourcesResult.h
	include/alibabacloud/resourcecenter/model/SearchResourcesRequest.h
	include/alibabacloud/resourcecenter/model/SearchResourcesResult.h
	include/alibabacloud/resourcecenter/model/UpdateFilterRequest.h
	include/alibabacloud/resourcecenter/model/UpdateFilterResult.h
	include/alibabacloud/resourcecenter/model/UpdateSavedQueryRequest.h
	include/alibabacloud/resourcecenter/model/UpdateSavedQueryResult.h )

set(resourcecenter_src 
	src/ResourceCenterClient.cc
	src/model/AssociateDefaultFilterRequest.cc
	src/model/AssociateDefaultFilterResult.cc
	src/model/CreateFilterRequest.cc
	src/model/CreateFilterResult.cc
	src/model/CreateSavedQueryRequest.cc
	src/model/CreateSavedQueryResult.cc
	src/model/DeleteFilterRequest.cc
	src/model/DeleteFilterResult.cc
	src/model/DeleteSavedQueryRequest.cc
	src/model/DeleteSavedQueryResult.cc
	src/model/DisableMultiAccountResourceCenterRequest.cc
	src/model/DisableMultiAccountResourceCenterResult.cc
	src/model/DisableResourceCenterRequest.cc
	src/model/DisableResourceCenterResult.cc
	src/model/DisassociateDefaultFilterRequest.cc
	src/model/DisassociateDefaultFilterResult.cc
	src/model/EnableMultiAccountResourceCenterRequest.cc
	src/model/EnableMultiAccountResourceCenterResult.cc
	src/model/EnableResourceCenterRequest.cc
	src/model/EnableResourceCenterResult.cc
	src/model/ExecuteMultiAccountSQLQueryRequest.cc
	src/model/ExecuteMultiAccountSQLQueryResult.cc
	src/model/ExecuteSQLQueryRequest.cc
	src/model/ExecuteSQLQueryResult.cc
	src/model/GetExampleQueryRequest.cc
	src/model/GetExampleQueryResult.cc
	src/model/GetMultiAccountResourceCenterServiceStatusRequest.cc
	src/model/GetMultiAccountResourceCenterServiceStatusResult.cc
	src/model/GetMultiAccountResourceConfigurationRequest.cc
	src/model/GetMultiAccountResourceConfigurationResult.cc
	src/model/GetResourceCenterServiceStatusRequest.cc
	src/model/GetResourceCenterServiceStatusResult.cc
	src/model/GetResourceConfigurationRequest.cc
	src/model/GetResourceConfigurationResult.cc
	src/model/GetResourceCountsRequest.cc
	src/model/GetResourceCountsResult.cc
	src/model/GetSavedQueryRequest.cc
	src/model/GetSavedQueryResult.cc
	src/model/ListExampleQueriesRequest.cc
	src/model/ListExampleQueriesResult.cc
	src/model/ListFiltersRequest.cc
	src/model/ListFiltersResult.cc
	src/model/ListMultiAccountResourceGroupsRequest.cc
	src/model/ListMultiAccountResourceGroupsResult.cc
	src/model/ListMultiAccountResourceRelationshipsRequest.cc
	src/model/ListMultiAccountResourceRelationshipsResult.cc
	src/model/ListMultiAccountTagKeysRequest.cc
	src/model/ListMultiAccountTagKeysResult.cc
	src/model/ListMultiAccountTagValuesRequest.cc
	src/model/ListMultiAccountTagValuesResult.cc
	src/model/ListResourceRelationshipsRequest.cc
	src/model/ListResourceRelationshipsResult.cc
	src/model/ListResourceTypesRequest.cc
	src/model/ListResourceTypesResult.cc
	src/model/ListSavedQueriesRequest.cc
	src/model/ListSavedQueriesResult.cc
	src/model/ListTagKeysRequest.cc
	src/model/ListTagKeysResult.cc
	src/model/ListTagValuesRequest.cc
	src/model/ListTagValuesResult.cc
	src/model/SearchMultiAccountResourcesRequest.cc
	src/model/SearchMultiAccountResourcesResult.cc
	src/model/SearchResourcesRequest.cc
	src/model/SearchResourcesResult.cc
	src/model/UpdateFilterRequest.cc
	src/model/UpdateFilterResult.cc
	src/model/UpdateSavedQueryRequest.cc
	src/model/UpdateSavedQueryResult.cc )

add_library(resourcecenter ${LIB_TYPE}
	${resourcecenter_public_header}
	${resourcecenter_public_header_model}
	${resourcecenter_src})

set_target_properties(resourcecenter
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}resourcecenter
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(resourcecenter
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_RESOURCECENTER_LIBRARY)
endif()

target_include_directories(resourcecenter
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(resourcecenter
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(resourcecenter
		jsoncpp)
	target_include_directories(resourcecenter
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(resourcecenter
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(resourcecenter
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(resourcecenter
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(resourcecenter
		jsoncpp)
endif()

install(FILES ${resourcecenter_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/resourcecenter)
install(FILES ${resourcecenter_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/resourcecenter/model)
install(TARGETS resourcecenter
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)