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

set(sophonsoar_public_header 
	include/alibabacloud/sophonsoar/SophonsoarClient.h
	include/alibabacloud/sophonsoar/SophonsoarExport.h )

set(sophonsoar_public_header_model 
	include/alibabacloud/sophonsoar/model/BatchModifyInstanceStatusRequest.h
	include/alibabacloud/sophonsoar/model/BatchModifyInstanceStatusResult.h
	include/alibabacloud/sophonsoar/model/ComparePlaybooksRequest.h
	include/alibabacloud/sophonsoar/model/ComparePlaybooksResult.h
	include/alibabacloud/sophonsoar/model/ConvertPlaybookRequest.h
	include/alibabacloud/sophonsoar/model/ConvertPlaybookResult.h
	include/alibabacloud/sophonsoar/model/CreatePlaybookRequest.h
	include/alibabacloud/sophonsoar/model/CreatePlaybookResult.h
	include/alibabacloud/sophonsoar/model/DebugPlaybookRequest.h
	include/alibabacloud/sophonsoar/model/DebugPlaybookResult.h
	include/alibabacloud/sophonsoar/model/DeleteComponentAssetRequest.h
	include/alibabacloud/sophonsoar/model/DeleteComponentAssetResult.h
	include/alibabacloud/sophonsoar/model/DeletePlaybookRequest.h
	include/alibabacloud/sophonsoar/model/DeletePlaybookResult.h
	include/alibabacloud/sophonsoar/model/DescribeComponentAssetFormRequest.h
	include/alibabacloud/sophonsoar/model/DescribeComponentAssetFormResult.h
	include/alibabacloud/sophonsoar/model/DescribeComponentAssetsRequest.h
	include/alibabacloud/sophonsoar/model/DescribeComponentAssetsResult.h
	include/alibabacloud/sophonsoar/model/DescribeComponentListRequest.h
	include/alibabacloud/sophonsoar/model/DescribeComponentListResult.h
	include/alibabacloud/sophonsoar/model/DescribeComponentPlaybookRequest.h
	include/alibabacloud/sophonsoar/model/DescribeComponentPlaybookResult.h
	include/alibabacloud/sophonsoar/model/DescribeComponentsJsRequest.h
	include/alibabacloud/sophonsoar/model/DescribeComponentsJsResult.h
	include/alibabacloud/sophonsoar/model/DescribeDistinctReleasesRequest.h
	include/alibabacloud/sophonsoar/model/DescribeDistinctReleasesResult.h
	include/alibabacloud/sophonsoar/model/DescribeEnumItemsRequest.h
	include/alibabacloud/sophonsoar/model/DescribeEnumItemsResult.h
	include/alibabacloud/sophonsoar/model/DescribeExecutePlaybooksRequest.h
	include/alibabacloud/sophonsoar/model/DescribeExecutePlaybooksResult.h
	include/alibabacloud/sophonsoar/model/DescribeFieldRequest.h
	include/alibabacloud/sophonsoar/model/DescribeFieldResult.h
	include/alibabacloud/sophonsoar/model/DescribeLatestRecordSchemaRequest.h
	include/alibabacloud/sophonsoar/model/DescribeLatestRecordSchemaResult.h
	include/alibabacloud/sophonsoar/model/DescribeNodeParamTagsRequest.h
	include/alibabacloud/sophonsoar/model/DescribeNodeParamTagsResult.h
	include/alibabacloud/sophonsoar/model/DescribeNodeUsedInfosRequest.h
	include/alibabacloud/sophonsoar/model/DescribeNodeUsedInfosResult.h
	include/alibabacloud/sophonsoar/model/DescribePlaybookRequest.h
	include/alibabacloud/sophonsoar/model/DescribePlaybookResult.h
	include/alibabacloud/sophonsoar/model/DescribePlaybookInputOutputRequest.h
	include/alibabacloud/sophonsoar/model/DescribePlaybookInputOutputResult.h
	include/alibabacloud/sophonsoar/model/DescribePlaybookMetricsRequest.h
	include/alibabacloud/sophonsoar/model/DescribePlaybookMetricsResult.h
	include/alibabacloud/sophonsoar/model/DescribePlaybookNodesOutputRequest.h
	include/alibabacloud/sophonsoar/model/DescribePlaybookNodesOutputResult.h
	include/alibabacloud/sophonsoar/model/DescribePlaybookNumberMetricsRequest.h
	include/alibabacloud/sophonsoar/model/DescribePlaybookNumberMetricsResult.h
	include/alibabacloud/sophonsoar/model/DescribePlaybookReleasesRequest.h
	include/alibabacloud/sophonsoar/model/DescribePlaybookReleasesResult.h
	include/alibabacloud/sophonsoar/model/DescribePlaybooksRequest.h
	include/alibabacloud/sophonsoar/model/DescribePlaybooksResult.h
	include/alibabacloud/sophonsoar/model/DescribePopApiRequest.h
	include/alibabacloud/sophonsoar/model/DescribePopApiResult.h
	include/alibabacloud/sophonsoar/model/DescribeProcessTaskCountRequest.h
	include/alibabacloud/sophonsoar/model/DescribeProcessTaskCountResult.h
	include/alibabacloud/sophonsoar/model/DescribeProcessTasksRequest.h
	include/alibabacloud/sophonsoar/model/DescribeProcessTasksResult.h
	include/alibabacloud/sophonsoar/model/DescribeSoarRecordActionOutputListRequest.h
	include/alibabacloud/sophonsoar/model/DescribeSoarRecordActionOutputListResult.h
	include/alibabacloud/sophonsoar/model/DescribeSoarRecordInOutputRequest.h
	include/alibabacloud/sophonsoar/model/DescribeSoarRecordInOutputResult.h
	include/alibabacloud/sophonsoar/model/DescribeSoarRecordsRequest.h
	include/alibabacloud/sophonsoar/model/DescribeSoarRecordsResult.h
	include/alibabacloud/sophonsoar/model/DescribeSoarTaskAndActionsRequest.h
	include/alibabacloud/sophonsoar/model/DescribeSoarTaskAndActionsResult.h
	include/alibabacloud/sophonsoar/model/DescribeSophonCommandsRequest.h
	include/alibabacloud/sophonsoar/model/DescribeSophonCommandsResult.h
	include/alibabacloud/sophonsoar/model/DescriberPython3ScriptLogsRequest.h
	include/alibabacloud/sophonsoar/model/DescriberPython3ScriptLogsResult.h
	include/alibabacloud/sophonsoar/model/ModifyComponentAssetRequest.h
	include/alibabacloud/sophonsoar/model/ModifyComponentAssetResult.h
	include/alibabacloud/sophonsoar/model/ModifyPlaybookRequest.h
	include/alibabacloud/sophonsoar/model/ModifyPlaybookResult.h
	include/alibabacloud/sophonsoar/model/ModifyPlaybookInputOutputRequest.h
	include/alibabacloud/sophonsoar/model/ModifyPlaybookInputOutputResult.h
	include/alibabacloud/sophonsoar/model/ModifyPlaybookInstanceStatusRequest.h
	include/alibabacloud/sophonsoar/model/ModifyPlaybookInstanceStatusResult.h
	include/alibabacloud/sophonsoar/model/PublishPlaybookRequest.h
	include/alibabacloud/sophonsoar/model/PublishPlaybookResult.h
	include/alibabacloud/sophonsoar/model/QueryTreeDataRequest.h
	include/alibabacloud/sophonsoar/model/QueryTreeDataResult.h
	include/alibabacloud/sophonsoar/model/RenamePlaybookNodeRequest.h
	include/alibabacloud/sophonsoar/model/RenamePlaybookNodeResult.h
	include/alibabacloud/sophonsoar/model/RevertPlaybookReleaseRequest.h
	include/alibabacloud/sophonsoar/model/RevertPlaybookReleaseResult.h
	include/alibabacloud/sophonsoar/model/RunPython3ScriptRequest.h
	include/alibabacloud/sophonsoar/model/RunPython3ScriptResult.h
	include/alibabacloud/sophonsoar/model/TriggerPlaybookRequest.h
	include/alibabacloud/sophonsoar/model/TriggerPlaybookResult.h
	include/alibabacloud/sophonsoar/model/TriggerProcessTaskRequest.h
	include/alibabacloud/sophonsoar/model/TriggerProcessTaskResult.h
	include/alibabacloud/sophonsoar/model/TriggerSophonPlaybookRequest.h
	include/alibabacloud/sophonsoar/model/TriggerSophonPlaybookResult.h
	include/alibabacloud/sophonsoar/model/VerifyPlaybookRequest.h
	include/alibabacloud/sophonsoar/model/VerifyPlaybookResult.h
	include/alibabacloud/sophonsoar/model/VerifyPythonFileRequest.h
	include/alibabacloud/sophonsoar/model/VerifyPythonFileResult.h )

set(sophonsoar_src 
	src/SophonsoarClient.cc
	src/model/BatchModifyInstanceStatusRequest.cc
	src/model/BatchModifyInstanceStatusResult.cc
	src/model/ComparePlaybooksRequest.cc
	src/model/ComparePlaybooksResult.cc
	src/model/ConvertPlaybookRequest.cc
	src/model/ConvertPlaybookResult.cc
	src/model/CreatePlaybookRequest.cc
	src/model/CreatePlaybookResult.cc
	src/model/DebugPlaybookRequest.cc
	src/model/DebugPlaybookResult.cc
	src/model/DeleteComponentAssetRequest.cc
	src/model/DeleteComponentAssetResult.cc
	src/model/DeletePlaybookRequest.cc
	src/model/DeletePlaybookResult.cc
	src/model/DescribeComponentAssetFormRequest.cc
	src/model/DescribeComponentAssetFormResult.cc
	src/model/DescribeComponentAssetsRequest.cc
	src/model/DescribeComponentAssetsResult.cc
	src/model/DescribeComponentListRequest.cc
	src/model/DescribeComponentListResult.cc
	src/model/DescribeComponentPlaybookRequest.cc
	src/model/DescribeComponentPlaybookResult.cc
	src/model/DescribeComponentsJsRequest.cc
	src/model/DescribeComponentsJsResult.cc
	src/model/DescribeDistinctReleasesRequest.cc
	src/model/DescribeDistinctReleasesResult.cc
	src/model/DescribeEnumItemsRequest.cc
	src/model/DescribeEnumItemsResult.cc
	src/model/DescribeExecutePlaybooksRequest.cc
	src/model/DescribeExecutePlaybooksResult.cc
	src/model/DescribeFieldRequest.cc
	src/model/DescribeFieldResult.cc
	src/model/DescribeLatestRecordSchemaRequest.cc
	src/model/DescribeLatestRecordSchemaResult.cc
	src/model/DescribeNodeParamTagsRequest.cc
	src/model/DescribeNodeParamTagsResult.cc
	src/model/DescribeNodeUsedInfosRequest.cc
	src/model/DescribeNodeUsedInfosResult.cc
	src/model/DescribePlaybookRequest.cc
	src/model/DescribePlaybookResult.cc
	src/model/DescribePlaybookInputOutputRequest.cc
	src/model/DescribePlaybookInputOutputResult.cc
	src/model/DescribePlaybookMetricsRequest.cc
	src/model/DescribePlaybookMetricsResult.cc
	src/model/DescribePlaybookNodesOutputRequest.cc
	src/model/DescribePlaybookNodesOutputResult.cc
	src/model/DescribePlaybookNumberMetricsRequest.cc
	src/model/DescribePlaybookNumberMetricsResult.cc
	src/model/DescribePlaybookReleasesRequest.cc
	src/model/DescribePlaybookReleasesResult.cc
	src/model/DescribePlaybooksRequest.cc
	src/model/DescribePlaybooksResult.cc
	src/model/DescribePopApiRequest.cc
	src/model/DescribePopApiResult.cc
	src/model/DescribeProcessTaskCountRequest.cc
	src/model/DescribeProcessTaskCountResult.cc
	src/model/DescribeProcessTasksRequest.cc
	src/model/DescribeProcessTasksResult.cc
	src/model/DescribeSoarRecordActionOutputListRequest.cc
	src/model/DescribeSoarRecordActionOutputListResult.cc
	src/model/DescribeSoarRecordInOutputRequest.cc
	src/model/DescribeSoarRecordInOutputResult.cc
	src/model/DescribeSoarRecordsRequest.cc
	src/model/DescribeSoarRecordsResult.cc
	src/model/DescribeSoarTaskAndActionsRequest.cc
	src/model/DescribeSoarTaskAndActionsResult.cc
	src/model/DescribeSophonCommandsRequest.cc
	src/model/DescribeSophonCommandsResult.cc
	src/model/DescriberPython3ScriptLogsRequest.cc
	src/model/DescriberPython3ScriptLogsResult.cc
	src/model/ModifyComponentAssetRequest.cc
	src/model/ModifyComponentAssetResult.cc
	src/model/ModifyPlaybookRequest.cc
	src/model/ModifyPlaybookResult.cc
	src/model/ModifyPlaybookInputOutputRequest.cc
	src/model/ModifyPlaybookInputOutputResult.cc
	src/model/ModifyPlaybookInstanceStatusRequest.cc
	src/model/ModifyPlaybookInstanceStatusResult.cc
	src/model/PublishPlaybookRequest.cc
	src/model/PublishPlaybookResult.cc
	src/model/QueryTreeDataRequest.cc
	src/model/QueryTreeDataResult.cc
	src/model/RenamePlaybookNodeRequest.cc
	src/model/RenamePlaybookNodeResult.cc
	src/model/RevertPlaybookReleaseRequest.cc
	src/model/RevertPlaybookReleaseResult.cc
	src/model/RunPython3ScriptRequest.cc
	src/model/RunPython3ScriptResult.cc
	src/model/TriggerPlaybookRequest.cc
	src/model/TriggerPlaybookResult.cc
	src/model/TriggerProcessTaskRequest.cc
	src/model/TriggerProcessTaskResult.cc
	src/model/TriggerSophonPlaybookRequest.cc
	src/model/TriggerSophonPlaybookResult.cc
	src/model/VerifyPlaybookRequest.cc
	src/model/VerifyPlaybookResult.cc
	src/model/VerifyPythonFileRequest.cc
	src/model/VerifyPythonFileResult.cc )

add_library(sophonsoar ${LIB_TYPE}
	${sophonsoar_public_header}
	${sophonsoar_public_header_model}
	${sophonsoar_src})

set_target_properties(sophonsoar
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sophonsoar
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(sophonsoar
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SOPHONSOAR_LIBRARY)
endif()

target_include_directories(sophonsoar
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(sophonsoar
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(sophonsoar
		jsoncpp)
	target_include_directories(sophonsoar
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(sophonsoar
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(sophonsoar
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(sophonsoar
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(sophonsoar
		jsoncpp)
endif()

install(FILES ${sophonsoar_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sophonsoar)
install(FILES ${sophonsoar_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sophonsoar/model)
install(TARGETS sophonsoar
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)