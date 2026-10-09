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

set(airegistry_public_header 
	include/alibabacloud/airegistry/AIRegistryClient.h
	include/alibabacloud/airegistry/AIRegistryExport.h )

set(airegistry_public_header_model 
	include/alibabacloud/airegistry/model/CreateNamespaceRequest.h
	include/alibabacloud/airegistry/model/CreateNamespaceResult.h
	include/alibabacloud/airegistry/model/CreatePromptRequest.h
	include/alibabacloud/airegistry/model/CreatePromptResult.h
	include/alibabacloud/airegistry/model/CreatePromptVersionRequest.h
	include/alibabacloud/airegistry/model/CreatePromptVersionResult.h
	include/alibabacloud/airegistry/model/CreateSkillDraftRequest.h
	include/alibabacloud/airegistry/model/CreateSkillDraftResult.h
	include/alibabacloud/airegistry/model/DeleteNamespaceRequest.h
	include/alibabacloud/airegistry/model/DeleteNamespaceResult.h
	include/alibabacloud/airegistry/model/DeletePromptRequest.h
	include/alibabacloud/airegistry/model/DeletePromptResult.h
	include/alibabacloud/airegistry/model/DeleteSkillRequest.h
	include/alibabacloud/airegistry/model/DeleteSkillResult.h
	include/alibabacloud/airegistry/model/DownloadSkillVersionViaOssRequest.h
	include/alibabacloud/airegistry/model/DownloadSkillVersionViaOssResult.h
	include/alibabacloud/airegistry/model/ForcePublishSkillVersionRequest.h
	include/alibabacloud/airegistry/model/ForcePublishSkillVersionResult.h
	include/alibabacloud/airegistry/model/GetNamespaceRequest.h
	include/alibabacloud/airegistry/model/GetNamespaceResult.h
	include/alibabacloud/airegistry/model/GetPromptRequest.h
	include/alibabacloud/airegistry/model/GetPromptResult.h
	include/alibabacloud/airegistry/model/GetPromptVersionRequest.h
	include/alibabacloud/airegistry/model/GetPromptVersionResult.h
	include/alibabacloud/airegistry/model/GetSkillDetailRequest.h
	include/alibabacloud/airegistry/model/GetSkillDetailResult.h
	include/alibabacloud/airegistry/model/GetSkillImportFileUrlRequest.h
	include/alibabacloud/airegistry/model/GetSkillImportFileUrlResult.h
	include/alibabacloud/airegistry/model/GetSkillVersionDetailRequest.h
	include/alibabacloud/airegistry/model/GetSkillVersionDetailResult.h
	include/alibabacloud/airegistry/model/ListNamespacesRequest.h
	include/alibabacloud/airegistry/model/ListNamespacesResult.h
	include/alibabacloud/airegistry/model/ListPromptVersionsRequest.h
	include/alibabacloud/airegistry/model/ListPromptVersionsResult.h
	include/alibabacloud/airegistry/model/ListPromptsRequest.h
	include/alibabacloud/airegistry/model/ListPromptsResult.h
	include/alibabacloud/airegistry/model/ListSkillsRequest.h
	include/alibabacloud/airegistry/model/ListSkillsResult.h
	include/alibabacloud/airegistry/model/OfflineSkillRequest.h
	include/alibabacloud/airegistry/model/OfflineSkillResult.h
	include/alibabacloud/airegistry/model/OnlineSkillRequest.h
	include/alibabacloud/airegistry/model/OnlineSkillResult.h
	include/alibabacloud/airegistry/model/PublishSkillVersionRequest.h
	include/alibabacloud/airegistry/model/PublishSkillVersionResult.h
	include/alibabacloud/airegistry/model/RedraftSkillVersionRequest.h
	include/alibabacloud/airegistry/model/RedraftSkillVersionResult.h
	include/alibabacloud/airegistry/model/SubmitPromptVersionRequest.h
	include/alibabacloud/airegistry/model/SubmitPromptVersionResult.h
	include/alibabacloud/airegistry/model/SubmitSkillVersionRequest.h
	include/alibabacloud/airegistry/model/SubmitSkillVersionResult.h
	include/alibabacloud/airegistry/model/UpdateNamespaceRequest.h
	include/alibabacloud/airegistry/model/UpdateNamespaceResult.h
	include/alibabacloud/airegistry/model/UpdatePromptRequest.h
	include/alibabacloud/airegistry/model/UpdatePromptResult.h
	include/alibabacloud/airegistry/model/UpdatePromptVersionRequest.h
	include/alibabacloud/airegistry/model/UpdatePromptVersionResult.h
	include/alibabacloud/airegistry/model/UpdateSkillBizTagsRequest.h
	include/alibabacloud/airegistry/model/UpdateSkillBizTagsResult.h
	include/alibabacloud/airegistry/model/UpdateSkillDraftRequest.h
	include/alibabacloud/airegistry/model/UpdateSkillDraftResult.h
	include/alibabacloud/airegistry/model/UpdateSkillLabelsRequest.h
	include/alibabacloud/airegistry/model/UpdateSkillLabelsResult.h
	include/alibabacloud/airegistry/model/UpdateSkillScopeRequest.h
	include/alibabacloud/airegistry/model/UpdateSkillScopeResult.h
	include/alibabacloud/airegistry/model/UploadSkillViaOssRequest.h
	include/alibabacloud/airegistry/model/UploadSkillViaOssResult.h )

set(airegistry_src 
	src/AIRegistryClient.cc
	src/model/CreateNamespaceRequest.cc
	src/model/CreateNamespaceResult.cc
	src/model/CreatePromptRequest.cc
	src/model/CreatePromptResult.cc
	src/model/CreatePromptVersionRequest.cc
	src/model/CreatePromptVersionResult.cc
	src/model/CreateSkillDraftRequest.cc
	src/model/CreateSkillDraftResult.cc
	src/model/DeleteNamespaceRequest.cc
	src/model/DeleteNamespaceResult.cc
	src/model/DeletePromptRequest.cc
	src/model/DeletePromptResult.cc
	src/model/DeleteSkillRequest.cc
	src/model/DeleteSkillResult.cc
	src/model/DownloadSkillVersionViaOssRequest.cc
	src/model/DownloadSkillVersionViaOssResult.cc
	src/model/ForcePublishSkillVersionRequest.cc
	src/model/ForcePublishSkillVersionResult.cc
	src/model/GetNamespaceRequest.cc
	src/model/GetNamespaceResult.cc
	src/model/GetPromptRequest.cc
	src/model/GetPromptResult.cc
	src/model/GetPromptVersionRequest.cc
	src/model/GetPromptVersionResult.cc
	src/model/GetSkillDetailRequest.cc
	src/model/GetSkillDetailResult.cc
	src/model/GetSkillImportFileUrlRequest.cc
	src/model/GetSkillImportFileUrlResult.cc
	src/model/GetSkillVersionDetailRequest.cc
	src/model/GetSkillVersionDetailResult.cc
	src/model/ListNamespacesRequest.cc
	src/model/ListNamespacesResult.cc
	src/model/ListPromptVersionsRequest.cc
	src/model/ListPromptVersionsResult.cc
	src/model/ListPromptsRequest.cc
	src/model/ListPromptsResult.cc
	src/model/ListSkillsRequest.cc
	src/model/ListSkillsResult.cc
	src/model/OfflineSkillRequest.cc
	src/model/OfflineSkillResult.cc
	src/model/OnlineSkillRequest.cc
	src/model/OnlineSkillResult.cc
	src/model/PublishSkillVersionRequest.cc
	src/model/PublishSkillVersionResult.cc
	src/model/RedraftSkillVersionRequest.cc
	src/model/RedraftSkillVersionResult.cc
	src/model/SubmitPromptVersionRequest.cc
	src/model/SubmitPromptVersionResult.cc
	src/model/SubmitSkillVersionRequest.cc
	src/model/SubmitSkillVersionResult.cc
	src/model/UpdateNamespaceRequest.cc
	src/model/UpdateNamespaceResult.cc
	src/model/UpdatePromptRequest.cc
	src/model/UpdatePromptResult.cc
	src/model/UpdatePromptVersionRequest.cc
	src/model/UpdatePromptVersionResult.cc
	src/model/UpdateSkillBizTagsRequest.cc
	src/model/UpdateSkillBizTagsResult.cc
	src/model/UpdateSkillDraftRequest.cc
	src/model/UpdateSkillDraftResult.cc
	src/model/UpdateSkillLabelsRequest.cc
	src/model/UpdateSkillLabelsResult.cc
	src/model/UpdateSkillScopeRequest.cc
	src/model/UpdateSkillScopeResult.cc
	src/model/UploadSkillViaOssRequest.cc
	src/model/UploadSkillViaOssResult.cc )

add_library(airegistry ${LIB_TYPE}
	${airegistry_public_header}
	${airegistry_public_header_model}
	${airegistry_src})

set_target_properties(airegistry
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}airegistry
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(airegistry
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_AIREGISTRY_LIBRARY)
endif()

target_include_directories(airegistry
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(airegistry
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(airegistry
		jsoncpp)
	target_include_directories(airegistry
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(airegistry
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(airegistry
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(airegistry
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(airegistry
		jsoncpp)
endif()

install(FILES ${airegistry_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/airegistry)
install(FILES ${airegistry_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/airegistry/model)
install(TARGETS airegistry
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)