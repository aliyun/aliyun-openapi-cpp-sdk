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

#ifndef ALIBABACLOUD_TRADEMARK_TRADEMARKCLIENT_H_
#define ALIBABACLOUD_TRADEMARK_TRADEMARKCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "TrademarkExport.h"
#include "model/AcceptPartnerNotificationRequest.h"
#include "model/AcceptPartnerNotificationResult.h"
#include "model/ApplyNotaryPostRequest.h"
#include "model/ApplyNotaryPostResult.h"
#include "model/BindMaterialRequest.h"
#include "model/BindMaterialResult.h"
#include "model/CancelTradeOrderRequest.h"
#include "model/CancelTradeOrderResult.h"
#include "model/CheckLoaFillRequest.h"
#include "model/CheckLoaFillResult.h"
#include "model/CheckTrademarkOrderRequest.h"
#include "model/CheckTrademarkOrderResult.h"
#include "model/CombineLoaRequest.h"
#include "model/CombineLoaResult.h"
#include "model/ConfirmAdditionalMaterialRequest.h"
#include "model/ConfirmAdditionalMaterialResult.h"
#include "model/ConfirmApplicantRequest.h"
#include "model/ConfirmApplicantResult.h"
#include "model/ConvertImageToGrayRequest.h"
#include "model/ConvertImageToGrayResult.h"
#include "model/CreateIntentionOrderRequest.h"
#include "model/CreateIntentionOrderResult.h"
#include "model/CreateTrademarkOrderRequest.h"
#include "model/CreateTrademarkOrderResult.h"
#include "model/DeleteMaterialRequest.h"
#include "model/DeleteMaterialResult.h"
#include "model/DeleteTmMonitorRuleRequest.h"
#include "model/DeleteTmMonitorRuleResult.h"
#include "model/DenySupplementRequest.h"
#include "model/DenySupplementResult.h"
#include "model/DescirbeCombineTrademarkRequest.h"
#include "model/DescirbeCombineTrademarkResult.h"
#include "model/FillLogisticsRequest.h"
#include "model/FillLogisticsResult.h"
#include "model/FilterUnavailableCodesRequest.h"
#include "model/FilterUnavailableCodesResult.h"
#include "model/GenerateQrCodeRequest.h"
#include "model/GenerateQrCodeResult.h"
#include "model/GenerateUploadFilePolicyRequest.h"
#include "model/GenerateUploadFilePolicyResult.h"
#include "model/GetNotaryOrderRequest.h"
#include "model/GetNotaryOrderResult.h"
#include "model/InsertMaterialRequest.h"
#include "model/InsertMaterialResult.h"
#include "model/InsertRenewInfoRequest.h"
#include "model/InsertRenewInfoResult.h"
#include "model/InsertTmMonitorRuleRequest.h"
#include "model/InsertTmMonitorRuleResult.h"
#include "model/InsertTradeIntentionUserRequest.h"
#include "model/InsertTradeIntentionUserResult.h"
#include "model/ListNotaryInfosRequest.h"
#include "model/ListNotaryInfosResult.h"
#include "model/ListNotaryOrdersRequest.h"
#include "model/ListNotaryOrdersResult.h"
#include "model/QueryCommunicationLogsRequest.h"
#include "model/QueryCommunicationLogsResult.h"
#include "model/QueryCredentialsInfoRequest.h"
#include "model/QueryCredentialsInfoResult.h"
#include "model/QueryIntentionDetailRequest.h"
#include "model/QueryIntentionDetailResult.h"
#include "model/QueryIntentionListRequest.h"
#include "model/QueryIntentionListResult.h"
#include "model/QueryIntentionPriceRequest.h"
#include "model/QueryIntentionPriceResult.h"
#include "model/QueryMaterialRequest.h"
#include "model/QueryMaterialResult.h"
#include "model/QueryMaterialListRequest.h"
#include "model/QueryMaterialListResult.h"
#include "model/QueryMonitorKeywordsRequest.h"
#include "model/QueryMonitorKeywordsResult.h"
#include "model/QueryOfficialFileCustomListRequest.h"
#include "model/QueryOfficialFileCustomListResult.h"
#include "model/QueryOssResourcesRequest.h"
#include "model/QueryOssResourcesResult.h"
#include "model/QueryQrCodeUploadStatusRequest.h"
#include "model/QueryQrCodeUploadStatusResult.h"
#include "model/QuerySupplementDetailRequest.h"
#include "model/QuerySupplementDetailResult.h"
#include "model/QueryTaskListRequest.h"
#include "model/QueryTaskListResult.h"
#include "model/QueryTradeIntentionUserListRequest.h"
#include "model/QueryTradeIntentionUserListResult.h"
#include "model/QueryTradeMarkApplicationDetailRequest.h"
#include "model/QueryTradeMarkApplicationDetailResult.h"
#include "model/QueryTradeMarkApplicationLogsRequest.h"
#include "model/QueryTradeMarkApplicationLogsResult.h"
#include "model/QueryTradeMarkApplicationsRequest.h"
#include "model/QueryTradeMarkApplicationsResult.h"
#include "model/QueryTradeMarkApplicationsByIntentionRequest.h"
#include "model/QueryTradeMarkApplicationsByIntentionResult.h"
#include "model/QueryTradeProduceDetailRequest.h"
#include "model/QueryTradeProduceDetailResult.h"
#include "model/QueryTradeProduceListRequest.h"
#include "model/QueryTradeProduceListResult.h"
#include "model/QueryTrademarkMonitorResultsRequest.h"
#include "model/QueryTrademarkMonitorResultsResult.h"
#include "model/QueryTrademarkMonitorRulesRequest.h"
#include "model/QueryTrademarkMonitorRulesResult.h"
#include "model/QueryTrademarkPriceRequest.h"
#include "model/QueryTrademarkPriceResult.h"
#include "model/RefundProduceRequest.h"
#include "model/RefundProduceResult.h"
#include "model/RefuseAdditionalMaterialRequest.h"
#include "model/RefuseAdditionalMaterialResult.h"
#include "model/RefuseApplicantRequest.h"
#include "model/RefuseApplicantResult.h"
#include "model/RejectApplicantRequest.h"
#include "model/RejectApplicantResult.h"
#include "model/SaveTaskRequest.h"
#include "model/SaveTaskResult.h"
#include "model/SaveTaskForOfficialFileCustomRequest.h"
#include "model/SaveTaskForOfficialFileCustomResult.h"
#include "model/SaveTradeMarkReviewMaterialDetailRequest.h"
#include "model/SaveTradeMarkReviewMaterialDetailResult.h"
#include "model/SearchTmOnsalesRequest.h"
#include "model/SearchTmOnsalesResult.h"
#include "model/StartNotaryRequest.h"
#include "model/StartNotaryResult.h"
#include "model/StoreMaterialTemporarilyRequest.h"
#include "model/StoreMaterialTemporarilyResult.h"
#include "model/SubmitSupplementRequest.h"
#include "model/SubmitSupplementResult.h"
#include "model/UpdateMaterialRequest.h"
#include "model/UpdateMaterialResult.h"
#include "model/UpdateSendMaterialNumRequest.h"
#include "model/UpdateSendMaterialNumResult.h"
#include "model/UpdateTmMonitorRuleRequest.h"
#include "model/UpdateTmMonitorRuleResult.h"
#include "model/UploadNotaryDataRequest.h"
#include "model/UploadNotaryDataResult.h"
#include "model/WriteCommunicationLogRequest.h"
#include "model/WriteCommunicationLogResult.h"
#include "model/WriteIntentionCommunicationLogRequest.h"
#include "model/WriteIntentionCommunicationLogResult.h"


namespace AlibabaCloud
{
	namespace Trademark
	{
		class ALIBABACLOUD_TRADEMARK_EXPORT TrademarkClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AcceptPartnerNotificationResult> AcceptPartnerNotificationOutcome;
			typedef std::future<AcceptPartnerNotificationOutcome> AcceptPartnerNotificationOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::AcceptPartnerNotificationRequest&, const AcceptPartnerNotificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcceptPartnerNotificationAsyncHandler;
			typedef Outcome<Error, Model::ApplyNotaryPostResult> ApplyNotaryPostOutcome;
			typedef std::future<ApplyNotaryPostOutcome> ApplyNotaryPostOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::ApplyNotaryPostRequest&, const ApplyNotaryPostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyNotaryPostAsyncHandler;
			typedef Outcome<Error, Model::BindMaterialResult> BindMaterialOutcome;
			typedef std::future<BindMaterialOutcome> BindMaterialOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::BindMaterialRequest&, const BindMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindMaterialAsyncHandler;
			typedef Outcome<Error, Model::CancelTradeOrderResult> CancelTradeOrderOutcome;
			typedef std::future<CancelTradeOrderOutcome> CancelTradeOrderOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::CancelTradeOrderRequest&, const CancelTradeOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelTradeOrderAsyncHandler;
			typedef Outcome<Error, Model::CheckLoaFillResult> CheckLoaFillOutcome;
			typedef std::future<CheckLoaFillOutcome> CheckLoaFillOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::CheckLoaFillRequest&, const CheckLoaFillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckLoaFillAsyncHandler;
			typedef Outcome<Error, Model::CheckTrademarkOrderResult> CheckTrademarkOrderOutcome;
			typedef std::future<CheckTrademarkOrderOutcome> CheckTrademarkOrderOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::CheckTrademarkOrderRequest&, const CheckTrademarkOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckTrademarkOrderAsyncHandler;
			typedef Outcome<Error, Model::CombineLoaResult> CombineLoaOutcome;
			typedef std::future<CombineLoaOutcome> CombineLoaOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::CombineLoaRequest&, const CombineLoaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CombineLoaAsyncHandler;
			typedef Outcome<Error, Model::ConfirmAdditionalMaterialResult> ConfirmAdditionalMaterialOutcome;
			typedef std::future<ConfirmAdditionalMaterialOutcome> ConfirmAdditionalMaterialOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::ConfirmAdditionalMaterialRequest&, const ConfirmAdditionalMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmAdditionalMaterialAsyncHandler;
			typedef Outcome<Error, Model::ConfirmApplicantResult> ConfirmApplicantOutcome;
			typedef std::future<ConfirmApplicantOutcome> ConfirmApplicantOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::ConfirmApplicantRequest&, const ConfirmApplicantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmApplicantAsyncHandler;
			typedef Outcome<Error, Model::ConvertImageToGrayResult> ConvertImageToGrayOutcome;
			typedef std::future<ConvertImageToGrayOutcome> ConvertImageToGrayOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::ConvertImageToGrayRequest&, const ConvertImageToGrayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertImageToGrayAsyncHandler;
			typedef Outcome<Error, Model::CreateIntentionOrderResult> CreateIntentionOrderOutcome;
			typedef std::future<CreateIntentionOrderOutcome> CreateIntentionOrderOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::CreateIntentionOrderRequest&, const CreateIntentionOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntentionOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateTrademarkOrderResult> CreateTrademarkOrderOutcome;
			typedef std::future<CreateTrademarkOrderOutcome> CreateTrademarkOrderOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::CreateTrademarkOrderRequest&, const CreateTrademarkOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrademarkOrderAsyncHandler;
			typedef Outcome<Error, Model::DeleteMaterialResult> DeleteMaterialOutcome;
			typedef std::future<DeleteMaterialOutcome> DeleteMaterialOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::DeleteMaterialRequest&, const DeleteMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaterialAsyncHandler;
			typedef Outcome<Error, Model::DeleteTmMonitorRuleResult> DeleteTmMonitorRuleOutcome;
			typedef std::future<DeleteTmMonitorRuleOutcome> DeleteTmMonitorRuleOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::DeleteTmMonitorRuleRequest&, const DeleteTmMonitorRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTmMonitorRuleAsyncHandler;
			typedef Outcome<Error, Model::DenySupplementResult> DenySupplementOutcome;
			typedef std::future<DenySupplementOutcome> DenySupplementOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::DenySupplementRequest&, const DenySupplementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DenySupplementAsyncHandler;
			typedef Outcome<Error, Model::DescirbeCombineTrademarkResult> DescirbeCombineTrademarkOutcome;
			typedef std::future<DescirbeCombineTrademarkOutcome> DescirbeCombineTrademarkOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::DescirbeCombineTrademarkRequest&, const DescirbeCombineTrademarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescirbeCombineTrademarkAsyncHandler;
			typedef Outcome<Error, Model::FillLogisticsResult> FillLogisticsOutcome;
			typedef std::future<FillLogisticsOutcome> FillLogisticsOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::FillLogisticsRequest&, const FillLogisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FillLogisticsAsyncHandler;
			typedef Outcome<Error, Model::FilterUnavailableCodesResult> FilterUnavailableCodesOutcome;
			typedef std::future<FilterUnavailableCodesOutcome> FilterUnavailableCodesOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::FilterUnavailableCodesRequest&, const FilterUnavailableCodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FilterUnavailableCodesAsyncHandler;
			typedef Outcome<Error, Model::GenerateQrCodeResult> GenerateQrCodeOutcome;
			typedef std::future<GenerateQrCodeOutcome> GenerateQrCodeOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::GenerateQrCodeRequest&, const GenerateQrCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateQrCodeAsyncHandler;
			typedef Outcome<Error, Model::GenerateUploadFilePolicyResult> GenerateUploadFilePolicyOutcome;
			typedef std::future<GenerateUploadFilePolicyOutcome> GenerateUploadFilePolicyOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::GenerateUploadFilePolicyRequest&, const GenerateUploadFilePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateUploadFilePolicyAsyncHandler;
			typedef Outcome<Error, Model::GetNotaryOrderResult> GetNotaryOrderOutcome;
			typedef std::future<GetNotaryOrderOutcome> GetNotaryOrderOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::GetNotaryOrderRequest&, const GetNotaryOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNotaryOrderAsyncHandler;
			typedef Outcome<Error, Model::InsertMaterialResult> InsertMaterialOutcome;
			typedef std::future<InsertMaterialOutcome> InsertMaterialOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::InsertMaterialRequest&, const InsertMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertMaterialAsyncHandler;
			typedef Outcome<Error, Model::InsertRenewInfoResult> InsertRenewInfoOutcome;
			typedef std::future<InsertRenewInfoOutcome> InsertRenewInfoOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::InsertRenewInfoRequest&, const InsertRenewInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertRenewInfoAsyncHandler;
			typedef Outcome<Error, Model::InsertTmMonitorRuleResult> InsertTmMonitorRuleOutcome;
			typedef std::future<InsertTmMonitorRuleOutcome> InsertTmMonitorRuleOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::InsertTmMonitorRuleRequest&, const InsertTmMonitorRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertTmMonitorRuleAsyncHandler;
			typedef Outcome<Error, Model::InsertTradeIntentionUserResult> InsertTradeIntentionUserOutcome;
			typedef std::future<InsertTradeIntentionUserOutcome> InsertTradeIntentionUserOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::InsertTradeIntentionUserRequest&, const InsertTradeIntentionUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertTradeIntentionUserAsyncHandler;
			typedef Outcome<Error, Model::ListNotaryInfosResult> ListNotaryInfosOutcome;
			typedef std::future<ListNotaryInfosOutcome> ListNotaryInfosOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::ListNotaryInfosRequest&, const ListNotaryInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNotaryInfosAsyncHandler;
			typedef Outcome<Error, Model::ListNotaryOrdersResult> ListNotaryOrdersOutcome;
			typedef std::future<ListNotaryOrdersOutcome> ListNotaryOrdersOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::ListNotaryOrdersRequest&, const ListNotaryOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNotaryOrdersAsyncHandler;
			typedef Outcome<Error, Model::QueryCommunicationLogsResult> QueryCommunicationLogsOutcome;
			typedef std::future<QueryCommunicationLogsOutcome> QueryCommunicationLogsOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryCommunicationLogsRequest&, const QueryCommunicationLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCommunicationLogsAsyncHandler;
			typedef Outcome<Error, Model::QueryCredentialsInfoResult> QueryCredentialsInfoOutcome;
			typedef std::future<QueryCredentialsInfoOutcome> QueryCredentialsInfoOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryCredentialsInfoRequest&, const QueryCredentialsInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCredentialsInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryIntentionDetailResult> QueryIntentionDetailOutcome;
			typedef std::future<QueryIntentionDetailOutcome> QueryIntentionDetailOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryIntentionDetailRequest&, const QueryIntentionDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryIntentionDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryIntentionListResult> QueryIntentionListOutcome;
			typedef std::future<QueryIntentionListOutcome> QueryIntentionListOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryIntentionListRequest&, const QueryIntentionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryIntentionListAsyncHandler;
			typedef Outcome<Error, Model::QueryIntentionPriceResult> QueryIntentionPriceOutcome;
			typedef std::future<QueryIntentionPriceOutcome> QueryIntentionPriceOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryIntentionPriceRequest&, const QueryIntentionPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryIntentionPriceAsyncHandler;
			typedef Outcome<Error, Model::QueryMaterialResult> QueryMaterialOutcome;
			typedef std::future<QueryMaterialOutcome> QueryMaterialOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryMaterialRequest&, const QueryMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMaterialAsyncHandler;
			typedef Outcome<Error, Model::QueryMaterialListResult> QueryMaterialListOutcome;
			typedef std::future<QueryMaterialListOutcome> QueryMaterialListOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryMaterialListRequest&, const QueryMaterialListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMaterialListAsyncHandler;
			typedef Outcome<Error, Model::QueryMonitorKeywordsResult> QueryMonitorKeywordsOutcome;
			typedef std::future<QueryMonitorKeywordsOutcome> QueryMonitorKeywordsOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryMonitorKeywordsRequest&, const QueryMonitorKeywordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMonitorKeywordsAsyncHandler;
			typedef Outcome<Error, Model::QueryOfficialFileCustomListResult> QueryOfficialFileCustomListOutcome;
			typedef std::future<QueryOfficialFileCustomListOutcome> QueryOfficialFileCustomListOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryOfficialFileCustomListRequest&, const QueryOfficialFileCustomListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryOfficialFileCustomListAsyncHandler;
			typedef Outcome<Error, Model::QueryOssResourcesResult> QueryOssResourcesOutcome;
			typedef std::future<QueryOssResourcesOutcome> QueryOssResourcesOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryOssResourcesRequest&, const QueryOssResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryOssResourcesAsyncHandler;
			typedef Outcome<Error, Model::QueryQrCodeUploadStatusResult> QueryQrCodeUploadStatusOutcome;
			typedef std::future<QueryQrCodeUploadStatusOutcome> QueryQrCodeUploadStatusOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryQrCodeUploadStatusRequest&, const QueryQrCodeUploadStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryQrCodeUploadStatusAsyncHandler;
			typedef Outcome<Error, Model::QuerySupplementDetailResult> QuerySupplementDetailOutcome;
			typedef std::future<QuerySupplementDetailOutcome> QuerySupplementDetailOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QuerySupplementDetailRequest&, const QuerySupplementDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySupplementDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryTaskListResult> QueryTaskListOutcome;
			typedef std::future<QueryTaskListOutcome> QueryTaskListOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryTaskListRequest&, const QueryTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTaskListAsyncHandler;
			typedef Outcome<Error, Model::QueryTradeIntentionUserListResult> QueryTradeIntentionUserListOutcome;
			typedef std::future<QueryTradeIntentionUserListOutcome> QueryTradeIntentionUserListOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryTradeIntentionUserListRequest&, const QueryTradeIntentionUserListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTradeIntentionUserListAsyncHandler;
			typedef Outcome<Error, Model::QueryTradeMarkApplicationDetailResult> QueryTradeMarkApplicationDetailOutcome;
			typedef std::future<QueryTradeMarkApplicationDetailOutcome> QueryTradeMarkApplicationDetailOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryTradeMarkApplicationDetailRequest&, const QueryTradeMarkApplicationDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTradeMarkApplicationDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryTradeMarkApplicationLogsResult> QueryTradeMarkApplicationLogsOutcome;
			typedef std::future<QueryTradeMarkApplicationLogsOutcome> QueryTradeMarkApplicationLogsOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryTradeMarkApplicationLogsRequest&, const QueryTradeMarkApplicationLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTradeMarkApplicationLogsAsyncHandler;
			typedef Outcome<Error, Model::QueryTradeMarkApplicationsResult> QueryTradeMarkApplicationsOutcome;
			typedef std::future<QueryTradeMarkApplicationsOutcome> QueryTradeMarkApplicationsOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryTradeMarkApplicationsRequest&, const QueryTradeMarkApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTradeMarkApplicationsAsyncHandler;
			typedef Outcome<Error, Model::QueryTradeMarkApplicationsByIntentionResult> QueryTradeMarkApplicationsByIntentionOutcome;
			typedef std::future<QueryTradeMarkApplicationsByIntentionOutcome> QueryTradeMarkApplicationsByIntentionOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryTradeMarkApplicationsByIntentionRequest&, const QueryTradeMarkApplicationsByIntentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTradeMarkApplicationsByIntentionAsyncHandler;
			typedef Outcome<Error, Model::QueryTradeProduceDetailResult> QueryTradeProduceDetailOutcome;
			typedef std::future<QueryTradeProduceDetailOutcome> QueryTradeProduceDetailOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryTradeProduceDetailRequest&, const QueryTradeProduceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTradeProduceDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryTradeProduceListResult> QueryTradeProduceListOutcome;
			typedef std::future<QueryTradeProduceListOutcome> QueryTradeProduceListOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryTradeProduceListRequest&, const QueryTradeProduceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTradeProduceListAsyncHandler;
			typedef Outcome<Error, Model::QueryTrademarkMonitorResultsResult> QueryTrademarkMonitorResultsOutcome;
			typedef std::future<QueryTrademarkMonitorResultsOutcome> QueryTrademarkMonitorResultsOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryTrademarkMonitorResultsRequest&, const QueryTrademarkMonitorResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTrademarkMonitorResultsAsyncHandler;
			typedef Outcome<Error, Model::QueryTrademarkMonitorRulesResult> QueryTrademarkMonitorRulesOutcome;
			typedef std::future<QueryTrademarkMonitorRulesOutcome> QueryTrademarkMonitorRulesOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryTrademarkMonitorRulesRequest&, const QueryTrademarkMonitorRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTrademarkMonitorRulesAsyncHandler;
			typedef Outcome<Error, Model::QueryTrademarkPriceResult> QueryTrademarkPriceOutcome;
			typedef std::future<QueryTrademarkPriceOutcome> QueryTrademarkPriceOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::QueryTrademarkPriceRequest&, const QueryTrademarkPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTrademarkPriceAsyncHandler;
			typedef Outcome<Error, Model::RefundProduceResult> RefundProduceOutcome;
			typedef std::future<RefundProduceOutcome> RefundProduceOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::RefundProduceRequest&, const RefundProduceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefundProduceAsyncHandler;
			typedef Outcome<Error, Model::RefuseAdditionalMaterialResult> RefuseAdditionalMaterialOutcome;
			typedef std::future<RefuseAdditionalMaterialOutcome> RefuseAdditionalMaterialOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::RefuseAdditionalMaterialRequest&, const RefuseAdditionalMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefuseAdditionalMaterialAsyncHandler;
			typedef Outcome<Error, Model::RefuseApplicantResult> RefuseApplicantOutcome;
			typedef std::future<RefuseApplicantOutcome> RefuseApplicantOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::RefuseApplicantRequest&, const RefuseApplicantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefuseApplicantAsyncHandler;
			typedef Outcome<Error, Model::RejectApplicantResult> RejectApplicantOutcome;
			typedef std::future<RejectApplicantOutcome> RejectApplicantOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::RejectApplicantRequest&, const RejectApplicantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RejectApplicantAsyncHandler;
			typedef Outcome<Error, Model::SaveTaskResult> SaveTaskOutcome;
			typedef std::future<SaveTaskOutcome> SaveTaskOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::SaveTaskRequest&, const SaveTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveTaskAsyncHandler;
			typedef Outcome<Error, Model::SaveTaskForOfficialFileCustomResult> SaveTaskForOfficialFileCustomOutcome;
			typedef std::future<SaveTaskForOfficialFileCustomOutcome> SaveTaskForOfficialFileCustomOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::SaveTaskForOfficialFileCustomRequest&, const SaveTaskForOfficialFileCustomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveTaskForOfficialFileCustomAsyncHandler;
			typedef Outcome<Error, Model::SaveTradeMarkReviewMaterialDetailResult> SaveTradeMarkReviewMaterialDetailOutcome;
			typedef std::future<SaveTradeMarkReviewMaterialDetailOutcome> SaveTradeMarkReviewMaterialDetailOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::SaveTradeMarkReviewMaterialDetailRequest&, const SaveTradeMarkReviewMaterialDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveTradeMarkReviewMaterialDetailAsyncHandler;
			typedef Outcome<Error, Model::SearchTmOnsalesResult> SearchTmOnsalesOutcome;
			typedef std::future<SearchTmOnsalesOutcome> SearchTmOnsalesOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::SearchTmOnsalesRequest&, const SearchTmOnsalesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTmOnsalesAsyncHandler;
			typedef Outcome<Error, Model::StartNotaryResult> StartNotaryOutcome;
			typedef std::future<StartNotaryOutcome> StartNotaryOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::StartNotaryRequest&, const StartNotaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartNotaryAsyncHandler;
			typedef Outcome<Error, Model::StoreMaterialTemporarilyResult> StoreMaterialTemporarilyOutcome;
			typedef std::future<StoreMaterialTemporarilyOutcome> StoreMaterialTemporarilyOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::StoreMaterialTemporarilyRequest&, const StoreMaterialTemporarilyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StoreMaterialTemporarilyAsyncHandler;
			typedef Outcome<Error, Model::SubmitSupplementResult> SubmitSupplementOutcome;
			typedef std::future<SubmitSupplementOutcome> SubmitSupplementOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::SubmitSupplementRequest&, const SubmitSupplementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSupplementAsyncHandler;
			typedef Outcome<Error, Model::UpdateMaterialResult> UpdateMaterialOutcome;
			typedef std::future<UpdateMaterialOutcome> UpdateMaterialOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::UpdateMaterialRequest&, const UpdateMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMaterialAsyncHandler;
			typedef Outcome<Error, Model::UpdateSendMaterialNumResult> UpdateSendMaterialNumOutcome;
			typedef std::future<UpdateSendMaterialNumOutcome> UpdateSendMaterialNumOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::UpdateSendMaterialNumRequest&, const UpdateSendMaterialNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSendMaterialNumAsyncHandler;
			typedef Outcome<Error, Model::UpdateTmMonitorRuleResult> UpdateTmMonitorRuleOutcome;
			typedef std::future<UpdateTmMonitorRuleOutcome> UpdateTmMonitorRuleOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::UpdateTmMonitorRuleRequest&, const UpdateTmMonitorRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTmMonitorRuleAsyncHandler;
			typedef Outcome<Error, Model::UploadNotaryDataResult> UploadNotaryDataOutcome;
			typedef std::future<UploadNotaryDataOutcome> UploadNotaryDataOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::UploadNotaryDataRequest&, const UploadNotaryDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadNotaryDataAsyncHandler;
			typedef Outcome<Error, Model::WriteCommunicationLogResult> WriteCommunicationLogOutcome;
			typedef std::future<WriteCommunicationLogOutcome> WriteCommunicationLogOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::WriteCommunicationLogRequest&, const WriteCommunicationLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WriteCommunicationLogAsyncHandler;
			typedef Outcome<Error, Model::WriteIntentionCommunicationLogResult> WriteIntentionCommunicationLogOutcome;
			typedef std::future<WriteIntentionCommunicationLogOutcome> WriteIntentionCommunicationLogOutcomeCallable;
			typedef std::function<void(const TrademarkClient*, const Model::WriteIntentionCommunicationLogRequest&, const WriteIntentionCommunicationLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WriteIntentionCommunicationLogAsyncHandler;

			TrademarkClient(const Credentials &credentials, const ClientConfiguration &configuration);
			TrademarkClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			TrademarkClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~TrademarkClient();
			AcceptPartnerNotificationOutcome acceptPartnerNotification(const Model::AcceptPartnerNotificationRequest &request)const;
			void acceptPartnerNotificationAsync(const Model::AcceptPartnerNotificationRequest& request, const AcceptPartnerNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcceptPartnerNotificationOutcomeCallable acceptPartnerNotificationCallable(const Model::AcceptPartnerNotificationRequest& request) const;
			ApplyNotaryPostOutcome applyNotaryPost(const Model::ApplyNotaryPostRequest &request)const;
			void applyNotaryPostAsync(const Model::ApplyNotaryPostRequest& request, const ApplyNotaryPostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyNotaryPostOutcomeCallable applyNotaryPostCallable(const Model::ApplyNotaryPostRequest& request) const;
			BindMaterialOutcome bindMaterial(const Model::BindMaterialRequest &request)const;
			void bindMaterialAsync(const Model::BindMaterialRequest& request, const BindMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindMaterialOutcomeCallable bindMaterialCallable(const Model::BindMaterialRequest& request) const;
			CancelTradeOrderOutcome cancelTradeOrder(const Model::CancelTradeOrderRequest &request)const;
			void cancelTradeOrderAsync(const Model::CancelTradeOrderRequest& request, const CancelTradeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelTradeOrderOutcomeCallable cancelTradeOrderCallable(const Model::CancelTradeOrderRequest& request) const;
			CheckLoaFillOutcome checkLoaFill(const Model::CheckLoaFillRequest &request)const;
			void checkLoaFillAsync(const Model::CheckLoaFillRequest& request, const CheckLoaFillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckLoaFillOutcomeCallable checkLoaFillCallable(const Model::CheckLoaFillRequest& request) const;
			CheckTrademarkOrderOutcome checkTrademarkOrder(const Model::CheckTrademarkOrderRequest &request)const;
			void checkTrademarkOrderAsync(const Model::CheckTrademarkOrderRequest& request, const CheckTrademarkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckTrademarkOrderOutcomeCallable checkTrademarkOrderCallable(const Model::CheckTrademarkOrderRequest& request) const;
			CombineLoaOutcome combineLoa(const Model::CombineLoaRequest &request)const;
			void combineLoaAsync(const Model::CombineLoaRequest& request, const CombineLoaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CombineLoaOutcomeCallable combineLoaCallable(const Model::CombineLoaRequest& request) const;
			ConfirmAdditionalMaterialOutcome confirmAdditionalMaterial(const Model::ConfirmAdditionalMaterialRequest &request)const;
			void confirmAdditionalMaterialAsync(const Model::ConfirmAdditionalMaterialRequest& request, const ConfirmAdditionalMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmAdditionalMaterialOutcomeCallable confirmAdditionalMaterialCallable(const Model::ConfirmAdditionalMaterialRequest& request) const;
			ConfirmApplicantOutcome confirmApplicant(const Model::ConfirmApplicantRequest &request)const;
			void confirmApplicantAsync(const Model::ConfirmApplicantRequest& request, const ConfirmApplicantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmApplicantOutcomeCallable confirmApplicantCallable(const Model::ConfirmApplicantRequest& request) const;
			ConvertImageToGrayOutcome convertImageToGray(const Model::ConvertImageToGrayRequest &request)const;
			void convertImageToGrayAsync(const Model::ConvertImageToGrayRequest& request, const ConvertImageToGrayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertImageToGrayOutcomeCallable convertImageToGrayCallable(const Model::ConvertImageToGrayRequest& request) const;
			CreateIntentionOrderOutcome createIntentionOrder(const Model::CreateIntentionOrderRequest &request)const;
			void createIntentionOrderAsync(const Model::CreateIntentionOrderRequest& request, const CreateIntentionOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIntentionOrderOutcomeCallable createIntentionOrderCallable(const Model::CreateIntentionOrderRequest& request) const;
			CreateTrademarkOrderOutcome createTrademarkOrder(const Model::CreateTrademarkOrderRequest &request)const;
			void createTrademarkOrderAsync(const Model::CreateTrademarkOrderRequest& request, const CreateTrademarkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrademarkOrderOutcomeCallable createTrademarkOrderCallable(const Model::CreateTrademarkOrderRequest& request) const;
			DeleteMaterialOutcome deleteMaterial(const Model::DeleteMaterialRequest &request)const;
			void deleteMaterialAsync(const Model::DeleteMaterialRequest& request, const DeleteMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMaterialOutcomeCallable deleteMaterialCallable(const Model::DeleteMaterialRequest& request) const;
			DeleteTmMonitorRuleOutcome deleteTmMonitorRule(const Model::DeleteTmMonitorRuleRequest &request)const;
			void deleteTmMonitorRuleAsync(const Model::DeleteTmMonitorRuleRequest& request, const DeleteTmMonitorRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTmMonitorRuleOutcomeCallable deleteTmMonitorRuleCallable(const Model::DeleteTmMonitorRuleRequest& request) const;
			DenySupplementOutcome denySupplement(const Model::DenySupplementRequest &request)const;
			void denySupplementAsync(const Model::DenySupplementRequest& request, const DenySupplementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DenySupplementOutcomeCallable denySupplementCallable(const Model::DenySupplementRequest& request) const;
			DescirbeCombineTrademarkOutcome descirbeCombineTrademark(const Model::DescirbeCombineTrademarkRequest &request)const;
			void descirbeCombineTrademarkAsync(const Model::DescirbeCombineTrademarkRequest& request, const DescirbeCombineTrademarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescirbeCombineTrademarkOutcomeCallable descirbeCombineTrademarkCallable(const Model::DescirbeCombineTrademarkRequest& request) const;
			FillLogisticsOutcome fillLogistics(const Model::FillLogisticsRequest &request)const;
			void fillLogisticsAsync(const Model::FillLogisticsRequest& request, const FillLogisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FillLogisticsOutcomeCallable fillLogisticsCallable(const Model::FillLogisticsRequest& request) const;
			FilterUnavailableCodesOutcome filterUnavailableCodes(const Model::FilterUnavailableCodesRequest &request)const;
			void filterUnavailableCodesAsync(const Model::FilterUnavailableCodesRequest& request, const FilterUnavailableCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FilterUnavailableCodesOutcomeCallable filterUnavailableCodesCallable(const Model::FilterUnavailableCodesRequest& request) const;
			GenerateQrCodeOutcome generateQrCode(const Model::GenerateQrCodeRequest &request)const;
			void generateQrCodeAsync(const Model::GenerateQrCodeRequest& request, const GenerateQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateQrCodeOutcomeCallable generateQrCodeCallable(const Model::GenerateQrCodeRequest& request) const;
			GenerateUploadFilePolicyOutcome generateUploadFilePolicy(const Model::GenerateUploadFilePolicyRequest &request)const;
			void generateUploadFilePolicyAsync(const Model::GenerateUploadFilePolicyRequest& request, const GenerateUploadFilePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateUploadFilePolicyOutcomeCallable generateUploadFilePolicyCallable(const Model::GenerateUploadFilePolicyRequest& request) const;
			GetNotaryOrderOutcome getNotaryOrder(const Model::GetNotaryOrderRequest &request)const;
			void getNotaryOrderAsync(const Model::GetNotaryOrderRequest& request, const GetNotaryOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNotaryOrderOutcomeCallable getNotaryOrderCallable(const Model::GetNotaryOrderRequest& request) const;
			InsertMaterialOutcome insertMaterial(const Model::InsertMaterialRequest &request)const;
			void insertMaterialAsync(const Model::InsertMaterialRequest& request, const InsertMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertMaterialOutcomeCallable insertMaterialCallable(const Model::InsertMaterialRequest& request) const;
			InsertRenewInfoOutcome insertRenewInfo(const Model::InsertRenewInfoRequest &request)const;
			void insertRenewInfoAsync(const Model::InsertRenewInfoRequest& request, const InsertRenewInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertRenewInfoOutcomeCallable insertRenewInfoCallable(const Model::InsertRenewInfoRequest& request) const;
			InsertTmMonitorRuleOutcome insertTmMonitorRule(const Model::InsertTmMonitorRuleRequest &request)const;
			void insertTmMonitorRuleAsync(const Model::InsertTmMonitorRuleRequest& request, const InsertTmMonitorRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertTmMonitorRuleOutcomeCallable insertTmMonitorRuleCallable(const Model::InsertTmMonitorRuleRequest& request) const;
			InsertTradeIntentionUserOutcome insertTradeIntentionUser(const Model::InsertTradeIntentionUserRequest &request)const;
			void insertTradeIntentionUserAsync(const Model::InsertTradeIntentionUserRequest& request, const InsertTradeIntentionUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertTradeIntentionUserOutcomeCallable insertTradeIntentionUserCallable(const Model::InsertTradeIntentionUserRequest& request) const;
			ListNotaryInfosOutcome listNotaryInfos(const Model::ListNotaryInfosRequest &request)const;
			void listNotaryInfosAsync(const Model::ListNotaryInfosRequest& request, const ListNotaryInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNotaryInfosOutcomeCallable listNotaryInfosCallable(const Model::ListNotaryInfosRequest& request) const;
			ListNotaryOrdersOutcome listNotaryOrders(const Model::ListNotaryOrdersRequest &request)const;
			void listNotaryOrdersAsync(const Model::ListNotaryOrdersRequest& request, const ListNotaryOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNotaryOrdersOutcomeCallable listNotaryOrdersCallable(const Model::ListNotaryOrdersRequest& request) const;
			QueryCommunicationLogsOutcome queryCommunicationLogs(const Model::QueryCommunicationLogsRequest &request)const;
			void queryCommunicationLogsAsync(const Model::QueryCommunicationLogsRequest& request, const QueryCommunicationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCommunicationLogsOutcomeCallable queryCommunicationLogsCallable(const Model::QueryCommunicationLogsRequest& request) const;
			QueryCredentialsInfoOutcome queryCredentialsInfo(const Model::QueryCredentialsInfoRequest &request)const;
			void queryCredentialsInfoAsync(const Model::QueryCredentialsInfoRequest& request, const QueryCredentialsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCredentialsInfoOutcomeCallable queryCredentialsInfoCallable(const Model::QueryCredentialsInfoRequest& request) const;
			QueryIntentionDetailOutcome queryIntentionDetail(const Model::QueryIntentionDetailRequest &request)const;
			void queryIntentionDetailAsync(const Model::QueryIntentionDetailRequest& request, const QueryIntentionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryIntentionDetailOutcomeCallable queryIntentionDetailCallable(const Model::QueryIntentionDetailRequest& request) const;
			QueryIntentionListOutcome queryIntentionList(const Model::QueryIntentionListRequest &request)const;
			void queryIntentionListAsync(const Model::QueryIntentionListRequest& request, const QueryIntentionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryIntentionListOutcomeCallable queryIntentionListCallable(const Model::QueryIntentionListRequest& request) const;
			QueryIntentionPriceOutcome queryIntentionPrice(const Model::QueryIntentionPriceRequest &request)const;
			void queryIntentionPriceAsync(const Model::QueryIntentionPriceRequest& request, const QueryIntentionPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryIntentionPriceOutcomeCallable queryIntentionPriceCallable(const Model::QueryIntentionPriceRequest& request) const;
			QueryMaterialOutcome queryMaterial(const Model::QueryMaterialRequest &request)const;
			void queryMaterialAsync(const Model::QueryMaterialRequest& request, const QueryMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMaterialOutcomeCallable queryMaterialCallable(const Model::QueryMaterialRequest& request) const;
			QueryMaterialListOutcome queryMaterialList(const Model::QueryMaterialListRequest &request)const;
			void queryMaterialListAsync(const Model::QueryMaterialListRequest& request, const QueryMaterialListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMaterialListOutcomeCallable queryMaterialListCallable(const Model::QueryMaterialListRequest& request) const;
			QueryMonitorKeywordsOutcome queryMonitorKeywords(const Model::QueryMonitorKeywordsRequest &request)const;
			void queryMonitorKeywordsAsync(const Model::QueryMonitorKeywordsRequest& request, const QueryMonitorKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMonitorKeywordsOutcomeCallable queryMonitorKeywordsCallable(const Model::QueryMonitorKeywordsRequest& request) const;
			QueryOfficialFileCustomListOutcome queryOfficialFileCustomList(const Model::QueryOfficialFileCustomListRequest &request)const;
			void queryOfficialFileCustomListAsync(const Model::QueryOfficialFileCustomListRequest& request, const QueryOfficialFileCustomListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryOfficialFileCustomListOutcomeCallable queryOfficialFileCustomListCallable(const Model::QueryOfficialFileCustomListRequest& request) const;
			QueryOssResourcesOutcome queryOssResources(const Model::QueryOssResourcesRequest &request)const;
			void queryOssResourcesAsync(const Model::QueryOssResourcesRequest& request, const QueryOssResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryOssResourcesOutcomeCallable queryOssResourcesCallable(const Model::QueryOssResourcesRequest& request) const;
			QueryQrCodeUploadStatusOutcome queryQrCodeUploadStatus(const Model::QueryQrCodeUploadStatusRequest &request)const;
			void queryQrCodeUploadStatusAsync(const Model::QueryQrCodeUploadStatusRequest& request, const QueryQrCodeUploadStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryQrCodeUploadStatusOutcomeCallable queryQrCodeUploadStatusCallable(const Model::QueryQrCodeUploadStatusRequest& request) const;
			QuerySupplementDetailOutcome querySupplementDetail(const Model::QuerySupplementDetailRequest &request)const;
			void querySupplementDetailAsync(const Model::QuerySupplementDetailRequest& request, const QuerySupplementDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySupplementDetailOutcomeCallable querySupplementDetailCallable(const Model::QuerySupplementDetailRequest& request) const;
			QueryTaskListOutcome queryTaskList(const Model::QueryTaskListRequest &request)const;
			void queryTaskListAsync(const Model::QueryTaskListRequest& request, const QueryTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTaskListOutcomeCallable queryTaskListCallable(const Model::QueryTaskListRequest& request) const;
			QueryTradeIntentionUserListOutcome queryTradeIntentionUserList(const Model::QueryTradeIntentionUserListRequest &request)const;
			void queryTradeIntentionUserListAsync(const Model::QueryTradeIntentionUserListRequest& request, const QueryTradeIntentionUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTradeIntentionUserListOutcomeCallable queryTradeIntentionUserListCallable(const Model::QueryTradeIntentionUserListRequest& request) const;
			QueryTradeMarkApplicationDetailOutcome queryTradeMarkApplicationDetail(const Model::QueryTradeMarkApplicationDetailRequest &request)const;
			void queryTradeMarkApplicationDetailAsync(const Model::QueryTradeMarkApplicationDetailRequest& request, const QueryTradeMarkApplicationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTradeMarkApplicationDetailOutcomeCallable queryTradeMarkApplicationDetailCallable(const Model::QueryTradeMarkApplicationDetailRequest& request) const;
			QueryTradeMarkApplicationLogsOutcome queryTradeMarkApplicationLogs(const Model::QueryTradeMarkApplicationLogsRequest &request)const;
			void queryTradeMarkApplicationLogsAsync(const Model::QueryTradeMarkApplicationLogsRequest& request, const QueryTradeMarkApplicationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTradeMarkApplicationLogsOutcomeCallable queryTradeMarkApplicationLogsCallable(const Model::QueryTradeMarkApplicationLogsRequest& request) const;
			QueryTradeMarkApplicationsOutcome queryTradeMarkApplications(const Model::QueryTradeMarkApplicationsRequest &request)const;
			void queryTradeMarkApplicationsAsync(const Model::QueryTradeMarkApplicationsRequest& request, const QueryTradeMarkApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTradeMarkApplicationsOutcomeCallable queryTradeMarkApplicationsCallable(const Model::QueryTradeMarkApplicationsRequest& request) const;
			QueryTradeMarkApplicationsByIntentionOutcome queryTradeMarkApplicationsByIntention(const Model::QueryTradeMarkApplicationsByIntentionRequest &request)const;
			void queryTradeMarkApplicationsByIntentionAsync(const Model::QueryTradeMarkApplicationsByIntentionRequest& request, const QueryTradeMarkApplicationsByIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTradeMarkApplicationsByIntentionOutcomeCallable queryTradeMarkApplicationsByIntentionCallable(const Model::QueryTradeMarkApplicationsByIntentionRequest& request) const;
			QueryTradeProduceDetailOutcome queryTradeProduceDetail(const Model::QueryTradeProduceDetailRequest &request)const;
			void queryTradeProduceDetailAsync(const Model::QueryTradeProduceDetailRequest& request, const QueryTradeProduceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTradeProduceDetailOutcomeCallable queryTradeProduceDetailCallable(const Model::QueryTradeProduceDetailRequest& request) const;
			QueryTradeProduceListOutcome queryTradeProduceList(const Model::QueryTradeProduceListRequest &request)const;
			void queryTradeProduceListAsync(const Model::QueryTradeProduceListRequest& request, const QueryTradeProduceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTradeProduceListOutcomeCallable queryTradeProduceListCallable(const Model::QueryTradeProduceListRequest& request) const;
			QueryTrademarkMonitorResultsOutcome queryTrademarkMonitorResults(const Model::QueryTrademarkMonitorResultsRequest &request)const;
			void queryTrademarkMonitorResultsAsync(const Model::QueryTrademarkMonitorResultsRequest& request, const QueryTrademarkMonitorResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTrademarkMonitorResultsOutcomeCallable queryTrademarkMonitorResultsCallable(const Model::QueryTrademarkMonitorResultsRequest& request) const;
			QueryTrademarkMonitorRulesOutcome queryTrademarkMonitorRules(const Model::QueryTrademarkMonitorRulesRequest &request)const;
			void queryTrademarkMonitorRulesAsync(const Model::QueryTrademarkMonitorRulesRequest& request, const QueryTrademarkMonitorRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTrademarkMonitorRulesOutcomeCallable queryTrademarkMonitorRulesCallable(const Model::QueryTrademarkMonitorRulesRequest& request) const;
			QueryTrademarkPriceOutcome queryTrademarkPrice(const Model::QueryTrademarkPriceRequest &request)const;
			void queryTrademarkPriceAsync(const Model::QueryTrademarkPriceRequest& request, const QueryTrademarkPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTrademarkPriceOutcomeCallable queryTrademarkPriceCallable(const Model::QueryTrademarkPriceRequest& request) const;
			RefundProduceOutcome refundProduce(const Model::RefundProduceRequest &request)const;
			void refundProduceAsync(const Model::RefundProduceRequest& request, const RefundProduceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefundProduceOutcomeCallable refundProduceCallable(const Model::RefundProduceRequest& request) const;
			RefuseAdditionalMaterialOutcome refuseAdditionalMaterial(const Model::RefuseAdditionalMaterialRequest &request)const;
			void refuseAdditionalMaterialAsync(const Model::RefuseAdditionalMaterialRequest& request, const RefuseAdditionalMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefuseAdditionalMaterialOutcomeCallable refuseAdditionalMaterialCallable(const Model::RefuseAdditionalMaterialRequest& request) const;
			RefuseApplicantOutcome refuseApplicant(const Model::RefuseApplicantRequest &request)const;
			void refuseApplicantAsync(const Model::RefuseApplicantRequest& request, const RefuseApplicantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefuseApplicantOutcomeCallable refuseApplicantCallable(const Model::RefuseApplicantRequest& request) const;
			RejectApplicantOutcome rejectApplicant(const Model::RejectApplicantRequest &request)const;
			void rejectApplicantAsync(const Model::RejectApplicantRequest& request, const RejectApplicantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RejectApplicantOutcomeCallable rejectApplicantCallable(const Model::RejectApplicantRequest& request) const;
			SaveTaskOutcome saveTask(const Model::SaveTaskRequest &request)const;
			void saveTaskAsync(const Model::SaveTaskRequest& request, const SaveTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveTaskOutcomeCallable saveTaskCallable(const Model::SaveTaskRequest& request) const;
			SaveTaskForOfficialFileCustomOutcome saveTaskForOfficialFileCustom(const Model::SaveTaskForOfficialFileCustomRequest &request)const;
			void saveTaskForOfficialFileCustomAsync(const Model::SaveTaskForOfficialFileCustomRequest& request, const SaveTaskForOfficialFileCustomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveTaskForOfficialFileCustomOutcomeCallable saveTaskForOfficialFileCustomCallable(const Model::SaveTaskForOfficialFileCustomRequest& request) const;
			SaveTradeMarkReviewMaterialDetailOutcome saveTradeMarkReviewMaterialDetail(const Model::SaveTradeMarkReviewMaterialDetailRequest &request)const;
			void saveTradeMarkReviewMaterialDetailAsync(const Model::SaveTradeMarkReviewMaterialDetailRequest& request, const SaveTradeMarkReviewMaterialDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveTradeMarkReviewMaterialDetailOutcomeCallable saveTradeMarkReviewMaterialDetailCallable(const Model::SaveTradeMarkReviewMaterialDetailRequest& request) const;
			SearchTmOnsalesOutcome searchTmOnsales(const Model::SearchTmOnsalesRequest &request)const;
			void searchTmOnsalesAsync(const Model::SearchTmOnsalesRequest& request, const SearchTmOnsalesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTmOnsalesOutcomeCallable searchTmOnsalesCallable(const Model::SearchTmOnsalesRequest& request) const;
			StartNotaryOutcome startNotary(const Model::StartNotaryRequest &request)const;
			void startNotaryAsync(const Model::StartNotaryRequest& request, const StartNotaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartNotaryOutcomeCallable startNotaryCallable(const Model::StartNotaryRequest& request) const;
			StoreMaterialTemporarilyOutcome storeMaterialTemporarily(const Model::StoreMaterialTemporarilyRequest &request)const;
			void storeMaterialTemporarilyAsync(const Model::StoreMaterialTemporarilyRequest& request, const StoreMaterialTemporarilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StoreMaterialTemporarilyOutcomeCallable storeMaterialTemporarilyCallable(const Model::StoreMaterialTemporarilyRequest& request) const;
			SubmitSupplementOutcome submitSupplement(const Model::SubmitSupplementRequest &request)const;
			void submitSupplementAsync(const Model::SubmitSupplementRequest& request, const SubmitSupplementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSupplementOutcomeCallable submitSupplementCallable(const Model::SubmitSupplementRequest& request) const;
			UpdateMaterialOutcome updateMaterial(const Model::UpdateMaterialRequest &request)const;
			void updateMaterialAsync(const Model::UpdateMaterialRequest& request, const UpdateMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMaterialOutcomeCallable updateMaterialCallable(const Model::UpdateMaterialRequest& request) const;
			UpdateSendMaterialNumOutcome updateSendMaterialNum(const Model::UpdateSendMaterialNumRequest &request)const;
			void updateSendMaterialNumAsync(const Model::UpdateSendMaterialNumRequest& request, const UpdateSendMaterialNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSendMaterialNumOutcomeCallable updateSendMaterialNumCallable(const Model::UpdateSendMaterialNumRequest& request) const;
			UpdateTmMonitorRuleOutcome updateTmMonitorRule(const Model::UpdateTmMonitorRuleRequest &request)const;
			void updateTmMonitorRuleAsync(const Model::UpdateTmMonitorRuleRequest& request, const UpdateTmMonitorRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTmMonitorRuleOutcomeCallable updateTmMonitorRuleCallable(const Model::UpdateTmMonitorRuleRequest& request) const;
			UploadNotaryDataOutcome uploadNotaryData(const Model::UploadNotaryDataRequest &request)const;
			void uploadNotaryDataAsync(const Model::UploadNotaryDataRequest& request, const UploadNotaryDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadNotaryDataOutcomeCallable uploadNotaryDataCallable(const Model::UploadNotaryDataRequest& request) const;
			WriteCommunicationLogOutcome writeCommunicationLog(const Model::WriteCommunicationLogRequest &request)const;
			void writeCommunicationLogAsync(const Model::WriteCommunicationLogRequest& request, const WriteCommunicationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WriteCommunicationLogOutcomeCallable writeCommunicationLogCallable(const Model::WriteCommunicationLogRequest& request) const;
			WriteIntentionCommunicationLogOutcome writeIntentionCommunicationLog(const Model::WriteIntentionCommunicationLogRequest &request)const;
			void writeIntentionCommunicationLogAsync(const Model::WriteIntentionCommunicationLogRequest& request, const WriteIntentionCommunicationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WriteIntentionCommunicationLogOutcomeCallable writeIntentionCommunicationLogCallable(const Model::WriteIntentionCommunicationLogRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_TRADEMARK_TRADEMARKCLIENT_H_
