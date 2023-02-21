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

#ifndef ALIBABACLOUD_DT_OC_INFO_DT_OC_INFOCLIENT_H_
#define ALIBABACLOUD_DT_OC_INFO_DT_OC_INFOCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Dt_oc_infoExport.h"
#include "model/GetOcCompetitorsRequest.h"
#include "model/GetOcCompetitorsResult.h"
#include "model/GetOcCoreTeamsRequest.h"
#include "model/GetOcCoreTeamsResult.h"
#include "model/GetOcFinancingRequest.h"
#include "model/GetOcFinancingResult.h"
#include "model/GetOcFuzzSearchRequest.h"
#include "model/GetOcFuzzSearchResult.h"
#include "model/GetOcIcAbnormalOperationRequest.h"
#include "model/GetOcIcAbnormalOperationResult.h"
#include "model/GetOcIcAdminLicenseRequest.h"
#include "model/GetOcIcAdminLicenseResult.h"
#include "model/GetOcIcBasicRequest.h"
#include "model/GetOcIcBasicResult.h"
#include "model/GetOcIcBranchRequest.h"
#include "model/GetOcIcBranchResult.h"
#include "model/GetOcIcChangeRecordRequest.h"
#include "model/GetOcIcChangeRecordResult.h"
#include "model/GetOcIcCheckupRequest.h"
#include "model/GetOcIcCheckupResult.h"
#include "model/GetOcIcClearAccountRequest.h"
#include "model/GetOcIcClearAccountResult.h"
#include "model/GetOcIcDoubleCheckupRequest.h"
#include "model/GetOcIcDoubleCheckupResult.h"
#include "model/GetOcIcEmployeeRequest.h"
#include "model/GetOcIcEmployeeResult.h"
#include "model/GetOcIcEquityFrozenRequest.h"
#include "model/GetOcIcEquityFrozenResult.h"
#include "model/GetOcIcEquityPledgeRequest.h"
#include "model/GetOcIcEquityPledgeResult.h"
#include "model/GetOcIcInvestmentRequest.h"
#include "model/GetOcIcInvestmentResult.h"
#include "model/GetOcIcKnowledgePropertyPledgeRequest.h"
#include "model/GetOcIcKnowledgePropertyPledgeResult.h"
#include "model/GetOcIcMortgageRequest.h"
#include "model/GetOcIcMortgageResult.h"
#include "model/GetOcIcSeriousOffenseRequest.h"
#include "model/GetOcIcSeriousOffenseResult.h"
#include "model/GetOcIcShareholderRequest.h"
#include "model/GetOcIcShareholderResult.h"
#include "model/GetOcIcSimpleCancelRequest.h"
#include "model/GetOcIcSimpleCancelResult.h"
#include "model/GetOcIpCertificateRequest.h"
#include "model/GetOcIpCertificateResult.h"
#include "model/GetOcIpDomainRequest.h"
#include "model/GetOcIpDomainResult.h"
#include "model/GetOcIpPatentRequest.h"
#include "model/GetOcIpPatentResult.h"
#include "model/GetOcIpSoftwareCopyrightRequest.h"
#include "model/GetOcIpSoftwareCopyrightResult.h"
#include "model/GetOcIpTrademarkRequest.h"
#include "model/GetOcIpTrademarkResult.h"
#include "model/GetOcIpWorksCopyrightRequest.h"
#include "model/GetOcIpWorksCopyrightResult.h"
#include "model/GetOcJusticeAuctionRequest.h"
#include "model/GetOcJusticeAuctionResult.h"
#include "model/GetOcJusticeCaseFilingRequest.h"
#include "model/GetOcJusticeCaseFilingResult.h"
#include "model/GetOcJusticeCourtAnnouncementRequest.h"
#include "model/GetOcJusticeCourtAnnouncementResult.h"
#include "model/GetOcJusticeCourtNoticeRequest.h"
#include "model/GetOcJusticeCourtNoticeResult.h"
#include "model/GetOcJusticeDishonestyRequest.h"
#include "model/GetOcJusticeDishonestyResult.h"
#include "model/GetOcJusticeExecutedRequest.h"
#include "model/GetOcJusticeExecutedResult.h"
#include "model/GetOcJusticeJudgementDocRequest.h"
#include "model/GetOcJusticeJudgementDocResult.h"
#include "model/GetOcJusticeLimitHighConsumeRequest.h"
#include "model/GetOcJusticeLimitHighConsumeResult.h"
#include "model/GetOcJusticeTerminalCaseRequest.h"
#include "model/GetOcJusticeTerminalCaseResult.h"
#include "model/GetOcListedCompanyRequest.h"
#include "model/GetOcListedCompanyResult.h"
#include "model/GetOcNegativeAdminPunishmentRequest.h"
#include "model/GetOcNegativeAdminPunishmentResult.h"
#include "model/GetOcNegativeCustomsPunishmentRequest.h"
#include "model/GetOcNegativeCustomsPunishmentResult.h"
#include "model/GetOcNegativeEnvironmentPunishmentRequest.h"
#include "model/GetOcNegativeEnvironmentPunishmentResult.h"
#include "model/GetOcNegativeFoodDrugPunishmentRequest.h"
#include "model/GetOcNegativeFoodDrugPunishmentResult.h"
#include "model/GetOcNegativeQualityPunishmentRequest.h"
#include "model/GetOcNegativeQualityPunishmentResult.h"
#include "model/GetOcOperationBiddingRequest.h"
#include "model/GetOcOperationBiddingResult.h"
#include "model/GetOcOperationCustomsRequest.h"
#include "model/GetOcOperationCustomsResult.h"
#include "model/GetOcOperationPurchaseLandRequest.h"
#include "model/GetOcOperationPurchaseLandResult.h"
#include "model/GetOcOperationRecruitmentRequest.h"
#include "model/GetOcOperationRecruitmentResult.h"
#include "model/GetOcProductBandRequest.h"
#include "model/GetOcProductBandResult.h"
#include "model/GetOcTaxAbnormalRequest.h"
#include "model/GetOcTaxAbnormalResult.h"
#include "model/GetOcTaxClassARequest.h"
#include "model/GetOcTaxClassAResult.h"
#include "model/GetOcTaxGeneralTaxpayerRequest.h"
#include "model/GetOcTaxGeneralTaxpayerResult.h"
#include "model/GetOcTaxIllegalRequest.h"
#include "model/GetOcTaxIllegalResult.h"
#include "model/GetOcTaxOverdueRequest.h"
#include "model/GetOcTaxOverdueResult.h"
#include "model/GetOcTaxPunishmentRequest.h"
#include "model/GetOcTaxPunishmentResult.h"
#include "model/GetQccCertificationDetailByIdRequest.h"
#include "model/GetQccCertificationDetailByIdResult.h"
#include "model/GetQccSearchCertificationRequest.h"
#include "model/GetQccSearchCertificationResult.h"


namespace AlibabaCloud
{
	namespace Dt_oc_info
	{
		class ALIBABACLOUD_DT_OC_INFO_EXPORT Dt_oc_infoClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetOcCompetitorsResult> GetOcCompetitorsOutcome;
			typedef std::future<GetOcCompetitorsOutcome> GetOcCompetitorsOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcCompetitorsRequest&, const GetOcCompetitorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcCompetitorsAsyncHandler;
			typedef Outcome<Error, Model::GetOcCoreTeamsResult> GetOcCoreTeamsOutcome;
			typedef std::future<GetOcCoreTeamsOutcome> GetOcCoreTeamsOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcCoreTeamsRequest&, const GetOcCoreTeamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcCoreTeamsAsyncHandler;
			typedef Outcome<Error, Model::GetOcFinancingResult> GetOcFinancingOutcome;
			typedef std::future<GetOcFinancingOutcome> GetOcFinancingOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcFinancingRequest&, const GetOcFinancingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcFinancingAsyncHandler;
			typedef Outcome<Error, Model::GetOcFuzzSearchResult> GetOcFuzzSearchOutcome;
			typedef std::future<GetOcFuzzSearchOutcome> GetOcFuzzSearchOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcFuzzSearchRequest&, const GetOcFuzzSearchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcFuzzSearchAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcAbnormalOperationResult> GetOcIcAbnormalOperationOutcome;
			typedef std::future<GetOcIcAbnormalOperationOutcome> GetOcIcAbnormalOperationOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcAbnormalOperationRequest&, const GetOcIcAbnormalOperationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcAbnormalOperationAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcAdminLicenseResult> GetOcIcAdminLicenseOutcome;
			typedef std::future<GetOcIcAdminLicenseOutcome> GetOcIcAdminLicenseOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcAdminLicenseRequest&, const GetOcIcAdminLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcAdminLicenseAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcBasicResult> GetOcIcBasicOutcome;
			typedef std::future<GetOcIcBasicOutcome> GetOcIcBasicOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcBasicRequest&, const GetOcIcBasicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcBasicAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcBranchResult> GetOcIcBranchOutcome;
			typedef std::future<GetOcIcBranchOutcome> GetOcIcBranchOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcBranchRequest&, const GetOcIcBranchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcBranchAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcChangeRecordResult> GetOcIcChangeRecordOutcome;
			typedef std::future<GetOcIcChangeRecordOutcome> GetOcIcChangeRecordOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcChangeRecordRequest&, const GetOcIcChangeRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcChangeRecordAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcCheckupResult> GetOcIcCheckupOutcome;
			typedef std::future<GetOcIcCheckupOutcome> GetOcIcCheckupOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcCheckupRequest&, const GetOcIcCheckupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcCheckupAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcClearAccountResult> GetOcIcClearAccountOutcome;
			typedef std::future<GetOcIcClearAccountOutcome> GetOcIcClearAccountOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcClearAccountRequest&, const GetOcIcClearAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcClearAccountAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcDoubleCheckupResult> GetOcIcDoubleCheckupOutcome;
			typedef std::future<GetOcIcDoubleCheckupOutcome> GetOcIcDoubleCheckupOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcDoubleCheckupRequest&, const GetOcIcDoubleCheckupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcDoubleCheckupAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcEmployeeResult> GetOcIcEmployeeOutcome;
			typedef std::future<GetOcIcEmployeeOutcome> GetOcIcEmployeeOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcEmployeeRequest&, const GetOcIcEmployeeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcEmployeeAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcEquityFrozenResult> GetOcIcEquityFrozenOutcome;
			typedef std::future<GetOcIcEquityFrozenOutcome> GetOcIcEquityFrozenOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcEquityFrozenRequest&, const GetOcIcEquityFrozenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcEquityFrozenAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcEquityPledgeResult> GetOcIcEquityPledgeOutcome;
			typedef std::future<GetOcIcEquityPledgeOutcome> GetOcIcEquityPledgeOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcEquityPledgeRequest&, const GetOcIcEquityPledgeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcEquityPledgeAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcInvestmentResult> GetOcIcInvestmentOutcome;
			typedef std::future<GetOcIcInvestmentOutcome> GetOcIcInvestmentOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcInvestmentRequest&, const GetOcIcInvestmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcInvestmentAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcKnowledgePropertyPledgeResult> GetOcIcKnowledgePropertyPledgeOutcome;
			typedef std::future<GetOcIcKnowledgePropertyPledgeOutcome> GetOcIcKnowledgePropertyPledgeOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcKnowledgePropertyPledgeRequest&, const GetOcIcKnowledgePropertyPledgeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcKnowledgePropertyPledgeAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcMortgageResult> GetOcIcMortgageOutcome;
			typedef std::future<GetOcIcMortgageOutcome> GetOcIcMortgageOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcMortgageRequest&, const GetOcIcMortgageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcMortgageAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcSeriousOffenseResult> GetOcIcSeriousOffenseOutcome;
			typedef std::future<GetOcIcSeriousOffenseOutcome> GetOcIcSeriousOffenseOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcSeriousOffenseRequest&, const GetOcIcSeriousOffenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcSeriousOffenseAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcShareholderResult> GetOcIcShareholderOutcome;
			typedef std::future<GetOcIcShareholderOutcome> GetOcIcShareholderOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcShareholderRequest&, const GetOcIcShareholderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcShareholderAsyncHandler;
			typedef Outcome<Error, Model::GetOcIcSimpleCancelResult> GetOcIcSimpleCancelOutcome;
			typedef std::future<GetOcIcSimpleCancelOutcome> GetOcIcSimpleCancelOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIcSimpleCancelRequest&, const GetOcIcSimpleCancelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIcSimpleCancelAsyncHandler;
			typedef Outcome<Error, Model::GetOcIpCertificateResult> GetOcIpCertificateOutcome;
			typedef std::future<GetOcIpCertificateOutcome> GetOcIpCertificateOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIpCertificateRequest&, const GetOcIpCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIpCertificateAsyncHandler;
			typedef Outcome<Error, Model::GetOcIpDomainResult> GetOcIpDomainOutcome;
			typedef std::future<GetOcIpDomainOutcome> GetOcIpDomainOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIpDomainRequest&, const GetOcIpDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIpDomainAsyncHandler;
			typedef Outcome<Error, Model::GetOcIpPatentResult> GetOcIpPatentOutcome;
			typedef std::future<GetOcIpPatentOutcome> GetOcIpPatentOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIpPatentRequest&, const GetOcIpPatentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIpPatentAsyncHandler;
			typedef Outcome<Error, Model::GetOcIpSoftwareCopyrightResult> GetOcIpSoftwareCopyrightOutcome;
			typedef std::future<GetOcIpSoftwareCopyrightOutcome> GetOcIpSoftwareCopyrightOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIpSoftwareCopyrightRequest&, const GetOcIpSoftwareCopyrightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIpSoftwareCopyrightAsyncHandler;
			typedef Outcome<Error, Model::GetOcIpTrademarkResult> GetOcIpTrademarkOutcome;
			typedef std::future<GetOcIpTrademarkOutcome> GetOcIpTrademarkOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIpTrademarkRequest&, const GetOcIpTrademarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIpTrademarkAsyncHandler;
			typedef Outcome<Error, Model::GetOcIpWorksCopyrightResult> GetOcIpWorksCopyrightOutcome;
			typedef std::future<GetOcIpWorksCopyrightOutcome> GetOcIpWorksCopyrightOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcIpWorksCopyrightRequest&, const GetOcIpWorksCopyrightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcIpWorksCopyrightAsyncHandler;
			typedef Outcome<Error, Model::GetOcJusticeAuctionResult> GetOcJusticeAuctionOutcome;
			typedef std::future<GetOcJusticeAuctionOutcome> GetOcJusticeAuctionOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcJusticeAuctionRequest&, const GetOcJusticeAuctionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcJusticeAuctionAsyncHandler;
			typedef Outcome<Error, Model::GetOcJusticeCaseFilingResult> GetOcJusticeCaseFilingOutcome;
			typedef std::future<GetOcJusticeCaseFilingOutcome> GetOcJusticeCaseFilingOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcJusticeCaseFilingRequest&, const GetOcJusticeCaseFilingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcJusticeCaseFilingAsyncHandler;
			typedef Outcome<Error, Model::GetOcJusticeCourtAnnouncementResult> GetOcJusticeCourtAnnouncementOutcome;
			typedef std::future<GetOcJusticeCourtAnnouncementOutcome> GetOcJusticeCourtAnnouncementOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcJusticeCourtAnnouncementRequest&, const GetOcJusticeCourtAnnouncementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcJusticeCourtAnnouncementAsyncHandler;
			typedef Outcome<Error, Model::GetOcJusticeCourtNoticeResult> GetOcJusticeCourtNoticeOutcome;
			typedef std::future<GetOcJusticeCourtNoticeOutcome> GetOcJusticeCourtNoticeOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcJusticeCourtNoticeRequest&, const GetOcJusticeCourtNoticeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcJusticeCourtNoticeAsyncHandler;
			typedef Outcome<Error, Model::GetOcJusticeDishonestyResult> GetOcJusticeDishonestyOutcome;
			typedef std::future<GetOcJusticeDishonestyOutcome> GetOcJusticeDishonestyOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcJusticeDishonestyRequest&, const GetOcJusticeDishonestyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcJusticeDishonestyAsyncHandler;
			typedef Outcome<Error, Model::GetOcJusticeExecutedResult> GetOcJusticeExecutedOutcome;
			typedef std::future<GetOcJusticeExecutedOutcome> GetOcJusticeExecutedOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcJusticeExecutedRequest&, const GetOcJusticeExecutedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcJusticeExecutedAsyncHandler;
			typedef Outcome<Error, Model::GetOcJusticeJudgementDocResult> GetOcJusticeJudgementDocOutcome;
			typedef std::future<GetOcJusticeJudgementDocOutcome> GetOcJusticeJudgementDocOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcJusticeJudgementDocRequest&, const GetOcJusticeJudgementDocOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcJusticeJudgementDocAsyncHandler;
			typedef Outcome<Error, Model::GetOcJusticeLimitHighConsumeResult> GetOcJusticeLimitHighConsumeOutcome;
			typedef std::future<GetOcJusticeLimitHighConsumeOutcome> GetOcJusticeLimitHighConsumeOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcJusticeLimitHighConsumeRequest&, const GetOcJusticeLimitHighConsumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcJusticeLimitHighConsumeAsyncHandler;
			typedef Outcome<Error, Model::GetOcJusticeTerminalCaseResult> GetOcJusticeTerminalCaseOutcome;
			typedef std::future<GetOcJusticeTerminalCaseOutcome> GetOcJusticeTerminalCaseOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcJusticeTerminalCaseRequest&, const GetOcJusticeTerminalCaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcJusticeTerminalCaseAsyncHandler;
			typedef Outcome<Error, Model::GetOcListedCompanyResult> GetOcListedCompanyOutcome;
			typedef std::future<GetOcListedCompanyOutcome> GetOcListedCompanyOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcListedCompanyRequest&, const GetOcListedCompanyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcListedCompanyAsyncHandler;
			typedef Outcome<Error, Model::GetOcNegativeAdminPunishmentResult> GetOcNegativeAdminPunishmentOutcome;
			typedef std::future<GetOcNegativeAdminPunishmentOutcome> GetOcNegativeAdminPunishmentOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcNegativeAdminPunishmentRequest&, const GetOcNegativeAdminPunishmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcNegativeAdminPunishmentAsyncHandler;
			typedef Outcome<Error, Model::GetOcNegativeCustomsPunishmentResult> GetOcNegativeCustomsPunishmentOutcome;
			typedef std::future<GetOcNegativeCustomsPunishmentOutcome> GetOcNegativeCustomsPunishmentOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcNegativeCustomsPunishmentRequest&, const GetOcNegativeCustomsPunishmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcNegativeCustomsPunishmentAsyncHandler;
			typedef Outcome<Error, Model::GetOcNegativeEnvironmentPunishmentResult> GetOcNegativeEnvironmentPunishmentOutcome;
			typedef std::future<GetOcNegativeEnvironmentPunishmentOutcome> GetOcNegativeEnvironmentPunishmentOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcNegativeEnvironmentPunishmentRequest&, const GetOcNegativeEnvironmentPunishmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcNegativeEnvironmentPunishmentAsyncHandler;
			typedef Outcome<Error, Model::GetOcNegativeFoodDrugPunishmentResult> GetOcNegativeFoodDrugPunishmentOutcome;
			typedef std::future<GetOcNegativeFoodDrugPunishmentOutcome> GetOcNegativeFoodDrugPunishmentOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcNegativeFoodDrugPunishmentRequest&, const GetOcNegativeFoodDrugPunishmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcNegativeFoodDrugPunishmentAsyncHandler;
			typedef Outcome<Error, Model::GetOcNegativeQualityPunishmentResult> GetOcNegativeQualityPunishmentOutcome;
			typedef std::future<GetOcNegativeQualityPunishmentOutcome> GetOcNegativeQualityPunishmentOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcNegativeQualityPunishmentRequest&, const GetOcNegativeQualityPunishmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcNegativeQualityPunishmentAsyncHandler;
			typedef Outcome<Error, Model::GetOcOperationBiddingResult> GetOcOperationBiddingOutcome;
			typedef std::future<GetOcOperationBiddingOutcome> GetOcOperationBiddingOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcOperationBiddingRequest&, const GetOcOperationBiddingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcOperationBiddingAsyncHandler;
			typedef Outcome<Error, Model::GetOcOperationCustomsResult> GetOcOperationCustomsOutcome;
			typedef std::future<GetOcOperationCustomsOutcome> GetOcOperationCustomsOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcOperationCustomsRequest&, const GetOcOperationCustomsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcOperationCustomsAsyncHandler;
			typedef Outcome<Error, Model::GetOcOperationPurchaseLandResult> GetOcOperationPurchaseLandOutcome;
			typedef std::future<GetOcOperationPurchaseLandOutcome> GetOcOperationPurchaseLandOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcOperationPurchaseLandRequest&, const GetOcOperationPurchaseLandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcOperationPurchaseLandAsyncHandler;
			typedef Outcome<Error, Model::GetOcOperationRecruitmentResult> GetOcOperationRecruitmentOutcome;
			typedef std::future<GetOcOperationRecruitmentOutcome> GetOcOperationRecruitmentOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcOperationRecruitmentRequest&, const GetOcOperationRecruitmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcOperationRecruitmentAsyncHandler;
			typedef Outcome<Error, Model::GetOcProductBandResult> GetOcProductBandOutcome;
			typedef std::future<GetOcProductBandOutcome> GetOcProductBandOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcProductBandRequest&, const GetOcProductBandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcProductBandAsyncHandler;
			typedef Outcome<Error, Model::GetOcTaxAbnormalResult> GetOcTaxAbnormalOutcome;
			typedef std::future<GetOcTaxAbnormalOutcome> GetOcTaxAbnormalOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcTaxAbnormalRequest&, const GetOcTaxAbnormalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcTaxAbnormalAsyncHandler;
			typedef Outcome<Error, Model::GetOcTaxClassAResult> GetOcTaxClassAOutcome;
			typedef std::future<GetOcTaxClassAOutcome> GetOcTaxClassAOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcTaxClassARequest&, const GetOcTaxClassAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcTaxClassAAsyncHandler;
			typedef Outcome<Error, Model::GetOcTaxGeneralTaxpayerResult> GetOcTaxGeneralTaxpayerOutcome;
			typedef std::future<GetOcTaxGeneralTaxpayerOutcome> GetOcTaxGeneralTaxpayerOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcTaxGeneralTaxpayerRequest&, const GetOcTaxGeneralTaxpayerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcTaxGeneralTaxpayerAsyncHandler;
			typedef Outcome<Error, Model::GetOcTaxIllegalResult> GetOcTaxIllegalOutcome;
			typedef std::future<GetOcTaxIllegalOutcome> GetOcTaxIllegalOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcTaxIllegalRequest&, const GetOcTaxIllegalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcTaxIllegalAsyncHandler;
			typedef Outcome<Error, Model::GetOcTaxOverdueResult> GetOcTaxOverdueOutcome;
			typedef std::future<GetOcTaxOverdueOutcome> GetOcTaxOverdueOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcTaxOverdueRequest&, const GetOcTaxOverdueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcTaxOverdueAsyncHandler;
			typedef Outcome<Error, Model::GetOcTaxPunishmentResult> GetOcTaxPunishmentOutcome;
			typedef std::future<GetOcTaxPunishmentOutcome> GetOcTaxPunishmentOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetOcTaxPunishmentRequest&, const GetOcTaxPunishmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOcTaxPunishmentAsyncHandler;
			typedef Outcome<Error, Model::GetQccCertificationDetailByIdResult> GetQccCertificationDetailByIdOutcome;
			typedef std::future<GetQccCertificationDetailByIdOutcome> GetQccCertificationDetailByIdOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetQccCertificationDetailByIdRequest&, const GetQccCertificationDetailByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQccCertificationDetailByIdAsyncHandler;
			typedef Outcome<Error, Model::GetQccSearchCertificationResult> GetQccSearchCertificationOutcome;
			typedef std::future<GetQccSearchCertificationOutcome> GetQccSearchCertificationOutcomeCallable;
			typedef std::function<void(const Dt_oc_infoClient*, const Model::GetQccSearchCertificationRequest&, const GetQccSearchCertificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQccSearchCertificationAsyncHandler;

			Dt_oc_infoClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Dt_oc_infoClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Dt_oc_infoClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Dt_oc_infoClient();
			GetOcCompetitorsOutcome getOcCompetitors(const Model::GetOcCompetitorsRequest &request)const;
			void getOcCompetitorsAsync(const Model::GetOcCompetitorsRequest& request, const GetOcCompetitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcCompetitorsOutcomeCallable getOcCompetitorsCallable(const Model::GetOcCompetitorsRequest& request) const;
			GetOcCoreTeamsOutcome getOcCoreTeams(const Model::GetOcCoreTeamsRequest &request)const;
			void getOcCoreTeamsAsync(const Model::GetOcCoreTeamsRequest& request, const GetOcCoreTeamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcCoreTeamsOutcomeCallable getOcCoreTeamsCallable(const Model::GetOcCoreTeamsRequest& request) const;
			GetOcFinancingOutcome getOcFinancing(const Model::GetOcFinancingRequest &request)const;
			void getOcFinancingAsync(const Model::GetOcFinancingRequest& request, const GetOcFinancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcFinancingOutcomeCallable getOcFinancingCallable(const Model::GetOcFinancingRequest& request) const;
			GetOcFuzzSearchOutcome getOcFuzzSearch(const Model::GetOcFuzzSearchRequest &request)const;
			void getOcFuzzSearchAsync(const Model::GetOcFuzzSearchRequest& request, const GetOcFuzzSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcFuzzSearchOutcomeCallable getOcFuzzSearchCallable(const Model::GetOcFuzzSearchRequest& request) const;
			GetOcIcAbnormalOperationOutcome getOcIcAbnormalOperation(const Model::GetOcIcAbnormalOperationRequest &request)const;
			void getOcIcAbnormalOperationAsync(const Model::GetOcIcAbnormalOperationRequest& request, const GetOcIcAbnormalOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcAbnormalOperationOutcomeCallable getOcIcAbnormalOperationCallable(const Model::GetOcIcAbnormalOperationRequest& request) const;
			GetOcIcAdminLicenseOutcome getOcIcAdminLicense(const Model::GetOcIcAdminLicenseRequest &request)const;
			void getOcIcAdminLicenseAsync(const Model::GetOcIcAdminLicenseRequest& request, const GetOcIcAdminLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcAdminLicenseOutcomeCallable getOcIcAdminLicenseCallable(const Model::GetOcIcAdminLicenseRequest& request) const;
			GetOcIcBasicOutcome getOcIcBasic(const Model::GetOcIcBasicRequest &request)const;
			void getOcIcBasicAsync(const Model::GetOcIcBasicRequest& request, const GetOcIcBasicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcBasicOutcomeCallable getOcIcBasicCallable(const Model::GetOcIcBasicRequest& request) const;
			GetOcIcBranchOutcome getOcIcBranch(const Model::GetOcIcBranchRequest &request)const;
			void getOcIcBranchAsync(const Model::GetOcIcBranchRequest& request, const GetOcIcBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcBranchOutcomeCallable getOcIcBranchCallable(const Model::GetOcIcBranchRequest& request) const;
			GetOcIcChangeRecordOutcome getOcIcChangeRecord(const Model::GetOcIcChangeRecordRequest &request)const;
			void getOcIcChangeRecordAsync(const Model::GetOcIcChangeRecordRequest& request, const GetOcIcChangeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcChangeRecordOutcomeCallable getOcIcChangeRecordCallable(const Model::GetOcIcChangeRecordRequest& request) const;
			GetOcIcCheckupOutcome getOcIcCheckup(const Model::GetOcIcCheckupRequest &request)const;
			void getOcIcCheckupAsync(const Model::GetOcIcCheckupRequest& request, const GetOcIcCheckupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcCheckupOutcomeCallable getOcIcCheckupCallable(const Model::GetOcIcCheckupRequest& request) const;
			GetOcIcClearAccountOutcome getOcIcClearAccount(const Model::GetOcIcClearAccountRequest &request)const;
			void getOcIcClearAccountAsync(const Model::GetOcIcClearAccountRequest& request, const GetOcIcClearAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcClearAccountOutcomeCallable getOcIcClearAccountCallable(const Model::GetOcIcClearAccountRequest& request) const;
			GetOcIcDoubleCheckupOutcome getOcIcDoubleCheckup(const Model::GetOcIcDoubleCheckupRequest &request)const;
			void getOcIcDoubleCheckupAsync(const Model::GetOcIcDoubleCheckupRequest& request, const GetOcIcDoubleCheckupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcDoubleCheckupOutcomeCallable getOcIcDoubleCheckupCallable(const Model::GetOcIcDoubleCheckupRequest& request) const;
			GetOcIcEmployeeOutcome getOcIcEmployee(const Model::GetOcIcEmployeeRequest &request)const;
			void getOcIcEmployeeAsync(const Model::GetOcIcEmployeeRequest& request, const GetOcIcEmployeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcEmployeeOutcomeCallable getOcIcEmployeeCallable(const Model::GetOcIcEmployeeRequest& request) const;
			GetOcIcEquityFrozenOutcome getOcIcEquityFrozen(const Model::GetOcIcEquityFrozenRequest &request)const;
			void getOcIcEquityFrozenAsync(const Model::GetOcIcEquityFrozenRequest& request, const GetOcIcEquityFrozenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcEquityFrozenOutcomeCallable getOcIcEquityFrozenCallable(const Model::GetOcIcEquityFrozenRequest& request) const;
			GetOcIcEquityPledgeOutcome getOcIcEquityPledge(const Model::GetOcIcEquityPledgeRequest &request)const;
			void getOcIcEquityPledgeAsync(const Model::GetOcIcEquityPledgeRequest& request, const GetOcIcEquityPledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcEquityPledgeOutcomeCallable getOcIcEquityPledgeCallable(const Model::GetOcIcEquityPledgeRequest& request) const;
			GetOcIcInvestmentOutcome getOcIcInvestment(const Model::GetOcIcInvestmentRequest &request)const;
			void getOcIcInvestmentAsync(const Model::GetOcIcInvestmentRequest& request, const GetOcIcInvestmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcInvestmentOutcomeCallable getOcIcInvestmentCallable(const Model::GetOcIcInvestmentRequest& request) const;
			GetOcIcKnowledgePropertyPledgeOutcome getOcIcKnowledgePropertyPledge(const Model::GetOcIcKnowledgePropertyPledgeRequest &request)const;
			void getOcIcKnowledgePropertyPledgeAsync(const Model::GetOcIcKnowledgePropertyPledgeRequest& request, const GetOcIcKnowledgePropertyPledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcKnowledgePropertyPledgeOutcomeCallable getOcIcKnowledgePropertyPledgeCallable(const Model::GetOcIcKnowledgePropertyPledgeRequest& request) const;
			GetOcIcMortgageOutcome getOcIcMortgage(const Model::GetOcIcMortgageRequest &request)const;
			void getOcIcMortgageAsync(const Model::GetOcIcMortgageRequest& request, const GetOcIcMortgageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcMortgageOutcomeCallable getOcIcMortgageCallable(const Model::GetOcIcMortgageRequest& request) const;
			GetOcIcSeriousOffenseOutcome getOcIcSeriousOffense(const Model::GetOcIcSeriousOffenseRequest &request)const;
			void getOcIcSeriousOffenseAsync(const Model::GetOcIcSeriousOffenseRequest& request, const GetOcIcSeriousOffenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcSeriousOffenseOutcomeCallable getOcIcSeriousOffenseCallable(const Model::GetOcIcSeriousOffenseRequest& request) const;
			GetOcIcShareholderOutcome getOcIcShareholder(const Model::GetOcIcShareholderRequest &request)const;
			void getOcIcShareholderAsync(const Model::GetOcIcShareholderRequest& request, const GetOcIcShareholderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcShareholderOutcomeCallable getOcIcShareholderCallable(const Model::GetOcIcShareholderRequest& request) const;
			GetOcIcSimpleCancelOutcome getOcIcSimpleCancel(const Model::GetOcIcSimpleCancelRequest &request)const;
			void getOcIcSimpleCancelAsync(const Model::GetOcIcSimpleCancelRequest& request, const GetOcIcSimpleCancelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIcSimpleCancelOutcomeCallable getOcIcSimpleCancelCallable(const Model::GetOcIcSimpleCancelRequest& request) const;
			GetOcIpCertificateOutcome getOcIpCertificate(const Model::GetOcIpCertificateRequest &request)const;
			void getOcIpCertificateAsync(const Model::GetOcIpCertificateRequest& request, const GetOcIpCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIpCertificateOutcomeCallable getOcIpCertificateCallable(const Model::GetOcIpCertificateRequest& request) const;
			GetOcIpDomainOutcome getOcIpDomain(const Model::GetOcIpDomainRequest &request)const;
			void getOcIpDomainAsync(const Model::GetOcIpDomainRequest& request, const GetOcIpDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIpDomainOutcomeCallable getOcIpDomainCallable(const Model::GetOcIpDomainRequest& request) const;
			GetOcIpPatentOutcome getOcIpPatent(const Model::GetOcIpPatentRequest &request)const;
			void getOcIpPatentAsync(const Model::GetOcIpPatentRequest& request, const GetOcIpPatentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIpPatentOutcomeCallable getOcIpPatentCallable(const Model::GetOcIpPatentRequest& request) const;
			GetOcIpSoftwareCopyrightOutcome getOcIpSoftwareCopyright(const Model::GetOcIpSoftwareCopyrightRequest &request)const;
			void getOcIpSoftwareCopyrightAsync(const Model::GetOcIpSoftwareCopyrightRequest& request, const GetOcIpSoftwareCopyrightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIpSoftwareCopyrightOutcomeCallable getOcIpSoftwareCopyrightCallable(const Model::GetOcIpSoftwareCopyrightRequest& request) const;
			GetOcIpTrademarkOutcome getOcIpTrademark(const Model::GetOcIpTrademarkRequest &request)const;
			void getOcIpTrademarkAsync(const Model::GetOcIpTrademarkRequest& request, const GetOcIpTrademarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIpTrademarkOutcomeCallable getOcIpTrademarkCallable(const Model::GetOcIpTrademarkRequest& request) const;
			GetOcIpWorksCopyrightOutcome getOcIpWorksCopyright(const Model::GetOcIpWorksCopyrightRequest &request)const;
			void getOcIpWorksCopyrightAsync(const Model::GetOcIpWorksCopyrightRequest& request, const GetOcIpWorksCopyrightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcIpWorksCopyrightOutcomeCallable getOcIpWorksCopyrightCallable(const Model::GetOcIpWorksCopyrightRequest& request) const;
			GetOcJusticeAuctionOutcome getOcJusticeAuction(const Model::GetOcJusticeAuctionRequest &request)const;
			void getOcJusticeAuctionAsync(const Model::GetOcJusticeAuctionRequest& request, const GetOcJusticeAuctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcJusticeAuctionOutcomeCallable getOcJusticeAuctionCallable(const Model::GetOcJusticeAuctionRequest& request) const;
			GetOcJusticeCaseFilingOutcome getOcJusticeCaseFiling(const Model::GetOcJusticeCaseFilingRequest &request)const;
			void getOcJusticeCaseFilingAsync(const Model::GetOcJusticeCaseFilingRequest& request, const GetOcJusticeCaseFilingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcJusticeCaseFilingOutcomeCallable getOcJusticeCaseFilingCallable(const Model::GetOcJusticeCaseFilingRequest& request) const;
			GetOcJusticeCourtAnnouncementOutcome getOcJusticeCourtAnnouncement(const Model::GetOcJusticeCourtAnnouncementRequest &request)const;
			void getOcJusticeCourtAnnouncementAsync(const Model::GetOcJusticeCourtAnnouncementRequest& request, const GetOcJusticeCourtAnnouncementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcJusticeCourtAnnouncementOutcomeCallable getOcJusticeCourtAnnouncementCallable(const Model::GetOcJusticeCourtAnnouncementRequest& request) const;
			GetOcJusticeCourtNoticeOutcome getOcJusticeCourtNotice(const Model::GetOcJusticeCourtNoticeRequest &request)const;
			void getOcJusticeCourtNoticeAsync(const Model::GetOcJusticeCourtNoticeRequest& request, const GetOcJusticeCourtNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcJusticeCourtNoticeOutcomeCallable getOcJusticeCourtNoticeCallable(const Model::GetOcJusticeCourtNoticeRequest& request) const;
			GetOcJusticeDishonestyOutcome getOcJusticeDishonesty(const Model::GetOcJusticeDishonestyRequest &request)const;
			void getOcJusticeDishonestyAsync(const Model::GetOcJusticeDishonestyRequest& request, const GetOcJusticeDishonestyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcJusticeDishonestyOutcomeCallable getOcJusticeDishonestyCallable(const Model::GetOcJusticeDishonestyRequest& request) const;
			GetOcJusticeExecutedOutcome getOcJusticeExecuted(const Model::GetOcJusticeExecutedRequest &request)const;
			void getOcJusticeExecutedAsync(const Model::GetOcJusticeExecutedRequest& request, const GetOcJusticeExecutedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcJusticeExecutedOutcomeCallable getOcJusticeExecutedCallable(const Model::GetOcJusticeExecutedRequest& request) const;
			GetOcJusticeJudgementDocOutcome getOcJusticeJudgementDoc(const Model::GetOcJusticeJudgementDocRequest &request)const;
			void getOcJusticeJudgementDocAsync(const Model::GetOcJusticeJudgementDocRequest& request, const GetOcJusticeJudgementDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcJusticeJudgementDocOutcomeCallable getOcJusticeJudgementDocCallable(const Model::GetOcJusticeJudgementDocRequest& request) const;
			GetOcJusticeLimitHighConsumeOutcome getOcJusticeLimitHighConsume(const Model::GetOcJusticeLimitHighConsumeRequest &request)const;
			void getOcJusticeLimitHighConsumeAsync(const Model::GetOcJusticeLimitHighConsumeRequest& request, const GetOcJusticeLimitHighConsumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcJusticeLimitHighConsumeOutcomeCallable getOcJusticeLimitHighConsumeCallable(const Model::GetOcJusticeLimitHighConsumeRequest& request) const;
			GetOcJusticeTerminalCaseOutcome getOcJusticeTerminalCase(const Model::GetOcJusticeTerminalCaseRequest &request)const;
			void getOcJusticeTerminalCaseAsync(const Model::GetOcJusticeTerminalCaseRequest& request, const GetOcJusticeTerminalCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcJusticeTerminalCaseOutcomeCallable getOcJusticeTerminalCaseCallable(const Model::GetOcJusticeTerminalCaseRequest& request) const;
			GetOcListedCompanyOutcome getOcListedCompany(const Model::GetOcListedCompanyRequest &request)const;
			void getOcListedCompanyAsync(const Model::GetOcListedCompanyRequest& request, const GetOcListedCompanyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcListedCompanyOutcomeCallable getOcListedCompanyCallable(const Model::GetOcListedCompanyRequest& request) const;
			GetOcNegativeAdminPunishmentOutcome getOcNegativeAdminPunishment(const Model::GetOcNegativeAdminPunishmentRequest &request)const;
			void getOcNegativeAdminPunishmentAsync(const Model::GetOcNegativeAdminPunishmentRequest& request, const GetOcNegativeAdminPunishmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcNegativeAdminPunishmentOutcomeCallable getOcNegativeAdminPunishmentCallable(const Model::GetOcNegativeAdminPunishmentRequest& request) const;
			GetOcNegativeCustomsPunishmentOutcome getOcNegativeCustomsPunishment(const Model::GetOcNegativeCustomsPunishmentRequest &request)const;
			void getOcNegativeCustomsPunishmentAsync(const Model::GetOcNegativeCustomsPunishmentRequest& request, const GetOcNegativeCustomsPunishmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcNegativeCustomsPunishmentOutcomeCallable getOcNegativeCustomsPunishmentCallable(const Model::GetOcNegativeCustomsPunishmentRequest& request) const;
			GetOcNegativeEnvironmentPunishmentOutcome getOcNegativeEnvironmentPunishment(const Model::GetOcNegativeEnvironmentPunishmentRequest &request)const;
			void getOcNegativeEnvironmentPunishmentAsync(const Model::GetOcNegativeEnvironmentPunishmentRequest& request, const GetOcNegativeEnvironmentPunishmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcNegativeEnvironmentPunishmentOutcomeCallable getOcNegativeEnvironmentPunishmentCallable(const Model::GetOcNegativeEnvironmentPunishmentRequest& request) const;
			GetOcNegativeFoodDrugPunishmentOutcome getOcNegativeFoodDrugPunishment(const Model::GetOcNegativeFoodDrugPunishmentRequest &request)const;
			void getOcNegativeFoodDrugPunishmentAsync(const Model::GetOcNegativeFoodDrugPunishmentRequest& request, const GetOcNegativeFoodDrugPunishmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcNegativeFoodDrugPunishmentOutcomeCallable getOcNegativeFoodDrugPunishmentCallable(const Model::GetOcNegativeFoodDrugPunishmentRequest& request) const;
			GetOcNegativeQualityPunishmentOutcome getOcNegativeQualityPunishment(const Model::GetOcNegativeQualityPunishmentRequest &request)const;
			void getOcNegativeQualityPunishmentAsync(const Model::GetOcNegativeQualityPunishmentRequest& request, const GetOcNegativeQualityPunishmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcNegativeQualityPunishmentOutcomeCallable getOcNegativeQualityPunishmentCallable(const Model::GetOcNegativeQualityPunishmentRequest& request) const;
			GetOcOperationBiddingOutcome getOcOperationBidding(const Model::GetOcOperationBiddingRequest &request)const;
			void getOcOperationBiddingAsync(const Model::GetOcOperationBiddingRequest& request, const GetOcOperationBiddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcOperationBiddingOutcomeCallable getOcOperationBiddingCallable(const Model::GetOcOperationBiddingRequest& request) const;
			GetOcOperationCustomsOutcome getOcOperationCustoms(const Model::GetOcOperationCustomsRequest &request)const;
			void getOcOperationCustomsAsync(const Model::GetOcOperationCustomsRequest& request, const GetOcOperationCustomsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcOperationCustomsOutcomeCallable getOcOperationCustomsCallable(const Model::GetOcOperationCustomsRequest& request) const;
			GetOcOperationPurchaseLandOutcome getOcOperationPurchaseLand(const Model::GetOcOperationPurchaseLandRequest &request)const;
			void getOcOperationPurchaseLandAsync(const Model::GetOcOperationPurchaseLandRequest& request, const GetOcOperationPurchaseLandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcOperationPurchaseLandOutcomeCallable getOcOperationPurchaseLandCallable(const Model::GetOcOperationPurchaseLandRequest& request) const;
			GetOcOperationRecruitmentOutcome getOcOperationRecruitment(const Model::GetOcOperationRecruitmentRequest &request)const;
			void getOcOperationRecruitmentAsync(const Model::GetOcOperationRecruitmentRequest& request, const GetOcOperationRecruitmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcOperationRecruitmentOutcomeCallable getOcOperationRecruitmentCallable(const Model::GetOcOperationRecruitmentRequest& request) const;
			GetOcProductBandOutcome getOcProductBand(const Model::GetOcProductBandRequest &request)const;
			void getOcProductBandAsync(const Model::GetOcProductBandRequest& request, const GetOcProductBandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcProductBandOutcomeCallable getOcProductBandCallable(const Model::GetOcProductBandRequest& request) const;
			GetOcTaxAbnormalOutcome getOcTaxAbnormal(const Model::GetOcTaxAbnormalRequest &request)const;
			void getOcTaxAbnormalAsync(const Model::GetOcTaxAbnormalRequest& request, const GetOcTaxAbnormalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcTaxAbnormalOutcomeCallable getOcTaxAbnormalCallable(const Model::GetOcTaxAbnormalRequest& request) const;
			GetOcTaxClassAOutcome getOcTaxClassA(const Model::GetOcTaxClassARequest &request)const;
			void getOcTaxClassAAsync(const Model::GetOcTaxClassARequest& request, const GetOcTaxClassAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcTaxClassAOutcomeCallable getOcTaxClassACallable(const Model::GetOcTaxClassARequest& request) const;
			GetOcTaxGeneralTaxpayerOutcome getOcTaxGeneralTaxpayer(const Model::GetOcTaxGeneralTaxpayerRequest &request)const;
			void getOcTaxGeneralTaxpayerAsync(const Model::GetOcTaxGeneralTaxpayerRequest& request, const GetOcTaxGeneralTaxpayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcTaxGeneralTaxpayerOutcomeCallable getOcTaxGeneralTaxpayerCallable(const Model::GetOcTaxGeneralTaxpayerRequest& request) const;
			GetOcTaxIllegalOutcome getOcTaxIllegal(const Model::GetOcTaxIllegalRequest &request)const;
			void getOcTaxIllegalAsync(const Model::GetOcTaxIllegalRequest& request, const GetOcTaxIllegalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcTaxIllegalOutcomeCallable getOcTaxIllegalCallable(const Model::GetOcTaxIllegalRequest& request) const;
			GetOcTaxOverdueOutcome getOcTaxOverdue(const Model::GetOcTaxOverdueRequest &request)const;
			void getOcTaxOverdueAsync(const Model::GetOcTaxOverdueRequest& request, const GetOcTaxOverdueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcTaxOverdueOutcomeCallable getOcTaxOverdueCallable(const Model::GetOcTaxOverdueRequest& request) const;
			GetOcTaxPunishmentOutcome getOcTaxPunishment(const Model::GetOcTaxPunishmentRequest &request)const;
			void getOcTaxPunishmentAsync(const Model::GetOcTaxPunishmentRequest& request, const GetOcTaxPunishmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOcTaxPunishmentOutcomeCallable getOcTaxPunishmentCallable(const Model::GetOcTaxPunishmentRequest& request) const;
			GetQccCertificationDetailByIdOutcome getQccCertificationDetailById(const Model::GetQccCertificationDetailByIdRequest &request)const;
			void getQccCertificationDetailByIdAsync(const Model::GetQccCertificationDetailByIdRequest& request, const GetQccCertificationDetailByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQccCertificationDetailByIdOutcomeCallable getQccCertificationDetailByIdCallable(const Model::GetQccCertificationDetailByIdRequest& request) const;
			GetQccSearchCertificationOutcome getQccSearchCertification(const Model::GetQccSearchCertificationRequest &request)const;
			void getQccSearchCertificationAsync(const Model::GetQccSearchCertificationRequest& request, const GetQccSearchCertificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQccSearchCertificationOutcomeCallable getQccSearchCertificationCallable(const Model::GetQccSearchCertificationRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DT_OC_INFO_DT_OC_INFOCLIENT_H_
