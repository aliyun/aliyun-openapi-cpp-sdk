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

set(codeup_public_header 
	include/alibabacloud/codeup/CodeupClient.h
	include/alibabacloud/codeup/CodeupExport.h )

set(codeup_public_header_model 
	include/alibabacloud/codeup/model/AcceptMergeRequestRequest.h
	include/alibabacloud/codeup/model/AcceptMergeRequestResult.h
	include/alibabacloud/codeup/model/AddGroupMemberRequest.h
	include/alibabacloud/codeup/model/AddGroupMemberResult.h
	include/alibabacloud/codeup/model/AddRepositoryMemberRequest.h
	include/alibabacloud/codeup/model/AddRepositoryMemberResult.h
	include/alibabacloud/codeup/model/AddWebhookRequest.h
	include/alibabacloud/codeup/model/AddWebhookResult.h
	include/alibabacloud/codeup/model/CreateBranchRequest.h
	include/alibabacloud/codeup/model/CreateBranchResult.h
	include/alibabacloud/codeup/model/CreateFileRequest.h
	include/alibabacloud/codeup/model/CreateFileResult.h
	include/alibabacloud/codeup/model/CreateMergeRequestRequest.h
	include/alibabacloud/codeup/model/CreateMergeRequestResult.h
	include/alibabacloud/codeup/model/CreateMergeRequestCommentRequest.h
	include/alibabacloud/codeup/model/CreateMergeRequestCommentResult.h
	include/alibabacloud/codeup/model/CreateRepositoryRequest.h
	include/alibabacloud/codeup/model/CreateRepositoryResult.h
	include/alibabacloud/codeup/model/CreateRepositoryDeployKeyRequest.h
	include/alibabacloud/codeup/model/CreateRepositoryDeployKeyResult.h
	include/alibabacloud/codeup/model/CreateRepositoryGroupRequest.h
	include/alibabacloud/codeup/model/CreateRepositoryGroupResult.h
	include/alibabacloud/codeup/model/CreateRepositoryProtectedBranchRequest.h
	include/alibabacloud/codeup/model/CreateRepositoryProtectedBranchResult.h
	include/alibabacloud/codeup/model/CreateSshKeyRequest.h
	include/alibabacloud/codeup/model/CreateSshKeyResult.h
	include/alibabacloud/codeup/model/CreateTagRequest.h
	include/alibabacloud/codeup/model/CreateTagResult.h
	include/alibabacloud/codeup/model/DeleteBranchRequest.h
	include/alibabacloud/codeup/model/DeleteBranchResult.h
	include/alibabacloud/codeup/model/DeleteFileRequest.h
	include/alibabacloud/codeup/model/DeleteFileResult.h
	include/alibabacloud/codeup/model/DeleteGroupMemberRequest.h
	include/alibabacloud/codeup/model/DeleteGroupMemberResult.h
	include/alibabacloud/codeup/model/DeleteRepositoryRequest.h
	include/alibabacloud/codeup/model/DeleteRepositoryResult.h
	include/alibabacloud/codeup/model/DeleteRepositoryGroupRequest.h
	include/alibabacloud/codeup/model/DeleteRepositoryGroupResult.h
	include/alibabacloud/codeup/model/DeleteRepositoryMemberRequest.h
	include/alibabacloud/codeup/model/DeleteRepositoryMemberResult.h
	include/alibabacloud/codeup/model/DeleteRepositoryProtectedBranchRequest.h
	include/alibabacloud/codeup/model/DeleteRepositoryProtectedBranchResult.h
	include/alibabacloud/codeup/model/DeleteRepositoryTagRequest.h
	include/alibabacloud/codeup/model/DeleteRepositoryTagResult.h
	include/alibabacloud/codeup/model/DeleteRepositoryTagV2Request.h
	include/alibabacloud/codeup/model/DeleteRepositoryTagV2Result.h
	include/alibabacloud/codeup/model/DeleteRepositoryWebhookRequest.h
	include/alibabacloud/codeup/model/DeleteRepositoryWebhookResult.h
	include/alibabacloud/codeup/model/EnableRepositoryDeployKeyRequest.h
	include/alibabacloud/codeup/model/EnableRepositoryDeployKeyResult.h
	include/alibabacloud/codeup/model/GetBranchInfoRequest.h
	include/alibabacloud/codeup/model/GetBranchInfoResult.h
	include/alibabacloud/codeup/model/GetCodeCompletionRequest.h
	include/alibabacloud/codeup/model/GetCodeCompletionResult.h
	include/alibabacloud/codeup/model/GetCodeupOrganizationRequest.h
	include/alibabacloud/codeup/model/GetCodeupOrganizationResult.h
	include/alibabacloud/codeup/model/GetFileBlobsRequest.h
	include/alibabacloud/codeup/model/GetFileBlobsResult.h
	include/alibabacloud/codeup/model/GetGroupDetailRequest.h
	include/alibabacloud/codeup/model/GetGroupDetailResult.h
	include/alibabacloud/codeup/model/GetMergeRequestApproveStatusRequest.h
	include/alibabacloud/codeup/model/GetMergeRequestApproveStatusResult.h
	include/alibabacloud/codeup/model/GetMergeRequestDetailRequest.h
	include/alibabacloud/codeup/model/GetMergeRequestDetailResult.h
	include/alibabacloud/codeup/model/GetMergeRequestSettingRequest.h
	include/alibabacloud/codeup/model/GetMergeRequestSettingResult.h
	include/alibabacloud/codeup/model/GetOrganizationSecurityCenterStatusRequest.h
	include/alibabacloud/codeup/model/GetOrganizationSecurityCenterStatusResult.h
	include/alibabacloud/codeup/model/GetProjectMemberRequest.h
	include/alibabacloud/codeup/model/GetProjectMemberResult.h
	include/alibabacloud/codeup/model/GetRepositoryCommitRequest.h
	include/alibabacloud/codeup/model/GetRepositoryCommitResult.h
	include/alibabacloud/codeup/model/GetRepositoryInfoRequest.h
	include/alibabacloud/codeup/model/GetRepositoryInfoResult.h
	include/alibabacloud/codeup/model/GetRepositoryTagRequest.h
	include/alibabacloud/codeup/model/GetRepositoryTagResult.h
	include/alibabacloud/codeup/model/GetRepositoryTagV2Request.h
	include/alibabacloud/codeup/model/GetRepositoryTagV2Result.h
	include/alibabacloud/codeup/model/GetUserInfoRequest.h
	include/alibabacloud/codeup/model/GetUserInfoResult.h
	include/alibabacloud/codeup/model/ListGroupMemberRequest.h
	include/alibabacloud/codeup/model/ListGroupMemberResult.h
	include/alibabacloud/codeup/model/ListGroupRepositoriesRequest.h
	include/alibabacloud/codeup/model/ListGroupRepositoriesResult.h
	include/alibabacloud/codeup/model/ListGroupsRequest.h
	include/alibabacloud/codeup/model/ListGroupsResult.h
	include/alibabacloud/codeup/model/ListMergeRequestCommentsRequest.h
	include/alibabacloud/codeup/model/ListMergeRequestCommentsResult.h
	include/alibabacloud/codeup/model/ListMergeRequestsRequest.h
	include/alibabacloud/codeup/model/ListMergeRequestsResult.h
	include/alibabacloud/codeup/model/ListOrganizationSecurityScoresRequest.h
	include/alibabacloud/codeup/model/ListOrganizationSecurityScoresResult.h
	include/alibabacloud/codeup/model/ListOrganizationsRequest.h
	include/alibabacloud/codeup/model/ListOrganizationsResult.h
	include/alibabacloud/codeup/model/ListRepositoriesRequest.h
	include/alibabacloud/codeup/model/ListRepositoriesResult.h
	include/alibabacloud/codeup/model/ListRepositoryBranchesRequest.h
	include/alibabacloud/codeup/model/ListRepositoryBranchesResult.h
	include/alibabacloud/codeup/model/ListRepositoryCommitDiffRequest.h
	include/alibabacloud/codeup/model/ListRepositoryCommitDiffResult.h
	include/alibabacloud/codeup/model/ListRepositoryCommitsRequest.h
	include/alibabacloud/codeup/model/ListRepositoryCommitsResult.h
	include/alibabacloud/codeup/model/ListRepositoryMemberRequest.h
	include/alibabacloud/codeup/model/ListRepositoryMemberResult.h
	include/alibabacloud/codeup/model/ListRepositoryMemberWithInheritedRequest.h
	include/alibabacloud/codeup/model/ListRepositoryMemberWithInheritedResult.h
	include/alibabacloud/codeup/model/ListRepositoryTagsRequest.h
	include/alibabacloud/codeup/model/ListRepositoryTagsResult.h
	include/alibabacloud/codeup/model/ListRepositoryTreeRequest.h
	include/alibabacloud/codeup/model/ListRepositoryTreeResult.h
	include/alibabacloud/codeup/model/ListRepositoryWebhookRequest.h
	include/alibabacloud/codeup/model/ListRepositoryWebhookResult.h
	include/alibabacloud/codeup/model/MergeMergeRequestRequest.h
	include/alibabacloud/codeup/model/MergeMergeRequestResult.h
	include/alibabacloud/codeup/model/UpdateFileRequest.h
	include/alibabacloud/codeup/model/UpdateFileResult.h
	include/alibabacloud/codeup/model/UpdateGroupMemberRequest.h
	include/alibabacloud/codeup/model/UpdateGroupMemberResult.h
	include/alibabacloud/codeup/model/UpdateMergeRequestRequest.h
	include/alibabacloud/codeup/model/UpdateMergeRequestResult.h
	include/alibabacloud/codeup/model/UpdateMergeRequestCommentRequest.h
	include/alibabacloud/codeup/model/UpdateMergeRequestCommentResult.h
	include/alibabacloud/codeup/model/UpdateMergeRequestSettingRequest.h
	include/alibabacloud/codeup/model/UpdateMergeRequestSettingResult.h
	include/alibabacloud/codeup/model/UpdateRepositoryRequest.h
	include/alibabacloud/codeup/model/UpdateRepositoryResult.h
	include/alibabacloud/codeup/model/UpdateRepositoryMemberRequest.h
	include/alibabacloud/codeup/model/UpdateRepositoryMemberResult.h )

set(codeup_src 
	src/CodeupClient.cc
	src/model/AcceptMergeRequestRequest.cc
	src/model/AcceptMergeRequestResult.cc
	src/model/AddGroupMemberRequest.cc
	src/model/AddGroupMemberResult.cc
	src/model/AddRepositoryMemberRequest.cc
	src/model/AddRepositoryMemberResult.cc
	src/model/AddWebhookRequest.cc
	src/model/AddWebhookResult.cc
	src/model/CreateBranchRequest.cc
	src/model/CreateBranchResult.cc
	src/model/CreateFileRequest.cc
	src/model/CreateFileResult.cc
	src/model/CreateMergeRequestRequest.cc
	src/model/CreateMergeRequestResult.cc
	src/model/CreateMergeRequestCommentRequest.cc
	src/model/CreateMergeRequestCommentResult.cc
	src/model/CreateRepositoryRequest.cc
	src/model/CreateRepositoryResult.cc
	src/model/CreateRepositoryDeployKeyRequest.cc
	src/model/CreateRepositoryDeployKeyResult.cc
	src/model/CreateRepositoryGroupRequest.cc
	src/model/CreateRepositoryGroupResult.cc
	src/model/CreateRepositoryProtectedBranchRequest.cc
	src/model/CreateRepositoryProtectedBranchResult.cc
	src/model/CreateSshKeyRequest.cc
	src/model/CreateSshKeyResult.cc
	src/model/CreateTagRequest.cc
	src/model/CreateTagResult.cc
	src/model/DeleteBranchRequest.cc
	src/model/DeleteBranchResult.cc
	src/model/DeleteFileRequest.cc
	src/model/DeleteFileResult.cc
	src/model/DeleteGroupMemberRequest.cc
	src/model/DeleteGroupMemberResult.cc
	src/model/DeleteRepositoryRequest.cc
	src/model/DeleteRepositoryResult.cc
	src/model/DeleteRepositoryGroupRequest.cc
	src/model/DeleteRepositoryGroupResult.cc
	src/model/DeleteRepositoryMemberRequest.cc
	src/model/DeleteRepositoryMemberResult.cc
	src/model/DeleteRepositoryProtectedBranchRequest.cc
	src/model/DeleteRepositoryProtectedBranchResult.cc
	src/model/DeleteRepositoryTagRequest.cc
	src/model/DeleteRepositoryTagResult.cc
	src/model/DeleteRepositoryTagV2Request.cc
	src/model/DeleteRepositoryTagV2Result.cc
	src/model/DeleteRepositoryWebhookRequest.cc
	src/model/DeleteRepositoryWebhookResult.cc
	src/model/EnableRepositoryDeployKeyRequest.cc
	src/model/EnableRepositoryDeployKeyResult.cc
	src/model/GetBranchInfoRequest.cc
	src/model/GetBranchInfoResult.cc
	src/model/GetCodeCompletionRequest.cc
	src/model/GetCodeCompletionResult.cc
	src/model/GetCodeupOrganizationRequest.cc
	src/model/GetCodeupOrganizationResult.cc
	src/model/GetFileBlobsRequest.cc
	src/model/GetFileBlobsResult.cc
	src/model/GetGroupDetailRequest.cc
	src/model/GetGroupDetailResult.cc
	src/model/GetMergeRequestApproveStatusRequest.cc
	src/model/GetMergeRequestApproveStatusResult.cc
	src/model/GetMergeRequestDetailRequest.cc
	src/model/GetMergeRequestDetailResult.cc
	src/model/GetMergeRequestSettingRequest.cc
	src/model/GetMergeRequestSettingResult.cc
	src/model/GetOrganizationSecurityCenterStatusRequest.cc
	src/model/GetOrganizationSecurityCenterStatusResult.cc
	src/model/GetProjectMemberRequest.cc
	src/model/GetProjectMemberResult.cc
	src/model/GetRepositoryCommitRequest.cc
	src/model/GetRepositoryCommitResult.cc
	src/model/GetRepositoryInfoRequest.cc
	src/model/GetRepositoryInfoResult.cc
	src/model/GetRepositoryTagRequest.cc
	src/model/GetRepositoryTagResult.cc
	src/model/GetRepositoryTagV2Request.cc
	src/model/GetRepositoryTagV2Result.cc
	src/model/GetUserInfoRequest.cc
	src/model/GetUserInfoResult.cc
	src/model/ListGroupMemberRequest.cc
	src/model/ListGroupMemberResult.cc
	src/model/ListGroupRepositoriesRequest.cc
	src/model/ListGroupRepositoriesResult.cc
	src/model/ListGroupsRequest.cc
	src/model/ListGroupsResult.cc
	src/model/ListMergeRequestCommentsRequest.cc
	src/model/ListMergeRequestCommentsResult.cc
	src/model/ListMergeRequestsRequest.cc
	src/model/ListMergeRequestsResult.cc
	src/model/ListOrganizationSecurityScoresRequest.cc
	src/model/ListOrganizationSecurityScoresResult.cc
	src/model/ListOrganizationsRequest.cc
	src/model/ListOrganizationsResult.cc
	src/model/ListRepositoriesRequest.cc
	src/model/ListRepositoriesResult.cc
	src/model/ListRepositoryBranchesRequest.cc
	src/model/ListRepositoryBranchesResult.cc
	src/model/ListRepositoryCommitDiffRequest.cc
	src/model/ListRepositoryCommitDiffResult.cc
	src/model/ListRepositoryCommitsRequest.cc
	src/model/ListRepositoryCommitsResult.cc
	src/model/ListRepositoryMemberRequest.cc
	src/model/ListRepositoryMemberResult.cc
	src/model/ListRepositoryMemberWithInheritedRequest.cc
	src/model/ListRepositoryMemberWithInheritedResult.cc
	src/model/ListRepositoryTagsRequest.cc
	src/model/ListRepositoryTagsResult.cc
	src/model/ListRepositoryTreeRequest.cc
	src/model/ListRepositoryTreeResult.cc
	src/model/ListRepositoryWebhookRequest.cc
	src/model/ListRepositoryWebhookResult.cc
	src/model/MergeMergeRequestRequest.cc
	src/model/MergeMergeRequestResult.cc
	src/model/UpdateFileRequest.cc
	src/model/UpdateFileResult.cc
	src/model/UpdateGroupMemberRequest.cc
	src/model/UpdateGroupMemberResult.cc
	src/model/UpdateMergeRequestRequest.cc
	src/model/UpdateMergeRequestResult.cc
	src/model/UpdateMergeRequestCommentRequest.cc
	src/model/UpdateMergeRequestCommentResult.cc
	src/model/UpdateMergeRequestSettingRequest.cc
	src/model/UpdateMergeRequestSettingResult.cc
	src/model/UpdateRepositoryRequest.cc
	src/model/UpdateRepositoryResult.cc
	src/model/UpdateRepositoryMemberRequest.cc
	src/model/UpdateRepositoryMemberResult.cc )

add_library(codeup ${LIB_TYPE}
	${codeup_public_header}
	${codeup_public_header_model}
	${codeup_src})

set_target_properties(codeup
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}codeup
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(codeup
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CODEUP_LIBRARY)
endif()

target_include_directories(codeup
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(codeup
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(codeup
		jsoncpp)
	target_include_directories(codeup
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(codeup
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(codeup
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(codeup
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(codeup
		jsoncpp)
endif()

install(FILES ${codeup_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/codeup)
install(FILES ${codeup_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/codeup/model)
install(TARGETS codeup
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)