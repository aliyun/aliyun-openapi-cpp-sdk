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
#include "model/BindProduceAuthorizationRequest.h"
#include "model/BindProduceAuthorizationResult.h"
#include "model/CheckCompanyRegRequest.h"
#include "model/CheckCompanyRegResult.h"
#include "model/CheckCopyPayrollRequest.h"
#include "model/CheckCopyPayrollResult.h"
#include "model/CheckSavePayrollRequest.h"
#include "model/CheckSavePayrollResult.h"
#include "model/CheckSavePayrollDetailRequest.h"
#include "model/CheckSavePayrollDetailResult.h"
#include "model/ClearTrailDataRequest.h"
#include "model/ClearTrailDataResult.h"
#include "model/CloseIcpProduceRequest.h"
#include "model/CloseIcpProduceResult.h"
#include "model/CloseIntentionRequest.h"
#include "model/CloseIntentionResult.h"
#include "model/CloseIntentionForPartnerRequest.h"
#include "model/CloseIntentionForPartnerResult.h"
#include "model/CloseUserIntentionRequest.h"
#include "model/CloseUserIntentionResult.h"
#include "model/ConfirmIcpIntentionRequest.h"
#include "model/ConfirmIcpIntentionResult.h"
#include "model/ConfirmIntentionRequest.h"
#include "model/ConfirmIntentionResult.h"
#include "model/ConfirmMaterialRequest.h"
#include "model/ConfirmMaterialResult.h"
#include "model/ConfirmTaxAmountRequest.h"
#include "model/ConfirmTaxAmountResult.h"
#include "model/ConvertFeeRequest.h"
#include "model/ConvertFeeResult.h"
#include "model/ConvertInvoiceRequest.h"
#include "model/ConvertInvoiceResult.h"
#include "model/CopyPayrollRequest.h"
#include "model/CopyPayrollResult.h"
#include "model/CreateBookkeepingIntentionRequest.h"
#include "model/CreateBookkeepingIntentionResult.h"
#include "model/CreateBusinessOpportunityRequest.h"
#include "model/CreateBusinessOpportunityResult.h"
#include "model/CreateProduceForPartnerRequest.h"
#include "model/CreateProduceForPartnerResult.h"
#include "model/DeleteFeeRequest.h"
#include "model/DeleteFeeResult.h"
#include "model/DeleteInvoiceRequest.h"
#include "model/DeleteInvoiceResult.h"
#include "model/DeletePayrollRequest.h"
#include "model/DeletePayrollResult.h"
#include "model/DescribePartnerConfigRequest.h"
#include "model/DescribePartnerConfigResult.h"
#include "model/GenerateCompanyRegUploadPolicyRequest.h"
#include "model/GenerateCompanyRegUploadPolicyResult.h"
#include "model/GenerateUploadFilePolicyRequest.h"
#include "model/GenerateUploadFilePolicyResult.h"
#include "model/GetAlipayUrlRequest.h"
#include "model/GetAlipayUrlResult.h"
#include "model/GetBalanceSheetInfoRequest.h"
#include "model/GetBalanceSheetInfoResult.h"
#include "model/GetCashFlowInfoRequest.h"
#include "model/GetCashFlowInfoResult.h"
#include "model/GetCompanyRegOrderRequest.h"
#include "model/GetCompanyRegOrderResult.h"
#include "model/GetEnterprisesInfoRequest.h"
#include "model/GetEnterprisesInfoResult.h"
#include "model/GetFeeRequest.h"
#include "model/GetFeeResult.h"
#include "model/GetHomePageRequest.h"
#include "model/GetHomePageResult.h"
#include "model/GetIncomeStatementInfoRequest.h"
#include "model/GetIncomeStatementInfoResult.h"
#include "model/GetIndustryCommerceInfoRequest.h"
#include "model/GetIndustryCommerceInfoResult.h"
#include "model/GetInitFlowRequest.h"
#include "model/GetInitFlowResult.h"
#include "model/GetInvoiceInfoRequest.h"
#include "model/GetInvoiceInfoResult.h"
#include "model/GetLastMonthInvoiceCountRequest.h"
#include "model/GetLastMonthInvoiceCountResult.h"
#include "model/GetNoticeRequest.h"
#include "model/GetNoticeResult.h"
#include "model/GetOssStsRequest.h"
#include "model/GetOssStsResult.h"
#include "model/GetPayrollInfoRequest.h"
#include "model/GetPayrollInfoResult.h"
#include "model/GetPayrollSettingRequest.h"
#include "model/GetPayrollSettingResult.h"
#include "model/GetPeriodInfoRequest.h"
#include "model/GetPeriodInfoResult.h"
#include "model/GetQuarterCashFlowInfoRequest.h"
#include "model/GetQuarterCashFlowInfoResult.h"
#include "model/GetQuarterIncomeStatementInfoRequest.h"
#include "model/GetQuarterIncomeStatementInfoResult.h"
#include "model/GetServiceInfoRequest.h"
#include "model/GetServiceInfoResult.h"
#include "model/GetSsoUserInfoRequest.h"
#include "model/GetSsoUserInfoResult.h"
#include "model/GetTaxInfoRequest.h"
#include "model/GetTaxInfoResult.h"
#include "model/GetTaxationCalendarRequest.h"
#include "model/GetTaxationCalendarResult.h"
#include "model/GetTaxationInfoRequest.h"
#include "model/GetTaxationInfoResult.h"
#include "model/GetTypeListRequest.h"
#include "model/GetTypeListResult.h"
#include "model/GetVoucherCountRequest.h"
#include "model/GetVoucherCountResult.h"
#include "model/ListApplicationLogsRequest.h"
#include "model/ListApplicationLogsResult.h"
#include "model/ListBookkeepingStatisticsesRequest.h"
#include "model/ListBookkeepingStatisticsesResult.h"
#include "model/ListBookkeepingSubjectBalancesRequest.h"
#include "model/ListBookkeepingSubjectBalancesResult.h"
#include "model/ListBookkeepingsRequest.h"
#include "model/ListBookkeepingsResult.h"
#include "model/ListCashJournalRequest.h"
#include "model/ListCashJournalResult.h"
#include "model/ListCompanyRegConsultationsRequest.h"
#include "model/ListCompanyRegConsultationsResult.h"
#include "model/ListCompanyRegOrdersRequest.h"
#include "model/ListCompanyRegOrdersResult.h"
#include "model/ListEnterprisesRequest.h"
#include "model/ListEnterprisesResult.h"
#include "model/ListIcpApplicationsRequest.h"
#include "model/ListIcpApplicationsResult.h"
#include "model/ListIntentionNoteRequest.h"
#include "model/ListIntentionNoteResult.h"
#include "model/ListInvoiceRequest.h"
#include "model/ListInvoiceResult.h"
#include "model/ListLastMonthInvoiceRequest.h"
#include "model/ListLastMonthInvoiceResult.h"
#include "model/ListPayrollRequest.h"
#include "model/ListPayrollResult.h"
#include "model/ListProduceAuthorizationRequest.h"
#include "model/ListProduceAuthorizationResult.h"
#include "model/ListUserDetailSolutionsRequest.h"
#include "model/ListUserDetailSolutionsResult.h"
#include "model/ListUserIntentionNotesRequest.h"
#include "model/ListUserIntentionNotesResult.h"
#include "model/ListUserIntentionsRequest.h"
#include "model/ListUserIntentionsResult.h"
#include "model/ListUserProduceOperateLogsRequest.h"
#include "model/ListUserProduceOperateLogsResult.h"
#include "model/ListUserSolutionsRequest.h"
#include "model/ListUserSolutionsResult.h"
#include "model/ListVoucherRequest.h"
#include "model/ListVoucherResult.h"
#include "model/OperateProduceForPartnerRequest.h"
#include "model/OperateProduceForPartnerResult.h"
#include "model/PhotoInvoiceRequest.h"
#include "model/PhotoInvoiceResult.h"
#include "model/PrintAcctgTransRequest.h"
#include "model/PrintAcctgTransResult.h"
#include "model/ProcessCompanyRegOrderRequest.h"
#include "model/ProcessCompanyRegOrderResult.h"
#include "model/PutMeasureDataRequest.h"
#include "model/PutMeasureDataResult.h"
#include "model/PutMeasureReadyFlagRequest.h"
#include "model/PutMeasureReadyFlagResult.h"
#include "model/QueryBagRemainingRequest.h"
#include "model/QueryBagRemainingResult.h"
#include "model/QueryBookkeepingCommoditiesRequest.h"
#include "model/QueryBookkeepingCommoditiesResult.h"
#include "model/QueryBookkeepingCommodityModulesRequest.h"
#include "model/QueryBookkeepingCommodityModulesResult.h"
#include "model/QueryCommodityConfigRequest.h"
#include "model/QueryCommodityConfigResult.h"
#include "model/QueryCommunicationLogsRequest.h"
#include "model/QueryCommunicationLogsResult.h"
#include "model/QueryInstanceRequest.h"
#include "model/QueryInstanceResult.h"
#include "model/QueryIntentionListRequest.h"
#include "model/QueryIntentionListResult.h"
#include "model/QueryTradeIntentionUserListRequest.h"
#include "model/QueryTradeIntentionUserListResult.h"
#include "model/QueryUserNeedAuthRequest.h"
#include "model/QueryUserNeedAuthResult.h"
#include "model/ReSubmitIcpSolutionRequest.h"
#include "model/ReSubmitIcpSolutionResult.h"
#include "model/RefreshCustomerInfoRequest.h"
#include "model/RefreshCustomerInfoResult.h"
#include "model/RefuseMaterialRequest.h"
#include "model/RefuseMaterialResult.h"
#include "model/RejectIcpIntentionRequest.h"
#include "model/RejectIcpIntentionResult.h"
#include "model/RejectSolutionRequest.h"
#include "model/RejectSolutionResult.h"
#include "model/RejectUserSolutionRequest.h"
#include "model/RejectUserSolutionResult.h"
#include "model/ReleaseProduceAuthorizationRequest.h"
#include "model/ReleaseProduceAuthorizationResult.h"
#include "model/SaveOpeningBalanceStatusRequest.h"
#include "model/SaveOpeningBalanceStatusResult.h"
#include "model/SavePayrollRequest.h"
#include "model/SavePayrollResult.h"
#include "model/SavePayrollSettingRequest.h"
#include "model/SavePayrollSettingResult.h"
#include "model/ScanInvoiceRequest.h"
#include "model/ScanInvoiceResult.h"
#include "model/SendMessageRequest.h"
#include "model/SendMessageResult.h"
#include "model/SendVcodeRequest.h"
#include "model/SendVcodeResult.h"
#include "model/SubmitCommunicationNoteRequest.h"
#include "model/SubmitCommunicationNoteResult.h"
#include "model/SubmitConsultationRequest.h"
#include "model/SubmitConsultationResult.h"
#include "model/SubmitIcpSolutionRequest.h"
#include "model/SubmitIcpSolutionResult.h"
#include "model/SubmitIntentionNoteRequest.h"
#include "model/SubmitIntentionNoteResult.h"
#include "model/SubmitPartnerCompanyInformationRequest.h"
#include "model/SubmitPartnerCompanyInformationResult.h"
#include "model/SubmitSolutionRequest.h"
#include "model/SubmitSolutionResult.h"
#include "model/UpdateBookkeepingOrgRequest.h"
#include "model/UpdateBookkeepingOrgResult.h"
#include "model/UpdateCustomerInfoRequest.h"
#include "model/UpdateCustomerInfoResult.h"
#include "model/UpdateFeeRequest.h"
#include "model/UpdateFeeResult.h"
#include "model/UpdateProduceRequest.h"
#include "model/UpdateProduceResult.h"
#include "model/UpdateTaxInfoRequest.h"
#include "model/UpdateTaxInfoResult.h"
#include "model/UpdateTaxationProcessRequest.h"
#include "model/UpdateTaxationProcessResult.h"
#include "model/UploadIcpBasicMaterialRequest.h"
#include "model/UploadIcpBasicMaterialResult.h"
#include "model/UploadUserMaterialRequest.h"
#include "model/UploadUserMaterialResult.h"
#include "model/VerifyTaxSmsCodeRequest.h"
#include "model/VerifyTaxSmsCodeResult.h"
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
			typedef Outcome<Error, Model::BindProduceAuthorizationResult> BindProduceAuthorizationOutcome;
			typedef std::future<BindProduceAuthorizationOutcome> BindProduceAuthorizationOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::BindProduceAuthorizationRequest&, const BindProduceAuthorizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindProduceAuthorizationAsyncHandler;
			typedef Outcome<Error, Model::CheckCompanyRegResult> CheckCompanyRegOutcome;
			typedef std::future<CheckCompanyRegOutcome> CheckCompanyRegOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CheckCompanyRegRequest&, const CheckCompanyRegOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckCompanyRegAsyncHandler;
			typedef Outcome<Error, Model::CheckCopyPayrollResult> CheckCopyPayrollOutcome;
			typedef std::future<CheckCopyPayrollOutcome> CheckCopyPayrollOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CheckCopyPayrollRequest&, const CheckCopyPayrollOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckCopyPayrollAsyncHandler;
			typedef Outcome<Error, Model::CheckSavePayrollResult> CheckSavePayrollOutcome;
			typedef std::future<CheckSavePayrollOutcome> CheckSavePayrollOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CheckSavePayrollRequest&, const CheckSavePayrollOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckSavePayrollAsyncHandler;
			typedef Outcome<Error, Model::CheckSavePayrollDetailResult> CheckSavePayrollDetailOutcome;
			typedef std::future<CheckSavePayrollDetailOutcome> CheckSavePayrollDetailOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CheckSavePayrollDetailRequest&, const CheckSavePayrollDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckSavePayrollDetailAsyncHandler;
			typedef Outcome<Error, Model::ClearTrailDataResult> ClearTrailDataOutcome;
			typedef std::future<ClearTrailDataOutcome> ClearTrailDataOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ClearTrailDataRequest&, const ClearTrailDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClearTrailDataAsyncHandler;
			typedef Outcome<Error, Model::CloseIcpProduceResult> CloseIcpProduceOutcome;
			typedef std::future<CloseIcpProduceOutcome> CloseIcpProduceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CloseIcpProduceRequest&, const CloseIcpProduceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseIcpProduceAsyncHandler;
			typedef Outcome<Error, Model::CloseIntentionResult> CloseIntentionOutcome;
			typedef std::future<CloseIntentionOutcome> CloseIntentionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CloseIntentionRequest&, const CloseIntentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseIntentionAsyncHandler;
			typedef Outcome<Error, Model::CloseIntentionForPartnerResult> CloseIntentionForPartnerOutcome;
			typedef std::future<CloseIntentionForPartnerOutcome> CloseIntentionForPartnerOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CloseIntentionForPartnerRequest&, const CloseIntentionForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseIntentionForPartnerAsyncHandler;
			typedef Outcome<Error, Model::CloseUserIntentionResult> CloseUserIntentionOutcome;
			typedef std::future<CloseUserIntentionOutcome> CloseUserIntentionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CloseUserIntentionRequest&, const CloseUserIntentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseUserIntentionAsyncHandler;
			typedef Outcome<Error, Model::ConfirmIcpIntentionResult> ConfirmIcpIntentionOutcome;
			typedef std::future<ConfirmIcpIntentionOutcome> ConfirmIcpIntentionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ConfirmIcpIntentionRequest&, const ConfirmIcpIntentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmIcpIntentionAsyncHandler;
			typedef Outcome<Error, Model::ConfirmIntentionResult> ConfirmIntentionOutcome;
			typedef std::future<ConfirmIntentionOutcome> ConfirmIntentionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ConfirmIntentionRequest&, const ConfirmIntentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmIntentionAsyncHandler;
			typedef Outcome<Error, Model::ConfirmMaterialResult> ConfirmMaterialOutcome;
			typedef std::future<ConfirmMaterialOutcome> ConfirmMaterialOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ConfirmMaterialRequest&, const ConfirmMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmMaterialAsyncHandler;
			typedef Outcome<Error, Model::ConfirmTaxAmountResult> ConfirmTaxAmountOutcome;
			typedef std::future<ConfirmTaxAmountOutcome> ConfirmTaxAmountOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ConfirmTaxAmountRequest&, const ConfirmTaxAmountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmTaxAmountAsyncHandler;
			typedef Outcome<Error, Model::ConvertFeeResult> ConvertFeeOutcome;
			typedef std::future<ConvertFeeOutcome> ConvertFeeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ConvertFeeRequest&, const ConvertFeeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertFeeAsyncHandler;
			typedef Outcome<Error, Model::ConvertInvoiceResult> ConvertInvoiceOutcome;
			typedef std::future<ConvertInvoiceOutcome> ConvertInvoiceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ConvertInvoiceRequest&, const ConvertInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertInvoiceAsyncHandler;
			typedef Outcome<Error, Model::CopyPayrollResult> CopyPayrollOutcome;
			typedef std::future<CopyPayrollOutcome> CopyPayrollOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CopyPayrollRequest&, const CopyPayrollOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyPayrollAsyncHandler;
			typedef Outcome<Error, Model::CreateBookkeepingIntentionResult> CreateBookkeepingIntentionOutcome;
			typedef std::future<CreateBookkeepingIntentionOutcome> CreateBookkeepingIntentionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CreateBookkeepingIntentionRequest&, const CreateBookkeepingIntentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBookkeepingIntentionAsyncHandler;
			typedef Outcome<Error, Model::CreateBusinessOpportunityResult> CreateBusinessOpportunityOutcome;
			typedef std::future<CreateBusinessOpportunityOutcome> CreateBusinessOpportunityOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CreateBusinessOpportunityRequest&, const CreateBusinessOpportunityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBusinessOpportunityAsyncHandler;
			typedef Outcome<Error, Model::CreateProduceForPartnerResult> CreateProduceForPartnerOutcome;
			typedef std::future<CreateProduceForPartnerOutcome> CreateProduceForPartnerOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CreateProduceForPartnerRequest&, const CreateProduceForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProduceForPartnerAsyncHandler;
			typedef Outcome<Error, Model::DeleteFeeResult> DeleteFeeOutcome;
			typedef std::future<DeleteFeeOutcome> DeleteFeeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::DeleteFeeRequest&, const DeleteFeeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFeeAsyncHandler;
			typedef Outcome<Error, Model::DeleteInvoiceResult> DeleteInvoiceOutcome;
			typedef std::future<DeleteInvoiceOutcome> DeleteInvoiceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::DeleteInvoiceRequest&, const DeleteInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInvoiceAsyncHandler;
			typedef Outcome<Error, Model::DeletePayrollResult> DeletePayrollOutcome;
			typedef std::future<DeletePayrollOutcome> DeletePayrollOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::DeletePayrollRequest&, const DeletePayrollOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePayrollAsyncHandler;
			typedef Outcome<Error, Model::DescribePartnerConfigResult> DescribePartnerConfigOutcome;
			typedef std::future<DescribePartnerConfigOutcome> DescribePartnerConfigOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::DescribePartnerConfigRequest&, const DescribePartnerConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePartnerConfigAsyncHandler;
			typedef Outcome<Error, Model::GenerateCompanyRegUploadPolicyResult> GenerateCompanyRegUploadPolicyOutcome;
			typedef std::future<GenerateCompanyRegUploadPolicyOutcome> GenerateCompanyRegUploadPolicyOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GenerateCompanyRegUploadPolicyRequest&, const GenerateCompanyRegUploadPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateCompanyRegUploadPolicyAsyncHandler;
			typedef Outcome<Error, Model::GenerateUploadFilePolicyResult> GenerateUploadFilePolicyOutcome;
			typedef std::future<GenerateUploadFilePolicyOutcome> GenerateUploadFilePolicyOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GenerateUploadFilePolicyRequest&, const GenerateUploadFilePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateUploadFilePolicyAsyncHandler;
			typedef Outcome<Error, Model::GetAlipayUrlResult> GetAlipayUrlOutcome;
			typedef std::future<GetAlipayUrlOutcome> GetAlipayUrlOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetAlipayUrlRequest&, const GetAlipayUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAlipayUrlAsyncHandler;
			typedef Outcome<Error, Model::GetBalanceSheetInfoResult> GetBalanceSheetInfoOutcome;
			typedef std::future<GetBalanceSheetInfoOutcome> GetBalanceSheetInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetBalanceSheetInfoRequest&, const GetBalanceSheetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBalanceSheetInfoAsyncHandler;
			typedef Outcome<Error, Model::GetCashFlowInfoResult> GetCashFlowInfoOutcome;
			typedef std::future<GetCashFlowInfoOutcome> GetCashFlowInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetCashFlowInfoRequest&, const GetCashFlowInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCashFlowInfoAsyncHandler;
			typedef Outcome<Error, Model::GetCompanyRegOrderResult> GetCompanyRegOrderOutcome;
			typedef std::future<GetCompanyRegOrderOutcome> GetCompanyRegOrderOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetCompanyRegOrderRequest&, const GetCompanyRegOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCompanyRegOrderAsyncHandler;
			typedef Outcome<Error, Model::GetEnterprisesInfoResult> GetEnterprisesInfoOutcome;
			typedef std::future<GetEnterprisesInfoOutcome> GetEnterprisesInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetEnterprisesInfoRequest&, const GetEnterprisesInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEnterprisesInfoAsyncHandler;
			typedef Outcome<Error, Model::GetFeeResult> GetFeeOutcome;
			typedef std::future<GetFeeOutcome> GetFeeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetFeeRequest&, const GetFeeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFeeAsyncHandler;
			typedef Outcome<Error, Model::GetHomePageResult> GetHomePageOutcome;
			typedef std::future<GetHomePageOutcome> GetHomePageOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetHomePageRequest&, const GetHomePageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHomePageAsyncHandler;
			typedef Outcome<Error, Model::GetIncomeStatementInfoResult> GetIncomeStatementInfoOutcome;
			typedef std::future<GetIncomeStatementInfoOutcome> GetIncomeStatementInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetIncomeStatementInfoRequest&, const GetIncomeStatementInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIncomeStatementInfoAsyncHandler;
			typedef Outcome<Error, Model::GetIndustryCommerceInfoResult> GetIndustryCommerceInfoOutcome;
			typedef std::future<GetIndustryCommerceInfoOutcome> GetIndustryCommerceInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetIndustryCommerceInfoRequest&, const GetIndustryCommerceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIndustryCommerceInfoAsyncHandler;
			typedef Outcome<Error, Model::GetInitFlowResult> GetInitFlowOutcome;
			typedef std::future<GetInitFlowOutcome> GetInitFlowOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetInitFlowRequest&, const GetInitFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInitFlowAsyncHandler;
			typedef Outcome<Error, Model::GetInvoiceInfoResult> GetInvoiceInfoOutcome;
			typedef std::future<GetInvoiceInfoOutcome> GetInvoiceInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetInvoiceInfoRequest&, const GetInvoiceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInvoiceInfoAsyncHandler;
			typedef Outcome<Error, Model::GetLastMonthInvoiceCountResult> GetLastMonthInvoiceCountOutcome;
			typedef std::future<GetLastMonthInvoiceCountOutcome> GetLastMonthInvoiceCountOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetLastMonthInvoiceCountRequest&, const GetLastMonthInvoiceCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLastMonthInvoiceCountAsyncHandler;
			typedef Outcome<Error, Model::GetNoticeResult> GetNoticeOutcome;
			typedef std::future<GetNoticeOutcome> GetNoticeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetNoticeRequest&, const GetNoticeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNoticeAsyncHandler;
			typedef Outcome<Error, Model::GetOssStsResult> GetOssStsOutcome;
			typedef std::future<GetOssStsOutcome> GetOssStsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetOssStsRequest&, const GetOssStsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOssStsAsyncHandler;
			typedef Outcome<Error, Model::GetPayrollInfoResult> GetPayrollInfoOutcome;
			typedef std::future<GetPayrollInfoOutcome> GetPayrollInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetPayrollInfoRequest&, const GetPayrollInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPayrollInfoAsyncHandler;
			typedef Outcome<Error, Model::GetPayrollSettingResult> GetPayrollSettingOutcome;
			typedef std::future<GetPayrollSettingOutcome> GetPayrollSettingOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetPayrollSettingRequest&, const GetPayrollSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPayrollSettingAsyncHandler;
			typedef Outcome<Error, Model::GetPeriodInfoResult> GetPeriodInfoOutcome;
			typedef std::future<GetPeriodInfoOutcome> GetPeriodInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetPeriodInfoRequest&, const GetPeriodInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPeriodInfoAsyncHandler;
			typedef Outcome<Error, Model::GetQuarterCashFlowInfoResult> GetQuarterCashFlowInfoOutcome;
			typedef std::future<GetQuarterCashFlowInfoOutcome> GetQuarterCashFlowInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetQuarterCashFlowInfoRequest&, const GetQuarterCashFlowInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQuarterCashFlowInfoAsyncHandler;
			typedef Outcome<Error, Model::GetQuarterIncomeStatementInfoResult> GetQuarterIncomeStatementInfoOutcome;
			typedef std::future<GetQuarterIncomeStatementInfoOutcome> GetQuarterIncomeStatementInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetQuarterIncomeStatementInfoRequest&, const GetQuarterIncomeStatementInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQuarterIncomeStatementInfoAsyncHandler;
			typedef Outcome<Error, Model::GetServiceInfoResult> GetServiceInfoOutcome;
			typedef std::future<GetServiceInfoOutcome> GetServiceInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetServiceInfoRequest&, const GetServiceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceInfoAsyncHandler;
			typedef Outcome<Error, Model::GetSsoUserInfoResult> GetSsoUserInfoOutcome;
			typedef std::future<GetSsoUserInfoOutcome> GetSsoUserInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetSsoUserInfoRequest&, const GetSsoUserInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSsoUserInfoAsyncHandler;
			typedef Outcome<Error, Model::GetTaxInfoResult> GetTaxInfoOutcome;
			typedef std::future<GetTaxInfoOutcome> GetTaxInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetTaxInfoRequest&, const GetTaxInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaxInfoAsyncHandler;
			typedef Outcome<Error, Model::GetTaxationCalendarResult> GetTaxationCalendarOutcome;
			typedef std::future<GetTaxationCalendarOutcome> GetTaxationCalendarOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetTaxationCalendarRequest&, const GetTaxationCalendarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaxationCalendarAsyncHandler;
			typedef Outcome<Error, Model::GetTaxationInfoResult> GetTaxationInfoOutcome;
			typedef std::future<GetTaxationInfoOutcome> GetTaxationInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetTaxationInfoRequest&, const GetTaxationInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaxationInfoAsyncHandler;
			typedef Outcome<Error, Model::GetTypeListResult> GetTypeListOutcome;
			typedef std::future<GetTypeListOutcome> GetTypeListOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetTypeListRequest&, const GetTypeListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTypeListAsyncHandler;
			typedef Outcome<Error, Model::GetVoucherCountResult> GetVoucherCountOutcome;
			typedef std::future<GetVoucherCountOutcome> GetVoucherCountOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetVoucherCountRequest&, const GetVoucherCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVoucherCountAsyncHandler;
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
			typedef Outcome<Error, Model::ListCashJournalResult> ListCashJournalOutcome;
			typedef std::future<ListCashJournalOutcome> ListCashJournalOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListCashJournalRequest&, const ListCashJournalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCashJournalAsyncHandler;
			typedef Outcome<Error, Model::ListCompanyRegConsultationsResult> ListCompanyRegConsultationsOutcome;
			typedef std::future<ListCompanyRegConsultationsOutcome> ListCompanyRegConsultationsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListCompanyRegConsultationsRequest&, const ListCompanyRegConsultationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCompanyRegConsultationsAsyncHandler;
			typedef Outcome<Error, Model::ListCompanyRegOrdersResult> ListCompanyRegOrdersOutcome;
			typedef std::future<ListCompanyRegOrdersOutcome> ListCompanyRegOrdersOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListCompanyRegOrdersRequest&, const ListCompanyRegOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCompanyRegOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListEnterprisesResult> ListEnterprisesOutcome;
			typedef std::future<ListEnterprisesOutcome> ListEnterprisesOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListEnterprisesRequest&, const ListEnterprisesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnterprisesAsyncHandler;
			typedef Outcome<Error, Model::ListIcpApplicationsResult> ListIcpApplicationsOutcome;
			typedef std::future<ListIcpApplicationsOutcome> ListIcpApplicationsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListIcpApplicationsRequest&, const ListIcpApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIcpApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListIntentionNoteResult> ListIntentionNoteOutcome;
			typedef std::future<ListIntentionNoteOutcome> ListIntentionNoteOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListIntentionNoteRequest&, const ListIntentionNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIntentionNoteAsyncHandler;
			typedef Outcome<Error, Model::ListInvoiceResult> ListInvoiceOutcome;
			typedef std::future<ListInvoiceOutcome> ListInvoiceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListInvoiceRequest&, const ListInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInvoiceAsyncHandler;
			typedef Outcome<Error, Model::ListLastMonthInvoiceResult> ListLastMonthInvoiceOutcome;
			typedef std::future<ListLastMonthInvoiceOutcome> ListLastMonthInvoiceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListLastMonthInvoiceRequest&, const ListLastMonthInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLastMonthInvoiceAsyncHandler;
			typedef Outcome<Error, Model::ListPayrollResult> ListPayrollOutcome;
			typedef std::future<ListPayrollOutcome> ListPayrollOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListPayrollRequest&, const ListPayrollOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPayrollAsyncHandler;
			typedef Outcome<Error, Model::ListProduceAuthorizationResult> ListProduceAuthorizationOutcome;
			typedef std::future<ListProduceAuthorizationOutcome> ListProduceAuthorizationOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListProduceAuthorizationRequest&, const ListProduceAuthorizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProduceAuthorizationAsyncHandler;
			typedef Outcome<Error, Model::ListUserDetailSolutionsResult> ListUserDetailSolutionsOutcome;
			typedef std::future<ListUserDetailSolutionsOutcome> ListUserDetailSolutionsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListUserDetailSolutionsRequest&, const ListUserDetailSolutionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserDetailSolutionsAsyncHandler;
			typedef Outcome<Error, Model::ListUserIntentionNotesResult> ListUserIntentionNotesOutcome;
			typedef std::future<ListUserIntentionNotesOutcome> ListUserIntentionNotesOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListUserIntentionNotesRequest&, const ListUserIntentionNotesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserIntentionNotesAsyncHandler;
			typedef Outcome<Error, Model::ListUserIntentionsResult> ListUserIntentionsOutcome;
			typedef std::future<ListUserIntentionsOutcome> ListUserIntentionsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListUserIntentionsRequest&, const ListUserIntentionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserIntentionsAsyncHandler;
			typedef Outcome<Error, Model::ListUserProduceOperateLogsResult> ListUserProduceOperateLogsOutcome;
			typedef std::future<ListUserProduceOperateLogsOutcome> ListUserProduceOperateLogsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListUserProduceOperateLogsRequest&, const ListUserProduceOperateLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserProduceOperateLogsAsyncHandler;
			typedef Outcome<Error, Model::ListUserSolutionsResult> ListUserSolutionsOutcome;
			typedef std::future<ListUserSolutionsOutcome> ListUserSolutionsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListUserSolutionsRequest&, const ListUserSolutionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserSolutionsAsyncHandler;
			typedef Outcome<Error, Model::ListVoucherResult> ListVoucherOutcome;
			typedef std::future<ListVoucherOutcome> ListVoucherOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListVoucherRequest&, const ListVoucherOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVoucherAsyncHandler;
			typedef Outcome<Error, Model::OperateProduceForPartnerResult> OperateProduceForPartnerOutcome;
			typedef std::future<OperateProduceForPartnerOutcome> OperateProduceForPartnerOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::OperateProduceForPartnerRequest&, const OperateProduceForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateProduceForPartnerAsyncHandler;
			typedef Outcome<Error, Model::PhotoInvoiceResult> PhotoInvoiceOutcome;
			typedef std::future<PhotoInvoiceOutcome> PhotoInvoiceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::PhotoInvoiceRequest&, const PhotoInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PhotoInvoiceAsyncHandler;
			typedef Outcome<Error, Model::PrintAcctgTransResult> PrintAcctgTransOutcome;
			typedef std::future<PrintAcctgTransOutcome> PrintAcctgTransOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::PrintAcctgTransRequest&, const PrintAcctgTransOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PrintAcctgTransAsyncHandler;
			typedef Outcome<Error, Model::ProcessCompanyRegOrderResult> ProcessCompanyRegOrderOutcome;
			typedef std::future<ProcessCompanyRegOrderOutcome> ProcessCompanyRegOrderOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ProcessCompanyRegOrderRequest&, const ProcessCompanyRegOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProcessCompanyRegOrderAsyncHandler;
			typedef Outcome<Error, Model::PutMeasureDataResult> PutMeasureDataOutcome;
			typedef std::future<PutMeasureDataOutcome> PutMeasureDataOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::PutMeasureDataRequest&, const PutMeasureDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutMeasureDataAsyncHandler;
			typedef Outcome<Error, Model::PutMeasureReadyFlagResult> PutMeasureReadyFlagOutcome;
			typedef std::future<PutMeasureReadyFlagOutcome> PutMeasureReadyFlagOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::PutMeasureReadyFlagRequest&, const PutMeasureReadyFlagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutMeasureReadyFlagAsyncHandler;
			typedef Outcome<Error, Model::QueryBagRemainingResult> QueryBagRemainingOutcome;
			typedef std::future<QueryBagRemainingOutcome> QueryBagRemainingOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::QueryBagRemainingRequest&, const QueryBagRemainingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBagRemainingAsyncHandler;
			typedef Outcome<Error, Model::QueryBookkeepingCommoditiesResult> QueryBookkeepingCommoditiesOutcome;
			typedef std::future<QueryBookkeepingCommoditiesOutcome> QueryBookkeepingCommoditiesOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::QueryBookkeepingCommoditiesRequest&, const QueryBookkeepingCommoditiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBookkeepingCommoditiesAsyncHandler;
			typedef Outcome<Error, Model::QueryBookkeepingCommodityModulesResult> QueryBookkeepingCommodityModulesOutcome;
			typedef std::future<QueryBookkeepingCommodityModulesOutcome> QueryBookkeepingCommodityModulesOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::QueryBookkeepingCommodityModulesRequest&, const QueryBookkeepingCommodityModulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBookkeepingCommodityModulesAsyncHandler;
			typedef Outcome<Error, Model::QueryCommodityConfigResult> QueryCommodityConfigOutcome;
			typedef std::future<QueryCommodityConfigOutcome> QueryCommodityConfigOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::QueryCommodityConfigRequest&, const QueryCommodityConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCommodityConfigAsyncHandler;
			typedef Outcome<Error, Model::QueryCommunicationLogsResult> QueryCommunicationLogsOutcome;
			typedef std::future<QueryCommunicationLogsOutcome> QueryCommunicationLogsOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::QueryCommunicationLogsRequest&, const QueryCommunicationLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCommunicationLogsAsyncHandler;
			typedef Outcome<Error, Model::QueryInstanceResult> QueryInstanceOutcome;
			typedef std::future<QueryInstanceOutcome> QueryInstanceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::QueryInstanceRequest&, const QueryInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryInstanceAsyncHandler;
			typedef Outcome<Error, Model::QueryIntentionListResult> QueryIntentionListOutcome;
			typedef std::future<QueryIntentionListOutcome> QueryIntentionListOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::QueryIntentionListRequest&, const QueryIntentionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryIntentionListAsyncHandler;
			typedef Outcome<Error, Model::QueryTradeIntentionUserListResult> QueryTradeIntentionUserListOutcome;
			typedef std::future<QueryTradeIntentionUserListOutcome> QueryTradeIntentionUserListOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::QueryTradeIntentionUserListRequest&, const QueryTradeIntentionUserListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTradeIntentionUserListAsyncHandler;
			typedef Outcome<Error, Model::QueryUserNeedAuthResult> QueryUserNeedAuthOutcome;
			typedef std::future<QueryUserNeedAuthOutcome> QueryUserNeedAuthOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::QueryUserNeedAuthRequest&, const QueryUserNeedAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserNeedAuthAsyncHandler;
			typedef Outcome<Error, Model::ReSubmitIcpSolutionResult> ReSubmitIcpSolutionOutcome;
			typedef std::future<ReSubmitIcpSolutionOutcome> ReSubmitIcpSolutionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ReSubmitIcpSolutionRequest&, const ReSubmitIcpSolutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReSubmitIcpSolutionAsyncHandler;
			typedef Outcome<Error, Model::RefreshCustomerInfoResult> RefreshCustomerInfoOutcome;
			typedef std::future<RefreshCustomerInfoOutcome> RefreshCustomerInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::RefreshCustomerInfoRequest&, const RefreshCustomerInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshCustomerInfoAsyncHandler;
			typedef Outcome<Error, Model::RefuseMaterialResult> RefuseMaterialOutcome;
			typedef std::future<RefuseMaterialOutcome> RefuseMaterialOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::RefuseMaterialRequest&, const RefuseMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefuseMaterialAsyncHandler;
			typedef Outcome<Error, Model::RejectIcpIntentionResult> RejectIcpIntentionOutcome;
			typedef std::future<RejectIcpIntentionOutcome> RejectIcpIntentionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::RejectIcpIntentionRequest&, const RejectIcpIntentionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RejectIcpIntentionAsyncHandler;
			typedef Outcome<Error, Model::RejectSolutionResult> RejectSolutionOutcome;
			typedef std::future<RejectSolutionOutcome> RejectSolutionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::RejectSolutionRequest&, const RejectSolutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RejectSolutionAsyncHandler;
			typedef Outcome<Error, Model::RejectUserSolutionResult> RejectUserSolutionOutcome;
			typedef std::future<RejectUserSolutionOutcome> RejectUserSolutionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::RejectUserSolutionRequest&, const RejectUserSolutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RejectUserSolutionAsyncHandler;
			typedef Outcome<Error, Model::ReleaseProduceAuthorizationResult> ReleaseProduceAuthorizationOutcome;
			typedef std::future<ReleaseProduceAuthorizationOutcome> ReleaseProduceAuthorizationOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ReleaseProduceAuthorizationRequest&, const ReleaseProduceAuthorizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseProduceAuthorizationAsyncHandler;
			typedef Outcome<Error, Model::SaveOpeningBalanceStatusResult> SaveOpeningBalanceStatusOutcome;
			typedef std::future<SaveOpeningBalanceStatusOutcome> SaveOpeningBalanceStatusOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SaveOpeningBalanceStatusRequest&, const SaveOpeningBalanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveOpeningBalanceStatusAsyncHandler;
			typedef Outcome<Error, Model::SavePayrollResult> SavePayrollOutcome;
			typedef std::future<SavePayrollOutcome> SavePayrollOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SavePayrollRequest&, const SavePayrollOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SavePayrollAsyncHandler;
			typedef Outcome<Error, Model::SavePayrollSettingResult> SavePayrollSettingOutcome;
			typedef std::future<SavePayrollSettingOutcome> SavePayrollSettingOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SavePayrollSettingRequest&, const SavePayrollSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SavePayrollSettingAsyncHandler;
			typedef Outcome<Error, Model::ScanInvoiceResult> ScanInvoiceOutcome;
			typedef std::future<ScanInvoiceOutcome> ScanInvoiceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ScanInvoiceRequest&, const ScanInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScanInvoiceAsyncHandler;
			typedef Outcome<Error, Model::SendMessageResult> SendMessageOutcome;
			typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SendMessageRequest&, const SendMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageAsyncHandler;
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
			typedef Outcome<Error, Model::SubmitIntentionNoteResult> SubmitIntentionNoteOutcome;
			typedef std::future<SubmitIntentionNoteOutcome> SubmitIntentionNoteOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SubmitIntentionNoteRequest&, const SubmitIntentionNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitIntentionNoteAsyncHandler;
			typedef Outcome<Error, Model::SubmitPartnerCompanyInformationResult> SubmitPartnerCompanyInformationOutcome;
			typedef std::future<SubmitPartnerCompanyInformationOutcome> SubmitPartnerCompanyInformationOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SubmitPartnerCompanyInformationRequest&, const SubmitPartnerCompanyInformationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitPartnerCompanyInformationAsyncHandler;
			typedef Outcome<Error, Model::SubmitSolutionResult> SubmitSolutionOutcome;
			typedef std::future<SubmitSolutionOutcome> SubmitSolutionOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::SubmitSolutionRequest&, const SubmitSolutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSolutionAsyncHandler;
			typedef Outcome<Error, Model::UpdateBookkeepingOrgResult> UpdateBookkeepingOrgOutcome;
			typedef std::future<UpdateBookkeepingOrgOutcome> UpdateBookkeepingOrgOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UpdateBookkeepingOrgRequest&, const UpdateBookkeepingOrgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBookkeepingOrgAsyncHandler;
			typedef Outcome<Error, Model::UpdateCustomerInfoResult> UpdateCustomerInfoOutcome;
			typedef std::future<UpdateCustomerInfoOutcome> UpdateCustomerInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UpdateCustomerInfoRequest&, const UpdateCustomerInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomerInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateFeeResult> UpdateFeeOutcome;
			typedef std::future<UpdateFeeOutcome> UpdateFeeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UpdateFeeRequest&, const UpdateFeeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFeeAsyncHandler;
			typedef Outcome<Error, Model::UpdateProduceResult> UpdateProduceOutcome;
			typedef std::future<UpdateProduceOutcome> UpdateProduceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UpdateProduceRequest&, const UpdateProduceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProduceAsyncHandler;
			typedef Outcome<Error, Model::UpdateTaxInfoResult> UpdateTaxInfoOutcome;
			typedef std::future<UpdateTaxInfoOutcome> UpdateTaxInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UpdateTaxInfoRequest&, const UpdateTaxInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTaxInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateTaxationProcessResult> UpdateTaxationProcessOutcome;
			typedef std::future<UpdateTaxationProcessOutcome> UpdateTaxationProcessOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UpdateTaxationProcessRequest&, const UpdateTaxationProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTaxationProcessAsyncHandler;
			typedef Outcome<Error, Model::UploadIcpBasicMaterialResult> UploadIcpBasicMaterialOutcome;
			typedef std::future<UploadIcpBasicMaterialOutcome> UploadIcpBasicMaterialOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UploadIcpBasicMaterialRequest&, const UploadIcpBasicMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadIcpBasicMaterialAsyncHandler;
			typedef Outcome<Error, Model::UploadUserMaterialResult> UploadUserMaterialOutcome;
			typedef std::future<UploadUserMaterialOutcome> UploadUserMaterialOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UploadUserMaterialRequest&, const UploadUserMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadUserMaterialAsyncHandler;
			typedef Outcome<Error, Model::VerifyTaxSmsCodeResult> VerifyTaxSmsCodeOutcome;
			typedef std::future<VerifyTaxSmsCodeOutcome> VerifyTaxSmsCodeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::VerifyTaxSmsCodeRequest&, const VerifyTaxSmsCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyTaxSmsCodeAsyncHandler;
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
			BindProduceAuthorizationOutcome bindProduceAuthorization(const Model::BindProduceAuthorizationRequest &request)const;
			void bindProduceAuthorizationAsync(const Model::BindProduceAuthorizationRequest& request, const BindProduceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindProduceAuthorizationOutcomeCallable bindProduceAuthorizationCallable(const Model::BindProduceAuthorizationRequest& request) const;
			CheckCompanyRegOutcome checkCompanyReg(const Model::CheckCompanyRegRequest &request)const;
			void checkCompanyRegAsync(const Model::CheckCompanyRegRequest& request, const CheckCompanyRegAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckCompanyRegOutcomeCallable checkCompanyRegCallable(const Model::CheckCompanyRegRequest& request) const;
			CheckCopyPayrollOutcome checkCopyPayroll(const Model::CheckCopyPayrollRequest &request)const;
			void checkCopyPayrollAsync(const Model::CheckCopyPayrollRequest& request, const CheckCopyPayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckCopyPayrollOutcomeCallable checkCopyPayrollCallable(const Model::CheckCopyPayrollRequest& request) const;
			CheckSavePayrollOutcome checkSavePayroll(const Model::CheckSavePayrollRequest &request)const;
			void checkSavePayrollAsync(const Model::CheckSavePayrollRequest& request, const CheckSavePayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckSavePayrollOutcomeCallable checkSavePayrollCallable(const Model::CheckSavePayrollRequest& request) const;
			CheckSavePayrollDetailOutcome checkSavePayrollDetail(const Model::CheckSavePayrollDetailRequest &request)const;
			void checkSavePayrollDetailAsync(const Model::CheckSavePayrollDetailRequest& request, const CheckSavePayrollDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckSavePayrollDetailOutcomeCallable checkSavePayrollDetailCallable(const Model::CheckSavePayrollDetailRequest& request) const;
			ClearTrailDataOutcome clearTrailData(const Model::ClearTrailDataRequest &request)const;
			void clearTrailDataAsync(const Model::ClearTrailDataRequest& request, const ClearTrailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClearTrailDataOutcomeCallable clearTrailDataCallable(const Model::ClearTrailDataRequest& request) const;
			CloseIcpProduceOutcome closeIcpProduce(const Model::CloseIcpProduceRequest &request)const;
			void closeIcpProduceAsync(const Model::CloseIcpProduceRequest& request, const CloseIcpProduceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseIcpProduceOutcomeCallable closeIcpProduceCallable(const Model::CloseIcpProduceRequest& request) const;
			CloseIntentionOutcome closeIntention(const Model::CloseIntentionRequest &request)const;
			void closeIntentionAsync(const Model::CloseIntentionRequest& request, const CloseIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseIntentionOutcomeCallable closeIntentionCallable(const Model::CloseIntentionRequest& request) const;
			CloseIntentionForPartnerOutcome closeIntentionForPartner(const Model::CloseIntentionForPartnerRequest &request)const;
			void closeIntentionForPartnerAsync(const Model::CloseIntentionForPartnerRequest& request, const CloseIntentionForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseIntentionForPartnerOutcomeCallable closeIntentionForPartnerCallable(const Model::CloseIntentionForPartnerRequest& request) const;
			CloseUserIntentionOutcome closeUserIntention(const Model::CloseUserIntentionRequest &request)const;
			void closeUserIntentionAsync(const Model::CloseUserIntentionRequest& request, const CloseUserIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseUserIntentionOutcomeCallable closeUserIntentionCallable(const Model::CloseUserIntentionRequest& request) const;
			ConfirmIcpIntentionOutcome confirmIcpIntention(const Model::ConfirmIcpIntentionRequest &request)const;
			void confirmIcpIntentionAsync(const Model::ConfirmIcpIntentionRequest& request, const ConfirmIcpIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmIcpIntentionOutcomeCallable confirmIcpIntentionCallable(const Model::ConfirmIcpIntentionRequest& request) const;
			ConfirmIntentionOutcome confirmIntention(const Model::ConfirmIntentionRequest &request)const;
			void confirmIntentionAsync(const Model::ConfirmIntentionRequest& request, const ConfirmIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmIntentionOutcomeCallable confirmIntentionCallable(const Model::ConfirmIntentionRequest& request) const;
			ConfirmMaterialOutcome confirmMaterial(const Model::ConfirmMaterialRequest &request)const;
			void confirmMaterialAsync(const Model::ConfirmMaterialRequest& request, const ConfirmMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmMaterialOutcomeCallable confirmMaterialCallable(const Model::ConfirmMaterialRequest& request) const;
			ConfirmTaxAmountOutcome confirmTaxAmount(const Model::ConfirmTaxAmountRequest &request)const;
			void confirmTaxAmountAsync(const Model::ConfirmTaxAmountRequest& request, const ConfirmTaxAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmTaxAmountOutcomeCallable confirmTaxAmountCallable(const Model::ConfirmTaxAmountRequest& request) const;
			ConvertFeeOutcome convertFee(const Model::ConvertFeeRequest &request)const;
			void convertFeeAsync(const Model::ConvertFeeRequest& request, const ConvertFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertFeeOutcomeCallable convertFeeCallable(const Model::ConvertFeeRequest& request) const;
			ConvertInvoiceOutcome convertInvoice(const Model::ConvertInvoiceRequest &request)const;
			void convertInvoiceAsync(const Model::ConvertInvoiceRequest& request, const ConvertInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertInvoiceOutcomeCallable convertInvoiceCallable(const Model::ConvertInvoiceRequest& request) const;
			CopyPayrollOutcome copyPayroll(const Model::CopyPayrollRequest &request)const;
			void copyPayrollAsync(const Model::CopyPayrollRequest& request, const CopyPayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyPayrollOutcomeCallable copyPayrollCallable(const Model::CopyPayrollRequest& request) const;
			CreateBookkeepingIntentionOutcome createBookkeepingIntention(const Model::CreateBookkeepingIntentionRequest &request)const;
			void createBookkeepingIntentionAsync(const Model::CreateBookkeepingIntentionRequest& request, const CreateBookkeepingIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBookkeepingIntentionOutcomeCallable createBookkeepingIntentionCallable(const Model::CreateBookkeepingIntentionRequest& request) const;
			CreateBusinessOpportunityOutcome createBusinessOpportunity(const Model::CreateBusinessOpportunityRequest &request)const;
			void createBusinessOpportunityAsync(const Model::CreateBusinessOpportunityRequest& request, const CreateBusinessOpportunityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBusinessOpportunityOutcomeCallable createBusinessOpportunityCallable(const Model::CreateBusinessOpportunityRequest& request) const;
			CreateProduceForPartnerOutcome createProduceForPartner(const Model::CreateProduceForPartnerRequest &request)const;
			void createProduceForPartnerAsync(const Model::CreateProduceForPartnerRequest& request, const CreateProduceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProduceForPartnerOutcomeCallable createProduceForPartnerCallable(const Model::CreateProduceForPartnerRequest& request) const;
			DeleteFeeOutcome deleteFee(const Model::DeleteFeeRequest &request)const;
			void deleteFeeAsync(const Model::DeleteFeeRequest& request, const DeleteFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFeeOutcomeCallable deleteFeeCallable(const Model::DeleteFeeRequest& request) const;
			DeleteInvoiceOutcome deleteInvoice(const Model::DeleteInvoiceRequest &request)const;
			void deleteInvoiceAsync(const Model::DeleteInvoiceRequest& request, const DeleteInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInvoiceOutcomeCallable deleteInvoiceCallable(const Model::DeleteInvoiceRequest& request) const;
			DeletePayrollOutcome deletePayroll(const Model::DeletePayrollRequest &request)const;
			void deletePayrollAsync(const Model::DeletePayrollRequest& request, const DeletePayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePayrollOutcomeCallable deletePayrollCallable(const Model::DeletePayrollRequest& request) const;
			DescribePartnerConfigOutcome describePartnerConfig(const Model::DescribePartnerConfigRequest &request)const;
			void describePartnerConfigAsync(const Model::DescribePartnerConfigRequest& request, const DescribePartnerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePartnerConfigOutcomeCallable describePartnerConfigCallable(const Model::DescribePartnerConfigRequest& request) const;
			GenerateCompanyRegUploadPolicyOutcome generateCompanyRegUploadPolicy(const Model::GenerateCompanyRegUploadPolicyRequest &request)const;
			void generateCompanyRegUploadPolicyAsync(const Model::GenerateCompanyRegUploadPolicyRequest& request, const GenerateCompanyRegUploadPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateCompanyRegUploadPolicyOutcomeCallable generateCompanyRegUploadPolicyCallable(const Model::GenerateCompanyRegUploadPolicyRequest& request) const;
			GenerateUploadFilePolicyOutcome generateUploadFilePolicy(const Model::GenerateUploadFilePolicyRequest &request)const;
			void generateUploadFilePolicyAsync(const Model::GenerateUploadFilePolicyRequest& request, const GenerateUploadFilePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateUploadFilePolicyOutcomeCallable generateUploadFilePolicyCallable(const Model::GenerateUploadFilePolicyRequest& request) const;
			GetAlipayUrlOutcome getAlipayUrl(const Model::GetAlipayUrlRequest &request)const;
			void getAlipayUrlAsync(const Model::GetAlipayUrlRequest& request, const GetAlipayUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAlipayUrlOutcomeCallable getAlipayUrlCallable(const Model::GetAlipayUrlRequest& request) const;
			GetBalanceSheetInfoOutcome getBalanceSheetInfo(const Model::GetBalanceSheetInfoRequest &request)const;
			void getBalanceSheetInfoAsync(const Model::GetBalanceSheetInfoRequest& request, const GetBalanceSheetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBalanceSheetInfoOutcomeCallable getBalanceSheetInfoCallable(const Model::GetBalanceSheetInfoRequest& request) const;
			GetCashFlowInfoOutcome getCashFlowInfo(const Model::GetCashFlowInfoRequest &request)const;
			void getCashFlowInfoAsync(const Model::GetCashFlowInfoRequest& request, const GetCashFlowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCashFlowInfoOutcomeCallable getCashFlowInfoCallable(const Model::GetCashFlowInfoRequest& request) const;
			GetCompanyRegOrderOutcome getCompanyRegOrder(const Model::GetCompanyRegOrderRequest &request)const;
			void getCompanyRegOrderAsync(const Model::GetCompanyRegOrderRequest& request, const GetCompanyRegOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCompanyRegOrderOutcomeCallable getCompanyRegOrderCallable(const Model::GetCompanyRegOrderRequest& request) const;
			GetEnterprisesInfoOutcome getEnterprisesInfo(const Model::GetEnterprisesInfoRequest &request)const;
			void getEnterprisesInfoAsync(const Model::GetEnterprisesInfoRequest& request, const GetEnterprisesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEnterprisesInfoOutcomeCallable getEnterprisesInfoCallable(const Model::GetEnterprisesInfoRequest& request) const;
			GetFeeOutcome getFee(const Model::GetFeeRequest &request)const;
			void getFeeAsync(const Model::GetFeeRequest& request, const GetFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFeeOutcomeCallable getFeeCallable(const Model::GetFeeRequest& request) const;
			GetHomePageOutcome getHomePage(const Model::GetHomePageRequest &request)const;
			void getHomePageAsync(const Model::GetHomePageRequest& request, const GetHomePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHomePageOutcomeCallable getHomePageCallable(const Model::GetHomePageRequest& request) const;
			GetIncomeStatementInfoOutcome getIncomeStatementInfo(const Model::GetIncomeStatementInfoRequest &request)const;
			void getIncomeStatementInfoAsync(const Model::GetIncomeStatementInfoRequest& request, const GetIncomeStatementInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIncomeStatementInfoOutcomeCallable getIncomeStatementInfoCallable(const Model::GetIncomeStatementInfoRequest& request) const;
			GetIndustryCommerceInfoOutcome getIndustryCommerceInfo(const Model::GetIndustryCommerceInfoRequest &request)const;
			void getIndustryCommerceInfoAsync(const Model::GetIndustryCommerceInfoRequest& request, const GetIndustryCommerceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIndustryCommerceInfoOutcomeCallable getIndustryCommerceInfoCallable(const Model::GetIndustryCommerceInfoRequest& request) const;
			GetInitFlowOutcome getInitFlow(const Model::GetInitFlowRequest &request)const;
			void getInitFlowAsync(const Model::GetInitFlowRequest& request, const GetInitFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInitFlowOutcomeCallable getInitFlowCallable(const Model::GetInitFlowRequest& request) const;
			GetInvoiceInfoOutcome getInvoiceInfo(const Model::GetInvoiceInfoRequest &request)const;
			void getInvoiceInfoAsync(const Model::GetInvoiceInfoRequest& request, const GetInvoiceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInvoiceInfoOutcomeCallable getInvoiceInfoCallable(const Model::GetInvoiceInfoRequest& request) const;
			GetLastMonthInvoiceCountOutcome getLastMonthInvoiceCount(const Model::GetLastMonthInvoiceCountRequest &request)const;
			void getLastMonthInvoiceCountAsync(const Model::GetLastMonthInvoiceCountRequest& request, const GetLastMonthInvoiceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLastMonthInvoiceCountOutcomeCallable getLastMonthInvoiceCountCallable(const Model::GetLastMonthInvoiceCountRequest& request) const;
			GetNoticeOutcome getNotice(const Model::GetNoticeRequest &request)const;
			void getNoticeAsync(const Model::GetNoticeRequest& request, const GetNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNoticeOutcomeCallable getNoticeCallable(const Model::GetNoticeRequest& request) const;
			GetOssStsOutcome getOssSts(const Model::GetOssStsRequest &request)const;
			void getOssStsAsync(const Model::GetOssStsRequest& request, const GetOssStsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOssStsOutcomeCallable getOssStsCallable(const Model::GetOssStsRequest& request) const;
			GetPayrollInfoOutcome getPayrollInfo(const Model::GetPayrollInfoRequest &request)const;
			void getPayrollInfoAsync(const Model::GetPayrollInfoRequest& request, const GetPayrollInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPayrollInfoOutcomeCallable getPayrollInfoCallable(const Model::GetPayrollInfoRequest& request) const;
			GetPayrollSettingOutcome getPayrollSetting(const Model::GetPayrollSettingRequest &request)const;
			void getPayrollSettingAsync(const Model::GetPayrollSettingRequest& request, const GetPayrollSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPayrollSettingOutcomeCallable getPayrollSettingCallable(const Model::GetPayrollSettingRequest& request) const;
			GetPeriodInfoOutcome getPeriodInfo(const Model::GetPeriodInfoRequest &request)const;
			void getPeriodInfoAsync(const Model::GetPeriodInfoRequest& request, const GetPeriodInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPeriodInfoOutcomeCallable getPeriodInfoCallable(const Model::GetPeriodInfoRequest& request) const;
			GetQuarterCashFlowInfoOutcome getQuarterCashFlowInfo(const Model::GetQuarterCashFlowInfoRequest &request)const;
			void getQuarterCashFlowInfoAsync(const Model::GetQuarterCashFlowInfoRequest& request, const GetQuarterCashFlowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQuarterCashFlowInfoOutcomeCallable getQuarterCashFlowInfoCallable(const Model::GetQuarterCashFlowInfoRequest& request) const;
			GetQuarterIncomeStatementInfoOutcome getQuarterIncomeStatementInfo(const Model::GetQuarterIncomeStatementInfoRequest &request)const;
			void getQuarterIncomeStatementInfoAsync(const Model::GetQuarterIncomeStatementInfoRequest& request, const GetQuarterIncomeStatementInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQuarterIncomeStatementInfoOutcomeCallable getQuarterIncomeStatementInfoCallable(const Model::GetQuarterIncomeStatementInfoRequest& request) const;
			GetServiceInfoOutcome getServiceInfo(const Model::GetServiceInfoRequest &request)const;
			void getServiceInfoAsync(const Model::GetServiceInfoRequest& request, const GetServiceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceInfoOutcomeCallable getServiceInfoCallable(const Model::GetServiceInfoRequest& request) const;
			GetSsoUserInfoOutcome getSsoUserInfo(const Model::GetSsoUserInfoRequest &request)const;
			void getSsoUserInfoAsync(const Model::GetSsoUserInfoRequest& request, const GetSsoUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSsoUserInfoOutcomeCallable getSsoUserInfoCallable(const Model::GetSsoUserInfoRequest& request) const;
			GetTaxInfoOutcome getTaxInfo(const Model::GetTaxInfoRequest &request)const;
			void getTaxInfoAsync(const Model::GetTaxInfoRequest& request, const GetTaxInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaxInfoOutcomeCallable getTaxInfoCallable(const Model::GetTaxInfoRequest& request) const;
			GetTaxationCalendarOutcome getTaxationCalendar(const Model::GetTaxationCalendarRequest &request)const;
			void getTaxationCalendarAsync(const Model::GetTaxationCalendarRequest& request, const GetTaxationCalendarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaxationCalendarOutcomeCallable getTaxationCalendarCallable(const Model::GetTaxationCalendarRequest& request) const;
			GetTaxationInfoOutcome getTaxationInfo(const Model::GetTaxationInfoRequest &request)const;
			void getTaxationInfoAsync(const Model::GetTaxationInfoRequest& request, const GetTaxationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaxationInfoOutcomeCallable getTaxationInfoCallable(const Model::GetTaxationInfoRequest& request) const;
			GetTypeListOutcome getTypeList(const Model::GetTypeListRequest &request)const;
			void getTypeListAsync(const Model::GetTypeListRequest& request, const GetTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTypeListOutcomeCallable getTypeListCallable(const Model::GetTypeListRequest& request) const;
			GetVoucherCountOutcome getVoucherCount(const Model::GetVoucherCountRequest &request)const;
			void getVoucherCountAsync(const Model::GetVoucherCountRequest& request, const GetVoucherCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVoucherCountOutcomeCallable getVoucherCountCallable(const Model::GetVoucherCountRequest& request) const;
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
			ListCashJournalOutcome listCashJournal(const Model::ListCashJournalRequest &request)const;
			void listCashJournalAsync(const Model::ListCashJournalRequest& request, const ListCashJournalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCashJournalOutcomeCallable listCashJournalCallable(const Model::ListCashJournalRequest& request) const;
			ListCompanyRegConsultationsOutcome listCompanyRegConsultations(const Model::ListCompanyRegConsultationsRequest &request)const;
			void listCompanyRegConsultationsAsync(const Model::ListCompanyRegConsultationsRequest& request, const ListCompanyRegConsultationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCompanyRegConsultationsOutcomeCallable listCompanyRegConsultationsCallable(const Model::ListCompanyRegConsultationsRequest& request) const;
			ListCompanyRegOrdersOutcome listCompanyRegOrders(const Model::ListCompanyRegOrdersRequest &request)const;
			void listCompanyRegOrdersAsync(const Model::ListCompanyRegOrdersRequest& request, const ListCompanyRegOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCompanyRegOrdersOutcomeCallable listCompanyRegOrdersCallable(const Model::ListCompanyRegOrdersRequest& request) const;
			ListEnterprisesOutcome listEnterprises(const Model::ListEnterprisesRequest &request)const;
			void listEnterprisesAsync(const Model::ListEnterprisesRequest& request, const ListEnterprisesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnterprisesOutcomeCallable listEnterprisesCallable(const Model::ListEnterprisesRequest& request) const;
			ListIcpApplicationsOutcome listIcpApplications(const Model::ListIcpApplicationsRequest &request)const;
			void listIcpApplicationsAsync(const Model::ListIcpApplicationsRequest& request, const ListIcpApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIcpApplicationsOutcomeCallable listIcpApplicationsCallable(const Model::ListIcpApplicationsRequest& request) const;
			ListIntentionNoteOutcome listIntentionNote(const Model::ListIntentionNoteRequest &request)const;
			void listIntentionNoteAsync(const Model::ListIntentionNoteRequest& request, const ListIntentionNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIntentionNoteOutcomeCallable listIntentionNoteCallable(const Model::ListIntentionNoteRequest& request) const;
			ListInvoiceOutcome listInvoice(const Model::ListInvoiceRequest &request)const;
			void listInvoiceAsync(const Model::ListInvoiceRequest& request, const ListInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInvoiceOutcomeCallable listInvoiceCallable(const Model::ListInvoiceRequest& request) const;
			ListLastMonthInvoiceOutcome listLastMonthInvoice(const Model::ListLastMonthInvoiceRequest &request)const;
			void listLastMonthInvoiceAsync(const Model::ListLastMonthInvoiceRequest& request, const ListLastMonthInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLastMonthInvoiceOutcomeCallable listLastMonthInvoiceCallable(const Model::ListLastMonthInvoiceRequest& request) const;
			ListPayrollOutcome listPayroll(const Model::ListPayrollRequest &request)const;
			void listPayrollAsync(const Model::ListPayrollRequest& request, const ListPayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPayrollOutcomeCallable listPayrollCallable(const Model::ListPayrollRequest& request) const;
			ListProduceAuthorizationOutcome listProduceAuthorization(const Model::ListProduceAuthorizationRequest &request)const;
			void listProduceAuthorizationAsync(const Model::ListProduceAuthorizationRequest& request, const ListProduceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProduceAuthorizationOutcomeCallable listProduceAuthorizationCallable(const Model::ListProduceAuthorizationRequest& request) const;
			ListUserDetailSolutionsOutcome listUserDetailSolutions(const Model::ListUserDetailSolutionsRequest &request)const;
			void listUserDetailSolutionsAsync(const Model::ListUserDetailSolutionsRequest& request, const ListUserDetailSolutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserDetailSolutionsOutcomeCallable listUserDetailSolutionsCallable(const Model::ListUserDetailSolutionsRequest& request) const;
			ListUserIntentionNotesOutcome listUserIntentionNotes(const Model::ListUserIntentionNotesRequest &request)const;
			void listUserIntentionNotesAsync(const Model::ListUserIntentionNotesRequest& request, const ListUserIntentionNotesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserIntentionNotesOutcomeCallable listUserIntentionNotesCallable(const Model::ListUserIntentionNotesRequest& request) const;
			ListUserIntentionsOutcome listUserIntentions(const Model::ListUserIntentionsRequest &request)const;
			void listUserIntentionsAsync(const Model::ListUserIntentionsRequest& request, const ListUserIntentionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserIntentionsOutcomeCallable listUserIntentionsCallable(const Model::ListUserIntentionsRequest& request) const;
			ListUserProduceOperateLogsOutcome listUserProduceOperateLogs(const Model::ListUserProduceOperateLogsRequest &request)const;
			void listUserProduceOperateLogsAsync(const Model::ListUserProduceOperateLogsRequest& request, const ListUserProduceOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserProduceOperateLogsOutcomeCallable listUserProduceOperateLogsCallable(const Model::ListUserProduceOperateLogsRequest& request) const;
			ListUserSolutionsOutcome listUserSolutions(const Model::ListUserSolutionsRequest &request)const;
			void listUserSolutionsAsync(const Model::ListUserSolutionsRequest& request, const ListUserSolutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserSolutionsOutcomeCallable listUserSolutionsCallable(const Model::ListUserSolutionsRequest& request) const;
			ListVoucherOutcome listVoucher(const Model::ListVoucherRequest &request)const;
			void listVoucherAsync(const Model::ListVoucherRequest& request, const ListVoucherAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVoucherOutcomeCallable listVoucherCallable(const Model::ListVoucherRequest& request) const;
			OperateProduceForPartnerOutcome operateProduceForPartner(const Model::OperateProduceForPartnerRequest &request)const;
			void operateProduceForPartnerAsync(const Model::OperateProduceForPartnerRequest& request, const OperateProduceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateProduceForPartnerOutcomeCallable operateProduceForPartnerCallable(const Model::OperateProduceForPartnerRequest& request) const;
			PhotoInvoiceOutcome photoInvoice(const Model::PhotoInvoiceRequest &request)const;
			void photoInvoiceAsync(const Model::PhotoInvoiceRequest& request, const PhotoInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PhotoInvoiceOutcomeCallable photoInvoiceCallable(const Model::PhotoInvoiceRequest& request) const;
			PrintAcctgTransOutcome printAcctgTrans(const Model::PrintAcctgTransRequest &request)const;
			void printAcctgTransAsync(const Model::PrintAcctgTransRequest& request, const PrintAcctgTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PrintAcctgTransOutcomeCallable printAcctgTransCallable(const Model::PrintAcctgTransRequest& request) const;
			ProcessCompanyRegOrderOutcome processCompanyRegOrder(const Model::ProcessCompanyRegOrderRequest &request)const;
			void processCompanyRegOrderAsync(const Model::ProcessCompanyRegOrderRequest& request, const ProcessCompanyRegOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProcessCompanyRegOrderOutcomeCallable processCompanyRegOrderCallable(const Model::ProcessCompanyRegOrderRequest& request) const;
			PutMeasureDataOutcome putMeasureData(const Model::PutMeasureDataRequest &request)const;
			void putMeasureDataAsync(const Model::PutMeasureDataRequest& request, const PutMeasureDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutMeasureDataOutcomeCallable putMeasureDataCallable(const Model::PutMeasureDataRequest& request) const;
			PutMeasureReadyFlagOutcome putMeasureReadyFlag(const Model::PutMeasureReadyFlagRequest &request)const;
			void putMeasureReadyFlagAsync(const Model::PutMeasureReadyFlagRequest& request, const PutMeasureReadyFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutMeasureReadyFlagOutcomeCallable putMeasureReadyFlagCallable(const Model::PutMeasureReadyFlagRequest& request) const;
			QueryBagRemainingOutcome queryBagRemaining(const Model::QueryBagRemainingRequest &request)const;
			void queryBagRemainingAsync(const Model::QueryBagRemainingRequest& request, const QueryBagRemainingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBagRemainingOutcomeCallable queryBagRemainingCallable(const Model::QueryBagRemainingRequest& request) const;
			QueryBookkeepingCommoditiesOutcome queryBookkeepingCommodities(const Model::QueryBookkeepingCommoditiesRequest &request)const;
			void queryBookkeepingCommoditiesAsync(const Model::QueryBookkeepingCommoditiesRequest& request, const QueryBookkeepingCommoditiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBookkeepingCommoditiesOutcomeCallable queryBookkeepingCommoditiesCallable(const Model::QueryBookkeepingCommoditiesRequest& request) const;
			QueryBookkeepingCommodityModulesOutcome queryBookkeepingCommodityModules(const Model::QueryBookkeepingCommodityModulesRequest &request)const;
			void queryBookkeepingCommodityModulesAsync(const Model::QueryBookkeepingCommodityModulesRequest& request, const QueryBookkeepingCommodityModulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBookkeepingCommodityModulesOutcomeCallable queryBookkeepingCommodityModulesCallable(const Model::QueryBookkeepingCommodityModulesRequest& request) const;
			QueryCommodityConfigOutcome queryCommodityConfig(const Model::QueryCommodityConfigRequest &request)const;
			void queryCommodityConfigAsync(const Model::QueryCommodityConfigRequest& request, const QueryCommodityConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCommodityConfigOutcomeCallable queryCommodityConfigCallable(const Model::QueryCommodityConfigRequest& request) const;
			QueryCommunicationLogsOutcome queryCommunicationLogs(const Model::QueryCommunicationLogsRequest &request)const;
			void queryCommunicationLogsAsync(const Model::QueryCommunicationLogsRequest& request, const QueryCommunicationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCommunicationLogsOutcomeCallable queryCommunicationLogsCallable(const Model::QueryCommunicationLogsRequest& request) const;
			QueryInstanceOutcome queryInstance(const Model::QueryInstanceRequest &request)const;
			void queryInstanceAsync(const Model::QueryInstanceRequest& request, const QueryInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryInstanceOutcomeCallable queryInstanceCallable(const Model::QueryInstanceRequest& request) const;
			QueryIntentionListOutcome queryIntentionList(const Model::QueryIntentionListRequest &request)const;
			void queryIntentionListAsync(const Model::QueryIntentionListRequest& request, const QueryIntentionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryIntentionListOutcomeCallable queryIntentionListCallable(const Model::QueryIntentionListRequest& request) const;
			QueryTradeIntentionUserListOutcome queryTradeIntentionUserList(const Model::QueryTradeIntentionUserListRequest &request)const;
			void queryTradeIntentionUserListAsync(const Model::QueryTradeIntentionUserListRequest& request, const QueryTradeIntentionUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTradeIntentionUserListOutcomeCallable queryTradeIntentionUserListCallable(const Model::QueryTradeIntentionUserListRequest& request) const;
			QueryUserNeedAuthOutcome queryUserNeedAuth(const Model::QueryUserNeedAuthRequest &request)const;
			void queryUserNeedAuthAsync(const Model::QueryUserNeedAuthRequest& request, const QueryUserNeedAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserNeedAuthOutcomeCallable queryUserNeedAuthCallable(const Model::QueryUserNeedAuthRequest& request) const;
			ReSubmitIcpSolutionOutcome reSubmitIcpSolution(const Model::ReSubmitIcpSolutionRequest &request)const;
			void reSubmitIcpSolutionAsync(const Model::ReSubmitIcpSolutionRequest& request, const ReSubmitIcpSolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReSubmitIcpSolutionOutcomeCallable reSubmitIcpSolutionCallable(const Model::ReSubmitIcpSolutionRequest& request) const;
			RefreshCustomerInfoOutcome refreshCustomerInfo(const Model::RefreshCustomerInfoRequest &request)const;
			void refreshCustomerInfoAsync(const Model::RefreshCustomerInfoRequest& request, const RefreshCustomerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshCustomerInfoOutcomeCallable refreshCustomerInfoCallable(const Model::RefreshCustomerInfoRequest& request) const;
			RefuseMaterialOutcome refuseMaterial(const Model::RefuseMaterialRequest &request)const;
			void refuseMaterialAsync(const Model::RefuseMaterialRequest& request, const RefuseMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefuseMaterialOutcomeCallable refuseMaterialCallable(const Model::RefuseMaterialRequest& request) const;
			RejectIcpIntentionOutcome rejectIcpIntention(const Model::RejectIcpIntentionRequest &request)const;
			void rejectIcpIntentionAsync(const Model::RejectIcpIntentionRequest& request, const RejectIcpIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RejectIcpIntentionOutcomeCallable rejectIcpIntentionCallable(const Model::RejectIcpIntentionRequest& request) const;
			RejectSolutionOutcome rejectSolution(const Model::RejectSolutionRequest &request)const;
			void rejectSolutionAsync(const Model::RejectSolutionRequest& request, const RejectSolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RejectSolutionOutcomeCallable rejectSolutionCallable(const Model::RejectSolutionRequest& request) const;
			RejectUserSolutionOutcome rejectUserSolution(const Model::RejectUserSolutionRequest &request)const;
			void rejectUserSolutionAsync(const Model::RejectUserSolutionRequest& request, const RejectUserSolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RejectUserSolutionOutcomeCallable rejectUserSolutionCallable(const Model::RejectUserSolutionRequest& request) const;
			ReleaseProduceAuthorizationOutcome releaseProduceAuthorization(const Model::ReleaseProduceAuthorizationRequest &request)const;
			void releaseProduceAuthorizationAsync(const Model::ReleaseProduceAuthorizationRequest& request, const ReleaseProduceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseProduceAuthorizationOutcomeCallable releaseProduceAuthorizationCallable(const Model::ReleaseProduceAuthorizationRequest& request) const;
			SaveOpeningBalanceStatusOutcome saveOpeningBalanceStatus(const Model::SaveOpeningBalanceStatusRequest &request)const;
			void saveOpeningBalanceStatusAsync(const Model::SaveOpeningBalanceStatusRequest& request, const SaveOpeningBalanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveOpeningBalanceStatusOutcomeCallable saveOpeningBalanceStatusCallable(const Model::SaveOpeningBalanceStatusRequest& request) const;
			SavePayrollOutcome savePayroll(const Model::SavePayrollRequest &request)const;
			void savePayrollAsync(const Model::SavePayrollRequest& request, const SavePayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SavePayrollOutcomeCallable savePayrollCallable(const Model::SavePayrollRequest& request) const;
			SavePayrollSettingOutcome savePayrollSetting(const Model::SavePayrollSettingRequest &request)const;
			void savePayrollSettingAsync(const Model::SavePayrollSettingRequest& request, const SavePayrollSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SavePayrollSettingOutcomeCallable savePayrollSettingCallable(const Model::SavePayrollSettingRequest& request) const;
			ScanInvoiceOutcome scanInvoice(const Model::ScanInvoiceRequest &request)const;
			void scanInvoiceAsync(const Model::ScanInvoiceRequest& request, const ScanInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScanInvoiceOutcomeCallable scanInvoiceCallable(const Model::ScanInvoiceRequest& request) const;
			SendMessageOutcome sendMessage(const Model::SendMessageRequest &request)const;
			void sendMessageAsync(const Model::SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendMessageOutcomeCallable sendMessageCallable(const Model::SendMessageRequest& request) const;
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
			SubmitIntentionNoteOutcome submitIntentionNote(const Model::SubmitIntentionNoteRequest &request)const;
			void submitIntentionNoteAsync(const Model::SubmitIntentionNoteRequest& request, const SubmitIntentionNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitIntentionNoteOutcomeCallable submitIntentionNoteCallable(const Model::SubmitIntentionNoteRequest& request) const;
			SubmitPartnerCompanyInformationOutcome submitPartnerCompanyInformation(const Model::SubmitPartnerCompanyInformationRequest &request)const;
			void submitPartnerCompanyInformationAsync(const Model::SubmitPartnerCompanyInformationRequest& request, const SubmitPartnerCompanyInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitPartnerCompanyInformationOutcomeCallable submitPartnerCompanyInformationCallable(const Model::SubmitPartnerCompanyInformationRequest& request) const;
			SubmitSolutionOutcome submitSolution(const Model::SubmitSolutionRequest &request)const;
			void submitSolutionAsync(const Model::SubmitSolutionRequest& request, const SubmitSolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSolutionOutcomeCallable submitSolutionCallable(const Model::SubmitSolutionRequest& request) const;
			UpdateBookkeepingOrgOutcome updateBookkeepingOrg(const Model::UpdateBookkeepingOrgRequest &request)const;
			void updateBookkeepingOrgAsync(const Model::UpdateBookkeepingOrgRequest& request, const UpdateBookkeepingOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBookkeepingOrgOutcomeCallable updateBookkeepingOrgCallable(const Model::UpdateBookkeepingOrgRequest& request) const;
			UpdateCustomerInfoOutcome updateCustomerInfo(const Model::UpdateCustomerInfoRequest &request)const;
			void updateCustomerInfoAsync(const Model::UpdateCustomerInfoRequest& request, const UpdateCustomerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCustomerInfoOutcomeCallable updateCustomerInfoCallable(const Model::UpdateCustomerInfoRequest& request) const;
			UpdateFeeOutcome updateFee(const Model::UpdateFeeRequest &request)const;
			void updateFeeAsync(const Model::UpdateFeeRequest& request, const UpdateFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFeeOutcomeCallable updateFeeCallable(const Model::UpdateFeeRequest& request) const;
			UpdateProduceOutcome updateProduce(const Model::UpdateProduceRequest &request)const;
			void updateProduceAsync(const Model::UpdateProduceRequest& request, const UpdateProduceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProduceOutcomeCallable updateProduceCallable(const Model::UpdateProduceRequest& request) const;
			UpdateTaxInfoOutcome updateTaxInfo(const Model::UpdateTaxInfoRequest &request)const;
			void updateTaxInfoAsync(const Model::UpdateTaxInfoRequest& request, const UpdateTaxInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTaxInfoOutcomeCallable updateTaxInfoCallable(const Model::UpdateTaxInfoRequest& request) const;
			UpdateTaxationProcessOutcome updateTaxationProcess(const Model::UpdateTaxationProcessRequest &request)const;
			void updateTaxationProcessAsync(const Model::UpdateTaxationProcessRequest& request, const UpdateTaxationProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTaxationProcessOutcomeCallable updateTaxationProcessCallable(const Model::UpdateTaxationProcessRequest& request) const;
			UploadIcpBasicMaterialOutcome uploadIcpBasicMaterial(const Model::UploadIcpBasicMaterialRequest &request)const;
			void uploadIcpBasicMaterialAsync(const Model::UploadIcpBasicMaterialRequest& request, const UploadIcpBasicMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadIcpBasicMaterialOutcomeCallable uploadIcpBasicMaterialCallable(const Model::UploadIcpBasicMaterialRequest& request) const;
			UploadUserMaterialOutcome uploadUserMaterial(const Model::UploadUserMaterialRequest &request)const;
			void uploadUserMaterialAsync(const Model::UploadUserMaterialRequest& request, const UploadUserMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadUserMaterialOutcomeCallable uploadUserMaterialCallable(const Model::UploadUserMaterialRequest& request) const;
			VerifyTaxSmsCodeOutcome verifyTaxSmsCode(const Model::VerifyTaxSmsCodeRequest &request)const;
			void verifyTaxSmsCodeAsync(const Model::VerifyTaxSmsCodeRequest& request, const VerifyTaxSmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyTaxSmsCodeOutcomeCallable verifyTaxSmsCodeCallable(const Model::VerifyTaxSmsCodeRequest& request) const;
			WriteCommunicationLogOutcome writeCommunicationLog(const Model::WriteCommunicationLogRequest &request)const;
			void writeCommunicationLogAsync(const Model::WriteCommunicationLogRequest& request, const WriteCommunicationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WriteCommunicationLogOutcomeCallable writeCommunicationLogCallable(const Model::WriteCommunicationLogRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_COMPANYREG_COMPANYREGCLIENT_H_
