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

#ifndef ALIBABACLOUD_COMPANYREG_COMPANYREGCLIENT_H_
#define ALIBABACLOUD_COMPANYREG_COMPANYREGCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CompanyregExport.h"
#include "model/AcceptBookkeepingAuditResultRequest.h"
#include "model/AcceptBookkeepingAuditResultResult.h"
#include "model/AcceptBookkeepingDetailStatusChangeRequest.h"
#include "model/AcceptBookkeepingDetailStatusChangeResult.h"
#include "model/AcceptPartnerNotificationRequest.h"
#include "model/AcceptPartnerNotificationResult.h"
#include "model/CloseIcpProduceRequest.h"
#include "model/CloseIcpProduceResult.h"
#include "model/CloseIntentionRequest.h"
#include "model/CloseIntentionResult.h"
#include "model/ConfirmIntentionRequest.h"
#include "model/ConfirmIntentionResult.h"
#include "model/ConfirmMaterialRequest.h"
#include "model/ConfirmMaterialResult.h"
#include "model/ConfirmTaxAmountRequest.h"
#include "model/ConfirmTaxAmountResult.h"
#include "model/CreateBookkeepingIntentionRequest.h"
#include "model/CreateBookkeepingIntentionResult.h"
#include "model/GenerateCompanyRegUploadPolicyRequest.h"
#include "model/GenerateCompanyRegUploadPolicyResult.h"
#include "model/GenerateUploadFilePolicyRequest.h"
#include "model/GenerateUploadFilePolicyResult.h"
#include "model/GetCompanyRegOrderRequest.h"
#include "model/GetCompanyRegOrderResult.h"
#include "model/ListApplicationLogsRequest.h"
#include "model/ListApplicationLogsResult.h"
#include "model/ListBookkeepingStatisticsesRequest.h"
#include "model/ListBookkeepingStatisticsesResult.h"
#include "model/ListBookkeepingSubjectBalancesRequest.h"
#include "model/ListBookkeepingSubjectBalancesResult.h"
#include "model/ListBookkeepingsRequest.h"
#include "model/ListBookkeepingsResult.h"
#include "model/ListCompanyRegConsultationsRequest.h"
#include "model/ListCompanyRegConsultationsResult.h"
#include "model/ListCompanyRegOrdersRequest.h"
#include "model/ListCompanyRegOrdersResult.h"
#include "model/ListIcpApplicationsRequest.h"
#include "model/ListIcpApplicationsResult.h"
#include "model/ProcessCompanyRegOrderRequest.h"
#include "model/ProcessCompanyRegOrderResult.h"
#include "model/QueryCommunicationLogsRequest.h"
#include "model/QueryCommunicationLogsResult.h"
#include "model/QueryIntentionListRequest.h"
#include "model/QueryIntentionListResult.h"
#include "model/QueryTradeIntentionUserListRequest.h"
#include "model/QueryTradeIntentionUserListResult.h"
#include "model/RefuseMaterialRequest.h"
#include "model/RefuseMaterialResult.h"
#include "model/RejectIcpIntentionRequest.h"
#include "model/RejectIcpIntentionResult.h"
#include "model/SendVcodeRequest.h"
#include "model/SendVcodeResult.h"
#include "model/SubmitCommunicationNoteRequest.h"
#include "model/SubmitCommunicationNoteResult.h"
#include "model/SubmitConsultationRequest.h"
#include "model/SubmitConsultationResult.h"
#include "model/SubmitIcpSolutionRequest.h"
#include "model/SubmitIcpSolutionResult.h"
#include "model/UpdateBookkeepingOrgRequest.h"
#include "model/UpdateBookkeepingOrgResult.h"
#include "model/UploadIcpBasicMaterialRequest.h"
#include "model/UploadIcpBasicMaterialResult.h"
#include "model/WriteCommunicationLogRequest.h"
#include "model/WriteCommunicationLogResult.h"


namespace AlibabaCloud
{
	namespace Companyreg
	{
		class ALIBABACLOUD_COMPANYREG_EXPORT CompanyregClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AcceptBookkeepingAuditResultResult> AcceptBookkeepingAuditResultOutcome;
			typedef std::future<AcceptBookkeepingAuditResultOutcome> AcceptBookkeepingAuditResultOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::AcceptBookkeepingAuditResultRequest&, const AcceptBookkeepingAuditResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcceptBookkeepingAuditResultAsyncHandler;
			typedef Outcome<Error, Model::AcceptBookkeepingDetailStatusChangeResult> AcceptBookkeepingDetailStatusChangeOutcome;
			typedef std::future<AcceptBookkeepingDetailStatusChangeOutcome> AcceptBookkeepingDetailStatusChangeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::AcceptBookkeepingDetailStatusChangeRequest&, const AcceptBookkeepingDetailStatusChangeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcceptBookkeepingDetailStatusChangeAsyncHandler;
			typedef Outcome<Error, Model::AcceptPartnerNotificationResult> AcceptPartnerNotificationOutcome;
			typedef std::future<AcceptPartnerNotificationOutcome> AcceptPartnerNotificationOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::AcceptPartnerNotificationRequest&, const AcceptPartnerNotificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcceptPartnerNotificationAsyncHandler;
			typedef Outcome<Error, Model::CloseIcpProduceResult> CloseIcpProduceOutcome;
			typedef std::future<CloseIcpProduceOutcome> CloseIcpProduceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CloseIcpProduceRequest&, const CloseIcpProduceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseIcpProduceAsyncHandler;
			typedef Outcome<Error, Model::CloseIntentionResult> CloseIntentionOutcome;
			typedef std::future<CloseIntentionOutcome> CloseIntentionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CloseIntentionRequest&, const CloseIntentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseIntentionAsyncHandler;
			typedef Outcome<Error, Model::ConfirmIntentionResult> ConfirmIntentionOutcome;
			typedef std::future<ConfirmIntentionOutcome> ConfirmIntentionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ConfirmIntentionRequest&, const ConfirmIntentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmIntentionAsyncHandler;
			typedef Outcome<Error, Model::ConfirmMaterialResult> ConfirmMaterialOutcome;
			typedef std::future<ConfirmMaterialOutcome> ConfirmMaterialOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ConfirmMaterialRequest&, const ConfirmMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmMaterialAsyncHandler;
			typedef Outcome<Error, Model::ConfirmTaxAmountResult> ConfirmTaxAmountOutcome;
			typedef std::future<ConfirmTaxAmountOutcome> ConfirmTaxAmountOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ConfirmTaxAmountRequest&, const ConfirmTaxAmountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmTaxAmountAsyncHandler;
			typedef Outcome<Error, Model::CreateBookkeepingIntentionResult> CreateBookkeepingIntentionOutcome;
			typedef std::future<CreateBookkeepingIntentionOutcome> CreateBookkeepingIntentionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CreateBookkeepingIntentionRequest&, const CreateBookkeepingIntentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBookkeepingIntentionAsyncHandler;
			typedef Outcome<Error, Model::GenerateCompanyRegUploadPolicyResult> GenerateCompanyRegUploadPolicyOutcome;
			typedef std::future<GenerateCompanyRegUploadPolicyOutcome> GenerateCompanyRegUploadPolicyOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GenerateCompanyRegUploadPolicyRequest&, const GenerateCompanyRegUploadPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateCompanyRegUploadPolicyAsyncHandler;
			typedef Outcome<Error, Model::GenerateUploadFilePolicyResult> GenerateUploadFilePolicyOutcome;
			typedef std::future<GenerateUploadFilePolicyOutcome> GenerateUploadFilePolicyOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GenerateUploadFilePolicyRequest&, const GenerateUploadFilePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateUploadFilePolicyAsyncHandler;
			typedef Outcome<Error, Model::GetCompanyRegOrderResult> GetCompanyRegOrderOutcome;
			typedef std::future<GetCompanyRegOrderOutcome> GetCompanyRegOrderOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetCompanyRegOrderRequest&, const GetCompanyRegOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCompanyRegOrderAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationLogsResult> ListApplicationLogsOutcome;
			typedef std::future<ListApplicationLogsOutcome> ListApplicationLogsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListApplicationLogsRequest&, const ListApplicationLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationLogsAsyncHandler;
			typedef Outcome<Error, Model::ListBookkeepingStatisticsesResult> ListBookkeepingStatisticsesOutcome;
			typedef std::future<ListBookkeepingStatisticsesOutcome> ListBookkeepingStatisticsesOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListBookkeepingStatisticsesRequest&, const ListBookkeepingStatisticsesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBookkeepingStatisticsesAsyncHandler;
			typedef Outcome<Error, Model::ListBookkeepingSubjectBalancesResult> ListBookkeepingSubjectBalancesOutcome;
			typedef std::future<ListBookkeepingSubjectBalancesOutcome> ListBookkeepingSubjectBalancesOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListBookkeepingSubjectBalancesRequest&, const ListBookkeepingSubjectBalancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBookkeepingSubjectBalancesAsyncHandler;
			typedef Outcome<Error, Model::ListBookkeepingsResult> ListBookkeepingsOutcome;
			typedef std::future<ListBookkeepingsOutcome> ListBookkeepingsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListBookkeepingsRequest&, const ListBookkeepingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBookkeepingsAsyncHandler;
			typedef Outcome<Error, Model::ListCompanyRegConsultationsResult> ListCompanyRegConsultationsOutcome;
			typedef std::future<ListCompanyRegConsultationsOutcome> ListCompanyRegConsultationsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListCompanyRegConsultationsRequest&, const ListCompanyRegConsultationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCompanyRegConsultationsAsyncHandler;
			typedef Outcome<Error, Model::ListCompanyRegOrdersResult> ListCompanyRegOrdersOutcome;
			typedef std::future<ListCompanyRegOrdersOutcome> ListCompanyRegOrdersOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListCompanyRegOrdersRequest&, const ListCompanyRegOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCompanyRegOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListIcpApplicationsResult> ListIcpApplicationsOutcome;
			typedef std::future<ListIcpApplicationsOutcome> ListIcpApplicationsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListIcpApplicationsRequest&, const ListIcpApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIcpApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ProcessCompanyRegOrderResult> ProcessCompanyRegOrderOutcome;
			typedef std::future<ProcessCompanyRegOrderOutcome> ProcessCompanyRegOrderOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ProcessCompanyRegOrderRequest&, const ProcessCompanyRegOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProcessCompanyRegOrderAsyncHandler;
			typedef Outcome<Error, Model::QueryCommunicationLogsResult> QueryCommunicationLogsOutcome;
			typedef std::future<QueryCommunicationLogsOutcome> QueryCommunicationLogsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::QueryCommunicationLogsRequest&, const QueryCommunicationLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCommunicationLogsAsyncHandler;
			typedef Outcome<Error, Model::QueryIntentionListResult> QueryIntentionListOutcome;
			typedef std::future<QueryIntentionListOutcome> QueryIntentionListOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::QueryIntentionListRequest&, const QueryIntentionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryIntentionListAsyncHandler;
			typedef Outcome<Error, Model::QueryTradeIntentionUserListResult> QueryTradeIntentionUserListOutcome;
			typedef std::future<QueryTradeIntentionUserListOutcome> QueryTradeIntentionUserListOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::QueryTradeIntentionUserListRequest&, const QueryTradeIntentionUserListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTradeIntentionUserListAsyncHandler;
			typedef Outcome<Error, Model::RefuseMaterialResult> RefuseMaterialOutcome;
			typedef std::future<RefuseMaterialOutcome> RefuseMaterialOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::RefuseMaterialRequest&, const RefuseMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefuseMaterialAsyncHandler;
			typedef Outcome<Error, Model::RejectIcpIntentionResult> RejectIcpIntentionOutcome;
			typedef std::future<RejectIcpIntentionOutcome> RejectIcpIntentionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::RejectIcpIntentionRequest&, const RejectIcpIntentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RejectIcpIntentionAsyncHandler;
			typedef Outcome<Error, Model::SendVcodeResult> SendVcodeOutcome;
			typedef std::future<SendVcodeOutcome> SendVcodeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SendVcodeRequest&, const SendVcodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendVcodeAsyncHandler;
			typedef Outcome<Error, Model::SubmitCommunicationNoteResult> SubmitCommunicationNoteOutcome;
			typedef std::future<SubmitCommunicationNoteOutcome> SubmitCommunicationNoteOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SubmitCommunicationNoteRequest&, const SubmitCommunicationNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCommunicationNoteAsyncHandler;
			typedef Outcome<Error, Model::SubmitConsultationResult> SubmitConsultationOutcome;
			typedef std::future<SubmitConsultationOutcome> SubmitConsultationOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SubmitConsultationRequest&, const SubmitConsultationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitConsultationAsyncHandler;
			typedef Outcome<Error, Model::SubmitIcpSolutionResult> SubmitIcpSolutionOutcome;
			typedef std::future<SubmitIcpSolutionOutcome> SubmitIcpSolutionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SubmitIcpSolutionRequest&, const SubmitIcpSolutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitIcpSolutionAsyncHandler;
			typedef Outcome<Error, Model::UpdateBookkeepingOrgResult> UpdateBookkeepingOrgOutcome;
			typedef std::future<UpdateBookkeepingOrgOutcome> UpdateBookkeepingOrgOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UpdateBookkeepingOrgRequest&, const UpdateBookkeepingOrgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBookkeepingOrgAsyncHandler;
			typedef Outcome<Error, Model::UploadIcpBasicMaterialResult> UploadIcpBasicMaterialOutcome;
			typedef std::future<UploadIcpBasicMaterialOutcome> UploadIcpBasicMaterialOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UploadIcpBasicMaterialRequest&, const UploadIcpBasicMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadIcpBasicMaterialAsyncHandler;
			typedef Outcome<Error, Model::WriteCommunicationLogResult> WriteCommunicationLogOutcome;
			typedef std::future<WriteCommunicationLogOutcome> WriteCommunicationLogOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::WriteCommunicationLogRequest&, const WriteCommunicationLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WriteCommunicationLogAsyncHandler;

			CompanyregClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CompanyregClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CompanyregClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CompanyregClient();
			AcceptBookkeepingAuditResultOutcome acceptBookkeepingAuditResult(const Model::AcceptBookkeepingAuditResultRequest &request)const;
			void acceptBookkeepingAuditResultAsync(const Model::AcceptBookkeepingAuditResultRequest& request, const AcceptBookkeepingAuditResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcceptBookkeepingAuditResultOutcomeCallable acceptBookkeepingAuditResultCallable(const Model::AcceptBookkeepingAuditResultRequest& request) const;
			AcceptBookkeepingDetailStatusChangeOutcome acceptBookkeepingDetailStatusChange(const Model::AcceptBookkeepingDetailStatusChangeRequest &request)const;
			void acceptBookkeepingDetailStatusChangeAsync(const Model::AcceptBookkeepingDetailStatusChangeRequest& request, const AcceptBookkeepingDetailStatusChangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcceptBookkeepingDetailStatusChangeOutcomeCallable acceptBookkeepingDetailStatusChangeCallable(const Model::AcceptBookkeepingDetailStatusChangeRequest& request) const;
			AcceptPartnerNotificationOutcome acceptPartnerNotification(const Model::AcceptPartnerNotificationRequest &request)const;
			void acceptPartnerNotificationAsync(const Model::AcceptPartnerNotificationRequest& request, const AcceptPartnerNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcceptPartnerNotificationOutcomeCallable acceptPartnerNotificationCallable(const Model::AcceptPartnerNotificationRequest& request) const;
			CloseIcpProduceOutcome closeIcpProduce(const Model::CloseIcpProduceRequest &request)const;
			void closeIcpProduceAsync(const Model::CloseIcpProduceRequest& request, const CloseIcpProduceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseIcpProduceOutcomeCallable closeIcpProduceCallable(const Model::CloseIcpProduceRequest& request) const;
			CloseIntentionOutcome closeIntention(const Model::CloseIntentionRequest &request)const;
			void closeIntentionAsync(const Model::CloseIntentionRequest& request, const CloseIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseIntentionOutcomeCallable closeIntentionCallable(const Model::CloseIntentionRequest& request) const;
			ConfirmIntentionOutcome confirmIntention(const Model::ConfirmIntentionRequest &request)const;
			void confirmIntentionAsync(const Model::ConfirmIntentionRequest& request, const ConfirmIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmIntentionOutcomeCallable confirmIntentionCallable(const Model::ConfirmIntentionRequest& request) const;
			ConfirmMaterialOutcome confirmMaterial(const Model::ConfirmMaterialRequest &request)const;
			void confirmMaterialAsync(const Model::ConfirmMaterialRequest& request, const ConfirmMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmMaterialOutcomeCallable confirmMaterialCallable(const Model::ConfirmMaterialRequest& request) const;
			ConfirmTaxAmountOutcome confirmTaxAmount(const Model::ConfirmTaxAmountRequest &request)const;
			void confirmTaxAmountAsync(const Model::ConfirmTaxAmountRequest& request, const ConfirmTaxAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmTaxAmountOutcomeCallable confirmTaxAmountCallable(const Model::ConfirmTaxAmountRequest& request) const;
			CreateBookkeepingIntentionOutcome createBookkeepingIntention(const Model::CreateBookkeepingIntentionRequest &request)const;
			void createBookkeepingIntentionAsync(const Model::CreateBookkeepingIntentionRequest& request, const CreateBookkeepingIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBookkeepingIntentionOutcomeCallable createBookkeepingIntentionCallable(const Model::CreateBookkeepingIntentionRequest& request) const;
			GenerateCompanyRegUploadPolicyOutcome generateCompanyRegUploadPolicy(const Model::GenerateCompanyRegUploadPolicyRequest &request)const;
			void generateCompanyRegUploadPolicyAsync(const Model::GenerateCompanyRegUploadPolicyRequest& request, const GenerateCompanyRegUploadPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateCompanyRegUploadPolicyOutcomeCallable generateCompanyRegUploadPolicyCallable(const Model::GenerateCompanyRegUploadPolicyRequest& request) const;
			GenerateUploadFilePolicyOutcome generateUploadFilePolicy(const Model::GenerateUploadFilePolicyRequest &request)const;
			void generateUploadFilePolicyAsync(const Model::GenerateUploadFilePolicyRequest& request, const GenerateUploadFilePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateUploadFilePolicyOutcomeCallable generateUploadFilePolicyCallable(const Model::GenerateUploadFilePolicyRequest& request) const;
			GetCompanyRegOrderOutcome getCompanyRegOrder(const Model::GetCompanyRegOrderRequest &request)const;
			void getCompanyRegOrderAsync(const Model::GetCompanyRegOrderRequest& request, const GetCompanyRegOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCompanyRegOrderOutcomeCallable getCompanyRegOrderCallable(const Model::GetCompanyRegOrderRequest& request) const;
			ListApplicationLogsOutcome listApplicationLogs(const Model::ListApplicationLogsRequest &request)const;
			void listApplicationLogsAsync(const Model::ListApplicationLogsRequest& request, const ListApplicationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationLogsOutcomeCallable listApplicationLogsCallable(const Model::ListApplicationLogsRequest& request) const;
			ListBookkeepingStatisticsesOutcome listBookkeepingStatisticses(const Model::ListBookkeepingStatisticsesRequest &request)const;
			void listBookkeepingStatisticsesAsync(const Model::ListBookkeepingStatisticsesRequest& request, const ListBookkeepingStatisticsesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBookkeepingStatisticsesOutcomeCallable listBookkeepingStatisticsesCallable(const Model::ListBookkeepingStatisticsesRequest& request) const;
			ListBookkeepingSubjectBalancesOutcome listBookkeepingSubjectBalances(const Model::ListBookkeepingSubjectBalancesRequest &request)const;
			void listBookkeepingSubjectBalancesAsync(const Model::ListBookkeepingSubjectBalancesRequest& request, const ListBookkeepingSubjectBalancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBookkeepingSubjectBalancesOutcomeCallable listBookkeepingSubjectBalancesCallable(const Model::ListBookkeepingSubjectBalancesRequest& request) const;
			ListBookkeepingsOutcome listBookkeepings(const Model::ListBookkeepingsRequest &request)const;
			void listBookkeepingsAsync(const Model::ListBookkeepingsRequest& request, const ListBookkeepingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBookkeepingsOutcomeCallable listBookkeepingsCallable(const Model::ListBookkeepingsRequest& request) const;
			ListCompanyRegConsultationsOutcome listCompanyRegConsultations(const Model::ListCompanyRegConsultationsRequest &request)const;
			void listCompanyRegConsultationsAsync(const Model::ListCompanyRegConsultationsRequest& request, const ListCompanyRegConsultationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCompanyRegConsultationsOutcomeCallable listCompanyRegConsultationsCallable(const Model::ListCompanyRegConsultationsRequest& request) const;
			ListCompanyRegOrdersOutcome listCompanyRegOrders(const Model::ListCompanyRegOrdersRequest &request)const;
			void listCompanyRegOrdersAsync(const Model::ListCompanyRegOrdersRequest& request, const ListCompanyRegOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCompanyRegOrdersOutcomeCallable listCompanyRegOrdersCallable(const Model::ListCompanyRegOrdersRequest& request) const;
			ListIcpApplicationsOutcome listIcpApplications(const Model::ListIcpApplicationsRequest &request)const;
			void listIcpApplicationsAsync(const Model::ListIcpApplicationsRequest& request, const ListIcpApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIcpApplicationsOutcomeCallable listIcpApplicationsCallable(const Model::ListIcpApplicationsRequest& request) const;
			ProcessCompanyRegOrderOutcome processCompanyRegOrder(const Model::ProcessCompanyRegOrderRequest &request)const;
			void processCompanyRegOrderAsync(const Model::ProcessCompanyRegOrderRequest& request, const ProcessCompanyRegOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProcessCompanyRegOrderOutcomeCallable processCompanyRegOrderCallable(const Model::ProcessCompanyRegOrderRequest& request) const;
			QueryCommunicationLogsOutcome queryCommunicationLogs(const Model::QueryCommunicationLogsRequest &request)const;
			void queryCommunicationLogsAsync(const Model::QueryCommunicationLogsRequest& request, const QueryCommunicationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCommunicationLogsOutcomeCallable queryCommunicationLogsCallable(const Model::QueryCommunicationLogsRequest& request) const;
			QueryIntentionListOutcome queryIntentionList(const Model::QueryIntentionListRequest &request)const;
			void queryIntentionListAsync(const Model::QueryIntentionListRequest& request, const QueryIntentionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryIntentionListOutcomeCallable queryIntentionListCallable(const Model::QueryIntentionListRequest& request) const;
			QueryTradeIntentionUserListOutcome queryTradeIntentionUserList(const Model::QueryTradeIntentionUserListRequest &request)const;
			void queryTradeIntentionUserListAsync(const Model::QueryTradeIntentionUserListRequest& request, const QueryTradeIntentionUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTradeIntentionUserListOutcomeCallable queryTradeIntentionUserListCallable(const Model::QueryTradeIntentionUserListRequest& request) const;
			RefuseMaterialOutcome refuseMaterial(const Model::RefuseMaterialRequest &request)const;
			void refuseMaterialAsync(const Model::RefuseMaterialRequest& request, const RefuseMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefuseMaterialOutcomeCallable refuseMaterialCallable(const Model::RefuseMaterialRequest& request) const;
			RejectIcpIntentionOutcome rejectIcpIntention(const Model::RejectIcpIntentionRequest &request)const;
			void rejectIcpIntentionAsync(const Model::RejectIcpIntentionRequest& request, const RejectIcpIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RejectIcpIntentionOutcomeCallable rejectIcpIntentionCallable(const Model::RejectIcpIntentionRequest& request) const;
			SendVcodeOutcome sendVcode(const Model::SendVcodeRequest &request)const;
			void sendVcodeAsync(const Model::SendVcodeRequest& request, const SendVcodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendVcodeOutcomeCallable sendVcodeCallable(const Model::SendVcodeRequest& request) const;
			SubmitCommunicationNoteOutcome submitCommunicationNote(const Model::SubmitCommunicationNoteRequest &request)const;
			void submitCommunicationNoteAsync(const Model::SubmitCommunicationNoteRequest& request, const SubmitCommunicationNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitCommunicationNoteOutcomeCallable submitCommunicationNoteCallable(const Model::SubmitCommunicationNoteRequest& request) const;
			SubmitConsultationOutcome submitConsultation(const Model::SubmitConsultationRequest &request)const;
			void submitConsultationAsync(const Model::SubmitConsultationRequest& request, const SubmitConsultationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitConsultationOutcomeCallable submitConsultationCallable(const Model::SubmitConsultationRequest& request) const;
			SubmitIcpSolutionOutcome submitIcpSolution(const Model::SubmitIcpSolutionRequest &request)const;
			void submitIcpSolutionAsync(const Model::SubmitIcpSolutionRequest& request, const SubmitIcpSolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitIcpSolutionOutcomeCallable submitIcpSolutionCallable(const Model::SubmitIcpSolutionRequest& request) const;
			UpdateBookkeepingOrgOutcome updateBookkeepingOrg(const Model::UpdateBookkeepingOrgRequest &request)const;
			void updateBookkeepingOrgAsync(const Model::UpdateBookkeepingOrgRequest& request, const UpdateBookkeepingOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBookkeepingOrgOutcomeCallable updateBookkeepingOrgCallable(const Model::UpdateBookkeepingOrgRequest& request) const;
			UploadIcpBasicMaterialOutcome uploadIcpBasicMaterial(const Model::UploadIcpBasicMaterialRequest &request)const;
			void uploadIcpBasicMaterialAsync(const Model::UploadIcpBasicMaterialRequest& request, const UploadIcpBasicMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadIcpBasicMaterialOutcomeCallable uploadIcpBasicMaterialCallable(const Model::UploadIcpBasicMaterialRequest& request) const;
			WriteCommunicationLogOutcome writeCommunicationLog(const Model::WriteCommunicationLogRequest &request)const;
			void writeCommunicationLogAsync(const Model::WriteCommunicationLogRequest& request, const WriteCommunicationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WriteCommunicationLogOutcomeCallable writeCommunicationLogCallable(const Model::WriteCommunicationLogRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_COMPANYREG_COMPANYREGCLIENT_H_
