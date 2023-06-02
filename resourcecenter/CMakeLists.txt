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
	include/alibabacloud/resourcecenter/model/DisableMultiAccountResourceCenterRequest.h
	include/alibabacloud/resourcecenter/model/DisableMultiAccountResourceCenterResult.h
	include/alibabacloud/resourcecenter/model/DisableResourceCenterRequest.h
	include/alibabacloud/resourcecenter/model/DisableResourceCenterResult.h
	include/alibabacloud/resourcecenter/model/EnableMultiAccountResourceCenterRequest.h
	include/alibabacloud/resourcecenter/model/EnableMultiAccountResourceCenterResult.h
	include/alibabacloud/resourcecenter/model/EnableResourceCenterRequest.h
	include/alibabacloud/resourcecenter/model/EnableResourceCenterResult.h
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
	include/alibabacloud/resourcecenter/model/ListMultiAccountResourceGroupsRequest.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountResourceGroupsResult.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountTagKeysRequest.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountTagKeysResult.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountTagValuesRequest.h
	include/alibabacloud/resourcecenter/model/ListMultiAccountTagValuesResult.h
	include/alibabacloud/resourcecenter/model/ListResourceTypesRequest.h
	include/alibabacloud/resourcecenter/model/ListResourceTypesResult.h
	include/alibabacloud/resourcecenter/model/ListTagKeysRequest.h
	include/alibabacloud/resourcecenter/model/ListTagKeysResult.h
	include/alibabacloud/resourcecenter/model/ListTagValuesRequest.h
	include/alibabacloud/resourcecenter/model/ListTagValuesResult.h
	include/alibabacloud/resourcecenter/model/SearchMultiAccountResourcesRequest.h
	include/alibabacloud/resourcecenter/model/SearchMultiAccountResourcesResult.h
	include/alibabacloud/resourcecenter/model/SearchResourcesRequest.h
	include/alibabacloud/resourcecenter/model/SearchResourcesResult.h )

set(resourcecenter_src 
	src/ResourceCenterClient.cc
	src/model/DisableMultiAccountResourceCenterRequest.cc
	src/model/DisableMultiAccountResourceCenterResult.cc
	src/model/DisableResourceCenterRequest.cc
	src/model/DisableResourceCenterResult.cc
	src/model/EnableMultiAccountResourceCenterRequest.cc
	src/model/EnableMultiAccountResourceCenterResult.cc
	src/model/EnableResourceCenterRequest.cc
	src/model/EnableResourceCenterResult.cc
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
	src/model/ListMultiAccountResourceGroupsRequest.cc
	src/model/ListMultiAccountResourceGroupsResult.cc
	src/model/ListMultiAccountTagKeysRequest.cc
	src/model/ListMultiAccountTagKeysResult.cc
	src/model/ListMultiAccountTagValuesRequest.cc
	src/model/ListMultiAccountTagValuesResult.cc
	src/model/ListResourceTypesRequest.cc
	src/model/ListResourceTypesResult.cc
	src/model/ListTagKeysRequest.cc
	src/model/ListTagKeysResult.cc
	src/model/ListTagValuesRequest.cc
	src/model/ListTagValuesResult.cc
	src/model/SearchMultiAccountResourcesRequest.cc
	src/model/SearchMultiAccountResourcesResult.cc
	src/model/SearchResourcesRequest.cc
	src/model/SearchResourcesResult.cc )

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