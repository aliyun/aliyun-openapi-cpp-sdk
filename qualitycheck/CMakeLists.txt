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

set(qualitycheck_public_header 
	include/alibabacloud/qualitycheck/QualitycheckClient.h
	include/alibabacloud/qualitycheck/QualitycheckExport.h )

set(qualitycheck_public_header_model 
	include/alibabacloud/qualitycheck/model/AddBusinessCategoryRequest.h
	include/alibabacloud/qualitycheck/model/AddBusinessCategoryResult.h
	include/alibabacloud/qualitycheck/model/AddRuleCategoryRequest.h
	include/alibabacloud/qualitycheck/model/AddRuleCategoryResult.h
	include/alibabacloud/qualitycheck/model/AddThesaurusForApiRequest.h
	include/alibabacloud/qualitycheck/model/AddThesaurusForApiResult.h
	include/alibabacloud/qualitycheck/model/AssignReviewerRequest.h
	include/alibabacloud/qualitycheck/model/AssignReviewerResult.h
	include/alibabacloud/qualitycheck/model/CreateAsrVocabRequest.h
	include/alibabacloud/qualitycheck/model/CreateAsrVocabResult.h
	include/alibabacloud/qualitycheck/model/CreateSkillGroupConfigRequest.h
	include/alibabacloud/qualitycheck/model/CreateSkillGroupConfigResult.h
	include/alibabacloud/qualitycheck/model/CreateTaskAssignRuleRequest.h
	include/alibabacloud/qualitycheck/model/CreateTaskAssignRuleResult.h
	include/alibabacloud/qualitycheck/model/CreateUserRequest.h
	include/alibabacloud/qualitycheck/model/CreateUserResult.h
	include/alibabacloud/qualitycheck/model/CreateWarningConfigRequest.h
	include/alibabacloud/qualitycheck/model/CreateWarningConfigResult.h
	include/alibabacloud/qualitycheck/model/DelRuleCategoryRequest.h
	include/alibabacloud/qualitycheck/model/DelRuleCategoryResult.h
	include/alibabacloud/qualitycheck/model/DelThesaurusForApiRequest.h
	include/alibabacloud/qualitycheck/model/DelThesaurusForApiResult.h
	include/alibabacloud/qualitycheck/model/DeleteAsrVocabRequest.h
	include/alibabacloud/qualitycheck/model/DeleteAsrVocabResult.h
	include/alibabacloud/qualitycheck/model/DeleteBusinessCategoryRequest.h
	include/alibabacloud/qualitycheck/model/DeleteBusinessCategoryResult.h
	include/alibabacloud/qualitycheck/model/DeleteCustomizationConfigRequest.h
	include/alibabacloud/qualitycheck/model/DeleteCustomizationConfigResult.h
	include/alibabacloud/qualitycheck/model/DeleteDataSetRequest.h
	include/alibabacloud/qualitycheck/model/DeleteDataSetResult.h
	include/alibabacloud/qualitycheck/model/DeletePrecisionTaskRequest.h
	include/alibabacloud/qualitycheck/model/DeletePrecisionTaskResult.h
	include/alibabacloud/qualitycheck/model/DeleteScoreForApiRequest.h
	include/alibabacloud/qualitycheck/model/DeleteScoreForApiResult.h
	include/alibabacloud/qualitycheck/model/DeleteSkillGroupConfigRequest.h
	include/alibabacloud/qualitycheck/model/DeleteSkillGroupConfigResult.h
	include/alibabacloud/qualitycheck/model/DeleteSubScoreForApiRequest.h
	include/alibabacloud/qualitycheck/model/DeleteSubScoreForApiResult.h
	include/alibabacloud/qualitycheck/model/DeleteTaskAssignRuleRequest.h
	include/alibabacloud/qualitycheck/model/DeleteTaskAssignRuleResult.h
	include/alibabacloud/qualitycheck/model/DeleteUserRequest.h
	include/alibabacloud/qualitycheck/model/DeleteUserResult.h
	include/alibabacloud/qualitycheck/model/DeleteWarningConfigRequest.h
	include/alibabacloud/qualitycheck/model/DeleteWarningConfigResult.h
	include/alibabacloud/qualitycheck/model/EditThesaurusForApiRequest.h
	include/alibabacloud/qualitycheck/model/EditThesaurusForApiResult.h
	include/alibabacloud/qualitycheck/model/GetAsrVocabRequest.h
	include/alibabacloud/qualitycheck/model/GetAsrVocabResult.h
	include/alibabacloud/qualitycheck/model/GetBusinessCategoryListRequest.h
	include/alibabacloud/qualitycheck/model/GetBusinessCategoryListResult.h
	include/alibabacloud/qualitycheck/model/GetCustomizationConfigListRequest.h
	include/alibabacloud/qualitycheck/model/GetCustomizationConfigListResult.h
	include/alibabacloud/qualitycheck/model/GetHitResultRequest.h
	include/alibabacloud/qualitycheck/model/GetHitResultResult.h
	include/alibabacloud/qualitycheck/model/GetNextResultToVerifyRequest.h
	include/alibabacloud/qualitycheck/model/GetNextResultToVerifyResult.h
	include/alibabacloud/qualitycheck/model/GetPrecisionTaskRequest.h
	include/alibabacloud/qualitycheck/model/GetPrecisionTaskResult.h
	include/alibabacloud/qualitycheck/model/GetResultRequest.h
	include/alibabacloud/qualitycheck/model/GetResultResult.h
	include/alibabacloud/qualitycheck/model/GetResultCallbackRequest.h
	include/alibabacloud/qualitycheck/model/GetResultCallbackResult.h
	include/alibabacloud/qualitycheck/model/GetResultToReviewRequest.h
	include/alibabacloud/qualitycheck/model/GetResultToReviewResult.h
	include/alibabacloud/qualitycheck/model/GetRuleRequest.h
	include/alibabacloud/qualitycheck/model/GetRuleResult.h
	include/alibabacloud/qualitycheck/model/GetRuleCategoryRequest.h
	include/alibabacloud/qualitycheck/model/GetRuleCategoryResult.h
	include/alibabacloud/qualitycheck/model/GetRuleDetailRequest.h
	include/alibabacloud/qualitycheck/model/GetRuleDetailResult.h
	include/alibabacloud/qualitycheck/model/GetScoreInfoRequest.h
	include/alibabacloud/qualitycheck/model/GetScoreInfoResult.h
	include/alibabacloud/qualitycheck/model/GetSkillGroupConfigRequest.h
	include/alibabacloud/qualitycheck/model/GetSkillGroupConfigResult.h
	include/alibabacloud/qualitycheck/model/GetSyncResultRequest.h
	include/alibabacloud/qualitycheck/model/GetSyncResultResult.h
	include/alibabacloud/qualitycheck/model/GetThesaurusBySynonymForApiRequest.h
	include/alibabacloud/qualitycheck/model/GetThesaurusBySynonymForApiResult.h
	include/alibabacloud/qualitycheck/model/HandleComplaintRequest.h
	include/alibabacloud/qualitycheck/model/HandleComplaintResult.h
	include/alibabacloud/qualitycheck/model/InsertScoreForApiRequest.h
	include/alibabacloud/qualitycheck/model/InsertScoreForApiResult.h
	include/alibabacloud/qualitycheck/model/InsertSubScoreForApiRequest.h
	include/alibabacloud/qualitycheck/model/InsertSubScoreForApiResult.h
	include/alibabacloud/qualitycheck/model/InvalidRuleRequest.h
	include/alibabacloud/qualitycheck/model/InvalidRuleResult.h
	include/alibabacloud/qualitycheck/model/ListAsrVocabRequest.h
	include/alibabacloud/qualitycheck/model/ListAsrVocabResult.h
	include/alibabacloud/qualitycheck/model/ListBusinessSpacesRequest.h
	include/alibabacloud/qualitycheck/model/ListBusinessSpacesResult.h
	include/alibabacloud/qualitycheck/model/ListHotWordsTasksRequest.h
	include/alibabacloud/qualitycheck/model/ListHotWordsTasksResult.h
	include/alibabacloud/qualitycheck/model/ListPrecisionTaskRequest.h
	include/alibabacloud/qualitycheck/model/ListPrecisionTaskResult.h
	include/alibabacloud/qualitycheck/model/ListQualityCheckSchemeRequest.h
	include/alibabacloud/qualitycheck/model/ListQualityCheckSchemeResult.h
	include/alibabacloud/qualitycheck/model/ListRolesRequest.h
	include/alibabacloud/qualitycheck/model/ListRolesResult.h
	include/alibabacloud/qualitycheck/model/ListRulesRequest.h
	include/alibabacloud/qualitycheck/model/ListRulesResult.h
	include/alibabacloud/qualitycheck/model/ListSkillGroupConfigRequest.h
	include/alibabacloud/qualitycheck/model/ListSkillGroupConfigResult.h
	include/alibabacloud/qualitycheck/model/ListTaskAssignRulesRequest.h
	include/alibabacloud/qualitycheck/model/ListTaskAssignRulesResult.h
	include/alibabacloud/qualitycheck/model/ListUsersRequest.h
	include/alibabacloud/qualitycheck/model/ListUsersResult.h
	include/alibabacloud/qualitycheck/model/ListWarningConfigRequest.h
	include/alibabacloud/qualitycheck/model/ListWarningConfigResult.h
	include/alibabacloud/qualitycheck/model/RestartAsrTaskRequest.h
	include/alibabacloud/qualitycheck/model/RestartAsrTaskResult.h
	include/alibabacloud/qualitycheck/model/SaveConfigDataSetRequest.h
	include/alibabacloud/qualitycheck/model/SaveConfigDataSetResult.h
	include/alibabacloud/qualitycheck/model/SubmitComplaintRequest.h
	include/alibabacloud/qualitycheck/model/SubmitComplaintResult.h
	include/alibabacloud/qualitycheck/model/SubmitPrecisionTaskRequest.h
	include/alibabacloud/qualitycheck/model/SubmitPrecisionTaskResult.h
	include/alibabacloud/qualitycheck/model/SubmitQualityCheckTaskRequest.h
	include/alibabacloud/qualitycheck/model/SubmitQualityCheckTaskResult.h
	include/alibabacloud/qualitycheck/model/SubmitReviewInfoRequest.h
	include/alibabacloud/qualitycheck/model/SubmitReviewInfoResult.h
	include/alibabacloud/qualitycheck/model/SyncQualityCheckRequest.h
	include/alibabacloud/qualitycheck/model/SyncQualityCheckResult.h
	include/alibabacloud/qualitycheck/model/UpdateAsrVocabRequest.h
	include/alibabacloud/qualitycheck/model/UpdateAsrVocabResult.h
	include/alibabacloud/qualitycheck/model/UpdateQualityCheckDataRequest.h
	include/alibabacloud/qualitycheck/model/UpdateQualityCheckDataResult.h
	include/alibabacloud/qualitycheck/model/UpdateRuleRequest.h
	include/alibabacloud/qualitycheck/model/UpdateRuleResult.h
	include/alibabacloud/qualitycheck/model/UpdateScoreForApiRequest.h
	include/alibabacloud/qualitycheck/model/UpdateScoreForApiResult.h
	include/alibabacloud/qualitycheck/model/UpdateSkillGroupConfigRequest.h
	include/alibabacloud/qualitycheck/model/UpdateSkillGroupConfigResult.h
	include/alibabacloud/qualitycheck/model/UpdateSubScoreForApiRequest.h
	include/alibabacloud/qualitycheck/model/UpdateSubScoreForApiResult.h
	include/alibabacloud/qualitycheck/model/UpdateSyncQualityCheckDataRequest.h
	include/alibabacloud/qualitycheck/model/UpdateSyncQualityCheckDataResult.h
	include/alibabacloud/qualitycheck/model/UpdateTaskAssignRuleRequest.h
	include/alibabacloud/qualitycheck/model/UpdateTaskAssignRuleResult.h
	include/alibabacloud/qualitycheck/model/UpdateUserRequest.h
	include/alibabacloud/qualitycheck/model/UpdateUserResult.h
	include/alibabacloud/qualitycheck/model/UpdateUserConfigRequest.h
	include/alibabacloud/qualitycheck/model/UpdateUserConfigResult.h
	include/alibabacloud/qualitycheck/model/UpdateWarningConfigRequest.h
	include/alibabacloud/qualitycheck/model/UpdateWarningConfigResult.h
	include/alibabacloud/qualitycheck/model/UploadAudioDataRequest.h
	include/alibabacloud/qualitycheck/model/UploadAudioDataResult.h
	include/alibabacloud/qualitycheck/model/UploadDataRequest.h
	include/alibabacloud/qualitycheck/model/UploadDataResult.h
	include/alibabacloud/qualitycheck/model/UploadDataSyncRequest.h
	include/alibabacloud/qualitycheck/model/UploadDataSyncResult.h
	include/alibabacloud/qualitycheck/model/UploadRuleRequest.h
	include/alibabacloud/qualitycheck/model/UploadRuleResult.h
	include/alibabacloud/qualitycheck/model/VerifyFileRequest.h
	include/alibabacloud/qualitycheck/model/VerifyFileResult.h
	include/alibabacloud/qualitycheck/model/VerifySentenceRequest.h
	include/alibabacloud/qualitycheck/model/VerifySentenceResult.h )

set(qualitycheck_src 
	src/QualitycheckClient.cc
	src/model/AddBusinessCategoryRequest.cc
	src/model/AddBusinessCategoryResult.cc
	src/model/AddRuleCategoryRequest.cc
	src/model/AddRuleCategoryResult.cc
	src/model/AddThesaurusForApiRequest.cc
	src/model/AddThesaurusForApiResult.cc
	src/model/AssignReviewerRequest.cc
	src/model/AssignReviewerResult.cc
	src/model/CreateAsrVocabRequest.cc
	src/model/CreateAsrVocabResult.cc
	src/model/CreateSkillGroupConfigRequest.cc
	src/model/CreateSkillGroupConfigResult.cc
	src/model/CreateTaskAssignRuleRequest.cc
	src/model/CreateTaskAssignRuleResult.cc
	src/model/CreateUserRequest.cc
	src/model/CreateUserResult.cc
	src/model/CreateWarningConfigRequest.cc
	src/model/CreateWarningConfigResult.cc
	src/model/DelRuleCategoryRequest.cc
	src/model/DelRuleCategoryResult.cc
	src/model/DelThesaurusForApiRequest.cc
	src/model/DelThesaurusForApiResult.cc
	src/model/DeleteAsrVocabRequest.cc
	src/model/DeleteAsrVocabResult.cc
	src/model/DeleteBusinessCategoryRequest.cc
	src/model/DeleteBusinessCategoryResult.cc
	src/model/DeleteCustomizationConfigRequest.cc
	src/model/DeleteCustomizationConfigResult.cc
	src/model/DeleteDataSetRequest.cc
	src/model/DeleteDataSetResult.cc
	src/model/DeletePrecisionTaskRequest.cc
	src/model/DeletePrecisionTaskResult.cc
	src/model/DeleteScoreForApiRequest.cc
	src/model/DeleteScoreForApiResult.cc
	src/model/DeleteSkillGroupConfigRequest.cc
	src/model/DeleteSkillGroupConfigResult.cc
	src/model/DeleteSubScoreForApiRequest.cc
	src/model/DeleteSubScoreForApiResult.cc
	src/model/DeleteTaskAssignRuleRequest.cc
	src/model/DeleteTaskAssignRuleResult.cc
	src/model/DeleteUserRequest.cc
	src/model/DeleteUserResult.cc
	src/model/DeleteWarningConfigRequest.cc
	src/model/DeleteWarningConfigResult.cc
	src/model/EditThesaurusForApiRequest.cc
	src/model/EditThesaurusForApiResult.cc
	src/model/GetAsrVocabRequest.cc
	src/model/GetAsrVocabResult.cc
	src/model/GetBusinessCategoryListRequest.cc
	src/model/GetBusinessCategoryListResult.cc
	src/model/GetCustomizationConfigListRequest.cc
	src/model/GetCustomizationConfigListResult.cc
	src/model/GetHitResultRequest.cc
	src/model/GetHitResultResult.cc
	src/model/GetNextResultToVerifyRequest.cc
	src/model/GetNextResultToVerifyResult.cc
	src/model/GetPrecisionTaskRequest.cc
	src/model/GetPrecisionTaskResult.cc
	src/model/GetResultRequest.cc
	src/model/GetResultResult.cc
	src/model/GetResultCallbackRequest.cc
	src/model/GetResultCallbackResult.cc
	src/model/GetResultToReviewRequest.cc
	src/model/GetResultToReviewResult.cc
	src/model/GetRuleRequest.cc
	src/model/GetRuleResult.cc
	src/model/GetRuleCategoryRequest.cc
	src/model/GetRuleCategoryResult.cc
	src/model/GetRuleDetailRequest.cc
	src/model/GetRuleDetailResult.cc
	src/model/GetScoreInfoRequest.cc
	src/model/GetScoreInfoResult.cc
	src/model/GetSkillGroupConfigRequest.cc
	src/model/GetSkillGroupConfigResult.cc
	src/model/GetSyncResultRequest.cc
	src/model/GetSyncResultResult.cc
	src/model/GetThesaurusBySynonymForApiRequest.cc
	src/model/GetThesaurusBySynonymForApiResult.cc
	src/model/HandleComplaintRequest.cc
	src/model/HandleComplaintResult.cc
	src/model/InsertScoreForApiRequest.cc
	src/model/InsertScoreForApiResult.cc
	src/model/InsertSubScoreForApiRequest.cc
	src/model/InsertSubScoreForApiResult.cc
	src/model/InvalidRuleRequest.cc
	src/model/InvalidRuleResult.cc
	src/model/ListAsrVocabRequest.cc
	src/model/ListAsrVocabResult.cc
	src/model/ListBusinessSpacesRequest.cc
	src/model/ListBusinessSpacesResult.cc
	src/model/ListHotWordsTasksRequest.cc
	src/model/ListHotWordsTasksResult.cc
	src/model/ListPrecisionTaskRequest.cc
	src/model/ListPrecisionTaskResult.cc
	src/model/ListQualityCheckSchemeRequest.cc
	src/model/ListQualityCheckSchemeResult.cc
	src/model/ListRolesRequest.cc
	src/model/ListRolesResult.cc
	src/model/ListRulesRequest.cc
	src/model/ListRulesResult.cc
	src/model/ListSkillGroupConfigRequest.cc
	src/model/ListSkillGroupConfigResult.cc
	src/model/ListTaskAssignRulesRequest.cc
	src/model/ListTaskAssignRulesResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/ListWarningConfigRequest.cc
	src/model/ListWarningConfigResult.cc
	src/model/RestartAsrTaskRequest.cc
	src/model/RestartAsrTaskResult.cc
	src/model/SaveConfigDataSetRequest.cc
	src/model/SaveConfigDataSetResult.cc
	src/model/SubmitComplaintRequest.cc
	src/model/SubmitComplaintResult.cc
	src/model/SubmitPrecisionTaskRequest.cc
	src/model/SubmitPrecisionTaskResult.cc
	src/model/SubmitQualityCheckTaskRequest.cc
	src/model/SubmitQualityCheckTaskResult.cc
	src/model/SubmitReviewInfoRequest.cc
	src/model/SubmitReviewInfoResult.cc
	src/model/SyncQualityCheckRequest.cc
	src/model/SyncQualityCheckResult.cc
	src/model/UpdateAsrVocabRequest.cc
	src/model/UpdateAsrVocabResult.cc
	src/model/UpdateQualityCheckDataRequest.cc
	src/model/UpdateQualityCheckDataResult.cc
	src/model/UpdateRuleRequest.cc
	src/model/UpdateRuleResult.cc
	src/model/UpdateScoreForApiRequest.cc
	src/model/UpdateScoreForApiResult.cc
	src/model/UpdateSkillGroupConfigRequest.cc
	src/model/UpdateSkillGroupConfigResult.cc
	src/model/UpdateSubScoreForApiRequest.cc
	src/model/UpdateSubScoreForApiResult.cc
	src/model/UpdateSyncQualityCheckDataRequest.cc
	src/model/UpdateSyncQualityCheckDataResult.cc
	src/model/UpdateTaskAssignRuleRequest.cc
	src/model/UpdateTaskAssignRuleResult.cc
	src/model/UpdateUserRequest.cc
	src/model/UpdateUserResult.cc
	src/model/UpdateUserConfigRequest.cc
	src/model/UpdateUserConfigResult.cc
	src/model/UpdateWarningConfigRequest.cc
	src/model/UpdateWarningConfigResult.cc
	src/model/UploadAudioDataRequest.cc
	src/model/UploadAudioDataResult.cc
	src/model/UploadDataRequest.cc
	src/model/UploadDataResult.cc
	src/model/UploadDataSyncRequest.cc
	src/model/UploadDataSyncResult.cc
	src/model/UploadRuleRequest.cc
	src/model/UploadRuleResult.cc
	src/model/VerifyFileRequest.cc
	src/model/VerifyFileResult.cc
	src/model/VerifySentenceRequest.cc
	src/model/VerifySentenceResult.cc )

add_library(qualitycheck ${LIB_TYPE}
	${qualitycheck_public_header}
	${qualitycheck_public_header_model}
	${qualitycheck_src})

set_target_properties(qualitycheck
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}qualitycheck
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(qualitycheck
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_QUALITYCHECK_LIBRARY)
endif()

target_include_directories(qualitycheck
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(qualitycheck
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(qualitycheck
		jsoncpp)
	target_include_directories(qualitycheck
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(qualitycheck
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(qualitycheck
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(qualitycheck
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(qualitycheck
		jsoncpp)
endif()

install(FILES ${qualitycheck_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/qualitycheck)
install(FILES ${qualitycheck_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/qualitycheck/model)
install(TARGETS qualitycheck
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)