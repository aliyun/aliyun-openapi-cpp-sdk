/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_QUALITYCHECK_QUALITYCHECKCLIENT_H_
#define ALIBABACLOUD_QUALITYCHECK_QUALITYCHECKCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "QualitycheckExport.h"
#include "model/AddBusinessCategoryRequest.h"
#include "model/AddBusinessCategoryResult.h"
#include "model/AddRuleCategoryRequest.h"
#include "model/AddRuleCategoryResult.h"
#include "model/AddThesaurusForApiRequest.h"
#include "model/AddThesaurusForApiResult.h"
#include "model/AssignReviewerRequest.h"
#include "model/AssignReviewerResult.h"
#include "model/CreateAsrVocabRequest.h"
#include "model/CreateAsrVocabResult.h"
#include "model/CreateSkillGroupConfigRequest.h"
#include "model/CreateSkillGroupConfigResult.h"
#include "model/CreateTaskAssignRuleRequest.h"
#include "model/CreateTaskAssignRuleResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/CreateWarningConfigRequest.h"
#include "model/CreateWarningConfigResult.h"
#include "model/DelRuleCategoryRequest.h"
#include "model/DelRuleCategoryResult.h"
#include "model/DelThesaurusForApiRequest.h"
#include "model/DelThesaurusForApiResult.h"
#include "model/DeleteAsrVocabRequest.h"
#include "model/DeleteAsrVocabResult.h"
#include "model/DeleteBusinessCategoryRequest.h"
#include "model/DeleteBusinessCategoryResult.h"
#include "model/DeleteCustomizationConfigRequest.h"
#include "model/DeleteCustomizationConfigResult.h"
#include "model/DeleteDataSetRequest.h"
#include "model/DeleteDataSetResult.h"
#include "model/DeletePrecisionTaskRequest.h"
#include "model/DeletePrecisionTaskResult.h"
#include "model/DeleteScoreForApiRequest.h"
#include "model/DeleteScoreForApiResult.h"
#include "model/DeleteSkillGroupConfigRequest.h"
#include "model/DeleteSkillGroupConfigResult.h"
#include "model/DeleteSubScoreForApiRequest.h"
#include "model/DeleteSubScoreForApiResult.h"
#include "model/DeleteTaskAssignRuleRequest.h"
#include "model/DeleteTaskAssignRuleResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/DeleteWarningConfigRequest.h"
#include "model/DeleteWarningConfigResult.h"
#include "model/EditThesaurusForApiRequest.h"
#include "model/EditThesaurusForApiResult.h"
#include "model/GetAsrVocabRequest.h"
#include "model/GetAsrVocabResult.h"
#include "model/GetBusinessCategoryListRequest.h"
#include "model/GetBusinessCategoryListResult.h"
#include "model/GetCustomizationConfigListRequest.h"
#include "model/GetCustomizationConfigListResult.h"
#include "model/GetHitResultRequest.h"
#include "model/GetHitResultResult.h"
#include "model/GetNextResultToVerifyRequest.h"
#include "model/GetNextResultToVerifyResult.h"
#include "model/GetPrecisionTaskRequest.h"
#include "model/GetPrecisionTaskResult.h"
#include "model/GetResultRequest.h"
#include "model/GetResultResult.h"
#include "model/GetResultCallbackRequest.h"
#include "model/GetResultCallbackResult.h"
#include "model/GetResultToReviewRequest.h"
#include "model/GetResultToReviewResult.h"
#include "model/GetRuleRequest.h"
#include "model/GetRuleResult.h"
#include "model/GetRuleCategoryRequest.h"
#include "model/GetRuleCategoryResult.h"
#include "model/GetRuleDetailRequest.h"
#include "model/GetRuleDetailResult.h"
#include "model/GetScoreInfoRequest.h"
#include "model/GetScoreInfoResult.h"
#include "model/GetSkillGroupConfigRequest.h"
#include "model/GetSkillGroupConfigResult.h"
#include "model/GetSyncResultRequest.h"
#include "model/GetSyncResultResult.h"
#include "model/GetThesaurusBySynonymForApiRequest.h"
#include "model/GetThesaurusBySynonymForApiResult.h"
#include "model/HandleComplaintRequest.h"
#include "model/HandleComplaintResult.h"
#include "model/InsertScoreForApiRequest.h"
#include "model/InsertScoreForApiResult.h"
#include "model/InsertSubScoreForApiRequest.h"
#include "model/InsertSubScoreForApiResult.h"
#include "model/InvalidRuleRequest.h"
#include "model/InvalidRuleResult.h"
#include "model/ListAsrVocabRequest.h"
#include "model/ListAsrVocabResult.h"
#include "model/ListBusinessSpacesRequest.h"
#include "model/ListBusinessSpacesResult.h"
#include "model/ListHotWordsTasksRequest.h"
#include "model/ListHotWordsTasksResult.h"
#include "model/ListPrecisionTaskRequest.h"
#include "model/ListPrecisionTaskResult.h"
#include "model/ListQualityCheckSchemeRequest.h"
#include "model/ListQualityCheckSchemeResult.h"
#include "model/ListRolesRequest.h"
#include "model/ListRolesResult.h"
#include "model/ListRulesRequest.h"
#include "model/ListRulesResult.h"
#include "model/ListSkillGroupConfigRequest.h"
#include "model/ListSkillGroupConfigResult.h"
#include "model/ListTaskAssignRulesRequest.h"
#include "model/ListTaskAssignRulesResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/ListWarningConfigRequest.h"
#include "model/ListWarningConfigResult.h"
#include "model/RestartAsrTaskRequest.h"
#include "model/RestartAsrTaskResult.h"
#include "model/SaveConfigDataSetRequest.h"
#include "model/SaveConfigDataSetResult.h"
#include "model/SubmitComplaintRequest.h"
#include "model/SubmitComplaintResult.h"
#include "model/SubmitPrecisionTaskRequest.h"
#include "model/SubmitPrecisionTaskResult.h"
#include "model/SubmitQualityCheckTaskRequest.h"
#include "model/SubmitQualityCheckTaskResult.h"
#include "model/SubmitReviewInfoRequest.h"
#include "model/SubmitReviewInfoResult.h"
#include "model/SyncQualityCheckRequest.h"
#include "model/SyncQualityCheckResult.h"
#include "model/UpdateAsrVocabRequest.h"
#include "model/UpdateAsrVocabResult.h"
#include "model/UpdateQualityCheckDataRequest.h"
#include "model/UpdateQualityCheckDataResult.h"
#include "model/UpdateRuleRequest.h"
#include "model/UpdateRuleResult.h"
#include "model/UpdateScoreForApiRequest.h"
#include "model/UpdateScoreForApiResult.h"
#include "model/UpdateSkillGroupConfigRequest.h"
#include "model/UpdateSkillGroupConfigResult.h"
#include "model/UpdateSubScoreForApiRequest.h"
#include "model/UpdateSubScoreForApiResult.h"
#include "model/UpdateSyncQualityCheckDataRequest.h"
#include "model/UpdateSyncQualityCheckDataResult.h"
#include "model/UpdateTaskAssignRuleRequest.h"
#include "model/UpdateTaskAssignRuleResult.h"
#include "model/UpdateUserRequest.h"
#include "model/UpdateUserResult.h"
#include "model/UpdateUserConfigRequest.h"
#include "model/UpdateUserConfigResult.h"
#include "model/UpdateWarningConfigRequest.h"
#include "model/UpdateWarningConfigResult.h"
#include "model/UploadAudioDataRequest.h"
#include "model/UploadAudioDataResult.h"
#include "model/UploadDataRequest.h"
#include "model/UploadDataResult.h"
#include "model/UploadDataSyncRequest.h"
#include "model/UploadDataSyncResult.h"
#include "model/UploadRuleRequest.h"
#include "model/UploadRuleResult.h"
#include "model/VerifyFileRequest.h"
#include "model/VerifyFileResult.h"
#include "model/VerifySentenceRequest.h"
#include "model/VerifySentenceResult.h"


namespace AlibabaCloud
{
	namespace Qualitycheck
	{
		class ALIBABACLOUD_QUALITYCHECK_EXPORT QualitycheckClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddBusinessCategoryResult> AddBusinessCategoryOutcome;
			typedef std::future<AddBusinessCategoryOutcome> AddBusinessCategoryOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::AddBusinessCategoryRequest&, const AddBusinessCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBusinessCategoryAsyncHandler;
			typedef Outcome<Error, Model::AddRuleCategoryResult> AddRuleCategoryOutcome;
			typedef std::future<AddRuleCategoryOutcome> AddRuleCategoryOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::AddRuleCategoryRequest&, const AddRuleCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRuleCategoryAsyncHandler;
			typedef Outcome<Error, Model::AddThesaurusForApiResult> AddThesaurusForApiOutcome;
			typedef std::future<AddThesaurusForApiOutcome> AddThesaurusForApiOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::AddThesaurusForApiRequest&, const AddThesaurusForApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddThesaurusForApiAsyncHandler;
			typedef Outcome<Error, Model::AssignReviewerResult> AssignReviewerOutcome;
			typedef std::future<AssignReviewerOutcome> AssignReviewerOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::AssignReviewerRequest&, const AssignReviewerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignReviewerAsyncHandler;
			typedef Outcome<Error, Model::CreateAsrVocabResult> CreateAsrVocabOutcome;
			typedef std::future<CreateAsrVocabOutcome> CreateAsrVocabOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::CreateAsrVocabRequest&, const CreateAsrVocabOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAsrVocabAsyncHandler;
			typedef Outcome<Error, Model::CreateSkillGroupConfigResult> CreateSkillGroupConfigOutcome;
			typedef std::future<CreateSkillGroupConfigOutcome> CreateSkillGroupConfigOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::CreateSkillGroupConfigRequest&, const CreateSkillGroupConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillGroupConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateTaskAssignRuleResult> CreateTaskAssignRuleOutcome;
			typedef std::future<CreateTaskAssignRuleOutcome> CreateTaskAssignRuleOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::CreateTaskAssignRuleRequest&, const CreateTaskAssignRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAssignRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::CreateWarningConfigResult> CreateWarningConfigOutcome;
			typedef std::future<CreateWarningConfigOutcome> CreateWarningConfigOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::CreateWarningConfigRequest&, const CreateWarningConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWarningConfigAsyncHandler;
			typedef Outcome<Error, Model::DelRuleCategoryResult> DelRuleCategoryOutcome;
			typedef std::future<DelRuleCategoryOutcome> DelRuleCategoryOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DelRuleCategoryRequest&, const DelRuleCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DelRuleCategoryAsyncHandler;
			typedef Outcome<Error, Model::DelThesaurusForApiResult> DelThesaurusForApiOutcome;
			typedef std::future<DelThesaurusForApiOutcome> DelThesaurusForApiOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DelThesaurusForApiRequest&, const DelThesaurusForApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DelThesaurusForApiAsyncHandler;
			typedef Outcome<Error, Model::DeleteAsrVocabResult> DeleteAsrVocabOutcome;
			typedef std::future<DeleteAsrVocabOutcome> DeleteAsrVocabOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DeleteAsrVocabRequest&, const DeleteAsrVocabOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAsrVocabAsyncHandler;
			typedef Outcome<Error, Model::DeleteBusinessCategoryResult> DeleteBusinessCategoryOutcome;
			typedef std::future<DeleteBusinessCategoryOutcome> DeleteBusinessCategoryOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DeleteBusinessCategoryRequest&, const DeleteBusinessCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBusinessCategoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomizationConfigResult> DeleteCustomizationConfigOutcome;
			typedef std::future<DeleteCustomizationConfigOutcome> DeleteCustomizationConfigOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DeleteCustomizationConfigRequest&, const DeleteCustomizationConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomizationConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataSetResult> DeleteDataSetOutcome;
			typedef std::future<DeleteDataSetOutcome> DeleteDataSetOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DeleteDataSetRequest&, const DeleteDataSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSetAsyncHandler;
			typedef Outcome<Error, Model::DeletePrecisionTaskResult> DeletePrecisionTaskOutcome;
			typedef std::future<DeletePrecisionTaskOutcome> DeletePrecisionTaskOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DeletePrecisionTaskRequest&, const DeletePrecisionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrecisionTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteScoreForApiResult> DeleteScoreForApiOutcome;
			typedef std::future<DeleteScoreForApiOutcome> DeleteScoreForApiOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DeleteScoreForApiRequest&, const DeleteScoreForApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScoreForApiAsyncHandler;
			typedef Outcome<Error, Model::DeleteSkillGroupConfigResult> DeleteSkillGroupConfigOutcome;
			typedef std::future<DeleteSkillGroupConfigOutcome> DeleteSkillGroupConfigOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DeleteSkillGroupConfigRequest&, const DeleteSkillGroupConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSkillGroupConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteSubScoreForApiResult> DeleteSubScoreForApiOutcome;
			typedef std::future<DeleteSubScoreForApiOutcome> DeleteSubScoreForApiOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DeleteSubScoreForApiRequest&, const DeleteSubScoreForApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubScoreForApiAsyncHandler;
			typedef Outcome<Error, Model::DeleteTaskAssignRuleResult> DeleteTaskAssignRuleOutcome;
			typedef std::future<DeleteTaskAssignRuleOutcome> DeleteTaskAssignRuleOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DeleteTaskAssignRuleRequest&, const DeleteTaskAssignRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAssignRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteWarningConfigResult> DeleteWarningConfigOutcome;
			typedef std::future<DeleteWarningConfigOutcome> DeleteWarningConfigOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::DeleteWarningConfigRequest&, const DeleteWarningConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWarningConfigAsyncHandler;
			typedef Outcome<Error, Model::EditThesaurusForApiResult> EditThesaurusForApiOutcome;
			typedef std::future<EditThesaurusForApiOutcome> EditThesaurusForApiOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::EditThesaurusForApiRequest&, const EditThesaurusForApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EditThesaurusForApiAsyncHandler;
			typedef Outcome<Error, Model::GetAsrVocabResult> GetAsrVocabOutcome;
			typedef std::future<GetAsrVocabOutcome> GetAsrVocabOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetAsrVocabRequest&, const GetAsrVocabOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsrVocabAsyncHandler;
			typedef Outcome<Error, Model::GetBusinessCategoryListResult> GetBusinessCategoryListOutcome;
			typedef std::future<GetBusinessCategoryListOutcome> GetBusinessCategoryListOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetBusinessCategoryListRequest&, const GetBusinessCategoryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBusinessCategoryListAsyncHandler;
			typedef Outcome<Error, Model::GetCustomizationConfigListResult> GetCustomizationConfigListOutcome;
			typedef std::future<GetCustomizationConfigListOutcome> GetCustomizationConfigListOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetCustomizationConfigListRequest&, const GetCustomizationConfigListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomizationConfigListAsyncHandler;
			typedef Outcome<Error, Model::GetHitResultResult> GetHitResultOutcome;
			typedef std::future<GetHitResultOutcome> GetHitResultOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetHitResultRequest&, const GetHitResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHitResultAsyncHandler;
			typedef Outcome<Error, Model::GetNextResultToVerifyResult> GetNextResultToVerifyOutcome;
			typedef std::future<GetNextResultToVerifyOutcome> GetNextResultToVerifyOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetNextResultToVerifyRequest&, const GetNextResultToVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNextResultToVerifyAsyncHandler;
			typedef Outcome<Error, Model::GetPrecisionTaskResult> GetPrecisionTaskOutcome;
			typedef std::future<GetPrecisionTaskOutcome> GetPrecisionTaskOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetPrecisionTaskRequest&, const GetPrecisionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPrecisionTaskAsyncHandler;
			typedef Outcome<Error, Model::GetResultResult> GetResultOutcome;
			typedef std::future<GetResultOutcome> GetResultOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetResultRequest&, const GetResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResultAsyncHandler;
			typedef Outcome<Error, Model::GetResultCallbackResult> GetResultCallbackOutcome;
			typedef std::future<GetResultCallbackOutcome> GetResultCallbackOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetResultCallbackRequest&, const GetResultCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResultCallbackAsyncHandler;
			typedef Outcome<Error, Model::GetResultToReviewResult> GetResultToReviewOutcome;
			typedef std::future<GetResultToReviewOutcome> GetResultToReviewOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetResultToReviewRequest&, const GetResultToReviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResultToReviewAsyncHandler;
			typedef Outcome<Error, Model::GetRuleResult> GetRuleOutcome;
			typedef std::future<GetRuleOutcome> GetRuleOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetRuleRequest&, const GetRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRuleAsyncHandler;
			typedef Outcome<Error, Model::GetRuleCategoryResult> GetRuleCategoryOutcome;
			typedef std::future<GetRuleCategoryOutcome> GetRuleCategoryOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetRuleCategoryRequest&, const GetRuleCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRuleCategoryAsyncHandler;
			typedef Outcome<Error, Model::GetRuleDetailResult> GetRuleDetailOutcome;
			typedef std::future<GetRuleDetailOutcome> GetRuleDetailOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetRuleDetailRequest&, const GetRuleDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRuleDetailAsyncHandler;
			typedef Outcome<Error, Model::GetScoreInfoResult> GetScoreInfoOutcome;
			typedef std::future<GetScoreInfoOutcome> GetScoreInfoOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetScoreInfoRequest&, const GetScoreInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetScoreInfoAsyncHandler;
			typedef Outcome<Error, Model::GetSkillGroupConfigResult> GetSkillGroupConfigOutcome;
			typedef std::future<GetSkillGroupConfigOutcome> GetSkillGroupConfigOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetSkillGroupConfigRequest&, const GetSkillGroupConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSkillGroupConfigAsyncHandler;
			typedef Outcome<Error, Model::GetSyncResultResult> GetSyncResultOutcome;
			typedef std::future<GetSyncResultOutcome> GetSyncResultOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetSyncResultRequest&, const GetSyncResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSyncResultAsyncHandler;
			typedef Outcome<Error, Model::GetThesaurusBySynonymForApiResult> GetThesaurusBySynonymForApiOutcome;
			typedef std::future<GetThesaurusBySynonymForApiOutcome> GetThesaurusBySynonymForApiOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::GetThesaurusBySynonymForApiRequest&, const GetThesaurusBySynonymForApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetThesaurusBySynonymForApiAsyncHandler;
			typedef Outcome<Error, Model::HandleComplaintResult> HandleComplaintOutcome;
			typedef std::future<HandleComplaintOutcome> HandleComplaintOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::HandleComplaintRequest&, const HandleComplaintOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HandleComplaintAsyncHandler;
			typedef Outcome<Error, Model::InsertScoreForApiResult> InsertScoreForApiOutcome;
			typedef std::future<InsertScoreForApiOutcome> InsertScoreForApiOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::InsertScoreForApiRequest&, const InsertScoreForApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertScoreForApiAsyncHandler;
			typedef Outcome<Error, Model::InsertSubScoreForApiResult> InsertSubScoreForApiOutcome;
			typedef std::future<InsertSubScoreForApiOutcome> InsertSubScoreForApiOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::InsertSubScoreForApiRequest&, const InsertSubScoreForApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertSubScoreForApiAsyncHandler;
			typedef Outcome<Error, Model::InvalidRuleResult> InvalidRuleOutcome;
			typedef std::future<InvalidRuleOutcome> InvalidRuleOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::InvalidRuleRequest&, const InvalidRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvalidRuleAsyncHandler;
			typedef Outcome<Error, Model::ListAsrVocabResult> ListAsrVocabOutcome;
			typedef std::future<ListAsrVocabOutcome> ListAsrVocabOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::ListAsrVocabRequest&, const ListAsrVocabOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAsrVocabAsyncHandler;
			typedef Outcome<Error, Model::ListBusinessSpacesResult> ListBusinessSpacesOutcome;
			typedef std::future<ListBusinessSpacesOutcome> ListBusinessSpacesOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::ListBusinessSpacesRequest&, const ListBusinessSpacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBusinessSpacesAsyncHandler;
			typedef Outcome<Error, Model::ListHotWordsTasksResult> ListHotWordsTasksOutcome;
			typedef std::future<ListHotWordsTasksOutcome> ListHotWordsTasksOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::ListHotWordsTasksRequest&, const ListHotWordsTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHotWordsTasksAsyncHandler;
			typedef Outcome<Error, Model::ListPrecisionTaskResult> ListPrecisionTaskOutcome;
			typedef std::future<ListPrecisionTaskOutcome> ListPrecisionTaskOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::ListPrecisionTaskRequest&, const ListPrecisionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrecisionTaskAsyncHandler;
			typedef Outcome<Error, Model::ListQualityCheckSchemeResult> ListQualityCheckSchemeOutcome;
			typedef std::future<ListQualityCheckSchemeOutcome> ListQualityCheckSchemeOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::ListQualityCheckSchemeRequest&, const ListQualityCheckSchemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQualityCheckSchemeAsyncHandler;
			typedef Outcome<Error, Model::ListRolesResult> ListRolesOutcome;
			typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::ListRolesRequest&, const ListRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRolesAsyncHandler;
			typedef Outcome<Error, Model::ListRulesResult> ListRulesOutcome;
			typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::ListRulesRequest&, const ListRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRulesAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupConfigResult> ListSkillGroupConfigOutcome;
			typedef std::future<ListSkillGroupConfigOutcome> ListSkillGroupConfigOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::ListSkillGroupConfigRequest&, const ListSkillGroupConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupConfigAsyncHandler;
			typedef Outcome<Error, Model::ListTaskAssignRulesResult> ListTaskAssignRulesOutcome;
			typedef std::future<ListTaskAssignRulesOutcome> ListTaskAssignRulesOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::ListTaskAssignRulesRequest&, const ListTaskAssignRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskAssignRulesAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::ListWarningConfigResult> ListWarningConfigOutcome;
			typedef std::future<ListWarningConfigOutcome> ListWarningConfigOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::ListWarningConfigRequest&, const ListWarningConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWarningConfigAsyncHandler;
			typedef Outcome<Error, Model::RestartAsrTaskResult> RestartAsrTaskOutcome;
			typedef std::future<RestartAsrTaskOutcome> RestartAsrTaskOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::RestartAsrTaskRequest&, const RestartAsrTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartAsrTaskAsyncHandler;
			typedef Outcome<Error, Model::SaveConfigDataSetResult> SaveConfigDataSetOutcome;
			typedef std::future<SaveConfigDataSetOutcome> SaveConfigDataSetOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::SaveConfigDataSetRequest&, const SaveConfigDataSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveConfigDataSetAsyncHandler;
			typedef Outcome<Error, Model::SubmitComplaintResult> SubmitComplaintOutcome;
			typedef std::future<SubmitComplaintOutcome> SubmitComplaintOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::SubmitComplaintRequest&, const SubmitComplaintOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitComplaintAsyncHandler;
			typedef Outcome<Error, Model::SubmitPrecisionTaskResult> SubmitPrecisionTaskOutcome;
			typedef std::future<SubmitPrecisionTaskOutcome> SubmitPrecisionTaskOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::SubmitPrecisionTaskRequest&, const SubmitPrecisionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitPrecisionTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitQualityCheckTaskResult> SubmitQualityCheckTaskOutcome;
			typedef std::future<SubmitQualityCheckTaskOutcome> SubmitQualityCheckTaskOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::SubmitQualityCheckTaskRequest&, const SubmitQualityCheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitQualityCheckTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitReviewInfoResult> SubmitReviewInfoOutcome;
			typedef std::future<SubmitReviewInfoOutcome> SubmitReviewInfoOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::SubmitReviewInfoRequest&, const SubmitReviewInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitReviewInfoAsyncHandler;
			typedef Outcome<Error, Model::SyncQualityCheckResult> SyncQualityCheckOutcome;
			typedef std::future<SyncQualityCheckOutcome> SyncQualityCheckOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::SyncQualityCheckRequest&, const SyncQualityCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncQualityCheckAsyncHandler;
			typedef Outcome<Error, Model::UpdateAsrVocabResult> UpdateAsrVocabOutcome;
			typedef std::future<UpdateAsrVocabOutcome> UpdateAsrVocabOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UpdateAsrVocabRequest&, const UpdateAsrVocabOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAsrVocabAsyncHandler;
			typedef Outcome<Error, Model::UpdateQualityCheckDataResult> UpdateQualityCheckDataOutcome;
			typedef std::future<UpdateQualityCheckDataOutcome> UpdateQualityCheckDataOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UpdateQualityCheckDataRequest&, const UpdateQualityCheckDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateQualityCheckDataAsyncHandler;
			typedef Outcome<Error, Model::UpdateRuleResult> UpdateRuleOutcome;
			typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UpdateRuleRequest&, const UpdateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateScoreForApiResult> UpdateScoreForApiOutcome;
			typedef std::future<UpdateScoreForApiOutcome> UpdateScoreForApiOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UpdateScoreForApiRequest&, const UpdateScoreForApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateScoreForApiAsyncHandler;
			typedef Outcome<Error, Model::UpdateSkillGroupConfigResult> UpdateSkillGroupConfigOutcome;
			typedef std::future<UpdateSkillGroupConfigOutcome> UpdateSkillGroupConfigOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UpdateSkillGroupConfigRequest&, const UpdateSkillGroupConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSkillGroupConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateSubScoreForApiResult> UpdateSubScoreForApiOutcome;
			typedef std::future<UpdateSubScoreForApiOutcome> UpdateSubScoreForApiOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UpdateSubScoreForApiRequest&, const UpdateSubScoreForApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSubScoreForApiAsyncHandler;
			typedef Outcome<Error, Model::UpdateSyncQualityCheckDataResult> UpdateSyncQualityCheckDataOutcome;
			typedef std::future<UpdateSyncQualityCheckDataOutcome> UpdateSyncQualityCheckDataOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UpdateSyncQualityCheckDataRequest&, const UpdateSyncQualityCheckDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSyncQualityCheckDataAsyncHandler;
			typedef Outcome<Error, Model::UpdateTaskAssignRuleResult> UpdateTaskAssignRuleOutcome;
			typedef std::future<UpdateTaskAssignRuleOutcome> UpdateTaskAssignRuleOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UpdateTaskAssignRuleRequest&, const UpdateTaskAssignRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTaskAssignRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserResult> UpdateUserOutcome;
			typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UpdateUserRequest&, const UpdateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserConfigResult> UpdateUserConfigOutcome;
			typedef std::future<UpdateUserConfigOutcome> UpdateUserConfigOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UpdateUserConfigRequest&, const UpdateUserConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateWarningConfigResult> UpdateWarningConfigOutcome;
			typedef std::future<UpdateWarningConfigOutcome> UpdateWarningConfigOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UpdateWarningConfigRequest&, const UpdateWarningConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWarningConfigAsyncHandler;
			typedef Outcome<Error, Model::UploadAudioDataResult> UploadAudioDataOutcome;
			typedef std::future<UploadAudioDataOutcome> UploadAudioDataOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UploadAudioDataRequest&, const UploadAudioDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadAudioDataAsyncHandler;
			typedef Outcome<Error, Model::UploadDataResult> UploadDataOutcome;
			typedef std::future<UploadDataOutcome> UploadDataOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UploadDataRequest&, const UploadDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadDataAsyncHandler;
			typedef Outcome<Error, Model::UploadDataSyncResult> UploadDataSyncOutcome;
			typedef std::future<UploadDataSyncOutcome> UploadDataSyncOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UploadDataSyncRequest&, const UploadDataSyncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadDataSyncAsyncHandler;
			typedef Outcome<Error, Model::UploadRuleResult> UploadRuleOutcome;
			typedef std::future<UploadRuleOutcome> UploadRuleOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::UploadRuleRequest&, const UploadRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadRuleAsyncHandler;
			typedef Outcome<Error, Model::VerifyFileResult> VerifyFileOutcome;
			typedef std::future<VerifyFileOutcome> VerifyFileOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::VerifyFileRequest&, const VerifyFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyFileAsyncHandler;
			typedef Outcome<Error, Model::VerifySentenceResult> VerifySentenceOutcome;
			typedef std::future<VerifySentenceOutcome> VerifySentenceOutcomeCallable;
			typedef std::function<void(const QualitycheckClient*, const Model::VerifySentenceRequest&, const VerifySentenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifySentenceAsyncHandler;

			QualitycheckClient(const Credentials &credentials, const ClientConfiguration &configuration);
			QualitycheckClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			QualitycheckClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~QualitycheckClient();
			AddBusinessCategoryOutcome addBusinessCategory(const Model::AddBusinessCategoryRequest &request)const;
			void addBusinessCategoryAsync(const Model::AddBusinessCategoryRequest& request, const AddBusinessCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBusinessCategoryOutcomeCallable addBusinessCategoryCallable(const Model::AddBusinessCategoryRequest& request) const;
			AddRuleCategoryOutcome addRuleCategory(const Model::AddRuleCategoryRequest &request)const;
			void addRuleCategoryAsync(const Model::AddRuleCategoryRequest& request, const AddRuleCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRuleCategoryOutcomeCallable addRuleCategoryCallable(const Model::AddRuleCategoryRequest& request) const;
			AddThesaurusForApiOutcome addThesaurusForApi(const Model::AddThesaurusForApiRequest &request)const;
			void addThesaurusForApiAsync(const Model::AddThesaurusForApiRequest& request, const AddThesaurusForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddThesaurusForApiOutcomeCallable addThesaurusForApiCallable(const Model::AddThesaurusForApiRequest& request) const;
			AssignReviewerOutcome assignReviewer(const Model::AssignReviewerRequest &request)const;
			void assignReviewerAsync(const Model::AssignReviewerRequest& request, const AssignReviewerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignReviewerOutcomeCallable assignReviewerCallable(const Model::AssignReviewerRequest& request) const;
			CreateAsrVocabOutcome createAsrVocab(const Model::CreateAsrVocabRequest &request)const;
			void createAsrVocabAsync(const Model::CreateAsrVocabRequest& request, const CreateAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAsrVocabOutcomeCallable createAsrVocabCallable(const Model::CreateAsrVocabRequest& request) const;
			CreateSkillGroupConfigOutcome createSkillGroupConfig(const Model::CreateSkillGroupConfigRequest &request)const;
			void createSkillGroupConfigAsync(const Model::CreateSkillGroupConfigRequest& request, const CreateSkillGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSkillGroupConfigOutcomeCallable createSkillGroupConfigCallable(const Model::CreateSkillGroupConfigRequest& request) const;
			CreateTaskAssignRuleOutcome createTaskAssignRule(const Model::CreateTaskAssignRuleRequest &request)const;
			void createTaskAssignRuleAsync(const Model::CreateTaskAssignRuleRequest& request, const CreateTaskAssignRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTaskAssignRuleOutcomeCallable createTaskAssignRuleCallable(const Model::CreateTaskAssignRuleRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			CreateWarningConfigOutcome createWarningConfig(const Model::CreateWarningConfigRequest &request)const;
			void createWarningConfigAsync(const Model::CreateWarningConfigRequest& request, const CreateWarningConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWarningConfigOutcomeCallable createWarningConfigCallable(const Model::CreateWarningConfigRequest& request) const;
			DelRuleCategoryOutcome delRuleCategory(const Model::DelRuleCategoryRequest &request)const;
			void delRuleCategoryAsync(const Model::DelRuleCategoryRequest& request, const DelRuleCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DelRuleCategoryOutcomeCallable delRuleCategoryCallable(const Model::DelRuleCategoryRequest& request) const;
			DelThesaurusForApiOutcome delThesaurusForApi(const Model::DelThesaurusForApiRequest &request)const;
			void delThesaurusForApiAsync(const Model::DelThesaurusForApiRequest& request, const DelThesaurusForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DelThesaurusForApiOutcomeCallable delThesaurusForApiCallable(const Model::DelThesaurusForApiRequest& request) const;
			DeleteAsrVocabOutcome deleteAsrVocab(const Model::DeleteAsrVocabRequest &request)const;
			void deleteAsrVocabAsync(const Model::DeleteAsrVocabRequest& request, const DeleteAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAsrVocabOutcomeCallable deleteAsrVocabCallable(const Model::DeleteAsrVocabRequest& request) const;
			DeleteBusinessCategoryOutcome deleteBusinessCategory(const Model::DeleteBusinessCategoryRequest &request)const;
			void deleteBusinessCategoryAsync(const Model::DeleteBusinessCategoryRequest& request, const DeleteBusinessCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBusinessCategoryOutcomeCallable deleteBusinessCategoryCallable(const Model::DeleteBusinessCategoryRequest& request) const;
			DeleteCustomizationConfigOutcome deleteCustomizationConfig(const Model::DeleteCustomizationConfigRequest &request)const;
			void deleteCustomizationConfigAsync(const Model::DeleteCustomizationConfigRequest& request, const DeleteCustomizationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomizationConfigOutcomeCallable deleteCustomizationConfigCallable(const Model::DeleteCustomizationConfigRequest& request) const;
			DeleteDataSetOutcome deleteDataSet(const Model::DeleteDataSetRequest &request)const;
			void deleteDataSetAsync(const Model::DeleteDataSetRequest& request, const DeleteDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataSetOutcomeCallable deleteDataSetCallable(const Model::DeleteDataSetRequest& request) const;
			DeletePrecisionTaskOutcome deletePrecisionTask(const Model::DeletePrecisionTaskRequest &request)const;
			void deletePrecisionTaskAsync(const Model::DeletePrecisionTaskRequest& request, const DeletePrecisionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrecisionTaskOutcomeCallable deletePrecisionTaskCallable(const Model::DeletePrecisionTaskRequest& request) const;
			DeleteScoreForApiOutcome deleteScoreForApi(const Model::DeleteScoreForApiRequest &request)const;
			void deleteScoreForApiAsync(const Model::DeleteScoreForApiRequest& request, const DeleteScoreForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScoreForApiOutcomeCallable deleteScoreForApiCallable(const Model::DeleteScoreForApiRequest& request) const;
			DeleteSkillGroupConfigOutcome deleteSkillGroupConfig(const Model::DeleteSkillGroupConfigRequest &request)const;
			void deleteSkillGroupConfigAsync(const Model::DeleteSkillGroupConfigRequest& request, const DeleteSkillGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSkillGroupConfigOutcomeCallable deleteSkillGroupConfigCallable(const Model::DeleteSkillGroupConfigRequest& request) const;
			DeleteSubScoreForApiOutcome deleteSubScoreForApi(const Model::DeleteSubScoreForApiRequest &request)const;
			void deleteSubScoreForApiAsync(const Model::DeleteSubScoreForApiRequest& request, const DeleteSubScoreForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSubScoreForApiOutcomeCallable deleteSubScoreForApiCallable(const Model::DeleteSubScoreForApiRequest& request) const;
			DeleteTaskAssignRuleOutcome deleteTaskAssignRule(const Model::DeleteTaskAssignRuleRequest &request)const;
			void deleteTaskAssignRuleAsync(const Model::DeleteTaskAssignRuleRequest& request, const DeleteTaskAssignRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTaskAssignRuleOutcomeCallable deleteTaskAssignRuleCallable(const Model::DeleteTaskAssignRuleRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			DeleteWarningConfigOutcome deleteWarningConfig(const Model::DeleteWarningConfigRequest &request)const;
			void deleteWarningConfigAsync(const Model::DeleteWarningConfigRequest& request, const DeleteWarningConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWarningConfigOutcomeCallable deleteWarningConfigCallable(const Model::DeleteWarningConfigRequest& request) const;
			EditThesaurusForApiOutcome editThesaurusForApi(const Model::EditThesaurusForApiRequest &request)const;
			void editThesaurusForApiAsync(const Model::EditThesaurusForApiRequest& request, const EditThesaurusForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EditThesaurusForApiOutcomeCallable editThesaurusForApiCallable(const Model::EditThesaurusForApiRequest& request) const;
			GetAsrVocabOutcome getAsrVocab(const Model::GetAsrVocabRequest &request)const;
			void getAsrVocabAsync(const Model::GetAsrVocabRequest& request, const GetAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsrVocabOutcomeCallable getAsrVocabCallable(const Model::GetAsrVocabRequest& request) const;
			GetBusinessCategoryListOutcome getBusinessCategoryList(const Model::GetBusinessCategoryListRequest &request)const;
			void getBusinessCategoryListAsync(const Model::GetBusinessCategoryListRequest& request, const GetBusinessCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBusinessCategoryListOutcomeCallable getBusinessCategoryListCallable(const Model::GetBusinessCategoryListRequest& request) const;
			GetCustomizationConfigListOutcome getCustomizationConfigList(const Model::GetCustomizationConfigListRequest &request)const;
			void getCustomizationConfigListAsync(const Model::GetCustomizationConfigListRequest& request, const GetCustomizationConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCustomizationConfigListOutcomeCallable getCustomizationConfigListCallable(const Model::GetCustomizationConfigListRequest& request) const;
			GetHitResultOutcome getHitResult(const Model::GetHitResultRequest &request)const;
			void getHitResultAsync(const Model::GetHitResultRequest& request, const GetHitResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHitResultOutcomeCallable getHitResultCallable(const Model::GetHitResultRequest& request) const;
			GetNextResultToVerifyOutcome getNextResultToVerify(const Model::GetNextResultToVerifyRequest &request)const;
			void getNextResultToVerifyAsync(const Model::GetNextResultToVerifyRequest& request, const GetNextResultToVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNextResultToVerifyOutcomeCallable getNextResultToVerifyCallable(const Model::GetNextResultToVerifyRequest& request) const;
			GetPrecisionTaskOutcome getPrecisionTask(const Model::GetPrecisionTaskRequest &request)const;
			void getPrecisionTaskAsync(const Model::GetPrecisionTaskRequest& request, const GetPrecisionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPrecisionTaskOutcomeCallable getPrecisionTaskCallable(const Model::GetPrecisionTaskRequest& request) const;
			GetResultOutcome getResult(const Model::GetResultRequest &request)const;
			void getResultAsync(const Model::GetResultRequest& request, const GetResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResultOutcomeCallable getResultCallable(const Model::GetResultRequest& request) const;
			GetResultCallbackOutcome getResultCallback(const Model::GetResultCallbackRequest &request)const;
			void getResultCallbackAsync(const Model::GetResultCallbackRequest& request, const GetResultCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResultCallbackOutcomeCallable getResultCallbackCallable(const Model::GetResultCallbackRequest& request) const;
			GetResultToReviewOutcome getResultToReview(const Model::GetResultToReviewRequest &request)const;
			void getResultToReviewAsync(const Model::GetResultToReviewRequest& request, const GetResultToReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResultToReviewOutcomeCallable getResultToReviewCallable(const Model::GetResultToReviewRequest& request) const;
			GetRuleOutcome getRule(const Model::GetRuleRequest &request)const;
			void getRuleAsync(const Model::GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRuleOutcomeCallable getRuleCallable(const Model::GetRuleRequest& request) const;
			GetRuleCategoryOutcome getRuleCategory(const Model::GetRuleCategoryRequest &request)const;
			void getRuleCategoryAsync(const Model::GetRuleCategoryRequest& request, const GetRuleCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRuleCategoryOutcomeCallable getRuleCategoryCallable(const Model::GetRuleCategoryRequest& request) const;
			GetRuleDetailOutcome getRuleDetail(const Model::GetRuleDetailRequest &request)const;
			void getRuleDetailAsync(const Model::GetRuleDetailRequest& request, const GetRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRuleDetailOutcomeCallable getRuleDetailCallable(const Model::GetRuleDetailRequest& request) const;
			GetScoreInfoOutcome getScoreInfo(const Model::GetScoreInfoRequest &request)const;
			void getScoreInfoAsync(const Model::GetScoreInfoRequest& request, const GetScoreInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetScoreInfoOutcomeCallable getScoreInfoCallable(const Model::GetScoreInfoRequest& request) const;
			GetSkillGroupConfigOutcome getSkillGroupConfig(const Model::GetSkillGroupConfigRequest &request)const;
			void getSkillGroupConfigAsync(const Model::GetSkillGroupConfigRequest& request, const GetSkillGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSkillGroupConfigOutcomeCallable getSkillGroupConfigCallable(const Model::GetSkillGroupConfigRequest& request) const;
			GetSyncResultOutcome getSyncResult(const Model::GetSyncResultRequest &request)const;
			void getSyncResultAsync(const Model::GetSyncResultRequest& request, const GetSyncResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSyncResultOutcomeCallable getSyncResultCallable(const Model::GetSyncResultRequest& request) const;
			GetThesaurusBySynonymForApiOutcome getThesaurusBySynonymForApi(const Model::GetThesaurusBySynonymForApiRequest &request)const;
			void getThesaurusBySynonymForApiAsync(const Model::GetThesaurusBySynonymForApiRequest& request, const GetThesaurusBySynonymForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetThesaurusBySynonymForApiOutcomeCallable getThesaurusBySynonymForApiCallable(const Model::GetThesaurusBySynonymForApiRequest& request) const;
			HandleComplaintOutcome handleComplaint(const Model::HandleComplaintRequest &request)const;
			void handleComplaintAsync(const Model::HandleComplaintRequest& request, const HandleComplaintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HandleComplaintOutcomeCallable handleComplaintCallable(const Model::HandleComplaintRequest& request) const;
			InsertScoreForApiOutcome insertScoreForApi(const Model::InsertScoreForApiRequest &request)const;
			void insertScoreForApiAsync(const Model::InsertScoreForApiRequest& request, const InsertScoreForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertScoreForApiOutcomeCallable insertScoreForApiCallable(const Model::InsertScoreForApiRequest& request) const;
			InsertSubScoreForApiOutcome insertSubScoreForApi(const Model::InsertSubScoreForApiRequest &request)const;
			void insertSubScoreForApiAsync(const Model::InsertSubScoreForApiRequest& request, const InsertSubScoreForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertSubScoreForApiOutcomeCallable insertSubScoreForApiCallable(const Model::InsertSubScoreForApiRequest& request) const;
			InvalidRuleOutcome invalidRule(const Model::InvalidRuleRequest &request)const;
			void invalidRuleAsync(const Model::InvalidRuleRequest& request, const InvalidRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvalidRuleOutcomeCallable invalidRuleCallable(const Model::InvalidRuleRequest& request) const;
			ListAsrVocabOutcome listAsrVocab(const Model::ListAsrVocabRequest &request)const;
			void listAsrVocabAsync(const Model::ListAsrVocabRequest& request, const ListAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAsrVocabOutcomeCallable listAsrVocabCallable(const Model::ListAsrVocabRequest& request) const;
			ListBusinessSpacesOutcome listBusinessSpaces(const Model::ListBusinessSpacesRequest &request)const;
			void listBusinessSpacesAsync(const Model::ListBusinessSpacesRequest& request, const ListBusinessSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBusinessSpacesOutcomeCallable listBusinessSpacesCallable(const Model::ListBusinessSpacesRequest& request) const;
			ListHotWordsTasksOutcome listHotWordsTasks(const Model::ListHotWordsTasksRequest &request)const;
			void listHotWordsTasksAsync(const Model::ListHotWordsTasksRequest& request, const ListHotWordsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHotWordsTasksOutcomeCallable listHotWordsTasksCallable(const Model::ListHotWordsTasksRequest& request) const;
			ListPrecisionTaskOutcome listPrecisionTask(const Model::ListPrecisionTaskRequest &request)const;
			void listPrecisionTaskAsync(const Model::ListPrecisionTaskRequest& request, const ListPrecisionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrecisionTaskOutcomeCallable listPrecisionTaskCallable(const Model::ListPrecisionTaskRequest& request) const;
			ListQualityCheckSchemeOutcome listQualityCheckScheme(const Model::ListQualityCheckSchemeRequest &request)const;
			void listQualityCheckSchemeAsync(const Model::ListQualityCheckSchemeRequest& request, const ListQualityCheckSchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQualityCheckSchemeOutcomeCallable listQualityCheckSchemeCallable(const Model::ListQualityCheckSchemeRequest& request) const;
			ListRolesOutcome listRoles(const Model::ListRolesRequest &request)const;
			void listRolesAsync(const Model::ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRolesOutcomeCallable listRolesCallable(const Model::ListRolesRequest& request) const;
			ListRulesOutcome listRules(const Model::ListRulesRequest &request)const;
			void listRulesAsync(const Model::ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRulesOutcomeCallable listRulesCallable(const Model::ListRulesRequest& request) const;
			ListSkillGroupConfigOutcome listSkillGroupConfig(const Model::ListSkillGroupConfigRequest &request)const;
			void listSkillGroupConfigAsync(const Model::ListSkillGroupConfigRequest& request, const ListSkillGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupConfigOutcomeCallable listSkillGroupConfigCallable(const Model::ListSkillGroupConfigRequest& request) const;
			ListTaskAssignRulesOutcome listTaskAssignRules(const Model::ListTaskAssignRulesRequest &request)const;
			void listTaskAssignRulesAsync(const Model::ListTaskAssignRulesRequest& request, const ListTaskAssignRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTaskAssignRulesOutcomeCallable listTaskAssignRulesCallable(const Model::ListTaskAssignRulesRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			ListWarningConfigOutcome listWarningConfig(const Model::ListWarningConfigRequest &request)const;
			void listWarningConfigAsync(const Model::ListWarningConfigRequest& request, const ListWarningConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWarningConfigOutcomeCallable listWarningConfigCallable(const Model::ListWarningConfigRequest& request) const;
			RestartAsrTaskOutcome restartAsrTask(const Model::RestartAsrTaskRequest &request)const;
			void restartAsrTaskAsync(const Model::RestartAsrTaskRequest& request, const RestartAsrTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartAsrTaskOutcomeCallable restartAsrTaskCallable(const Model::RestartAsrTaskRequest& request) const;
			SaveConfigDataSetOutcome saveConfigDataSet(const Model::SaveConfigDataSetRequest &request)const;
			void saveConfigDataSetAsync(const Model::SaveConfigDataSetRequest& request, const SaveConfigDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveConfigDataSetOutcomeCallable saveConfigDataSetCallable(const Model::SaveConfigDataSetRequest& request) const;
			SubmitComplaintOutcome submitComplaint(const Model::SubmitComplaintRequest &request)const;
			void submitComplaintAsync(const Model::SubmitComplaintRequest& request, const SubmitComplaintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitComplaintOutcomeCallable submitComplaintCallable(const Model::SubmitComplaintRequest& request) const;
			SubmitPrecisionTaskOutcome submitPrecisionTask(const Model::SubmitPrecisionTaskRequest &request)const;
			void submitPrecisionTaskAsync(const Model::SubmitPrecisionTaskRequest& request, const SubmitPrecisionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitPrecisionTaskOutcomeCallable submitPrecisionTaskCallable(const Model::SubmitPrecisionTaskRequest& request) const;
			SubmitQualityCheckTaskOutcome submitQualityCheckTask(const Model::SubmitQualityCheckTaskRequest &request)const;
			void submitQualityCheckTaskAsync(const Model::SubmitQualityCheckTaskRequest& request, const SubmitQualityCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitQualityCheckTaskOutcomeCallable submitQualityCheckTaskCallable(const Model::SubmitQualityCheckTaskRequest& request) const;
			SubmitReviewInfoOutcome submitReviewInfo(const Model::SubmitReviewInfoRequest &request)const;
			void submitReviewInfoAsync(const Model::SubmitReviewInfoRequest& request, const SubmitReviewInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitReviewInfoOutcomeCallable submitReviewInfoCallable(const Model::SubmitReviewInfoRequest& request) const;
			SyncQualityCheckOutcome syncQualityCheck(const Model::SyncQualityCheckRequest &request)const;
			void syncQualityCheckAsync(const Model::SyncQualityCheckRequest& request, const SyncQualityCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncQualityCheckOutcomeCallable syncQualityCheckCallable(const Model::SyncQualityCheckRequest& request) const;
			UpdateAsrVocabOutcome updateAsrVocab(const Model::UpdateAsrVocabRequest &request)const;
			void updateAsrVocabAsync(const Model::UpdateAsrVocabRequest& request, const UpdateAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAsrVocabOutcomeCallable updateAsrVocabCallable(const Model::UpdateAsrVocabRequest& request) const;
			UpdateQualityCheckDataOutcome updateQualityCheckData(const Model::UpdateQualityCheckDataRequest &request)const;
			void updateQualityCheckDataAsync(const Model::UpdateQualityCheckDataRequest& request, const UpdateQualityCheckDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateQualityCheckDataOutcomeCallable updateQualityCheckDataCallable(const Model::UpdateQualityCheckDataRequest& request) const;
			UpdateRuleOutcome updateRule(const Model::UpdateRuleRequest &request)const;
			void updateRuleAsync(const Model::UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRuleOutcomeCallable updateRuleCallable(const Model::UpdateRuleRequest& request) const;
			UpdateScoreForApiOutcome updateScoreForApi(const Model::UpdateScoreForApiRequest &request)const;
			void updateScoreForApiAsync(const Model::UpdateScoreForApiRequest& request, const UpdateScoreForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateScoreForApiOutcomeCallable updateScoreForApiCallable(const Model::UpdateScoreForApiRequest& request) const;
			UpdateSkillGroupConfigOutcome updateSkillGroupConfig(const Model::UpdateSkillGroupConfigRequest &request)const;
			void updateSkillGroupConfigAsync(const Model::UpdateSkillGroupConfigRequest& request, const UpdateSkillGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSkillGroupConfigOutcomeCallable updateSkillGroupConfigCallable(const Model::UpdateSkillGroupConfigRequest& request) const;
			UpdateSubScoreForApiOutcome updateSubScoreForApi(const Model::UpdateSubScoreForApiRequest &request)const;
			void updateSubScoreForApiAsync(const Model::UpdateSubScoreForApiRequest& request, const UpdateSubScoreForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSubScoreForApiOutcomeCallable updateSubScoreForApiCallable(const Model::UpdateSubScoreForApiRequest& request) const;
			UpdateSyncQualityCheckDataOutcome updateSyncQualityCheckData(const Model::UpdateSyncQualityCheckDataRequest &request)const;
			void updateSyncQualityCheckDataAsync(const Model::UpdateSyncQualityCheckDataRequest& request, const UpdateSyncQualityCheckDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSyncQualityCheckDataOutcomeCallable updateSyncQualityCheckDataCallable(const Model::UpdateSyncQualityCheckDataRequest& request) const;
			UpdateTaskAssignRuleOutcome updateTaskAssignRule(const Model::UpdateTaskAssignRuleRequest &request)const;
			void updateTaskAssignRuleAsync(const Model::UpdateTaskAssignRuleRequest& request, const UpdateTaskAssignRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTaskAssignRuleOutcomeCallable updateTaskAssignRuleCallable(const Model::UpdateTaskAssignRuleRequest& request) const;
			UpdateUserOutcome updateUser(const Model::UpdateUserRequest &request)const;
			void updateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserOutcomeCallable updateUserCallable(const Model::UpdateUserRequest& request) const;
			UpdateUserConfigOutcome updateUserConfig(const Model::UpdateUserConfigRequest &request)const;
			void updateUserConfigAsync(const Model::UpdateUserConfigRequest& request, const UpdateUserConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserConfigOutcomeCallable updateUserConfigCallable(const Model::UpdateUserConfigRequest& request) const;
			UpdateWarningConfigOutcome updateWarningConfig(const Model::UpdateWarningConfigRequest &request)const;
			void updateWarningConfigAsync(const Model::UpdateWarningConfigRequest& request, const UpdateWarningConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWarningConfigOutcomeCallable updateWarningConfigCallable(const Model::UpdateWarningConfigRequest& request) const;
			UploadAudioDataOutcome uploadAudioData(const Model::UploadAudioDataRequest &request)const;
			void uploadAudioDataAsync(const Model::UploadAudioDataRequest& request, const UploadAudioDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadAudioDataOutcomeCallable uploadAudioDataCallable(const Model::UploadAudioDataRequest& request) const;
			UploadDataOutcome uploadData(const Model::UploadDataRequest &request)const;
			void uploadDataAsync(const Model::UploadDataRequest& request, const UploadDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadDataOutcomeCallable uploadDataCallable(const Model::UploadDataRequest& request) const;
			UploadDataSyncOutcome uploadDataSync(const Model::UploadDataSyncRequest &request)const;
			void uploadDataSyncAsync(const Model::UploadDataSyncRequest& request, const UploadDataSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadDataSyncOutcomeCallable uploadDataSyncCallable(const Model::UploadDataSyncRequest& request) const;
			UploadRuleOutcome uploadRule(const Model::UploadRuleRequest &request)const;
			void uploadRuleAsync(const Model::UploadRuleRequest& request, const UploadRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadRuleOutcomeCallable uploadRuleCallable(const Model::UploadRuleRequest& request) const;
			VerifyFileOutcome verifyFile(const Model::VerifyFileRequest &request)const;
			void verifyFileAsync(const Model::VerifyFileRequest& request, const VerifyFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyFileOutcomeCallable verifyFileCallable(const Model::VerifyFileRequest& request) const;
			VerifySentenceOutcome verifySentence(const Model::VerifySentenceRequest &request)const;
			void verifySentenceAsync(const Model::VerifySentenceRequest& request, const VerifySentenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifySentenceOutcomeCallable verifySentenceCallable(const Model::VerifySentenceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_QUALITYCHECK_QUALITYCHECKCLIENT_H_
