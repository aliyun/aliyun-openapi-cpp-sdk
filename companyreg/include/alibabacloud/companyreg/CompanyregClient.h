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
#include "model/CheckCopyPayrollRequest.h"
#include "model/CheckCopyPayrollResult.h"
#include "model/CheckSavePayrollRequest.h"
#include "model/CheckSavePayrollResult.h"
#include "model/CheckSavePayrollDetailRequest.h"
#include "model/CheckSavePayrollDetailResult.h"
#include "model/ClearTrailDataRequest.h"
#include "model/ClearTrailDataResult.h"
#include "model/ConvertFeeRequest.h"
#include "model/ConvertFeeResult.h"
#include "model/ConvertInvoiceRequest.h"
#include "model/ConvertInvoiceResult.h"
#include "model/CopyPayrollRequest.h"
#include "model/CopyPayrollResult.h"
#include "model/DeleteFeeRequest.h"
#include "model/DeleteFeeResult.h"
#include "model/DeleteInvoiceRequest.h"
#include "model/DeleteInvoiceResult.h"
#include "model/DeletePayrollRequest.h"
#include "model/DeletePayrollResult.h"
#include "model/GetBalanceSheetInfoRequest.h"
#include "model/GetBalanceSheetInfoResult.h"
#include "model/GetCashFlowInfoRequest.h"
#include "model/GetCashFlowInfoResult.h"
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
#include "model/ListCashJournalRequest.h"
#include "model/ListCashJournalResult.h"
#include "model/ListEnterprisesRequest.h"
#include "model/ListEnterprisesResult.h"
#include "model/ListInvoiceRequest.h"
#include "model/ListInvoiceResult.h"
#include "model/ListLastMonthInvoiceRequest.h"
#include "model/ListLastMonthInvoiceResult.h"
#include "model/ListPayrollRequest.h"
#include "model/ListPayrollResult.h"
#include "model/ListVoucherRequest.h"
#include "model/ListVoucherResult.h"
#include "model/PhotoInvoiceRequest.h"
#include "model/PhotoInvoiceResult.h"
#include "model/PrintAcctgTransRequest.h"
#include "model/PrintAcctgTransResult.h"
#include "model/RefreshCustomerInfoRequest.h"
#include "model/RefreshCustomerInfoResult.h"
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
#include "model/UpdateCustomerInfoRequest.h"
#include "model/UpdateCustomerInfoResult.h"
#include "model/UpdateFeeRequest.h"
#include "model/UpdateFeeResult.h"
#include "model/UpdateTaxInfoRequest.h"
#include "model/UpdateTaxInfoResult.h"
#include "model/UpdateTaxationProcessRequest.h"
#include "model/UpdateTaxationProcessResult.h"
#include "model/VerifyTaxSmsCodeRequest.h"
#include "model/VerifyTaxSmsCodeResult.h"


namespace AlibabaCloud
{
	namespace Companyreg
	{
		class ALIBABACLOUD_COMPANYREG_EXPORT CompanyregClient : public RpcServiceClient
		{
		public:
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
			typedef Outcome<Error, Model::ConvertFeeResult> ConvertFeeOutcome;
			typedef std::future<ConvertFeeOutcome> ConvertFeeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ConvertFeeRequest&, const ConvertFeeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertFeeAsyncHandler;
			typedef Outcome<Error, Model::ConvertInvoiceResult> ConvertInvoiceOutcome;
			typedef std::future<ConvertInvoiceOutcome> ConvertInvoiceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ConvertInvoiceRequest&, const ConvertInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertInvoiceAsyncHandler;
			typedef Outcome<Error, Model::CopyPayrollResult> CopyPayrollOutcome;
			typedef std::future<CopyPayrollOutcome> CopyPayrollOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::CopyPayrollRequest&, const CopyPayrollOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyPayrollAsyncHandler;
			typedef Outcome<Error, Model::DeleteFeeResult> DeleteFeeOutcome;
			typedef std::future<DeleteFeeOutcome> DeleteFeeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::DeleteFeeRequest&, const DeleteFeeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFeeAsyncHandler;
			typedef Outcome<Error, Model::DeleteInvoiceResult> DeleteInvoiceOutcome;
			typedef std::future<DeleteInvoiceOutcome> DeleteInvoiceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::DeleteInvoiceRequest&, const DeleteInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInvoiceAsyncHandler;
			typedef Outcome<Error, Model::DeletePayrollResult> DeletePayrollOutcome;
			typedef std::future<DeletePayrollOutcome> DeletePayrollOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::DeletePayrollRequest&, const DeletePayrollOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePayrollAsyncHandler;
			typedef Outcome<Error, Model::GetBalanceSheetInfoResult> GetBalanceSheetInfoOutcome;
			typedef std::future<GetBalanceSheetInfoOutcome> GetBalanceSheetInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetBalanceSheetInfoRequest&, const GetBalanceSheetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBalanceSheetInfoAsyncHandler;
			typedef Outcome<Error, Model::GetCashFlowInfoResult> GetCashFlowInfoOutcome;
			typedef std::future<GetCashFlowInfoOutcome> GetCashFlowInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::GetCashFlowInfoRequest&, const GetCashFlowInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCashFlowInfoAsyncHandler;
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
			typedef Outcome<Error, Model::ListCashJournalResult> ListCashJournalOutcome;
			typedef std::future<ListCashJournalOutcome> ListCashJournalOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListCashJournalRequest&, const ListCashJournalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCashJournalAsyncHandler;
			typedef Outcome<Error, Model::ListEnterprisesResult> ListEnterprisesOutcome;
			typedef std::future<ListEnterprisesOutcome> ListEnterprisesOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListEnterprisesRequest&, const ListEnterprisesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnterprisesAsyncHandler;
			typedef Outcome<Error, Model::ListInvoiceResult> ListInvoiceOutcome;
			typedef std::future<ListInvoiceOutcome> ListInvoiceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListInvoiceRequest&, const ListInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInvoiceAsyncHandler;
			typedef Outcome<Error, Model::ListLastMonthInvoiceResult> ListLastMonthInvoiceOutcome;
			typedef std::future<ListLastMonthInvoiceOutcome> ListLastMonthInvoiceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListLastMonthInvoiceRequest&, const ListLastMonthInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLastMonthInvoiceAsyncHandler;
			typedef Outcome<Error, Model::ListPayrollResult> ListPayrollOutcome;
			typedef std::future<ListPayrollOutcome> ListPayrollOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListPayrollRequest&, const ListPayrollOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPayrollAsyncHandler;
			typedef Outcome<Error, Model::ListVoucherResult> ListVoucherOutcome;
			typedef std::future<ListVoucherOutcome> ListVoucherOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::ListVoucherRequest&, const ListVoucherOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVoucherAsyncHandler;
			typedef Outcome<Error, Model::PhotoInvoiceResult> PhotoInvoiceOutcome;
			typedef std::future<PhotoInvoiceOutcome> PhotoInvoiceOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::PhotoInvoiceRequest&, const PhotoInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PhotoInvoiceAsyncHandler;
			typedef Outcome<Error, Model::PrintAcctgTransResult> PrintAcctgTransOutcome;
			typedef std::future<PrintAcctgTransOutcome> PrintAcctgTransOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::PrintAcctgTransRequest&, const PrintAcctgTransOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PrintAcctgTransAsyncHandler;
			typedef Outcome<Error, Model::RefreshCustomerInfoResult> RefreshCustomerInfoOutcome;
			typedef std::future<RefreshCustomerInfoOutcome> RefreshCustomerInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::RefreshCustomerInfoRequest&, const RefreshCustomerInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshCustomerInfoAsyncHandler;
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
			typedef Outcome<Error, Model::UpdateCustomerInfoResult> UpdateCustomerInfoOutcome;
			typedef std::future<UpdateCustomerInfoOutcome> UpdateCustomerInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UpdateCustomerInfoRequest&, const UpdateCustomerInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomerInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateFeeResult> UpdateFeeOutcome;
			typedef std::future<UpdateFeeOutcome> UpdateFeeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UpdateFeeRequest&, const UpdateFeeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFeeAsyncHandler;
			typedef Outcome<Error, Model::UpdateTaxInfoResult> UpdateTaxInfoOutcome;
			typedef std::future<UpdateTaxInfoOutcome> UpdateTaxInfoOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UpdateTaxInfoRequest&, const UpdateTaxInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTaxInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateTaxationProcessResult> UpdateTaxationProcessOutcome;
			typedef std::future<UpdateTaxationProcessOutcome> UpdateTaxationProcessOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::UpdateTaxationProcessRequest&, const UpdateTaxationProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTaxationProcessAsyncHandler;
			typedef Outcome<Error, Model::VerifyTaxSmsCodeResult> VerifyTaxSmsCodeOutcome;
			typedef std::future<VerifyTaxSmsCodeOutcome> VerifyTaxSmsCodeOutcomeCallable;
			typedef std::function<void(const CompanyregClient*, const Model::VerifyTaxSmsCodeRequest&, const VerifyTaxSmsCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyTaxSmsCodeAsyncHandler;

			CompanyregClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CompanyregClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CompanyregClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CompanyregClient();
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
			ConvertFeeOutcome convertFee(const Model::ConvertFeeRequest &request)const;
			void convertFeeAsync(const Model::ConvertFeeRequest& request, const ConvertFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertFeeOutcomeCallable convertFeeCallable(const Model::ConvertFeeRequest& request) const;
			ConvertInvoiceOutcome convertInvoice(const Model::ConvertInvoiceRequest &request)const;
			void convertInvoiceAsync(const Model::ConvertInvoiceRequest& request, const ConvertInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertInvoiceOutcomeCallable convertInvoiceCallable(const Model::ConvertInvoiceRequest& request) const;
			CopyPayrollOutcome copyPayroll(const Model::CopyPayrollRequest &request)const;
			void copyPayrollAsync(const Model::CopyPayrollRequest& request, const CopyPayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyPayrollOutcomeCallable copyPayrollCallable(const Model::CopyPayrollRequest& request) const;
			DeleteFeeOutcome deleteFee(const Model::DeleteFeeRequest &request)const;
			void deleteFeeAsync(const Model::DeleteFeeRequest& request, const DeleteFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFeeOutcomeCallable deleteFeeCallable(const Model::DeleteFeeRequest& request) const;
			DeleteInvoiceOutcome deleteInvoice(const Model::DeleteInvoiceRequest &request)const;
			void deleteInvoiceAsync(const Model::DeleteInvoiceRequest& request, const DeleteInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInvoiceOutcomeCallable deleteInvoiceCallable(const Model::DeleteInvoiceRequest& request) const;
			DeletePayrollOutcome deletePayroll(const Model::DeletePayrollRequest &request)const;
			void deletePayrollAsync(const Model::DeletePayrollRequest& request, const DeletePayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePayrollOutcomeCallable deletePayrollCallable(const Model::DeletePayrollRequest& request) const;
			GetBalanceSheetInfoOutcome getBalanceSheetInfo(const Model::GetBalanceSheetInfoRequest &request)const;
			void getBalanceSheetInfoAsync(const Model::GetBalanceSheetInfoRequest& request, const GetBalanceSheetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBalanceSheetInfoOutcomeCallable getBalanceSheetInfoCallable(const Model::GetBalanceSheetInfoRequest& request) const;
			GetCashFlowInfoOutcome getCashFlowInfo(const Model::GetCashFlowInfoRequest &request)const;
			void getCashFlowInfoAsync(const Model::GetCashFlowInfoRequest& request, const GetCashFlowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCashFlowInfoOutcomeCallable getCashFlowInfoCallable(const Model::GetCashFlowInfoRequest& request) const;
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
			ListCashJournalOutcome listCashJournal(const Model::ListCashJournalRequest &request)const;
			void listCashJournalAsync(const Model::ListCashJournalRequest& request, const ListCashJournalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCashJournalOutcomeCallable listCashJournalCallable(const Model::ListCashJournalRequest& request) const;
			ListEnterprisesOutcome listEnterprises(const Model::ListEnterprisesRequest &request)const;
			void listEnterprisesAsync(const Model::ListEnterprisesRequest& request, const ListEnterprisesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnterprisesOutcomeCallable listEnterprisesCallable(const Model::ListEnterprisesRequest& request) const;
			ListInvoiceOutcome listInvoice(const Model::ListInvoiceRequest &request)const;
			void listInvoiceAsync(const Model::ListInvoiceRequest& request, const ListInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInvoiceOutcomeCallable listInvoiceCallable(const Model::ListInvoiceRequest& request) const;
			ListLastMonthInvoiceOutcome listLastMonthInvoice(const Model::ListLastMonthInvoiceRequest &request)const;
			void listLastMonthInvoiceAsync(const Model::ListLastMonthInvoiceRequest& request, const ListLastMonthInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLastMonthInvoiceOutcomeCallable listLastMonthInvoiceCallable(const Model::ListLastMonthInvoiceRequest& request) const;
			ListPayrollOutcome listPayroll(const Model::ListPayrollRequest &request)const;
			void listPayrollAsync(const Model::ListPayrollRequest& request, const ListPayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPayrollOutcomeCallable listPayrollCallable(const Model::ListPayrollRequest& request) const;
			ListVoucherOutcome listVoucher(const Model::ListVoucherRequest &request)const;
			void listVoucherAsync(const Model::ListVoucherRequest& request, const ListVoucherAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVoucherOutcomeCallable listVoucherCallable(const Model::ListVoucherRequest& request) const;
			PhotoInvoiceOutcome photoInvoice(const Model::PhotoInvoiceRequest &request)const;
			void photoInvoiceAsync(const Model::PhotoInvoiceRequest& request, const PhotoInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PhotoInvoiceOutcomeCallable photoInvoiceCallable(const Model::PhotoInvoiceRequest& request) const;
			PrintAcctgTransOutcome printAcctgTrans(const Model::PrintAcctgTransRequest &request)const;
			void printAcctgTransAsync(const Model::PrintAcctgTransRequest& request, const PrintAcctgTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PrintAcctgTransOutcomeCallable printAcctgTransCallable(const Model::PrintAcctgTransRequest& request) const;
			RefreshCustomerInfoOutcome refreshCustomerInfo(const Model::RefreshCustomerInfoRequest &request)const;
			void refreshCustomerInfoAsync(const Model::RefreshCustomerInfoRequest& request, const RefreshCustomerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshCustomerInfoOutcomeCallable refreshCustomerInfoCallable(const Model::RefreshCustomerInfoRequest& request) const;
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
			UpdateCustomerInfoOutcome updateCustomerInfo(const Model::UpdateCustomerInfoRequest &request)const;
			void updateCustomerInfoAsync(const Model::UpdateCustomerInfoRequest& request, const UpdateCustomerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCustomerInfoOutcomeCallable updateCustomerInfoCallable(const Model::UpdateCustomerInfoRequest& request) const;
			UpdateFeeOutcome updateFee(const Model::UpdateFeeRequest &request)const;
			void updateFeeAsync(const Model::UpdateFeeRequest& request, const UpdateFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFeeOutcomeCallable updateFeeCallable(const Model::UpdateFeeRequest& request) const;
			UpdateTaxInfoOutcome updateTaxInfo(const Model::UpdateTaxInfoRequest &request)const;
			void updateTaxInfoAsync(const Model::UpdateTaxInfoRequest& request, const UpdateTaxInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTaxInfoOutcomeCallable updateTaxInfoCallable(const Model::UpdateTaxInfoRequest& request) const;
			UpdateTaxationProcessOutcome updateTaxationProcess(const Model::UpdateTaxationProcessRequest &request)const;
			void updateTaxationProcessAsync(const Model::UpdateTaxationProcessRequest& request, const UpdateTaxationProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTaxationProcessOutcomeCallable updateTaxationProcessCallable(const Model::UpdateTaxationProcessRequest& request) const;
			VerifyTaxSmsCodeOutcome verifyTaxSmsCode(const Model::VerifyTaxSmsCodeRequest &request)const;
			void verifyTaxSmsCodeAsync(const Model::VerifyTaxSmsCodeRequest& request, const VerifyTaxSmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyTaxSmsCodeOutcomeCallable verifyTaxSmsCodeCallable(const Model::VerifyTaxSmsCodeRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_COMPANYREG_COMPANYREGCLIENT_H_
