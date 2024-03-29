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

set(companyreg_public_header 
	include/alibabacloud/companyreg/CompanyregClient.h
	include/alibabacloud/companyreg/CompanyregExport.h )

set(companyreg_public_header_model 
	include/alibabacloud/companyreg/model/AcceptBookkeepingAuditResultRequest.h
	include/alibabacloud/companyreg/model/AcceptBookkeepingAuditResultResult.h
	include/alibabacloud/companyreg/model/AcceptBookkeepingDetailStatusChangeRequest.h
	include/alibabacloud/companyreg/model/AcceptBookkeepingDetailStatusChangeResult.h
	include/alibabacloud/companyreg/model/AcceptPartnerNotificationRequest.h
	include/alibabacloud/companyreg/model/AcceptPartnerNotificationResult.h
	include/alibabacloud/companyreg/model/BindProduceAuthorizationRequest.h
	include/alibabacloud/companyreg/model/BindProduceAuthorizationResult.h
	include/alibabacloud/companyreg/model/CheckCompanyRegRequest.h
	include/alibabacloud/companyreg/model/CheckCompanyRegResult.h
	include/alibabacloud/companyreg/model/CheckCopyPayrollRequest.h
	include/alibabacloud/companyreg/model/CheckCopyPayrollResult.h
	include/alibabacloud/companyreg/model/CheckSavePayrollRequest.h
	include/alibabacloud/companyreg/model/CheckSavePayrollResult.h
	include/alibabacloud/companyreg/model/CheckSavePayrollDetailRequest.h
	include/alibabacloud/companyreg/model/CheckSavePayrollDetailResult.h
	include/alibabacloud/companyreg/model/ClearTrailDataRequest.h
	include/alibabacloud/companyreg/model/ClearTrailDataResult.h
	include/alibabacloud/companyreg/model/CloseIcpProduceRequest.h
	include/alibabacloud/companyreg/model/CloseIcpProduceResult.h
	include/alibabacloud/companyreg/model/CloseIntentionRequest.h
	include/alibabacloud/companyreg/model/CloseIntentionResult.h
	include/alibabacloud/companyreg/model/CloseIntentionForPartnerRequest.h
	include/alibabacloud/companyreg/model/CloseIntentionForPartnerResult.h
	include/alibabacloud/companyreg/model/CloseUserIntentionRequest.h
	include/alibabacloud/companyreg/model/CloseUserIntentionResult.h
	include/alibabacloud/companyreg/model/ConfirmIcpIntentionRequest.h
	include/alibabacloud/companyreg/model/ConfirmIcpIntentionResult.h
	include/alibabacloud/companyreg/model/ConfirmIntentionRequest.h
	include/alibabacloud/companyreg/model/ConfirmIntentionResult.h
	include/alibabacloud/companyreg/model/ConfirmMaterialRequest.h
	include/alibabacloud/companyreg/model/ConfirmMaterialResult.h
	include/alibabacloud/companyreg/model/ConfirmTaxAmountRequest.h
	include/alibabacloud/companyreg/model/ConfirmTaxAmountResult.h
	include/alibabacloud/companyreg/model/ConvertFeeRequest.h
	include/alibabacloud/companyreg/model/ConvertFeeResult.h
	include/alibabacloud/companyreg/model/ConvertInvoiceRequest.h
	include/alibabacloud/companyreg/model/ConvertInvoiceResult.h
	include/alibabacloud/companyreg/model/CopyPayrollRequest.h
	include/alibabacloud/companyreg/model/CopyPayrollResult.h
	include/alibabacloud/companyreg/model/CreateBookkeepingIntentionRequest.h
	include/alibabacloud/companyreg/model/CreateBookkeepingIntentionResult.h
	include/alibabacloud/companyreg/model/CreateBusinessOpportunityRequest.h
	include/alibabacloud/companyreg/model/CreateBusinessOpportunityResult.h
	include/alibabacloud/companyreg/model/CreateProduceForPartnerRequest.h
	include/alibabacloud/companyreg/model/CreateProduceForPartnerResult.h
	include/alibabacloud/companyreg/model/DeleteFeeRequest.h
	include/alibabacloud/companyreg/model/DeleteFeeResult.h
	include/alibabacloud/companyreg/model/DeleteInvoiceRequest.h
	include/alibabacloud/companyreg/model/DeleteInvoiceResult.h
	include/alibabacloud/companyreg/model/DeletePayrollRequest.h
	include/alibabacloud/companyreg/model/DeletePayrollResult.h
	include/alibabacloud/companyreg/model/DescribePartnerConfigRequest.h
	include/alibabacloud/companyreg/model/DescribePartnerConfigResult.h
	include/alibabacloud/companyreg/model/GenerateCompanyRegUploadPolicyRequest.h
	include/alibabacloud/companyreg/model/GenerateCompanyRegUploadPolicyResult.h
	include/alibabacloud/companyreg/model/GenerateUploadFilePolicyRequest.h
	include/alibabacloud/companyreg/model/GenerateUploadFilePolicyResult.h
	include/alibabacloud/companyreg/model/GetAlipayUrlRequest.h
	include/alibabacloud/companyreg/model/GetAlipayUrlResult.h
	include/alibabacloud/companyreg/model/GetBalanceSheetInfoRequest.h
	include/alibabacloud/companyreg/model/GetBalanceSheetInfoResult.h
	include/alibabacloud/companyreg/model/GetCashFlowInfoRequest.h
	include/alibabacloud/companyreg/model/GetCashFlowInfoResult.h
	include/alibabacloud/companyreg/model/GetCompanyRegOrderRequest.h
	include/alibabacloud/companyreg/model/GetCompanyRegOrderResult.h
	include/alibabacloud/companyreg/model/GetEnterprisesInfoRequest.h
	include/alibabacloud/companyreg/model/GetEnterprisesInfoResult.h
	include/alibabacloud/companyreg/model/GetFeeRequest.h
	include/alibabacloud/companyreg/model/GetFeeResult.h
	include/alibabacloud/companyreg/model/GetHomePageRequest.h
	include/alibabacloud/companyreg/model/GetHomePageResult.h
	include/alibabacloud/companyreg/model/GetIncomeStatementInfoRequest.h
	include/alibabacloud/companyreg/model/GetIncomeStatementInfoResult.h
	include/alibabacloud/companyreg/model/GetIndustryCommerceInfoRequest.h
	include/alibabacloud/companyreg/model/GetIndustryCommerceInfoResult.h
	include/alibabacloud/companyreg/model/GetInitFlowRequest.h
	include/alibabacloud/companyreg/model/GetInitFlowResult.h
	include/alibabacloud/companyreg/model/GetInvoiceInfoRequest.h
	include/alibabacloud/companyreg/model/GetInvoiceInfoResult.h
	include/alibabacloud/companyreg/model/GetLastMonthInvoiceCountRequest.h
	include/alibabacloud/companyreg/model/GetLastMonthInvoiceCountResult.h
	include/alibabacloud/companyreg/model/GetNoticeRequest.h
	include/alibabacloud/companyreg/model/GetNoticeResult.h
	include/alibabacloud/companyreg/model/GetOssStsRequest.h
	include/alibabacloud/companyreg/model/GetOssStsResult.h
	include/alibabacloud/companyreg/model/GetPayrollInfoRequest.h
	include/alibabacloud/companyreg/model/GetPayrollInfoResult.h
	include/alibabacloud/companyreg/model/GetPayrollSettingRequest.h
	include/alibabacloud/companyreg/model/GetPayrollSettingResult.h
	include/alibabacloud/companyreg/model/GetPeriodInfoRequest.h
	include/alibabacloud/companyreg/model/GetPeriodInfoResult.h
	include/alibabacloud/companyreg/model/GetQuarterCashFlowInfoRequest.h
	include/alibabacloud/companyreg/model/GetQuarterCashFlowInfoResult.h
	include/alibabacloud/companyreg/model/GetQuarterIncomeStatementInfoRequest.h
	include/alibabacloud/companyreg/model/GetQuarterIncomeStatementInfoResult.h
	include/alibabacloud/companyreg/model/GetServiceInfoRequest.h
	include/alibabacloud/companyreg/model/GetServiceInfoResult.h
	include/alibabacloud/companyreg/model/GetSsoUserInfoRequest.h
	include/alibabacloud/companyreg/model/GetSsoUserInfoResult.h
	include/alibabacloud/companyreg/model/GetTaxInfoRequest.h
	include/alibabacloud/companyreg/model/GetTaxInfoResult.h
	include/alibabacloud/companyreg/model/GetTaxationCalendarRequest.h
	include/alibabacloud/companyreg/model/GetTaxationCalendarResult.h
	include/alibabacloud/companyreg/model/GetTaxationInfoRequest.h
	include/alibabacloud/companyreg/model/GetTaxationInfoResult.h
	include/alibabacloud/companyreg/model/GetTypeListRequest.h
	include/alibabacloud/companyreg/model/GetTypeListResult.h
	include/alibabacloud/companyreg/model/GetVoucherCountRequest.h
	include/alibabacloud/companyreg/model/GetVoucherCountResult.h
	include/alibabacloud/companyreg/model/ListApplicationLogsRequest.h
	include/alibabacloud/companyreg/model/ListApplicationLogsResult.h
	include/alibabacloud/companyreg/model/ListBookkeepingStatisticsesRequest.h
	include/alibabacloud/companyreg/model/ListBookkeepingStatisticsesResult.h
	include/alibabacloud/companyreg/model/ListBookkeepingSubjectBalancesRequest.h
	include/alibabacloud/companyreg/model/ListBookkeepingSubjectBalancesResult.h
	include/alibabacloud/companyreg/model/ListBookkeepingsRequest.h
	include/alibabacloud/companyreg/model/ListBookkeepingsResult.h
	include/alibabacloud/companyreg/model/ListCashJournalRequest.h
	include/alibabacloud/companyreg/model/ListCashJournalResult.h
	include/alibabacloud/companyreg/model/ListCompanyRegConsultationsRequest.h
	include/alibabacloud/companyreg/model/ListCompanyRegConsultationsResult.h
	include/alibabacloud/companyreg/model/ListCompanyRegOrdersRequest.h
	include/alibabacloud/companyreg/model/ListCompanyRegOrdersResult.h
	include/alibabacloud/companyreg/model/ListEnterprisesRequest.h
	include/alibabacloud/companyreg/model/ListEnterprisesResult.h
	include/alibabacloud/companyreg/model/ListIcpApplicationsRequest.h
	include/alibabacloud/companyreg/model/ListIcpApplicationsResult.h
	include/alibabacloud/companyreg/model/ListIntentionNoteRequest.h
	include/alibabacloud/companyreg/model/ListIntentionNoteResult.h
	include/alibabacloud/companyreg/model/ListInvoiceRequest.h
	include/alibabacloud/companyreg/model/ListInvoiceResult.h
	include/alibabacloud/companyreg/model/ListLastMonthInvoiceRequest.h
	include/alibabacloud/companyreg/model/ListLastMonthInvoiceResult.h
	include/alibabacloud/companyreg/model/ListPayrollRequest.h
	include/alibabacloud/companyreg/model/ListPayrollResult.h
	include/alibabacloud/companyreg/model/ListProduceAuthorizationRequest.h
	include/alibabacloud/companyreg/model/ListProduceAuthorizationResult.h
	include/alibabacloud/companyreg/model/ListUserDetailSolutionsRequest.h
	include/alibabacloud/companyreg/model/ListUserDetailSolutionsResult.h
	include/alibabacloud/companyreg/model/ListUserIntentionNotesRequest.h
	include/alibabacloud/companyreg/model/ListUserIntentionNotesResult.h
	include/alibabacloud/companyreg/model/ListUserIntentionsRequest.h
	include/alibabacloud/companyreg/model/ListUserIntentionsResult.h
	include/alibabacloud/companyreg/model/ListUserProduceOperateLogsRequest.h
	include/alibabacloud/companyreg/model/ListUserProduceOperateLogsResult.h
	include/alibabacloud/companyreg/model/ListUserSolutionsRequest.h
	include/alibabacloud/companyreg/model/ListUserSolutionsResult.h
	include/alibabacloud/companyreg/model/ListVoucherRequest.h
	include/alibabacloud/companyreg/model/ListVoucherResult.h
	include/alibabacloud/companyreg/model/OperateProduceForPartnerRequest.h
	include/alibabacloud/companyreg/model/OperateProduceForPartnerResult.h
	include/alibabacloud/companyreg/model/PhotoInvoiceRequest.h
	include/alibabacloud/companyreg/model/PhotoInvoiceResult.h
	include/alibabacloud/companyreg/model/PrintAcctgTransRequest.h
	include/alibabacloud/companyreg/model/PrintAcctgTransResult.h
	include/alibabacloud/companyreg/model/ProcessCompanyRegOrderRequest.h
	include/alibabacloud/companyreg/model/ProcessCompanyRegOrderResult.h
	include/alibabacloud/companyreg/model/PutMeasureDataRequest.h
	include/alibabacloud/companyreg/model/PutMeasureDataResult.h
	include/alibabacloud/companyreg/model/PutMeasureReadyFlagRequest.h
	include/alibabacloud/companyreg/model/PutMeasureReadyFlagResult.h
	include/alibabacloud/companyreg/model/QueryBagRemainingRequest.h
	include/alibabacloud/companyreg/model/QueryBagRemainingResult.h
	include/alibabacloud/companyreg/model/QueryBookkeepingCommoditiesRequest.h
	include/alibabacloud/companyreg/model/QueryBookkeepingCommoditiesResult.h
	include/alibabacloud/companyreg/model/QueryBookkeepingCommodityModulesRequest.h
	include/alibabacloud/companyreg/model/QueryBookkeepingCommodityModulesResult.h
	include/alibabacloud/companyreg/model/QueryCommodityConfigRequest.h
	include/alibabacloud/companyreg/model/QueryCommodityConfigResult.h
	include/alibabacloud/companyreg/model/QueryCommunicationLogsRequest.h
	include/alibabacloud/companyreg/model/QueryCommunicationLogsResult.h
	include/alibabacloud/companyreg/model/QueryInstanceRequest.h
	include/alibabacloud/companyreg/model/QueryInstanceResult.h
	include/alibabacloud/companyreg/model/QueryIntentionListRequest.h
	include/alibabacloud/companyreg/model/QueryIntentionListResult.h
	include/alibabacloud/companyreg/model/QueryTradeIntentionUserListRequest.h
	include/alibabacloud/companyreg/model/QueryTradeIntentionUserListResult.h
	include/alibabacloud/companyreg/model/QueryUserNeedAuthRequest.h
	include/alibabacloud/companyreg/model/QueryUserNeedAuthResult.h
	include/alibabacloud/companyreg/model/ReSubmitIcpSolutionRequest.h
	include/alibabacloud/companyreg/model/ReSubmitIcpSolutionResult.h
	include/alibabacloud/companyreg/model/RefreshCustomerInfoRequest.h
	include/alibabacloud/companyreg/model/RefreshCustomerInfoResult.h
	include/alibabacloud/companyreg/model/RefuseMaterialRequest.h
	include/alibabacloud/companyreg/model/RefuseMaterialResult.h
	include/alibabacloud/companyreg/model/RejectIcpIntentionRequest.h
	include/alibabacloud/companyreg/model/RejectIcpIntentionResult.h
	include/alibabacloud/companyreg/model/RejectSolutionRequest.h
	include/alibabacloud/companyreg/model/RejectSolutionResult.h
	include/alibabacloud/companyreg/model/RejectUserSolutionRequest.h
	include/alibabacloud/companyreg/model/RejectUserSolutionResult.h
	include/alibabacloud/companyreg/model/ReleaseProduceAuthorizationRequest.h
	include/alibabacloud/companyreg/model/ReleaseProduceAuthorizationResult.h
	include/alibabacloud/companyreg/model/SaveOpeningBalanceStatusRequest.h
	include/alibabacloud/companyreg/model/SaveOpeningBalanceStatusResult.h
	include/alibabacloud/companyreg/model/SavePayrollRequest.h
	include/alibabacloud/companyreg/model/SavePayrollResult.h
	include/alibabacloud/companyreg/model/SavePayrollSettingRequest.h
	include/alibabacloud/companyreg/model/SavePayrollSettingResult.h
	include/alibabacloud/companyreg/model/ScanInvoiceRequest.h
	include/alibabacloud/companyreg/model/ScanInvoiceResult.h
	include/alibabacloud/companyreg/model/SendMessageRequest.h
	include/alibabacloud/companyreg/model/SendMessageResult.h
	include/alibabacloud/companyreg/model/SendVcodeRequest.h
	include/alibabacloud/companyreg/model/SendVcodeResult.h
	include/alibabacloud/companyreg/model/SubmitCommunicationNoteRequest.h
	include/alibabacloud/companyreg/model/SubmitCommunicationNoteResult.h
	include/alibabacloud/companyreg/model/SubmitConsultationRequest.h
	include/alibabacloud/companyreg/model/SubmitConsultationResult.h
	include/alibabacloud/companyreg/model/SubmitIcpSolutionRequest.h
	include/alibabacloud/companyreg/model/SubmitIcpSolutionResult.h
	include/alibabacloud/companyreg/model/SubmitIntentionNoteRequest.h
	include/alibabacloud/companyreg/model/SubmitIntentionNoteResult.h
	include/alibabacloud/companyreg/model/SubmitPartnerCompanyInformationRequest.h
	include/alibabacloud/companyreg/model/SubmitPartnerCompanyInformationResult.h
	include/alibabacloud/companyreg/model/SubmitSolutionRequest.h
	include/alibabacloud/companyreg/model/SubmitSolutionResult.h
	include/alibabacloud/companyreg/model/UpdateBookkeepingOrgRequest.h
	include/alibabacloud/companyreg/model/UpdateBookkeepingOrgResult.h
	include/alibabacloud/companyreg/model/UpdateCustomerInfoRequest.h
	include/alibabacloud/companyreg/model/UpdateCustomerInfoResult.h
	include/alibabacloud/companyreg/model/UpdateFeeRequest.h
	include/alibabacloud/companyreg/model/UpdateFeeResult.h
	include/alibabacloud/companyreg/model/UpdateProduceRequest.h
	include/alibabacloud/companyreg/model/UpdateProduceResult.h
	include/alibabacloud/companyreg/model/UpdateTaxInfoRequest.h
	include/alibabacloud/companyreg/model/UpdateTaxInfoResult.h
	include/alibabacloud/companyreg/model/UpdateTaxationProcessRequest.h
	include/alibabacloud/companyreg/model/UpdateTaxationProcessResult.h
	include/alibabacloud/companyreg/model/UploadIcpBasicMaterialRequest.h
	include/alibabacloud/companyreg/model/UploadIcpBasicMaterialResult.h
	include/alibabacloud/companyreg/model/UploadUserMaterialRequest.h
	include/alibabacloud/companyreg/model/UploadUserMaterialResult.h
	include/alibabacloud/companyreg/model/VerifyTaxSmsCodeRequest.h
	include/alibabacloud/companyreg/model/VerifyTaxSmsCodeResult.h
	include/alibabacloud/companyreg/model/WriteCommunicationLogRequest.h
	include/alibabacloud/companyreg/model/WriteCommunicationLogResult.h )

set(companyreg_src 
	src/CompanyregClient.cc
	src/model/AcceptBookkeepingAuditResultRequest.cc
	src/model/AcceptBookkeepingAuditResultResult.cc
	src/model/AcceptBookkeepingDetailStatusChangeRequest.cc
	src/model/AcceptBookkeepingDetailStatusChangeResult.cc
	src/model/AcceptPartnerNotificationRequest.cc
	src/model/AcceptPartnerNotificationResult.cc
	src/model/BindProduceAuthorizationRequest.cc
	src/model/BindProduceAuthorizationResult.cc
	src/model/CheckCompanyRegRequest.cc
	src/model/CheckCompanyRegResult.cc
	src/model/CheckCopyPayrollRequest.cc
	src/model/CheckCopyPayrollResult.cc
	src/model/CheckSavePayrollRequest.cc
	src/model/CheckSavePayrollResult.cc
	src/model/CheckSavePayrollDetailRequest.cc
	src/model/CheckSavePayrollDetailResult.cc
	src/model/ClearTrailDataRequest.cc
	src/model/ClearTrailDataResult.cc
	src/model/CloseIcpProduceRequest.cc
	src/model/CloseIcpProduceResult.cc
	src/model/CloseIntentionRequest.cc
	src/model/CloseIntentionResult.cc
	src/model/CloseIntentionForPartnerRequest.cc
	src/model/CloseIntentionForPartnerResult.cc
	src/model/CloseUserIntentionRequest.cc
	src/model/CloseUserIntentionResult.cc
	src/model/ConfirmIcpIntentionRequest.cc
	src/model/ConfirmIcpIntentionResult.cc
	src/model/ConfirmIntentionRequest.cc
	src/model/ConfirmIntentionResult.cc
	src/model/ConfirmMaterialRequest.cc
	src/model/ConfirmMaterialResult.cc
	src/model/ConfirmTaxAmountRequest.cc
	src/model/ConfirmTaxAmountResult.cc
	src/model/ConvertFeeRequest.cc
	src/model/ConvertFeeResult.cc
	src/model/ConvertInvoiceRequest.cc
	src/model/ConvertInvoiceResult.cc
	src/model/CopyPayrollRequest.cc
	src/model/CopyPayrollResult.cc
	src/model/CreateBookkeepingIntentionRequest.cc
	src/model/CreateBookkeepingIntentionResult.cc
	src/model/CreateBusinessOpportunityRequest.cc
	src/model/CreateBusinessOpportunityResult.cc
	src/model/CreateProduceForPartnerRequest.cc
	src/model/CreateProduceForPartnerResult.cc
	src/model/DeleteFeeRequest.cc
	src/model/DeleteFeeResult.cc
	src/model/DeleteInvoiceRequest.cc
	src/model/DeleteInvoiceResult.cc
	src/model/DeletePayrollRequest.cc
	src/model/DeletePayrollResult.cc
	src/model/DescribePartnerConfigRequest.cc
	src/model/DescribePartnerConfigResult.cc
	src/model/GenerateCompanyRegUploadPolicyRequest.cc
	src/model/GenerateCompanyRegUploadPolicyResult.cc
	src/model/GenerateUploadFilePolicyRequest.cc
	src/model/GenerateUploadFilePolicyResult.cc
	src/model/GetAlipayUrlRequest.cc
	src/model/GetAlipayUrlResult.cc
	src/model/GetBalanceSheetInfoRequest.cc
	src/model/GetBalanceSheetInfoResult.cc
	src/model/GetCashFlowInfoRequest.cc
	src/model/GetCashFlowInfoResult.cc
	src/model/GetCompanyRegOrderRequest.cc
	src/model/GetCompanyRegOrderResult.cc
	src/model/GetEnterprisesInfoRequest.cc
	src/model/GetEnterprisesInfoResult.cc
	src/model/GetFeeRequest.cc
	src/model/GetFeeResult.cc
	src/model/GetHomePageRequest.cc
	src/model/GetHomePageResult.cc
	src/model/GetIncomeStatementInfoRequest.cc
	src/model/GetIncomeStatementInfoResult.cc
	src/model/GetIndustryCommerceInfoRequest.cc
	src/model/GetIndustryCommerceInfoResult.cc
	src/model/GetInitFlowRequest.cc
	src/model/GetInitFlowResult.cc
	src/model/GetInvoiceInfoRequest.cc
	src/model/GetInvoiceInfoResult.cc
	src/model/GetLastMonthInvoiceCountRequest.cc
	src/model/GetLastMonthInvoiceCountResult.cc
	src/model/GetNoticeRequest.cc
	src/model/GetNoticeResult.cc
	src/model/GetOssStsRequest.cc
	src/model/GetOssStsResult.cc
	src/model/GetPayrollInfoRequest.cc
	src/model/GetPayrollInfoResult.cc
	src/model/GetPayrollSettingRequest.cc
	src/model/GetPayrollSettingResult.cc
	src/model/GetPeriodInfoRequest.cc
	src/model/GetPeriodInfoResult.cc
	src/model/GetQuarterCashFlowInfoRequest.cc
	src/model/GetQuarterCashFlowInfoResult.cc
	src/model/GetQuarterIncomeStatementInfoRequest.cc
	src/model/GetQuarterIncomeStatementInfoResult.cc
	src/model/GetServiceInfoRequest.cc
	src/model/GetServiceInfoResult.cc
	src/model/GetSsoUserInfoRequest.cc
	src/model/GetSsoUserInfoResult.cc
	src/model/GetTaxInfoRequest.cc
	src/model/GetTaxInfoResult.cc
	src/model/GetTaxationCalendarRequest.cc
	src/model/GetTaxationCalendarResult.cc
	src/model/GetTaxationInfoRequest.cc
	src/model/GetTaxationInfoResult.cc
	src/model/GetTypeListRequest.cc
	src/model/GetTypeListResult.cc
	src/model/GetVoucherCountRequest.cc
	src/model/GetVoucherCountResult.cc
	src/model/ListApplicationLogsRequest.cc
	src/model/ListApplicationLogsResult.cc
	src/model/ListBookkeepingStatisticsesRequest.cc
	src/model/ListBookkeepingStatisticsesResult.cc
	src/model/ListBookkeepingSubjectBalancesRequest.cc
	src/model/ListBookkeepingSubjectBalancesResult.cc
	src/model/ListBookkeepingsRequest.cc
	src/model/ListBookkeepingsResult.cc
	src/model/ListCashJournalRequest.cc
	src/model/ListCashJournalResult.cc
	src/model/ListCompanyRegConsultationsRequest.cc
	src/model/ListCompanyRegConsultationsResult.cc
	src/model/ListCompanyRegOrdersRequest.cc
	src/model/ListCompanyRegOrdersResult.cc
	src/model/ListEnterprisesRequest.cc
	src/model/ListEnterprisesResult.cc
	src/model/ListIcpApplicationsRequest.cc
	src/model/ListIcpApplicationsResult.cc
	src/model/ListIntentionNoteRequest.cc
	src/model/ListIntentionNoteResult.cc
	src/model/ListInvoiceRequest.cc
	src/model/ListInvoiceResult.cc
	src/model/ListLastMonthInvoiceRequest.cc
	src/model/ListLastMonthInvoiceResult.cc
	src/model/ListPayrollRequest.cc
	src/model/ListPayrollResult.cc
	src/model/ListProduceAuthorizationRequest.cc
	src/model/ListProduceAuthorizationResult.cc
	src/model/ListUserDetailSolutionsRequest.cc
	src/model/ListUserDetailSolutionsResult.cc
	src/model/ListUserIntentionNotesRequest.cc
	src/model/ListUserIntentionNotesResult.cc
	src/model/ListUserIntentionsRequest.cc
	src/model/ListUserIntentionsResult.cc
	src/model/ListUserProduceOperateLogsRequest.cc
	src/model/ListUserProduceOperateLogsResult.cc
	src/model/ListUserSolutionsRequest.cc
	src/model/ListUserSolutionsResult.cc
	src/model/ListVoucherRequest.cc
	src/model/ListVoucherResult.cc
	src/model/OperateProduceForPartnerRequest.cc
	src/model/OperateProduceForPartnerResult.cc
	src/model/PhotoInvoiceRequest.cc
	src/model/PhotoInvoiceResult.cc
	src/model/PrintAcctgTransRequest.cc
	src/model/PrintAcctgTransResult.cc
	src/model/ProcessCompanyRegOrderRequest.cc
	src/model/ProcessCompanyRegOrderResult.cc
	src/model/PutMeasureDataRequest.cc
	src/model/PutMeasureDataResult.cc
	src/model/PutMeasureReadyFlagRequest.cc
	src/model/PutMeasureReadyFlagResult.cc
	src/model/QueryBagRemainingRequest.cc
	src/model/QueryBagRemainingResult.cc
	src/model/QueryBookkeepingCommoditiesRequest.cc
	src/model/QueryBookkeepingCommoditiesResult.cc
	src/model/QueryBookkeepingCommodityModulesRequest.cc
	src/model/QueryBookkeepingCommodityModulesResult.cc
	src/model/QueryCommodityConfigRequest.cc
	src/model/QueryCommodityConfigResult.cc
	src/model/QueryCommunicationLogsRequest.cc
	src/model/QueryCommunicationLogsResult.cc
	src/model/QueryInstanceRequest.cc
	src/model/QueryInstanceResult.cc
	src/model/QueryIntentionListRequest.cc
	src/model/QueryIntentionListResult.cc
	src/model/QueryTradeIntentionUserListRequest.cc
	src/model/QueryTradeIntentionUserListResult.cc
	src/model/QueryUserNeedAuthRequest.cc
	src/model/QueryUserNeedAuthResult.cc
	src/model/ReSubmitIcpSolutionRequest.cc
	src/model/ReSubmitIcpSolutionResult.cc
	src/model/RefreshCustomerInfoRequest.cc
	src/model/RefreshCustomerInfoResult.cc
	src/model/RefuseMaterialRequest.cc
	src/model/RefuseMaterialResult.cc
	src/model/RejectIcpIntentionRequest.cc
	src/model/RejectIcpIntentionResult.cc
	src/model/RejectSolutionRequest.cc
	src/model/RejectSolutionResult.cc
	src/model/RejectUserSolutionRequest.cc
	src/model/RejectUserSolutionResult.cc
	src/model/ReleaseProduceAuthorizationRequest.cc
	src/model/ReleaseProduceAuthorizationResult.cc
	src/model/SaveOpeningBalanceStatusRequest.cc
	src/model/SaveOpeningBalanceStatusResult.cc
	src/model/SavePayrollRequest.cc
	src/model/SavePayrollResult.cc
	src/model/SavePayrollSettingRequest.cc
	src/model/SavePayrollSettingResult.cc
	src/model/ScanInvoiceRequest.cc
	src/model/ScanInvoiceResult.cc
	src/model/SendMessageRequest.cc
	src/model/SendMessageResult.cc
	src/model/SendVcodeRequest.cc
	src/model/SendVcodeResult.cc
	src/model/SubmitCommunicationNoteRequest.cc
	src/model/SubmitCommunicationNoteResult.cc
	src/model/SubmitConsultationRequest.cc
	src/model/SubmitConsultationResult.cc
	src/model/SubmitIcpSolutionRequest.cc
	src/model/SubmitIcpSolutionResult.cc
	src/model/SubmitIntentionNoteRequest.cc
	src/model/SubmitIntentionNoteResult.cc
	src/model/SubmitPartnerCompanyInformationRequest.cc
	src/model/SubmitPartnerCompanyInformationResult.cc
	src/model/SubmitSolutionRequest.cc
	src/model/SubmitSolutionResult.cc
	src/model/UpdateBookkeepingOrgRequest.cc
	src/model/UpdateBookkeepingOrgResult.cc
	src/model/UpdateCustomerInfoRequest.cc
	src/model/UpdateCustomerInfoResult.cc
	src/model/UpdateFeeRequest.cc
	src/model/UpdateFeeResult.cc
	src/model/UpdateProduceRequest.cc
	src/model/UpdateProduceResult.cc
	src/model/UpdateTaxInfoRequest.cc
	src/model/UpdateTaxInfoResult.cc
	src/model/UpdateTaxationProcessRequest.cc
	src/model/UpdateTaxationProcessResult.cc
	src/model/UploadIcpBasicMaterialRequest.cc
	src/model/UploadIcpBasicMaterialResult.cc
	src/model/UploadUserMaterialRequest.cc
	src/model/UploadUserMaterialResult.cc
	src/model/VerifyTaxSmsCodeRequest.cc
	src/model/VerifyTaxSmsCodeResult.cc
	src/model/WriteCommunicationLogRequest.cc
	src/model/WriteCommunicationLogResult.cc )

add_library(companyreg ${LIB_TYPE}
	${companyreg_public_header}
	${companyreg_public_header_model}
	${companyreg_src})

set_target_properties(companyreg
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}companyreg
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(companyreg
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_COMPANYREG_LIBRARY)
endif()

target_include_directories(companyreg
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(companyreg
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(companyreg
		jsoncpp)
	target_include_directories(companyreg
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(companyreg
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(companyreg
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(companyreg
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(companyreg
		jsoncpp)
endif()

install(FILES ${companyreg_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/companyreg)
install(FILES ${companyreg_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/companyreg/model)
install(TARGETS companyreg
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)