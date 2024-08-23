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

#ifndef ALIBABACLOUD_GOVERNANCE_GOVERNANCECLIENT_H_
#define ALIBABACLOUD_GOVERNANCE_GOVERNANCECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "GovernanceExport.h"
#include "model/BatchEnrollAccountsRequest.h"
#include "model/BatchEnrollAccountsResult.h"
#include "model/CreateAccountFactoryBaselineRequest.h"
#include "model/CreateAccountFactoryBaselineResult.h"
#include "model/DeleteAccountFactoryBaselineRequest.h"
#include "model/DeleteAccountFactoryBaselineResult.h"
#include "model/EnrollAccountRequest.h"
#include "model/EnrollAccountResult.h"
#include "model/GetAccountFactoryBaselineRequest.h"
#include "model/GetAccountFactoryBaselineResult.h"
#include "model/GetEnrolledAccountRequest.h"
#include "model/GetEnrolledAccountResult.h"
#include "model/ListAccountFactoryBaselineItemsRequest.h"
#include "model/ListAccountFactoryBaselineItemsResult.h"
#include "model/ListAccountFactoryBaselinesRequest.h"
#include "model/ListAccountFactoryBaselinesResult.h"
#include "model/ListEnrolledAccountsRequest.h"
#include "model/ListEnrolledAccountsResult.h"
#include "model/ListEvaluationMetadataRequest.h"
#include "model/ListEvaluationMetadataResult.h"
#include "model/ListEvaluationMetricDetailsRequest.h"
#include "model/ListEvaluationMetricDetailsResult.h"
#include "model/ListEvaluationResultsRequest.h"
#include "model/ListEvaluationResultsResult.h"
#include "model/ListEvaluationScoreHistoryRequest.h"
#include "model/ListEvaluationScoreHistoryResult.h"
#include "model/RunEvaluationRequest.h"
#include "model/RunEvaluationResult.h"
#include "model/UpdateAccountFactoryBaselineRequest.h"
#include "model/UpdateAccountFactoryBaselineResult.h"


namespace AlibabaCloud
{
	namespace Governance
	{
		class ALIBABACLOUD_GOVERNANCE_EXPORT GovernanceClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchEnrollAccountsResult> BatchEnrollAccountsOutcome;
			typedef std::future<BatchEnrollAccountsOutcome> BatchEnrollAccountsOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::BatchEnrollAccountsRequest&, const BatchEnrollAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchEnrollAccountsAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountFactoryBaselineResult> CreateAccountFactoryBaselineOutcome;
			typedef std::future<CreateAccountFactoryBaselineOutcome> CreateAccountFactoryBaselineOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::CreateAccountFactoryBaselineRequest&, const CreateAccountFactoryBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountFactoryBaselineAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountFactoryBaselineResult> DeleteAccountFactoryBaselineOutcome;
			typedef std::future<DeleteAccountFactoryBaselineOutcome> DeleteAccountFactoryBaselineOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::DeleteAccountFactoryBaselineRequest&, const DeleteAccountFactoryBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountFactoryBaselineAsyncHandler;
			typedef Outcome<Error, Model::EnrollAccountResult> EnrollAccountOutcome;
			typedef std::future<EnrollAccountOutcome> EnrollAccountOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::EnrollAccountRequest&, const EnrollAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnrollAccountAsyncHandler;
			typedef Outcome<Error, Model::GetAccountFactoryBaselineResult> GetAccountFactoryBaselineOutcome;
			typedef std::future<GetAccountFactoryBaselineOutcome> GetAccountFactoryBaselineOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::GetAccountFactoryBaselineRequest&, const GetAccountFactoryBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountFactoryBaselineAsyncHandler;
			typedef Outcome<Error, Model::GetEnrolledAccountResult> GetEnrolledAccountOutcome;
			typedef std::future<GetEnrolledAccountOutcome> GetEnrolledAccountOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::GetEnrolledAccountRequest&, const GetEnrolledAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEnrolledAccountAsyncHandler;
			typedef Outcome<Error, Model::ListAccountFactoryBaselineItemsResult> ListAccountFactoryBaselineItemsOutcome;
			typedef std::future<ListAccountFactoryBaselineItemsOutcome> ListAccountFactoryBaselineItemsOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::ListAccountFactoryBaselineItemsRequest&, const ListAccountFactoryBaselineItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccountFactoryBaselineItemsAsyncHandler;
			typedef Outcome<Error, Model::ListAccountFactoryBaselinesResult> ListAccountFactoryBaselinesOutcome;
			typedef std::future<ListAccountFactoryBaselinesOutcome> ListAccountFactoryBaselinesOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::ListAccountFactoryBaselinesRequest&, const ListAccountFactoryBaselinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccountFactoryBaselinesAsyncHandler;
			typedef Outcome<Error, Model::ListEnrolledAccountsResult> ListEnrolledAccountsOutcome;
			typedef std::future<ListEnrolledAccountsOutcome> ListEnrolledAccountsOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::ListEnrolledAccountsRequest&, const ListEnrolledAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnrolledAccountsAsyncHandler;
			typedef Outcome<Error, Model::ListEvaluationMetadataResult> ListEvaluationMetadataOutcome;
			typedef std::future<ListEvaluationMetadataOutcome> ListEvaluationMetadataOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::ListEvaluationMetadataRequest&, const ListEvaluationMetadataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEvaluationMetadataAsyncHandler;
			typedef Outcome<Error, Model::ListEvaluationMetricDetailsResult> ListEvaluationMetricDetailsOutcome;
			typedef std::future<ListEvaluationMetricDetailsOutcome> ListEvaluationMetricDetailsOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::ListEvaluationMetricDetailsRequest&, const ListEvaluationMetricDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEvaluationMetricDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListEvaluationResultsResult> ListEvaluationResultsOutcome;
			typedef std::future<ListEvaluationResultsOutcome> ListEvaluationResultsOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::ListEvaluationResultsRequest&, const ListEvaluationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEvaluationResultsAsyncHandler;
			typedef Outcome<Error, Model::ListEvaluationScoreHistoryResult> ListEvaluationScoreHistoryOutcome;
			typedef std::future<ListEvaluationScoreHistoryOutcome> ListEvaluationScoreHistoryOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::ListEvaluationScoreHistoryRequest&, const ListEvaluationScoreHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEvaluationScoreHistoryAsyncHandler;
			typedef Outcome<Error, Model::RunEvaluationResult> RunEvaluationOutcome;
			typedef std::future<RunEvaluationOutcome> RunEvaluationOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::RunEvaluationRequest&, const RunEvaluationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunEvaluationAsyncHandler;
			typedef Outcome<Error, Model::UpdateAccountFactoryBaselineResult> UpdateAccountFactoryBaselineOutcome;
			typedef std::future<UpdateAccountFactoryBaselineOutcome> UpdateAccountFactoryBaselineOutcomeCallable;
			typedef std::function<void(const GovernanceClient*, const Model::UpdateAccountFactoryBaselineRequest&, const UpdateAccountFactoryBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccountFactoryBaselineAsyncHandler;

			GovernanceClient(const Credentials &credentials, const ClientConfiguration &configuration);
			GovernanceClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			GovernanceClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~GovernanceClient();
			BatchEnrollAccountsOutcome batchEnrollAccounts(const Model::BatchEnrollAccountsRequest &request)const;
			void batchEnrollAccountsAsync(const Model::BatchEnrollAccountsRequest& request, const BatchEnrollAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchEnrollAccountsOutcomeCallable batchEnrollAccountsCallable(const Model::BatchEnrollAccountsRequest& request) const;
			CreateAccountFactoryBaselineOutcome createAccountFactoryBaseline(const Model::CreateAccountFactoryBaselineRequest &request)const;
			void createAccountFactoryBaselineAsync(const Model::CreateAccountFactoryBaselineRequest& request, const CreateAccountFactoryBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountFactoryBaselineOutcomeCallable createAccountFactoryBaselineCallable(const Model::CreateAccountFactoryBaselineRequest& request) const;
			DeleteAccountFactoryBaselineOutcome deleteAccountFactoryBaseline(const Model::DeleteAccountFactoryBaselineRequest &request)const;
			void deleteAccountFactoryBaselineAsync(const Model::DeleteAccountFactoryBaselineRequest& request, const DeleteAccountFactoryBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountFactoryBaselineOutcomeCallable deleteAccountFactoryBaselineCallable(const Model::DeleteAccountFactoryBaselineRequest& request) const;
			EnrollAccountOutcome enrollAccount(const Model::EnrollAccountRequest &request)const;
			void enrollAccountAsync(const Model::EnrollAccountRequest& request, const EnrollAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnrollAccountOutcomeCallable enrollAccountCallable(const Model::EnrollAccountRequest& request) const;
			GetAccountFactoryBaselineOutcome getAccountFactoryBaseline(const Model::GetAccountFactoryBaselineRequest &request)const;
			void getAccountFactoryBaselineAsync(const Model::GetAccountFactoryBaselineRequest& request, const GetAccountFactoryBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountFactoryBaselineOutcomeCallable getAccountFactoryBaselineCallable(const Model::GetAccountFactoryBaselineRequest& request) const;
			GetEnrolledAccountOutcome getEnrolledAccount(const Model::GetEnrolledAccountRequest &request)const;
			void getEnrolledAccountAsync(const Model::GetEnrolledAccountRequest& request, const GetEnrolledAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEnrolledAccountOutcomeCallable getEnrolledAccountCallable(const Model::GetEnrolledAccountRequest& request) const;
			ListAccountFactoryBaselineItemsOutcome listAccountFactoryBaselineItems(const Model::ListAccountFactoryBaselineItemsRequest &request)const;
			void listAccountFactoryBaselineItemsAsync(const Model::ListAccountFactoryBaselineItemsRequest& request, const ListAccountFactoryBaselineItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccountFactoryBaselineItemsOutcomeCallable listAccountFactoryBaselineItemsCallable(const Model::ListAccountFactoryBaselineItemsRequest& request) const;
			ListAccountFactoryBaselinesOutcome listAccountFactoryBaselines(const Model::ListAccountFactoryBaselinesRequest &request)const;
			void listAccountFactoryBaselinesAsync(const Model::ListAccountFactoryBaselinesRequest& request, const ListAccountFactoryBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccountFactoryBaselinesOutcomeCallable listAccountFactoryBaselinesCallable(const Model::ListAccountFactoryBaselinesRequest& request) const;
			ListEnrolledAccountsOutcome listEnrolledAccounts(const Model::ListEnrolledAccountsRequest &request)const;
			void listEnrolledAccountsAsync(const Model::ListEnrolledAccountsRequest& request, const ListEnrolledAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnrolledAccountsOutcomeCallable listEnrolledAccountsCallable(const Model::ListEnrolledAccountsRequest& request) const;
			ListEvaluationMetadataOutcome listEvaluationMetadata(const Model::ListEvaluationMetadataRequest &request)const;
			void listEvaluationMetadataAsync(const Model::ListEvaluationMetadataRequest& request, const ListEvaluationMetadataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEvaluationMetadataOutcomeCallable listEvaluationMetadataCallable(const Model::ListEvaluationMetadataRequest& request) const;
			ListEvaluationMetricDetailsOutcome listEvaluationMetricDetails(const Model::ListEvaluationMetricDetailsRequest &request)const;
			void listEvaluationMetricDetailsAsync(const Model::ListEvaluationMetricDetailsRequest& request, const ListEvaluationMetricDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEvaluationMetricDetailsOutcomeCallable listEvaluationMetricDetailsCallable(const Model::ListEvaluationMetricDetailsRequest& request) const;
			ListEvaluationResultsOutcome listEvaluationResults(const Model::ListEvaluationResultsRequest &request)const;
			void listEvaluationResultsAsync(const Model::ListEvaluationResultsRequest& request, const ListEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEvaluationResultsOutcomeCallable listEvaluationResultsCallable(const Model::ListEvaluationResultsRequest& request) const;
			ListEvaluationScoreHistoryOutcome listEvaluationScoreHistory(const Model::ListEvaluationScoreHistoryRequest &request)const;
			void listEvaluationScoreHistoryAsync(const Model::ListEvaluationScoreHistoryRequest& request, const ListEvaluationScoreHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEvaluationScoreHistoryOutcomeCallable listEvaluationScoreHistoryCallable(const Model::ListEvaluationScoreHistoryRequest& request) const;
			RunEvaluationOutcome runEvaluation(const Model::RunEvaluationRequest &request)const;
			void runEvaluationAsync(const Model::RunEvaluationRequest& request, const RunEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunEvaluationOutcomeCallable runEvaluationCallable(const Model::RunEvaluationRequest& request) const;
			UpdateAccountFactoryBaselineOutcome updateAccountFactoryBaseline(const Model::UpdateAccountFactoryBaselineRequest &request)const;
			void updateAccountFactoryBaselineAsync(const Model::UpdateAccountFactoryBaselineRequest& request, const UpdateAccountFactoryBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAccountFactoryBaselineOutcomeCallable updateAccountFactoryBaselineCallable(const Model::UpdateAccountFactoryBaselineRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_GOVERNANCE_GOVERNANCECLIENT_H_
