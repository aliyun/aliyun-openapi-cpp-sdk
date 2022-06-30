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

set(apds_public_header 
	include/alibabacloud/apds/ApdsClient.h
	include/alibabacloud/apds/ApdsExport.h )

set(apds_public_header_model 
	include/alibabacloud/apds/model/CreateFileJobRequest.h
	include/alibabacloud/apds/model/CreateFileJobResult.h
	include/alibabacloud/apds/model/CreateMigrationGroupRequest.h
	include/alibabacloud/apds/model/CreateMigrationGroupResult.h
	include/alibabacloud/apds/model/CreateMigrationJobRequest.h
	include/alibabacloud/apds/model/CreateMigrationJobResult.h
	include/alibabacloud/apds/model/CreateSurveyJobRequest.h
	include/alibabacloud/apds/model/CreateSurveyJobResult.h
	include/alibabacloud/apds/model/CreateSurveyJobOfflineRequest.h
	include/alibabacloud/apds/model/CreateSurveyJobOfflineResult.h
	include/alibabacloud/apds/model/DeleteMigrationGroupRequest.h
	include/alibabacloud/apds/model/DeleteMigrationGroupResult.h
	include/alibabacloud/apds/model/DeleteMigrationJobRequest.h
	include/alibabacloud/apds/model/DeleteMigrationJobResult.h
	include/alibabacloud/apds/model/DeleteOssFileRequest.h
	include/alibabacloud/apds/model/DeleteOssFileResult.h
	include/alibabacloud/apds/model/DeleteSurveyJobRequest.h
	include/alibabacloud/apds/model/DeleteSurveyJobResult.h
	include/alibabacloud/apds/model/DeleteSurveyResourcesRequest.h
	include/alibabacloud/apds/model/DeleteSurveyResourcesResult.h
	include/alibabacloud/apds/model/DescribeMigrationJobConfigRequest.h
	include/alibabacloud/apds/model/DescribeMigrationJobConfigResult.h
	include/alibabacloud/apds/model/DescribeMigrationJobCountRequest.h
	include/alibabacloud/apds/model/DescribeMigrationJobCountResult.h
	include/alibabacloud/apds/model/DescribeOssStsRequest.h
	include/alibabacloud/apds/model/DescribeOssStsResult.h
	include/alibabacloud/apds/model/DescribeSummaryByStatusRequest.h
	include/alibabacloud/apds/model/DescribeSummaryByStatusResult.h
	include/alibabacloud/apds/model/DescribeSummaryByStatusAndGroupRequest.h
	include/alibabacloud/apds/model/DescribeSummaryByStatusAndGroupResult.h
	include/alibabacloud/apds/model/DescribeSurveyJobRequest.h
	include/alibabacloud/apds/model/DescribeSurveyJobResult.h
	include/alibabacloud/apds/model/DescribeSurveyJobCountRequest.h
	include/alibabacloud/apds/model/DescribeSurveyJobCountResult.h
	include/alibabacloud/apds/model/DescribeSurveyResourceTagRequest.h
	include/alibabacloud/apds/model/DescribeSurveyResourceTagResult.h
	include/alibabacloud/apds/model/DescribeSurveyTemplateRequest.h
	include/alibabacloud/apds/model/DescribeSurveyTemplateResult.h
	include/alibabacloud/apds/model/ListMigrationJobsRequest.h
	include/alibabacloud/apds/model/ListMigrationJobsResult.h
	include/alibabacloud/apds/model/ListRegionsRequest.h
	include/alibabacloud/apds/model/ListRegionsResult.h
	include/alibabacloud/apds/model/ListSurveyJobDownLoadJobsRequest.h
	include/alibabacloud/apds/model/ListSurveyJobDownLoadJobsResult.h
	include/alibabacloud/apds/model/ListSurveyJobsRequest.h
	include/alibabacloud/apds/model/ListSurveyJobsResult.h
	include/alibabacloud/apds/model/ListSurveyResourceByMigrationGroupsRequest.h
	include/alibabacloud/apds/model/ListSurveyResourceByMigrationGroupsResult.h
	include/alibabacloud/apds/model/ListSurveyResourceConnectionsRequest.h
	include/alibabacloud/apds/model/ListSurveyResourceConnectionsResult.h
	include/alibabacloud/apds/model/ListSurveyResourceTypesRequest.h
	include/alibabacloud/apds/model/ListSurveyResourceTypesResult.h
	include/alibabacloud/apds/model/ListSurveyResourcesDetailRequest.h
	include/alibabacloud/apds/model/ListSurveyResourcesDetailResult.h
	include/alibabacloud/apds/model/RecoverMigrationJobRequest.h
	include/alibabacloud/apds/model/RecoverMigrationJobResult.h
	include/alibabacloud/apds/model/StopSyncMigrationJobRequest.h
	include/alibabacloud/apds/model/StopSyncMigrationJobResult.h
	include/alibabacloud/apds/model/SyncMigrationJobRequest.h
	include/alibabacloud/apds/model/SyncMigrationJobResult.h )

set(apds_src 
	src/ApdsClient.cc
	src/model/CreateFileJobRequest.cc
	src/model/CreateFileJobResult.cc
	src/model/CreateMigrationGroupRequest.cc
	src/model/CreateMigrationGroupResult.cc
	src/model/CreateMigrationJobRequest.cc
	src/model/CreateMigrationJobResult.cc
	src/model/CreateSurveyJobRequest.cc
	src/model/CreateSurveyJobResult.cc
	src/model/CreateSurveyJobOfflineRequest.cc
	src/model/CreateSurveyJobOfflineResult.cc
	src/model/DeleteMigrationGroupRequest.cc
	src/model/DeleteMigrationGroupResult.cc
	src/model/DeleteMigrationJobRequest.cc
	src/model/DeleteMigrationJobResult.cc
	src/model/DeleteOssFileRequest.cc
	src/model/DeleteOssFileResult.cc
	src/model/DeleteSurveyJobRequest.cc
	src/model/DeleteSurveyJobResult.cc
	src/model/DeleteSurveyResourcesRequest.cc
	src/model/DeleteSurveyResourcesResult.cc
	src/model/DescribeMigrationJobConfigRequest.cc
	src/model/DescribeMigrationJobConfigResult.cc
	src/model/DescribeMigrationJobCountRequest.cc
	src/model/DescribeMigrationJobCountResult.cc
	src/model/DescribeOssStsRequest.cc
	src/model/DescribeOssStsResult.cc
	src/model/DescribeSummaryByStatusRequest.cc
	src/model/DescribeSummaryByStatusResult.cc
	src/model/DescribeSummaryByStatusAndGroupRequest.cc
	src/model/DescribeSummaryByStatusAndGroupResult.cc
	src/model/DescribeSurveyJobRequest.cc
	src/model/DescribeSurveyJobResult.cc
	src/model/DescribeSurveyJobCountRequest.cc
	src/model/DescribeSurveyJobCountResult.cc
	src/model/DescribeSurveyResourceTagRequest.cc
	src/model/DescribeSurveyResourceTagResult.cc
	src/model/DescribeSurveyTemplateRequest.cc
	src/model/DescribeSurveyTemplateResult.cc
	src/model/ListMigrationJobsRequest.cc
	src/model/ListMigrationJobsResult.cc
	src/model/ListRegionsRequest.cc
	src/model/ListRegionsResult.cc
	src/model/ListSurveyJobDownLoadJobsRequest.cc
	src/model/ListSurveyJobDownLoadJobsResult.cc
	src/model/ListSurveyJobsRequest.cc
	src/model/ListSurveyJobsResult.cc
	src/model/ListSurveyResourceByMigrationGroupsRequest.cc
	src/model/ListSurveyResourceByMigrationGroupsResult.cc
	src/model/ListSurveyResourceConnectionsRequest.cc
	src/model/ListSurveyResourceConnectionsResult.cc
	src/model/ListSurveyResourceTypesRequest.cc
	src/model/ListSurveyResourceTypesResult.cc
	src/model/ListSurveyResourcesDetailRequest.cc
	src/model/ListSurveyResourcesDetailResult.cc
	src/model/RecoverMigrationJobRequest.cc
	src/model/RecoverMigrationJobResult.cc
	src/model/StopSyncMigrationJobRequest.cc
	src/model/StopSyncMigrationJobResult.cc
	src/model/SyncMigrationJobRequest.cc
	src/model/SyncMigrationJobResult.cc )

add_library(apds ${LIB_TYPE}
	${apds_public_header}
	${apds_public_header_model}
	${apds_src})

set_target_properties(apds
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}apds
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(apds
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_APDS_LIBRARY)
endif()

target_include_directories(apds
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(apds
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(apds
		jsoncpp)
	target_include_directories(apds
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(apds
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(apds
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(apds
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(apds
		jsoncpp)
endif()

install(FILES ${apds_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/apds)
install(FILES ${apds_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/apds/model)
install(TARGETS apds
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)