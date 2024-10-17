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

#ifndef ALIBABACLOUD_DOMAIN_DOMAINCLIENT_H_
#define ALIBABACLOUD_DOMAIN_DOMAINCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DomainExport.h"
#include "model/AcknowledgeTaskResultRequest.h"
#include "model/AcknowledgeTaskResultResult.h"
#include "model/BatchFuzzyMatchDomainSensitiveWordRequest.h"
#include "model/BatchFuzzyMatchDomainSensitiveWordResult.h"
#include "model/CancelDomainVerificationRequest.h"
#include "model/CancelDomainVerificationResult.h"
#include "model/CancelOperationAuditRequest.h"
#include "model/CancelOperationAuditResult.h"
#include "model/CancelQualificationVerificationRequest.h"
#include "model/CancelQualificationVerificationResult.h"
#include "model/CancelTaskRequest.h"
#include "model/CancelTaskResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/CheckDomainRequest.h"
#include "model/CheckDomainResult.h"
#include "model/CheckDomainSunriseClaimRequest.h"
#include "model/CheckDomainSunriseClaimResult.h"
#include "model/CheckIntlFixPriceDomainStatusRequest.h"
#include "model/CheckIntlFixPriceDomainStatusResult.h"
#include "model/CheckMaxYearOfServerLockRequest.h"
#include "model/CheckMaxYearOfServerLockResult.h"
#include "model/CheckProcessingServerLockApplyRequest.h"
#include "model/CheckProcessingServerLockApplyResult.h"
#include "model/CheckTransferInFeasibilityRequest.h"
#include "model/CheckTransferInFeasibilityResult.h"
#include "model/ConfirmTransferInEmailRequest.h"
#include "model/ConfirmTransferInEmailResult.h"
#include "model/CreateIntlFixedPriceDomainOrderRequest.h"
#include "model/CreateIntlFixedPriceDomainOrderResult.h"
#include "model/DeleteContactTemplatesRequest.h"
#include "model/DeleteContactTemplatesResult.h"
#include "model/DeleteDomainGroupRequest.h"
#include "model/DeleteDomainGroupResult.h"
#include "model/DeleteEmailVerificationRequest.h"
#include "model/DeleteEmailVerificationResult.h"
#include "model/DeleteRegistrantProfileRequest.h"
#include "model/DeleteRegistrantProfileResult.h"
#include "model/DomainSpecialBizCancelRequest.h"
#include "model/DomainSpecialBizCancelResult.h"
#include "model/EmailVerifiedRequest.h"
#include "model/EmailVerifiedResult.h"
#include "model/FuzzyMatchDomainSensitiveWordRequest.h"
#include "model/FuzzyMatchDomainSensitiveWordResult.h"
#include "model/GetIntlFixPriceDomainListUrlRequest.h"
#include "model/GetIntlFixPriceDomainListUrlResult.h"
#include "model/GetOperationOssUploadPolicyRequest.h"
#include "model/GetOperationOssUploadPolicyResult.h"
#include "model/GetQualificationUploadPolicyRequest.h"
#include "model/GetQualificationUploadPolicyResult.h"
#include "model/ListEmailVerificationRequest.h"
#include "model/ListEmailVerificationResult.h"
#include "model/ListServerLockRequest.h"
#include "model/ListServerLockResult.h"
#include "model/LookupTmchNoticeRequest.h"
#include "model/LookupTmchNoticeResult.h"
#include "model/PollTaskResultRequest.h"
#include "model/PollTaskResultResult.h"
#include "model/QueryAdvancedDomainListRequest.h"
#include "model/QueryAdvancedDomainListResult.h"
#include "model/QueryArtExtensionRequest.h"
#include "model/QueryArtExtensionResult.h"
#include "model/QueryChangeLogListRequest.h"
#include "model/QueryChangeLogListResult.h"
#include "model/QueryContactInfoRequest.h"
#include "model/QueryContactInfoResult.h"
#include "model/QueryDSRecordRequest.h"
#include "model/QueryDSRecordResult.h"
#include "model/QueryDnsHostRequest.h"
#include "model/QueryDnsHostResult.h"
#include "model/QueryDomainAdminDivisionRequest.h"
#include "model/QueryDomainAdminDivisionResult.h"
#include "model/QueryDomainByDomainNameRequest.h"
#include "model/QueryDomainByDomainNameResult.h"
#include "model/QueryDomainByInstanceIdRequest.h"
#include "model/QueryDomainByInstanceIdResult.h"
#include "model/QueryDomainGroupListRequest.h"
#include "model/QueryDomainGroupListResult.h"
#include "model/QueryDomainListRequest.h"
#include "model/QueryDomainListResult.h"
#include "model/QueryDomainRealNameVerificationInfoRequest.h"
#include "model/QueryDomainRealNameVerificationInfoResult.h"
#include "model/QueryDomainSpecialBizDetailRequest.h"
#include "model/QueryDomainSpecialBizDetailResult.h"
#include "model/QueryDomainSpecialBizInfoByDomainRequest.h"
#include "model/QueryDomainSpecialBizInfoByDomainResult.h"
#include "model/QueryDomainSuffixRequest.h"
#include "model/QueryDomainSuffixResult.h"
#include "model/QueryEmailVerificationRequest.h"
#include "model/QueryEmailVerificationResult.h"
#include "model/QueryEnsAssociationRequest.h"
#include "model/QueryEnsAssociationResult.h"
#include "model/QueryFailReasonForDomainRealNameVerificationRequest.h"
#include "model/QueryFailReasonForDomainRealNameVerificationResult.h"
#include "model/QueryFailReasonForRegistrantProfileRealNameVerificationRequest.h"
#include "model/QueryFailReasonForRegistrantProfileRealNameVerificationResult.h"
#include "model/QueryFailingReasonListForQualificationRequest.h"
#include "model/QueryFailingReasonListForQualificationResult.h"
#include "model/QueryIntlFixedPriceOrderListRequest.h"
#include "model/QueryIntlFixedPriceOrderListResult.h"
#include "model/QueryLocalEnsAssociationRequest.h"
#include "model/QueryLocalEnsAssociationResult.h"
#include "model/QueryOperationAuditInfoDetailRequest.h"
#include "model/QueryOperationAuditInfoDetailResult.h"
#include "model/QueryOperationAuditInfoListRequest.h"
#include "model/QueryOperationAuditInfoListResult.h"
#include "model/QueryQualificationDetailRequest.h"
#include "model/QueryQualificationDetailResult.h"
#include "model/QueryRegistrantProfileRealNameVerificationInfoRequest.h"
#include "model/QueryRegistrantProfileRealNameVerificationInfoResult.h"
#include "model/QueryRegistrantProfilesRequest.h"
#include "model/QueryRegistrantProfilesResult.h"
#include "model/QueryServerLockRequest.h"
#include "model/QueryServerLockResult.h"
#include "model/QueryTaskDetailHistoryRequest.h"
#include "model/QueryTaskDetailHistoryResult.h"
#include "model/QueryTaskDetailListRequest.h"
#include "model/QueryTaskDetailListResult.h"
#include "model/QueryTaskInfoHistoryRequest.h"
#include "model/QueryTaskInfoHistoryResult.h"
#include "model/QueryTaskListRequest.h"
#include "model/QueryTaskListResult.h"
#include "model/QueryTransferInByInstanceIdRequest.h"
#include "model/QueryTransferInByInstanceIdResult.h"
#include "model/QueryTransferInListRequest.h"
#include "model/QueryTransferInListResult.h"
#include "model/QueryTransferOutInfoRequest.h"
#include "model/QueryTransferOutInfoResult.h"
#include "model/RegistrantProfileRealNameVerificationRequest.h"
#include "model/RegistrantProfileRealNameVerificationResult.h"
#include "model/ResendEmailVerificationRequest.h"
#include "model/ResendEmailVerificationResult.h"
#include "model/ResetQualificationVerificationRequest.h"
#include "model/ResetQualificationVerificationResult.h"
#include "model/SaveBatchDomainRemarkRequest.h"
#include "model/SaveBatchDomainRemarkResult.h"
#include "model/SaveBatchTaskForApplyQuickTransferOutOpenlyRequest.h"
#include "model/SaveBatchTaskForApplyQuickTransferOutOpenlyResult.h"
#include "model/SaveBatchTaskForCreatingOrderActivateRequest.h"
#include "model/SaveBatchTaskForCreatingOrderActivateResult.h"
#include "model/SaveBatchTaskForCreatingOrderRedeemRequest.h"
#include "model/SaveBatchTaskForCreatingOrderRedeemResult.h"
#include "model/SaveBatchTaskForCreatingOrderRenewRequest.h"
#include "model/SaveBatchTaskForCreatingOrderRenewResult.h"
#include "model/SaveBatchTaskForCreatingOrderTransferRequest.h"
#include "model/SaveBatchTaskForCreatingOrderTransferResult.h"
#include "model/SaveBatchTaskForDomainNameProxyServiceRequest.h"
#include "model/SaveBatchTaskForDomainNameProxyServiceResult.h"
#include "model/SaveBatchTaskForGenerateDomainCertificateRequest.h"
#include "model/SaveBatchTaskForGenerateDomainCertificateResult.h"
#include "model/SaveBatchTaskForModifyingDomainDnsRequest.h"
#include "model/SaveBatchTaskForModifyingDomainDnsResult.h"
#include "model/SaveBatchTaskForReserveDropListDomainRequest.h"
#include "model/SaveBatchTaskForReserveDropListDomainResult.h"
#include "model/SaveBatchTaskForTransferOutByAuthorizationCodeRequest.h"
#include "model/SaveBatchTaskForTransferOutByAuthorizationCodeResult.h"
#include "model/SaveBatchTaskForTransferProhibitionLockRequest.h"
#include "model/SaveBatchTaskForTransferProhibitionLockResult.h"
#include "model/SaveBatchTaskForUpdateProhibitionLockRequest.h"
#include "model/SaveBatchTaskForUpdateProhibitionLockResult.h"
#include "model/SaveBatchTaskForUpdatingContactInfoByNewContactRequest.h"
#include "model/SaveBatchTaskForUpdatingContactInfoByNewContactResult.h"
#include "model/SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest.h"
#include "model/SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResult.h"
#include "model/SaveDomainGroupRequest.h"
#include "model/SaveDomainGroupResult.h"
#include "model/SaveRegistrantProfileRequest.h"
#include "model/SaveRegistrantProfileResult.h"
#include "model/SaveRegistrantProfileRealNameVerificationRequest.h"
#include "model/SaveRegistrantProfileRealNameVerificationResult.h"
#include "model/SaveSingleTaskForAddingDSRecordRequest.h"
#include "model/SaveSingleTaskForAddingDSRecordResult.h"
#include "model/SaveSingleTaskForApplyQuickTransferOutOpenlyRequest.h"
#include "model/SaveSingleTaskForApplyQuickTransferOutOpenlyResult.h"
#include "model/SaveSingleTaskForApprovingTransferOutRequest.h"
#include "model/SaveSingleTaskForApprovingTransferOutResult.h"
#include "model/SaveSingleTaskForAssociatingEnsRequest.h"
#include "model/SaveSingleTaskForAssociatingEnsResult.h"
#include "model/SaveSingleTaskForCancelingTransferInRequest.h"
#include "model/SaveSingleTaskForCancelingTransferInResult.h"
#include "model/SaveSingleTaskForCancelingTransferOutRequest.h"
#include "model/SaveSingleTaskForCancelingTransferOutResult.h"
#include "model/SaveSingleTaskForCreatingDnsHostRequest.h"
#include "model/SaveSingleTaskForCreatingDnsHostResult.h"
#include "model/SaveSingleTaskForCreatingOrderActivateRequest.h"
#include "model/SaveSingleTaskForCreatingOrderActivateResult.h"
#include "model/SaveSingleTaskForCreatingOrderRedeemRequest.h"
#include "model/SaveSingleTaskForCreatingOrderRedeemResult.h"
#include "model/SaveSingleTaskForCreatingOrderRenewRequest.h"
#include "model/SaveSingleTaskForCreatingOrderRenewResult.h"
#include "model/SaveSingleTaskForCreatingOrderTransferRequest.h"
#include "model/SaveSingleTaskForCreatingOrderTransferResult.h"
#include "model/SaveSingleTaskForDeletingDSRecordRequest.h"
#include "model/SaveSingleTaskForDeletingDSRecordResult.h"
#include "model/SaveSingleTaskForDeletingDnsHostRequest.h"
#include "model/SaveSingleTaskForDeletingDnsHostResult.h"
#include "model/SaveSingleTaskForDisassociatingEnsRequest.h"
#include "model/SaveSingleTaskForDisassociatingEnsResult.h"
#include "model/SaveSingleTaskForDomainNameProxyServiceRequest.h"
#include "model/SaveSingleTaskForDomainNameProxyServiceResult.h"
#include "model/SaveSingleTaskForGenerateDomainCertificateRequest.h"
#include "model/SaveSingleTaskForGenerateDomainCertificateResult.h"
#include "model/SaveSingleTaskForModifyingDSRecordRequest.h"
#include "model/SaveSingleTaskForModifyingDSRecordResult.h"
#include "model/SaveSingleTaskForModifyingDnsHostRequest.h"
#include "model/SaveSingleTaskForModifyingDnsHostResult.h"
#include "model/SaveSingleTaskForQueryingTransferAuthorizationCodeRequest.h"
#include "model/SaveSingleTaskForQueryingTransferAuthorizationCodeResult.h"
#include "model/SaveSingleTaskForReserveDropListDomainRequest.h"
#include "model/SaveSingleTaskForReserveDropListDomainResult.h"
#include "model/SaveSingleTaskForSaveArtExtensionRequest.h"
#include "model/SaveSingleTaskForSaveArtExtensionResult.h"
#include "model/SaveSingleTaskForSynchronizingDSRecordRequest.h"
#include "model/SaveSingleTaskForSynchronizingDSRecordResult.h"
#include "model/SaveSingleTaskForSynchronizingDnsHostRequest.h"
#include "model/SaveSingleTaskForSynchronizingDnsHostResult.h"
#include "model/SaveSingleTaskForTransferOutByAuthorizationCodeRequest.h"
#include "model/SaveSingleTaskForTransferOutByAuthorizationCodeResult.h"
#include "model/SaveSingleTaskForTransferProhibitionLockRequest.h"
#include "model/SaveSingleTaskForTransferProhibitionLockResult.h"
#include "model/SaveSingleTaskForUpdateProhibitionLockRequest.h"
#include "model/SaveSingleTaskForUpdateProhibitionLockResult.h"
#include "model/SaveSingleTaskForUpdatingContactInfoRequest.h"
#include "model/SaveSingleTaskForUpdatingContactInfoResult.h"
#include "model/SaveTaskForSubmittingDomainDeleteRequest.h"
#include "model/SaveTaskForSubmittingDomainDeleteResult.h"
#include "model/SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest.h"
#include "model/SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResult.h"
#include "model/SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest.h"
#include "model/SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResult.h"
#include "model/SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest.h"
#include "model/SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResult.h"
#include "model/SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest.h"
#include "model/SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResult.h"
#include "model/ScrollDomainListRequest.h"
#include "model/ScrollDomainListResult.h"
#include "model/SetDefaultRegistrantProfileRequest.h"
#include "model/SetDefaultRegistrantProfileResult.h"
#include "model/SetupDomainAutoRenewRequest.h"
#include "model/SetupDomainAutoRenewResult.h"
#include "model/SubmitDomainSpecialBizCredentialsRequest.h"
#include "model/SubmitDomainSpecialBizCredentialsResult.h"
#include "model/SubmitEmailVerificationRequest.h"
#include "model/SubmitEmailVerificationResult.h"
#include "model/SubmitOperationAuditInfoRequest.h"
#include "model/SubmitOperationAuditInfoResult.h"
#include "model/SubmitOperationCredentialsRequest.h"
#include "model/SubmitOperationCredentialsResult.h"
#include "model/TransferInCheckMailTokenRequest.h"
#include "model/TransferInCheckMailTokenResult.h"
#include "model/TransferInReenterTransferAuthorizationCodeRequest.h"
#include "model/TransferInReenterTransferAuthorizationCodeResult.h"
#include "model/TransferInRefetchWhoisEmailRequest.h"
#include "model/TransferInRefetchWhoisEmailResult.h"
#include "model/TransferInResendMailTokenRequest.h"
#include "model/TransferInResendMailTokenResult.h"
#include "model/UpdateDomainToDomainGroupRequest.h"
#include "model/UpdateDomainToDomainGroupResult.h"
#include "model/VerifyContactFieldRequest.h"
#include "model/VerifyContactFieldResult.h"
#include "model/VerifyEmailRequest.h"
#include "model/VerifyEmailResult.h"


namespace AlibabaCloud
{
	namespace Domain
	{
		class ALIBABACLOUD_DOMAIN_EXPORT DomainClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AcknowledgeTaskResultResult> AcknowledgeTaskResultOutcome;
			typedef std::future<AcknowledgeTaskResultOutcome> AcknowledgeTaskResultOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::AcknowledgeTaskResultRequest&, const AcknowledgeTaskResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcknowledgeTaskResultAsyncHandler;
			typedef Outcome<Error, Model::BatchFuzzyMatchDomainSensitiveWordResult> BatchFuzzyMatchDomainSensitiveWordOutcome;
			typedef std::future<BatchFuzzyMatchDomainSensitiveWordOutcome> BatchFuzzyMatchDomainSensitiveWordOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::BatchFuzzyMatchDomainSensitiveWordRequest&, const BatchFuzzyMatchDomainSensitiveWordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchFuzzyMatchDomainSensitiveWordAsyncHandler;
			typedef Outcome<Error, Model::CancelDomainVerificationResult> CancelDomainVerificationOutcome;
			typedef std::future<CancelDomainVerificationOutcome> CancelDomainVerificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::CancelDomainVerificationRequest&, const CancelDomainVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelDomainVerificationAsyncHandler;
			typedef Outcome<Error, Model::CancelOperationAuditResult> CancelOperationAuditOutcome;
			typedef std::future<CancelOperationAuditOutcome> CancelOperationAuditOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::CancelOperationAuditRequest&, const CancelOperationAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelOperationAuditAsyncHandler;
			typedef Outcome<Error, Model::CancelQualificationVerificationResult> CancelQualificationVerificationOutcome;
			typedef std::future<CancelQualificationVerificationOutcome> CancelQualificationVerificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::CancelQualificationVerificationRequest&, const CancelQualificationVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelQualificationVerificationAsyncHandler;
			typedef Outcome<Error, Model::CancelTaskResult> CancelTaskOutcome;
			typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::CancelTaskRequest&, const CancelTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CheckDomainResult> CheckDomainOutcome;
			typedef std::future<CheckDomainOutcome> CheckDomainOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::CheckDomainRequest&, const CheckDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDomainAsyncHandler;
			typedef Outcome<Error, Model::CheckDomainSunriseClaimResult> CheckDomainSunriseClaimOutcome;
			typedef std::future<CheckDomainSunriseClaimOutcome> CheckDomainSunriseClaimOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::CheckDomainSunriseClaimRequest&, const CheckDomainSunriseClaimOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDomainSunriseClaimAsyncHandler;
			typedef Outcome<Error, Model::CheckIntlFixPriceDomainStatusResult> CheckIntlFixPriceDomainStatusOutcome;
			typedef std::future<CheckIntlFixPriceDomainStatusOutcome> CheckIntlFixPriceDomainStatusOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::CheckIntlFixPriceDomainStatusRequest&, const CheckIntlFixPriceDomainStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckIntlFixPriceDomainStatusAsyncHandler;
			typedef Outcome<Error, Model::CheckMaxYearOfServerLockResult> CheckMaxYearOfServerLockOutcome;
			typedef std::future<CheckMaxYearOfServerLockOutcome> CheckMaxYearOfServerLockOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::CheckMaxYearOfServerLockRequest&, const CheckMaxYearOfServerLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckMaxYearOfServerLockAsyncHandler;
			typedef Outcome<Error, Model::CheckProcessingServerLockApplyResult> CheckProcessingServerLockApplyOutcome;
			typedef std::future<CheckProcessingServerLockApplyOutcome> CheckProcessingServerLockApplyOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::CheckProcessingServerLockApplyRequest&, const CheckProcessingServerLockApplyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckProcessingServerLockApplyAsyncHandler;
			typedef Outcome<Error, Model::CheckTransferInFeasibilityResult> CheckTransferInFeasibilityOutcome;
			typedef std::future<CheckTransferInFeasibilityOutcome> CheckTransferInFeasibilityOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::CheckTransferInFeasibilityRequest&, const CheckTransferInFeasibilityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckTransferInFeasibilityAsyncHandler;
			typedef Outcome<Error, Model::ConfirmTransferInEmailResult> ConfirmTransferInEmailOutcome;
			typedef std::future<ConfirmTransferInEmailOutcome> ConfirmTransferInEmailOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::ConfirmTransferInEmailRequest&, const ConfirmTransferInEmailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmTransferInEmailAsyncHandler;
			typedef Outcome<Error, Model::CreateIntlFixedPriceDomainOrderResult> CreateIntlFixedPriceDomainOrderOutcome;
			typedef std::future<CreateIntlFixedPriceDomainOrderOutcome> CreateIntlFixedPriceDomainOrderOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::CreateIntlFixedPriceDomainOrderRequest&, const CreateIntlFixedPriceDomainOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntlFixedPriceDomainOrderAsyncHandler;
			typedef Outcome<Error, Model::DeleteContactTemplatesResult> DeleteContactTemplatesOutcome;
			typedef std::future<DeleteContactTemplatesOutcome> DeleteContactTemplatesOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::DeleteContactTemplatesRequest&, const DeleteContactTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContactTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainGroupResult> DeleteDomainGroupOutcome;
			typedef std::future<DeleteDomainGroupOutcome> DeleteDomainGroupOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::DeleteDomainGroupRequest&, const DeleteDomainGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteEmailVerificationResult> DeleteEmailVerificationOutcome;
			typedef std::future<DeleteEmailVerificationOutcome> DeleteEmailVerificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::DeleteEmailVerificationRequest&, const DeleteEmailVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEmailVerificationAsyncHandler;
			typedef Outcome<Error, Model::DeleteRegistrantProfileResult> DeleteRegistrantProfileOutcome;
			typedef std::future<DeleteRegistrantProfileOutcome> DeleteRegistrantProfileOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::DeleteRegistrantProfileRequest&, const DeleteRegistrantProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRegistrantProfileAsyncHandler;
			typedef Outcome<Error, Model::DomainSpecialBizCancelResult> DomainSpecialBizCancelOutcome;
			typedef std::future<DomainSpecialBizCancelOutcome> DomainSpecialBizCancelOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::DomainSpecialBizCancelRequest&, const DomainSpecialBizCancelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DomainSpecialBizCancelAsyncHandler;
			typedef Outcome<Error, Model::EmailVerifiedResult> EmailVerifiedOutcome;
			typedef std::future<EmailVerifiedOutcome> EmailVerifiedOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::EmailVerifiedRequest&, const EmailVerifiedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EmailVerifiedAsyncHandler;
			typedef Outcome<Error, Model::FuzzyMatchDomainSensitiveWordResult> FuzzyMatchDomainSensitiveWordOutcome;
			typedef std::future<FuzzyMatchDomainSensitiveWordOutcome> FuzzyMatchDomainSensitiveWordOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::FuzzyMatchDomainSensitiveWordRequest&, const FuzzyMatchDomainSensitiveWordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FuzzyMatchDomainSensitiveWordAsyncHandler;
			typedef Outcome<Error, Model::GetIntlFixPriceDomainListUrlResult> GetIntlFixPriceDomainListUrlOutcome;
			typedef std::future<GetIntlFixPriceDomainListUrlOutcome> GetIntlFixPriceDomainListUrlOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::GetIntlFixPriceDomainListUrlRequest&, const GetIntlFixPriceDomainListUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIntlFixPriceDomainListUrlAsyncHandler;
			typedef Outcome<Error, Model::GetOperationOssUploadPolicyResult> GetOperationOssUploadPolicyOutcome;
			typedef std::future<GetOperationOssUploadPolicyOutcome> GetOperationOssUploadPolicyOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::GetOperationOssUploadPolicyRequest&, const GetOperationOssUploadPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOperationOssUploadPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetQualificationUploadPolicyResult> GetQualificationUploadPolicyOutcome;
			typedef std::future<GetQualificationUploadPolicyOutcome> GetQualificationUploadPolicyOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::GetQualificationUploadPolicyRequest&, const GetQualificationUploadPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQualificationUploadPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListEmailVerificationResult> ListEmailVerificationOutcome;
			typedef std::future<ListEmailVerificationOutcome> ListEmailVerificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::ListEmailVerificationRequest&, const ListEmailVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmailVerificationAsyncHandler;
			typedef Outcome<Error, Model::ListServerLockResult> ListServerLockOutcome;
			typedef std::future<ListServerLockOutcome> ListServerLockOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::ListServerLockRequest&, const ListServerLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServerLockAsyncHandler;
			typedef Outcome<Error, Model::LookupTmchNoticeResult> LookupTmchNoticeOutcome;
			typedef std::future<LookupTmchNoticeOutcome> LookupTmchNoticeOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::LookupTmchNoticeRequest&, const LookupTmchNoticeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LookupTmchNoticeAsyncHandler;
			typedef Outcome<Error, Model::PollTaskResultResult> PollTaskResultOutcome;
			typedef std::future<PollTaskResultOutcome> PollTaskResultOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::PollTaskResultRequest&, const PollTaskResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PollTaskResultAsyncHandler;
			typedef Outcome<Error, Model::QueryAdvancedDomainListResult> QueryAdvancedDomainListOutcome;
			typedef std::future<QueryAdvancedDomainListOutcome> QueryAdvancedDomainListOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryAdvancedDomainListRequest&, const QueryAdvancedDomainListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAdvancedDomainListAsyncHandler;
			typedef Outcome<Error, Model::QueryArtExtensionResult> QueryArtExtensionOutcome;
			typedef std::future<QueryArtExtensionOutcome> QueryArtExtensionOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryArtExtensionRequest&, const QueryArtExtensionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryArtExtensionAsyncHandler;
			typedef Outcome<Error, Model::QueryChangeLogListResult> QueryChangeLogListOutcome;
			typedef std::future<QueryChangeLogListOutcome> QueryChangeLogListOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryChangeLogListRequest&, const QueryChangeLogListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryChangeLogListAsyncHandler;
			typedef Outcome<Error, Model::QueryContactInfoResult> QueryContactInfoOutcome;
			typedef std::future<QueryContactInfoOutcome> QueryContactInfoOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryContactInfoRequest&, const QueryContactInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryContactInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryDSRecordResult> QueryDSRecordOutcome;
			typedef std::future<QueryDSRecordOutcome> QueryDSRecordOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryDSRecordRequest&, const QueryDSRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDSRecordAsyncHandler;
			typedef Outcome<Error, Model::QueryDnsHostResult> QueryDnsHostOutcome;
			typedef std::future<QueryDnsHostOutcome> QueryDnsHostOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryDnsHostRequest&, const QueryDnsHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDnsHostAsyncHandler;
			typedef Outcome<Error, Model::QueryDomainAdminDivisionResult> QueryDomainAdminDivisionOutcome;
			typedef std::future<QueryDomainAdminDivisionOutcome> QueryDomainAdminDivisionOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryDomainAdminDivisionRequest&, const QueryDomainAdminDivisionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDomainAdminDivisionAsyncHandler;
			typedef Outcome<Error, Model::QueryDomainByDomainNameResult> QueryDomainByDomainNameOutcome;
			typedef std::future<QueryDomainByDomainNameOutcome> QueryDomainByDomainNameOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryDomainByDomainNameRequest&, const QueryDomainByDomainNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDomainByDomainNameAsyncHandler;
			typedef Outcome<Error, Model::QueryDomainByInstanceIdResult> QueryDomainByInstanceIdOutcome;
			typedef std::future<QueryDomainByInstanceIdOutcome> QueryDomainByInstanceIdOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryDomainByInstanceIdRequest&, const QueryDomainByInstanceIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDomainByInstanceIdAsyncHandler;
			typedef Outcome<Error, Model::QueryDomainGroupListResult> QueryDomainGroupListOutcome;
			typedef std::future<QueryDomainGroupListOutcome> QueryDomainGroupListOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryDomainGroupListRequest&, const QueryDomainGroupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDomainGroupListAsyncHandler;
			typedef Outcome<Error, Model::QueryDomainListResult> QueryDomainListOutcome;
			typedef std::future<QueryDomainListOutcome> QueryDomainListOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryDomainListRequest&, const QueryDomainListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDomainListAsyncHandler;
			typedef Outcome<Error, Model::QueryDomainRealNameVerificationInfoResult> QueryDomainRealNameVerificationInfoOutcome;
			typedef std::future<QueryDomainRealNameVerificationInfoOutcome> QueryDomainRealNameVerificationInfoOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryDomainRealNameVerificationInfoRequest&, const QueryDomainRealNameVerificationInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDomainRealNameVerificationInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryDomainSpecialBizDetailResult> QueryDomainSpecialBizDetailOutcome;
			typedef std::future<QueryDomainSpecialBizDetailOutcome> QueryDomainSpecialBizDetailOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryDomainSpecialBizDetailRequest&, const QueryDomainSpecialBizDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDomainSpecialBizDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryDomainSpecialBizInfoByDomainResult> QueryDomainSpecialBizInfoByDomainOutcome;
			typedef std::future<QueryDomainSpecialBizInfoByDomainOutcome> QueryDomainSpecialBizInfoByDomainOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryDomainSpecialBizInfoByDomainRequest&, const QueryDomainSpecialBizInfoByDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDomainSpecialBizInfoByDomainAsyncHandler;
			typedef Outcome<Error, Model::QueryDomainSuffixResult> QueryDomainSuffixOutcome;
			typedef std::future<QueryDomainSuffixOutcome> QueryDomainSuffixOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryDomainSuffixRequest&, const QueryDomainSuffixOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDomainSuffixAsyncHandler;
			typedef Outcome<Error, Model::QueryEmailVerificationResult> QueryEmailVerificationOutcome;
			typedef std::future<QueryEmailVerificationOutcome> QueryEmailVerificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryEmailVerificationRequest&, const QueryEmailVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEmailVerificationAsyncHandler;
			typedef Outcome<Error, Model::QueryEnsAssociationResult> QueryEnsAssociationOutcome;
			typedef std::future<QueryEnsAssociationOutcome> QueryEnsAssociationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryEnsAssociationRequest&, const QueryEnsAssociationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEnsAssociationAsyncHandler;
			typedef Outcome<Error, Model::QueryFailReasonForDomainRealNameVerificationResult> QueryFailReasonForDomainRealNameVerificationOutcome;
			typedef std::future<QueryFailReasonForDomainRealNameVerificationOutcome> QueryFailReasonForDomainRealNameVerificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryFailReasonForDomainRealNameVerificationRequest&, const QueryFailReasonForDomainRealNameVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFailReasonForDomainRealNameVerificationAsyncHandler;
			typedef Outcome<Error, Model::QueryFailReasonForRegistrantProfileRealNameVerificationResult> QueryFailReasonForRegistrantProfileRealNameVerificationOutcome;
			typedef std::future<QueryFailReasonForRegistrantProfileRealNameVerificationOutcome> QueryFailReasonForRegistrantProfileRealNameVerificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryFailReasonForRegistrantProfileRealNameVerificationRequest&, const QueryFailReasonForRegistrantProfileRealNameVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFailReasonForRegistrantProfileRealNameVerificationAsyncHandler;
			typedef Outcome<Error, Model::QueryFailingReasonListForQualificationResult> QueryFailingReasonListForQualificationOutcome;
			typedef std::future<QueryFailingReasonListForQualificationOutcome> QueryFailingReasonListForQualificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryFailingReasonListForQualificationRequest&, const QueryFailingReasonListForQualificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFailingReasonListForQualificationAsyncHandler;
			typedef Outcome<Error, Model::QueryIntlFixedPriceOrderListResult> QueryIntlFixedPriceOrderListOutcome;
			typedef std::future<QueryIntlFixedPriceOrderListOutcome> QueryIntlFixedPriceOrderListOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryIntlFixedPriceOrderListRequest&, const QueryIntlFixedPriceOrderListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryIntlFixedPriceOrderListAsyncHandler;
			typedef Outcome<Error, Model::QueryLocalEnsAssociationResult> QueryLocalEnsAssociationOutcome;
			typedef std::future<QueryLocalEnsAssociationOutcome> QueryLocalEnsAssociationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryLocalEnsAssociationRequest&, const QueryLocalEnsAssociationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryLocalEnsAssociationAsyncHandler;
			typedef Outcome<Error, Model::QueryOperationAuditInfoDetailResult> QueryOperationAuditInfoDetailOutcome;
			typedef std::future<QueryOperationAuditInfoDetailOutcome> QueryOperationAuditInfoDetailOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryOperationAuditInfoDetailRequest&, const QueryOperationAuditInfoDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryOperationAuditInfoDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryOperationAuditInfoListResult> QueryOperationAuditInfoListOutcome;
			typedef std::future<QueryOperationAuditInfoListOutcome> QueryOperationAuditInfoListOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryOperationAuditInfoListRequest&, const QueryOperationAuditInfoListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryOperationAuditInfoListAsyncHandler;
			typedef Outcome<Error, Model::QueryQualificationDetailResult> QueryQualificationDetailOutcome;
			typedef std::future<QueryQualificationDetailOutcome> QueryQualificationDetailOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryQualificationDetailRequest&, const QueryQualificationDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryQualificationDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryRegistrantProfileRealNameVerificationInfoResult> QueryRegistrantProfileRealNameVerificationInfoOutcome;
			typedef std::future<QueryRegistrantProfileRealNameVerificationInfoOutcome> QueryRegistrantProfileRealNameVerificationInfoOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryRegistrantProfileRealNameVerificationInfoRequest&, const QueryRegistrantProfileRealNameVerificationInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRegistrantProfileRealNameVerificationInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryRegistrantProfilesResult> QueryRegistrantProfilesOutcome;
			typedef std::future<QueryRegistrantProfilesOutcome> QueryRegistrantProfilesOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryRegistrantProfilesRequest&, const QueryRegistrantProfilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRegistrantProfilesAsyncHandler;
			typedef Outcome<Error, Model::QueryServerLockResult> QueryServerLockOutcome;
			typedef std::future<QueryServerLockOutcome> QueryServerLockOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryServerLockRequest&, const QueryServerLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryServerLockAsyncHandler;
			typedef Outcome<Error, Model::QueryTaskDetailHistoryResult> QueryTaskDetailHistoryOutcome;
			typedef std::future<QueryTaskDetailHistoryOutcome> QueryTaskDetailHistoryOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryTaskDetailHistoryRequest&, const QueryTaskDetailHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTaskDetailHistoryAsyncHandler;
			typedef Outcome<Error, Model::QueryTaskDetailListResult> QueryTaskDetailListOutcome;
			typedef std::future<QueryTaskDetailListOutcome> QueryTaskDetailListOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryTaskDetailListRequest&, const QueryTaskDetailListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTaskDetailListAsyncHandler;
			typedef Outcome<Error, Model::QueryTaskInfoHistoryResult> QueryTaskInfoHistoryOutcome;
			typedef std::future<QueryTaskInfoHistoryOutcome> QueryTaskInfoHistoryOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryTaskInfoHistoryRequest&, const QueryTaskInfoHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTaskInfoHistoryAsyncHandler;
			typedef Outcome<Error, Model::QueryTaskListResult> QueryTaskListOutcome;
			typedef std::future<QueryTaskListOutcome> QueryTaskListOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryTaskListRequest&, const QueryTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTaskListAsyncHandler;
			typedef Outcome<Error, Model::QueryTransferInByInstanceIdResult> QueryTransferInByInstanceIdOutcome;
			typedef std::future<QueryTransferInByInstanceIdOutcome> QueryTransferInByInstanceIdOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryTransferInByInstanceIdRequest&, const QueryTransferInByInstanceIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTransferInByInstanceIdAsyncHandler;
			typedef Outcome<Error, Model::QueryTransferInListResult> QueryTransferInListOutcome;
			typedef std::future<QueryTransferInListOutcome> QueryTransferInListOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryTransferInListRequest&, const QueryTransferInListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTransferInListAsyncHandler;
			typedef Outcome<Error, Model::QueryTransferOutInfoResult> QueryTransferOutInfoOutcome;
			typedef std::future<QueryTransferOutInfoOutcome> QueryTransferOutInfoOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::QueryTransferOutInfoRequest&, const QueryTransferOutInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTransferOutInfoAsyncHandler;
			typedef Outcome<Error, Model::RegistrantProfileRealNameVerificationResult> RegistrantProfileRealNameVerificationOutcome;
			typedef std::future<RegistrantProfileRealNameVerificationOutcome> RegistrantProfileRealNameVerificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::RegistrantProfileRealNameVerificationRequest&, const RegistrantProfileRealNameVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegistrantProfileRealNameVerificationAsyncHandler;
			typedef Outcome<Error, Model::ResendEmailVerificationResult> ResendEmailVerificationOutcome;
			typedef std::future<ResendEmailVerificationOutcome> ResendEmailVerificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::ResendEmailVerificationRequest&, const ResendEmailVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResendEmailVerificationAsyncHandler;
			typedef Outcome<Error, Model::ResetQualificationVerificationResult> ResetQualificationVerificationOutcome;
			typedef std::future<ResetQualificationVerificationOutcome> ResetQualificationVerificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::ResetQualificationVerificationRequest&, const ResetQualificationVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetQualificationVerificationAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchDomainRemarkResult> SaveBatchDomainRemarkOutcome;
			typedef std::future<SaveBatchDomainRemarkOutcome> SaveBatchDomainRemarkOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchDomainRemarkRequest&, const SaveBatchDomainRemarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchDomainRemarkAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForApplyQuickTransferOutOpenlyResult> SaveBatchTaskForApplyQuickTransferOutOpenlyOutcome;
			typedef std::future<SaveBatchTaskForApplyQuickTransferOutOpenlyOutcome> SaveBatchTaskForApplyQuickTransferOutOpenlyOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForApplyQuickTransferOutOpenlyRequest&, const SaveBatchTaskForApplyQuickTransferOutOpenlyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForApplyQuickTransferOutOpenlyAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForCreatingOrderActivateResult> SaveBatchTaskForCreatingOrderActivateOutcome;
			typedef std::future<SaveBatchTaskForCreatingOrderActivateOutcome> SaveBatchTaskForCreatingOrderActivateOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForCreatingOrderActivateRequest&, const SaveBatchTaskForCreatingOrderActivateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForCreatingOrderActivateAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForCreatingOrderRedeemResult> SaveBatchTaskForCreatingOrderRedeemOutcome;
			typedef std::future<SaveBatchTaskForCreatingOrderRedeemOutcome> SaveBatchTaskForCreatingOrderRedeemOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForCreatingOrderRedeemRequest&, const SaveBatchTaskForCreatingOrderRedeemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForCreatingOrderRedeemAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForCreatingOrderRenewResult> SaveBatchTaskForCreatingOrderRenewOutcome;
			typedef std::future<SaveBatchTaskForCreatingOrderRenewOutcome> SaveBatchTaskForCreatingOrderRenewOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForCreatingOrderRenewRequest&, const SaveBatchTaskForCreatingOrderRenewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForCreatingOrderRenewAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForCreatingOrderTransferResult> SaveBatchTaskForCreatingOrderTransferOutcome;
			typedef std::future<SaveBatchTaskForCreatingOrderTransferOutcome> SaveBatchTaskForCreatingOrderTransferOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForCreatingOrderTransferRequest&, const SaveBatchTaskForCreatingOrderTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForCreatingOrderTransferAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForDomainNameProxyServiceResult> SaveBatchTaskForDomainNameProxyServiceOutcome;
			typedef std::future<SaveBatchTaskForDomainNameProxyServiceOutcome> SaveBatchTaskForDomainNameProxyServiceOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForDomainNameProxyServiceRequest&, const SaveBatchTaskForDomainNameProxyServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForDomainNameProxyServiceAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForGenerateDomainCertificateResult> SaveBatchTaskForGenerateDomainCertificateOutcome;
			typedef std::future<SaveBatchTaskForGenerateDomainCertificateOutcome> SaveBatchTaskForGenerateDomainCertificateOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForGenerateDomainCertificateRequest&, const SaveBatchTaskForGenerateDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForGenerateDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForModifyingDomainDnsResult> SaveBatchTaskForModifyingDomainDnsOutcome;
			typedef std::future<SaveBatchTaskForModifyingDomainDnsOutcome> SaveBatchTaskForModifyingDomainDnsOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForModifyingDomainDnsRequest&, const SaveBatchTaskForModifyingDomainDnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForModifyingDomainDnsAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForReserveDropListDomainResult> SaveBatchTaskForReserveDropListDomainOutcome;
			typedef std::future<SaveBatchTaskForReserveDropListDomainOutcome> SaveBatchTaskForReserveDropListDomainOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForReserveDropListDomainRequest&, const SaveBatchTaskForReserveDropListDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForReserveDropListDomainAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForTransferOutByAuthorizationCodeResult> SaveBatchTaskForTransferOutByAuthorizationCodeOutcome;
			typedef std::future<SaveBatchTaskForTransferOutByAuthorizationCodeOutcome> SaveBatchTaskForTransferOutByAuthorizationCodeOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForTransferOutByAuthorizationCodeRequest&, const SaveBatchTaskForTransferOutByAuthorizationCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForTransferOutByAuthorizationCodeAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForTransferProhibitionLockResult> SaveBatchTaskForTransferProhibitionLockOutcome;
			typedef std::future<SaveBatchTaskForTransferProhibitionLockOutcome> SaveBatchTaskForTransferProhibitionLockOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForTransferProhibitionLockRequest&, const SaveBatchTaskForTransferProhibitionLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForTransferProhibitionLockAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForUpdateProhibitionLockResult> SaveBatchTaskForUpdateProhibitionLockOutcome;
			typedef std::future<SaveBatchTaskForUpdateProhibitionLockOutcome> SaveBatchTaskForUpdateProhibitionLockOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForUpdateProhibitionLockRequest&, const SaveBatchTaskForUpdateProhibitionLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForUpdateProhibitionLockAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForUpdatingContactInfoByNewContactResult> SaveBatchTaskForUpdatingContactInfoByNewContactOutcome;
			typedef std::future<SaveBatchTaskForUpdatingContactInfoByNewContactOutcome> SaveBatchTaskForUpdatingContactInfoByNewContactOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForUpdatingContactInfoByNewContactRequest&, const SaveBatchTaskForUpdatingContactInfoByNewContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForUpdatingContactInfoByNewContactAsyncHandler;
			typedef Outcome<Error, Model::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResult> SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdOutcome;
			typedef std::future<SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdOutcome> SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest&, const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdAsyncHandler;
			typedef Outcome<Error, Model::SaveDomainGroupResult> SaveDomainGroupOutcome;
			typedef std::future<SaveDomainGroupOutcome> SaveDomainGroupOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveDomainGroupRequest&, const SaveDomainGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveDomainGroupAsyncHandler;
			typedef Outcome<Error, Model::SaveRegistrantProfileResult> SaveRegistrantProfileOutcome;
			typedef std::future<SaveRegistrantProfileOutcome> SaveRegistrantProfileOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveRegistrantProfileRequest&, const SaveRegistrantProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveRegistrantProfileAsyncHandler;
			typedef Outcome<Error, Model::SaveRegistrantProfileRealNameVerificationResult> SaveRegistrantProfileRealNameVerificationOutcome;
			typedef std::future<SaveRegistrantProfileRealNameVerificationOutcome> SaveRegistrantProfileRealNameVerificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveRegistrantProfileRealNameVerificationRequest&, const SaveRegistrantProfileRealNameVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveRegistrantProfileRealNameVerificationAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForAddingDSRecordResult> SaveSingleTaskForAddingDSRecordOutcome;
			typedef std::future<SaveSingleTaskForAddingDSRecordOutcome> SaveSingleTaskForAddingDSRecordOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForAddingDSRecordRequest&, const SaveSingleTaskForAddingDSRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForAddingDSRecordAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForApplyQuickTransferOutOpenlyResult> SaveSingleTaskForApplyQuickTransferOutOpenlyOutcome;
			typedef std::future<SaveSingleTaskForApplyQuickTransferOutOpenlyOutcome> SaveSingleTaskForApplyQuickTransferOutOpenlyOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForApplyQuickTransferOutOpenlyRequest&, const SaveSingleTaskForApplyQuickTransferOutOpenlyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForApplyQuickTransferOutOpenlyAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForApprovingTransferOutResult> SaveSingleTaskForApprovingTransferOutOutcome;
			typedef std::future<SaveSingleTaskForApprovingTransferOutOutcome> SaveSingleTaskForApprovingTransferOutOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForApprovingTransferOutRequest&, const SaveSingleTaskForApprovingTransferOutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForApprovingTransferOutAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForAssociatingEnsResult> SaveSingleTaskForAssociatingEnsOutcome;
			typedef std::future<SaveSingleTaskForAssociatingEnsOutcome> SaveSingleTaskForAssociatingEnsOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForAssociatingEnsRequest&, const SaveSingleTaskForAssociatingEnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForAssociatingEnsAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForCancelingTransferInResult> SaveSingleTaskForCancelingTransferInOutcome;
			typedef std::future<SaveSingleTaskForCancelingTransferInOutcome> SaveSingleTaskForCancelingTransferInOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForCancelingTransferInRequest&, const SaveSingleTaskForCancelingTransferInOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForCancelingTransferInAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForCancelingTransferOutResult> SaveSingleTaskForCancelingTransferOutOutcome;
			typedef std::future<SaveSingleTaskForCancelingTransferOutOutcome> SaveSingleTaskForCancelingTransferOutOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForCancelingTransferOutRequest&, const SaveSingleTaskForCancelingTransferOutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForCancelingTransferOutAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForCreatingDnsHostResult> SaveSingleTaskForCreatingDnsHostOutcome;
			typedef std::future<SaveSingleTaskForCreatingDnsHostOutcome> SaveSingleTaskForCreatingDnsHostOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForCreatingDnsHostRequest&, const SaveSingleTaskForCreatingDnsHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForCreatingDnsHostAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForCreatingOrderActivateResult> SaveSingleTaskForCreatingOrderActivateOutcome;
			typedef std::future<SaveSingleTaskForCreatingOrderActivateOutcome> SaveSingleTaskForCreatingOrderActivateOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForCreatingOrderActivateRequest&, const SaveSingleTaskForCreatingOrderActivateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForCreatingOrderActivateAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForCreatingOrderRedeemResult> SaveSingleTaskForCreatingOrderRedeemOutcome;
			typedef std::future<SaveSingleTaskForCreatingOrderRedeemOutcome> SaveSingleTaskForCreatingOrderRedeemOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForCreatingOrderRedeemRequest&, const SaveSingleTaskForCreatingOrderRedeemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForCreatingOrderRedeemAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForCreatingOrderRenewResult> SaveSingleTaskForCreatingOrderRenewOutcome;
			typedef std::future<SaveSingleTaskForCreatingOrderRenewOutcome> SaveSingleTaskForCreatingOrderRenewOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForCreatingOrderRenewRequest&, const SaveSingleTaskForCreatingOrderRenewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForCreatingOrderRenewAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForCreatingOrderTransferResult> SaveSingleTaskForCreatingOrderTransferOutcome;
			typedef std::future<SaveSingleTaskForCreatingOrderTransferOutcome> SaveSingleTaskForCreatingOrderTransferOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForCreatingOrderTransferRequest&, const SaveSingleTaskForCreatingOrderTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForCreatingOrderTransferAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForDeletingDSRecordResult> SaveSingleTaskForDeletingDSRecordOutcome;
			typedef std::future<SaveSingleTaskForDeletingDSRecordOutcome> SaveSingleTaskForDeletingDSRecordOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForDeletingDSRecordRequest&, const SaveSingleTaskForDeletingDSRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForDeletingDSRecordAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForDeletingDnsHostResult> SaveSingleTaskForDeletingDnsHostOutcome;
			typedef std::future<SaveSingleTaskForDeletingDnsHostOutcome> SaveSingleTaskForDeletingDnsHostOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForDeletingDnsHostRequest&, const SaveSingleTaskForDeletingDnsHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForDeletingDnsHostAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForDisassociatingEnsResult> SaveSingleTaskForDisassociatingEnsOutcome;
			typedef std::future<SaveSingleTaskForDisassociatingEnsOutcome> SaveSingleTaskForDisassociatingEnsOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForDisassociatingEnsRequest&, const SaveSingleTaskForDisassociatingEnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForDisassociatingEnsAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForDomainNameProxyServiceResult> SaveSingleTaskForDomainNameProxyServiceOutcome;
			typedef std::future<SaveSingleTaskForDomainNameProxyServiceOutcome> SaveSingleTaskForDomainNameProxyServiceOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForDomainNameProxyServiceRequest&, const SaveSingleTaskForDomainNameProxyServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForDomainNameProxyServiceAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForGenerateDomainCertificateResult> SaveSingleTaskForGenerateDomainCertificateOutcome;
			typedef std::future<SaveSingleTaskForGenerateDomainCertificateOutcome> SaveSingleTaskForGenerateDomainCertificateOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForGenerateDomainCertificateRequest&, const SaveSingleTaskForGenerateDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForGenerateDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForModifyingDSRecordResult> SaveSingleTaskForModifyingDSRecordOutcome;
			typedef std::future<SaveSingleTaskForModifyingDSRecordOutcome> SaveSingleTaskForModifyingDSRecordOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForModifyingDSRecordRequest&, const SaveSingleTaskForModifyingDSRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForModifyingDSRecordAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForModifyingDnsHostResult> SaveSingleTaskForModifyingDnsHostOutcome;
			typedef std::future<SaveSingleTaskForModifyingDnsHostOutcome> SaveSingleTaskForModifyingDnsHostOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForModifyingDnsHostRequest&, const SaveSingleTaskForModifyingDnsHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForModifyingDnsHostAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForQueryingTransferAuthorizationCodeResult> SaveSingleTaskForQueryingTransferAuthorizationCodeOutcome;
			typedef std::future<SaveSingleTaskForQueryingTransferAuthorizationCodeOutcome> SaveSingleTaskForQueryingTransferAuthorizationCodeOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForQueryingTransferAuthorizationCodeRequest&, const SaveSingleTaskForQueryingTransferAuthorizationCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForQueryingTransferAuthorizationCodeAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForReserveDropListDomainResult> SaveSingleTaskForReserveDropListDomainOutcome;
			typedef std::future<SaveSingleTaskForReserveDropListDomainOutcome> SaveSingleTaskForReserveDropListDomainOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForReserveDropListDomainRequest&, const SaveSingleTaskForReserveDropListDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForReserveDropListDomainAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForSaveArtExtensionResult> SaveSingleTaskForSaveArtExtensionOutcome;
			typedef std::future<SaveSingleTaskForSaveArtExtensionOutcome> SaveSingleTaskForSaveArtExtensionOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForSaveArtExtensionRequest&, const SaveSingleTaskForSaveArtExtensionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForSaveArtExtensionAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForSynchronizingDSRecordResult> SaveSingleTaskForSynchronizingDSRecordOutcome;
			typedef std::future<SaveSingleTaskForSynchronizingDSRecordOutcome> SaveSingleTaskForSynchronizingDSRecordOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForSynchronizingDSRecordRequest&, const SaveSingleTaskForSynchronizingDSRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForSynchronizingDSRecordAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForSynchronizingDnsHostResult> SaveSingleTaskForSynchronizingDnsHostOutcome;
			typedef std::future<SaveSingleTaskForSynchronizingDnsHostOutcome> SaveSingleTaskForSynchronizingDnsHostOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForSynchronizingDnsHostRequest&, const SaveSingleTaskForSynchronizingDnsHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForSynchronizingDnsHostAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForTransferOutByAuthorizationCodeResult> SaveSingleTaskForTransferOutByAuthorizationCodeOutcome;
			typedef std::future<SaveSingleTaskForTransferOutByAuthorizationCodeOutcome> SaveSingleTaskForTransferOutByAuthorizationCodeOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForTransferOutByAuthorizationCodeRequest&, const SaveSingleTaskForTransferOutByAuthorizationCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForTransferOutByAuthorizationCodeAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForTransferProhibitionLockResult> SaveSingleTaskForTransferProhibitionLockOutcome;
			typedef std::future<SaveSingleTaskForTransferProhibitionLockOutcome> SaveSingleTaskForTransferProhibitionLockOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForTransferProhibitionLockRequest&, const SaveSingleTaskForTransferProhibitionLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForTransferProhibitionLockAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForUpdateProhibitionLockResult> SaveSingleTaskForUpdateProhibitionLockOutcome;
			typedef std::future<SaveSingleTaskForUpdateProhibitionLockOutcome> SaveSingleTaskForUpdateProhibitionLockOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForUpdateProhibitionLockRequest&, const SaveSingleTaskForUpdateProhibitionLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForUpdateProhibitionLockAsyncHandler;
			typedef Outcome<Error, Model::SaveSingleTaskForUpdatingContactInfoResult> SaveSingleTaskForUpdatingContactInfoOutcome;
			typedef std::future<SaveSingleTaskForUpdatingContactInfoOutcome> SaveSingleTaskForUpdatingContactInfoOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveSingleTaskForUpdatingContactInfoRequest&, const SaveSingleTaskForUpdatingContactInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSingleTaskForUpdatingContactInfoAsyncHandler;
			typedef Outcome<Error, Model::SaveTaskForSubmittingDomainDeleteResult> SaveTaskForSubmittingDomainDeleteOutcome;
			typedef std::future<SaveTaskForSubmittingDomainDeleteOutcome> SaveTaskForSubmittingDomainDeleteOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveTaskForSubmittingDomainDeleteRequest&, const SaveTaskForSubmittingDomainDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveTaskForSubmittingDomainDeleteAsyncHandler;
			typedef Outcome<Error, Model::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResult> SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialOutcome;
			typedef std::future<SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialOutcome> SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest&, const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialAsyncHandler;
			typedef Outcome<Error, Model::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResult> SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDOutcome;
			typedef std::future<SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDOutcome> SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest&, const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDAsyncHandler;
			typedef Outcome<Error, Model::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResult> SaveTaskForUpdatingRegistrantInfoByIdentityCredentialOutcome;
			typedef std::future<SaveTaskForUpdatingRegistrantInfoByIdentityCredentialOutcome> SaveTaskForUpdatingRegistrantInfoByIdentityCredentialOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest&, const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveTaskForUpdatingRegistrantInfoByIdentityCredentialAsyncHandler;
			typedef Outcome<Error, Model::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResult> SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDOutcome;
			typedef std::future<SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDOutcome> SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest&, const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDAsyncHandler;
			typedef Outcome<Error, Model::ScrollDomainListResult> ScrollDomainListOutcome;
			typedef std::future<ScrollDomainListOutcome> ScrollDomainListOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::ScrollDomainListRequest&, const ScrollDomainListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScrollDomainListAsyncHandler;
			typedef Outcome<Error, Model::SetDefaultRegistrantProfileResult> SetDefaultRegistrantProfileOutcome;
			typedef std::future<SetDefaultRegistrantProfileOutcome> SetDefaultRegistrantProfileOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SetDefaultRegistrantProfileRequest&, const SetDefaultRegistrantProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultRegistrantProfileAsyncHandler;
			typedef Outcome<Error, Model::SetupDomainAutoRenewResult> SetupDomainAutoRenewOutcome;
			typedef std::future<SetupDomainAutoRenewOutcome> SetupDomainAutoRenewOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SetupDomainAutoRenewRequest&, const SetupDomainAutoRenewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetupDomainAutoRenewAsyncHandler;
			typedef Outcome<Error, Model::SubmitDomainSpecialBizCredentialsResult> SubmitDomainSpecialBizCredentialsOutcome;
			typedef std::future<SubmitDomainSpecialBizCredentialsOutcome> SubmitDomainSpecialBizCredentialsOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SubmitDomainSpecialBizCredentialsRequest&, const SubmitDomainSpecialBizCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDomainSpecialBizCredentialsAsyncHandler;
			typedef Outcome<Error, Model::SubmitEmailVerificationResult> SubmitEmailVerificationOutcome;
			typedef std::future<SubmitEmailVerificationOutcome> SubmitEmailVerificationOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SubmitEmailVerificationRequest&, const SubmitEmailVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitEmailVerificationAsyncHandler;
			typedef Outcome<Error, Model::SubmitOperationAuditInfoResult> SubmitOperationAuditInfoOutcome;
			typedef std::future<SubmitOperationAuditInfoOutcome> SubmitOperationAuditInfoOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SubmitOperationAuditInfoRequest&, const SubmitOperationAuditInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitOperationAuditInfoAsyncHandler;
			typedef Outcome<Error, Model::SubmitOperationCredentialsResult> SubmitOperationCredentialsOutcome;
			typedef std::future<SubmitOperationCredentialsOutcome> SubmitOperationCredentialsOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::SubmitOperationCredentialsRequest&, const SubmitOperationCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitOperationCredentialsAsyncHandler;
			typedef Outcome<Error, Model::TransferInCheckMailTokenResult> TransferInCheckMailTokenOutcome;
			typedef std::future<TransferInCheckMailTokenOutcome> TransferInCheckMailTokenOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::TransferInCheckMailTokenRequest&, const TransferInCheckMailTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferInCheckMailTokenAsyncHandler;
			typedef Outcome<Error, Model::TransferInReenterTransferAuthorizationCodeResult> TransferInReenterTransferAuthorizationCodeOutcome;
			typedef std::future<TransferInReenterTransferAuthorizationCodeOutcome> TransferInReenterTransferAuthorizationCodeOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::TransferInReenterTransferAuthorizationCodeRequest&, const TransferInReenterTransferAuthorizationCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferInReenterTransferAuthorizationCodeAsyncHandler;
			typedef Outcome<Error, Model::TransferInRefetchWhoisEmailResult> TransferInRefetchWhoisEmailOutcome;
			typedef std::future<TransferInRefetchWhoisEmailOutcome> TransferInRefetchWhoisEmailOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::TransferInRefetchWhoisEmailRequest&, const TransferInRefetchWhoisEmailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferInRefetchWhoisEmailAsyncHandler;
			typedef Outcome<Error, Model::TransferInResendMailTokenResult> TransferInResendMailTokenOutcome;
			typedef std::future<TransferInResendMailTokenOutcome> TransferInResendMailTokenOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::TransferInResendMailTokenRequest&, const TransferInResendMailTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferInResendMailTokenAsyncHandler;
			typedef Outcome<Error, Model::UpdateDomainToDomainGroupResult> UpdateDomainToDomainGroupOutcome;
			typedef std::future<UpdateDomainToDomainGroupOutcome> UpdateDomainToDomainGroupOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::UpdateDomainToDomainGroupRequest&, const UpdateDomainToDomainGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainToDomainGroupAsyncHandler;
			typedef Outcome<Error, Model::VerifyContactFieldResult> VerifyContactFieldOutcome;
			typedef std::future<VerifyContactFieldOutcome> VerifyContactFieldOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::VerifyContactFieldRequest&, const VerifyContactFieldOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyContactFieldAsyncHandler;
			typedef Outcome<Error, Model::VerifyEmailResult> VerifyEmailOutcome;
			typedef std::future<VerifyEmailOutcome> VerifyEmailOutcomeCallable;
			typedef std::function<void(const DomainClient*, const Model::VerifyEmailRequest&, const VerifyEmailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyEmailAsyncHandler;

			DomainClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DomainClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DomainClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DomainClient();
			AcknowledgeTaskResultOutcome acknowledgeTaskResult(const Model::AcknowledgeTaskResultRequest &request)const;
			void acknowledgeTaskResultAsync(const Model::AcknowledgeTaskResultRequest& request, const AcknowledgeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcknowledgeTaskResultOutcomeCallable acknowledgeTaskResultCallable(const Model::AcknowledgeTaskResultRequest& request) const;
			BatchFuzzyMatchDomainSensitiveWordOutcome batchFuzzyMatchDomainSensitiveWord(const Model::BatchFuzzyMatchDomainSensitiveWordRequest &request)const;
			void batchFuzzyMatchDomainSensitiveWordAsync(const Model::BatchFuzzyMatchDomainSensitiveWordRequest& request, const BatchFuzzyMatchDomainSensitiveWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchFuzzyMatchDomainSensitiveWordOutcomeCallable batchFuzzyMatchDomainSensitiveWordCallable(const Model::BatchFuzzyMatchDomainSensitiveWordRequest& request) const;
			CancelDomainVerificationOutcome cancelDomainVerification(const Model::CancelDomainVerificationRequest &request)const;
			void cancelDomainVerificationAsync(const Model::CancelDomainVerificationRequest& request, const CancelDomainVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelDomainVerificationOutcomeCallable cancelDomainVerificationCallable(const Model::CancelDomainVerificationRequest& request) const;
			CancelOperationAuditOutcome cancelOperationAudit(const Model::CancelOperationAuditRequest &request)const;
			void cancelOperationAuditAsync(const Model::CancelOperationAuditRequest& request, const CancelOperationAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelOperationAuditOutcomeCallable cancelOperationAuditCallable(const Model::CancelOperationAuditRequest& request) const;
			CancelQualificationVerificationOutcome cancelQualificationVerification(const Model::CancelQualificationVerificationRequest &request)const;
			void cancelQualificationVerificationAsync(const Model::CancelQualificationVerificationRequest& request, const CancelQualificationVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelQualificationVerificationOutcomeCallable cancelQualificationVerificationCallable(const Model::CancelQualificationVerificationRequest& request) const;
			CancelTaskOutcome cancelTask(const Model::CancelTaskRequest &request)const;
			void cancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelTaskOutcomeCallable cancelTaskCallable(const Model::CancelTaskRequest& request) const;
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			CheckDomainOutcome checkDomain(const Model::CheckDomainRequest &request)const;
			void checkDomainAsync(const Model::CheckDomainRequest& request, const CheckDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDomainOutcomeCallable checkDomainCallable(const Model::CheckDomainRequest& request) const;
			CheckDomainSunriseClaimOutcome checkDomainSunriseClaim(const Model::CheckDomainSunriseClaimRequest &request)const;
			void checkDomainSunriseClaimAsync(const Model::CheckDomainSunriseClaimRequest& request, const CheckDomainSunriseClaimAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDomainSunriseClaimOutcomeCallable checkDomainSunriseClaimCallable(const Model::CheckDomainSunriseClaimRequest& request) const;
			CheckIntlFixPriceDomainStatusOutcome checkIntlFixPriceDomainStatus(const Model::CheckIntlFixPriceDomainStatusRequest &request)const;
			void checkIntlFixPriceDomainStatusAsync(const Model::CheckIntlFixPriceDomainStatusRequest& request, const CheckIntlFixPriceDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckIntlFixPriceDomainStatusOutcomeCallable checkIntlFixPriceDomainStatusCallable(const Model::CheckIntlFixPriceDomainStatusRequest& request) const;
			CheckMaxYearOfServerLockOutcome checkMaxYearOfServerLock(const Model::CheckMaxYearOfServerLockRequest &request)const;
			void checkMaxYearOfServerLockAsync(const Model::CheckMaxYearOfServerLockRequest& request, const CheckMaxYearOfServerLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckMaxYearOfServerLockOutcomeCallable checkMaxYearOfServerLockCallable(const Model::CheckMaxYearOfServerLockRequest& request) const;
			CheckProcessingServerLockApplyOutcome checkProcessingServerLockApply(const Model::CheckProcessingServerLockApplyRequest &request)const;
			void checkProcessingServerLockApplyAsync(const Model::CheckProcessingServerLockApplyRequest& request, const CheckProcessingServerLockApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckProcessingServerLockApplyOutcomeCallable checkProcessingServerLockApplyCallable(const Model::CheckProcessingServerLockApplyRequest& request) const;
			CheckTransferInFeasibilityOutcome checkTransferInFeasibility(const Model::CheckTransferInFeasibilityRequest &request)const;
			void checkTransferInFeasibilityAsync(const Model::CheckTransferInFeasibilityRequest& request, const CheckTransferInFeasibilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckTransferInFeasibilityOutcomeCallable checkTransferInFeasibilityCallable(const Model::CheckTransferInFeasibilityRequest& request) const;
			ConfirmTransferInEmailOutcome confirmTransferInEmail(const Model::ConfirmTransferInEmailRequest &request)const;
			void confirmTransferInEmailAsync(const Model::ConfirmTransferInEmailRequest& request, const ConfirmTransferInEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmTransferInEmailOutcomeCallable confirmTransferInEmailCallable(const Model::ConfirmTransferInEmailRequest& request) const;
			CreateIntlFixedPriceDomainOrderOutcome createIntlFixedPriceDomainOrder(const Model::CreateIntlFixedPriceDomainOrderRequest &request)const;
			void createIntlFixedPriceDomainOrderAsync(const Model::CreateIntlFixedPriceDomainOrderRequest& request, const CreateIntlFixedPriceDomainOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIntlFixedPriceDomainOrderOutcomeCallable createIntlFixedPriceDomainOrderCallable(const Model::CreateIntlFixedPriceDomainOrderRequest& request) const;
			DeleteContactTemplatesOutcome deleteContactTemplates(const Model::DeleteContactTemplatesRequest &request)const;
			void deleteContactTemplatesAsync(const Model::DeleteContactTemplatesRequest& request, const DeleteContactTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteContactTemplatesOutcomeCallable deleteContactTemplatesCallable(const Model::DeleteContactTemplatesRequest& request) const;
			DeleteDomainGroupOutcome deleteDomainGroup(const Model::DeleteDomainGroupRequest &request)const;
			void deleteDomainGroupAsync(const Model::DeleteDomainGroupRequest& request, const DeleteDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainGroupOutcomeCallable deleteDomainGroupCallable(const Model::DeleteDomainGroupRequest& request) const;
			DeleteEmailVerificationOutcome deleteEmailVerification(const Model::DeleteEmailVerificationRequest &request)const;
			void deleteEmailVerificationAsync(const Model::DeleteEmailVerificationRequest& request, const DeleteEmailVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEmailVerificationOutcomeCallable deleteEmailVerificationCallable(const Model::DeleteEmailVerificationRequest& request) const;
			DeleteRegistrantProfileOutcome deleteRegistrantProfile(const Model::DeleteRegistrantProfileRequest &request)const;
			void deleteRegistrantProfileAsync(const Model::DeleteRegistrantProfileRequest& request, const DeleteRegistrantProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRegistrantProfileOutcomeCallable deleteRegistrantProfileCallable(const Model::DeleteRegistrantProfileRequest& request) const;
			DomainSpecialBizCancelOutcome domainSpecialBizCancel(const Model::DomainSpecialBizCancelRequest &request)const;
			void domainSpecialBizCancelAsync(const Model::DomainSpecialBizCancelRequest& request, const DomainSpecialBizCancelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DomainSpecialBizCancelOutcomeCallable domainSpecialBizCancelCallable(const Model::DomainSpecialBizCancelRequest& request) const;
			EmailVerifiedOutcome emailVerified(const Model::EmailVerifiedRequest &request)const;
			void emailVerifiedAsync(const Model::EmailVerifiedRequest& request, const EmailVerifiedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EmailVerifiedOutcomeCallable emailVerifiedCallable(const Model::EmailVerifiedRequest& request) const;
			FuzzyMatchDomainSensitiveWordOutcome fuzzyMatchDomainSensitiveWord(const Model::FuzzyMatchDomainSensitiveWordRequest &request)const;
			void fuzzyMatchDomainSensitiveWordAsync(const Model::FuzzyMatchDomainSensitiveWordRequest& request, const FuzzyMatchDomainSensitiveWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FuzzyMatchDomainSensitiveWordOutcomeCallable fuzzyMatchDomainSensitiveWordCallable(const Model::FuzzyMatchDomainSensitiveWordRequest& request) const;
			GetIntlFixPriceDomainListUrlOutcome getIntlFixPriceDomainListUrl(const Model::GetIntlFixPriceDomainListUrlRequest &request)const;
			void getIntlFixPriceDomainListUrlAsync(const Model::GetIntlFixPriceDomainListUrlRequest& request, const GetIntlFixPriceDomainListUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIntlFixPriceDomainListUrlOutcomeCallable getIntlFixPriceDomainListUrlCallable(const Model::GetIntlFixPriceDomainListUrlRequest& request) const;
			GetOperationOssUploadPolicyOutcome getOperationOssUploadPolicy(const Model::GetOperationOssUploadPolicyRequest &request)const;
			void getOperationOssUploadPolicyAsync(const Model::GetOperationOssUploadPolicyRequest& request, const GetOperationOssUploadPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOperationOssUploadPolicyOutcomeCallable getOperationOssUploadPolicyCallable(const Model::GetOperationOssUploadPolicyRequest& request) const;
			GetQualificationUploadPolicyOutcome getQualificationUploadPolicy(const Model::GetQualificationUploadPolicyRequest &request)const;
			void getQualificationUploadPolicyAsync(const Model::GetQualificationUploadPolicyRequest& request, const GetQualificationUploadPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQualificationUploadPolicyOutcomeCallable getQualificationUploadPolicyCallable(const Model::GetQualificationUploadPolicyRequest& request) const;
			ListEmailVerificationOutcome listEmailVerification(const Model::ListEmailVerificationRequest &request)const;
			void listEmailVerificationAsync(const Model::ListEmailVerificationRequest& request, const ListEmailVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmailVerificationOutcomeCallable listEmailVerificationCallable(const Model::ListEmailVerificationRequest& request) const;
			ListServerLockOutcome listServerLock(const Model::ListServerLockRequest &request)const;
			void listServerLockAsync(const Model::ListServerLockRequest& request, const ListServerLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServerLockOutcomeCallable listServerLockCallable(const Model::ListServerLockRequest& request) const;
			LookupTmchNoticeOutcome lookupTmchNotice(const Model::LookupTmchNoticeRequest &request)const;
			void lookupTmchNoticeAsync(const Model::LookupTmchNoticeRequest& request, const LookupTmchNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LookupTmchNoticeOutcomeCallable lookupTmchNoticeCallable(const Model::LookupTmchNoticeRequest& request) const;
			PollTaskResultOutcome pollTaskResult(const Model::PollTaskResultRequest &request)const;
			void pollTaskResultAsync(const Model::PollTaskResultRequest& request, const PollTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PollTaskResultOutcomeCallable pollTaskResultCallable(const Model::PollTaskResultRequest& request) const;
			QueryAdvancedDomainListOutcome queryAdvancedDomainList(const Model::QueryAdvancedDomainListRequest &request)const;
			void queryAdvancedDomainListAsync(const Model::QueryAdvancedDomainListRequest& request, const QueryAdvancedDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAdvancedDomainListOutcomeCallable queryAdvancedDomainListCallable(const Model::QueryAdvancedDomainListRequest& request) const;
			QueryArtExtensionOutcome queryArtExtension(const Model::QueryArtExtensionRequest &request)const;
			void queryArtExtensionAsync(const Model::QueryArtExtensionRequest& request, const QueryArtExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryArtExtensionOutcomeCallable queryArtExtensionCallable(const Model::QueryArtExtensionRequest& request) const;
			QueryChangeLogListOutcome queryChangeLogList(const Model::QueryChangeLogListRequest &request)const;
			void queryChangeLogListAsync(const Model::QueryChangeLogListRequest& request, const QueryChangeLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryChangeLogListOutcomeCallable queryChangeLogListCallable(const Model::QueryChangeLogListRequest& request) const;
			QueryContactInfoOutcome queryContactInfo(const Model::QueryContactInfoRequest &request)const;
			void queryContactInfoAsync(const Model::QueryContactInfoRequest& request, const QueryContactInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryContactInfoOutcomeCallable queryContactInfoCallable(const Model::QueryContactInfoRequest& request) const;
			QueryDSRecordOutcome queryDSRecord(const Model::QueryDSRecordRequest &request)const;
			void queryDSRecordAsync(const Model::QueryDSRecordRequest& request, const QueryDSRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDSRecordOutcomeCallable queryDSRecordCallable(const Model::QueryDSRecordRequest& request) const;
			QueryDnsHostOutcome queryDnsHost(const Model::QueryDnsHostRequest &request)const;
			void queryDnsHostAsync(const Model::QueryDnsHostRequest& request, const QueryDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDnsHostOutcomeCallable queryDnsHostCallable(const Model::QueryDnsHostRequest& request) const;
			QueryDomainAdminDivisionOutcome queryDomainAdminDivision(const Model::QueryDomainAdminDivisionRequest &request)const;
			void queryDomainAdminDivisionAsync(const Model::QueryDomainAdminDivisionRequest& request, const QueryDomainAdminDivisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDomainAdminDivisionOutcomeCallable queryDomainAdminDivisionCallable(const Model::QueryDomainAdminDivisionRequest& request) const;
			QueryDomainByDomainNameOutcome queryDomainByDomainName(const Model::QueryDomainByDomainNameRequest &request)const;
			void queryDomainByDomainNameAsync(const Model::QueryDomainByDomainNameRequest& request, const QueryDomainByDomainNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDomainByDomainNameOutcomeCallable queryDomainByDomainNameCallable(const Model::QueryDomainByDomainNameRequest& request) const;
			QueryDomainByInstanceIdOutcome queryDomainByInstanceId(const Model::QueryDomainByInstanceIdRequest &request)const;
			void queryDomainByInstanceIdAsync(const Model::QueryDomainByInstanceIdRequest& request, const QueryDomainByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDomainByInstanceIdOutcomeCallable queryDomainByInstanceIdCallable(const Model::QueryDomainByInstanceIdRequest& request) const;
			QueryDomainGroupListOutcome queryDomainGroupList(const Model::QueryDomainGroupListRequest &request)const;
			void queryDomainGroupListAsync(const Model::QueryDomainGroupListRequest& request, const QueryDomainGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDomainGroupListOutcomeCallable queryDomainGroupListCallable(const Model::QueryDomainGroupListRequest& request) const;
			QueryDomainListOutcome queryDomainList(const Model::QueryDomainListRequest &request)const;
			void queryDomainListAsync(const Model::QueryDomainListRequest& request, const QueryDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDomainListOutcomeCallable queryDomainListCallable(const Model::QueryDomainListRequest& request) const;
			QueryDomainRealNameVerificationInfoOutcome queryDomainRealNameVerificationInfo(const Model::QueryDomainRealNameVerificationInfoRequest &request)const;
			void queryDomainRealNameVerificationInfoAsync(const Model::QueryDomainRealNameVerificationInfoRequest& request, const QueryDomainRealNameVerificationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDomainRealNameVerificationInfoOutcomeCallable queryDomainRealNameVerificationInfoCallable(const Model::QueryDomainRealNameVerificationInfoRequest& request) const;
			QueryDomainSpecialBizDetailOutcome queryDomainSpecialBizDetail(const Model::QueryDomainSpecialBizDetailRequest &request)const;
			void queryDomainSpecialBizDetailAsync(const Model::QueryDomainSpecialBizDetailRequest& request, const QueryDomainSpecialBizDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDomainSpecialBizDetailOutcomeCallable queryDomainSpecialBizDetailCallable(const Model::QueryDomainSpecialBizDetailRequest& request) const;
			QueryDomainSpecialBizInfoByDomainOutcome queryDomainSpecialBizInfoByDomain(const Model::QueryDomainSpecialBizInfoByDomainRequest &request)const;
			void queryDomainSpecialBizInfoByDomainAsync(const Model::QueryDomainSpecialBizInfoByDomainRequest& request, const QueryDomainSpecialBizInfoByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDomainSpecialBizInfoByDomainOutcomeCallable queryDomainSpecialBizInfoByDomainCallable(const Model::QueryDomainSpecialBizInfoByDomainRequest& request) const;
			QueryDomainSuffixOutcome queryDomainSuffix(const Model::QueryDomainSuffixRequest &request)const;
			void queryDomainSuffixAsync(const Model::QueryDomainSuffixRequest& request, const QueryDomainSuffixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDomainSuffixOutcomeCallable queryDomainSuffixCallable(const Model::QueryDomainSuffixRequest& request) const;
			QueryEmailVerificationOutcome queryEmailVerification(const Model::QueryEmailVerificationRequest &request)const;
			void queryEmailVerificationAsync(const Model::QueryEmailVerificationRequest& request, const QueryEmailVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEmailVerificationOutcomeCallable queryEmailVerificationCallable(const Model::QueryEmailVerificationRequest& request) const;
			QueryEnsAssociationOutcome queryEnsAssociation(const Model::QueryEnsAssociationRequest &request)const;
			void queryEnsAssociationAsync(const Model::QueryEnsAssociationRequest& request, const QueryEnsAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEnsAssociationOutcomeCallable queryEnsAssociationCallable(const Model::QueryEnsAssociationRequest& request) const;
			QueryFailReasonForDomainRealNameVerificationOutcome queryFailReasonForDomainRealNameVerification(const Model::QueryFailReasonForDomainRealNameVerificationRequest &request)const;
			void queryFailReasonForDomainRealNameVerificationAsync(const Model::QueryFailReasonForDomainRealNameVerificationRequest& request, const QueryFailReasonForDomainRealNameVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFailReasonForDomainRealNameVerificationOutcomeCallable queryFailReasonForDomainRealNameVerificationCallable(const Model::QueryFailReasonForDomainRealNameVerificationRequest& request) const;
			QueryFailReasonForRegistrantProfileRealNameVerificationOutcome queryFailReasonForRegistrantProfileRealNameVerification(const Model::QueryFailReasonForRegistrantProfileRealNameVerificationRequest &request)const;
			void queryFailReasonForRegistrantProfileRealNameVerificationAsync(const Model::QueryFailReasonForRegistrantProfileRealNameVerificationRequest& request, const QueryFailReasonForRegistrantProfileRealNameVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFailReasonForRegistrantProfileRealNameVerificationOutcomeCallable queryFailReasonForRegistrantProfileRealNameVerificationCallable(const Model::QueryFailReasonForRegistrantProfileRealNameVerificationRequest& request) const;
			QueryFailingReasonListForQualificationOutcome queryFailingReasonListForQualification(const Model::QueryFailingReasonListForQualificationRequest &request)const;
			void queryFailingReasonListForQualificationAsync(const Model::QueryFailingReasonListForQualificationRequest& request, const QueryFailingReasonListForQualificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFailingReasonListForQualificationOutcomeCallable queryFailingReasonListForQualificationCallable(const Model::QueryFailingReasonListForQualificationRequest& request) const;
			QueryIntlFixedPriceOrderListOutcome queryIntlFixedPriceOrderList(const Model::QueryIntlFixedPriceOrderListRequest &request)const;
			void queryIntlFixedPriceOrderListAsync(const Model::QueryIntlFixedPriceOrderListRequest& request, const QueryIntlFixedPriceOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryIntlFixedPriceOrderListOutcomeCallable queryIntlFixedPriceOrderListCallable(const Model::QueryIntlFixedPriceOrderListRequest& request) const;
			QueryLocalEnsAssociationOutcome queryLocalEnsAssociation(const Model::QueryLocalEnsAssociationRequest &request)const;
			void queryLocalEnsAssociationAsync(const Model::QueryLocalEnsAssociationRequest& request, const QueryLocalEnsAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryLocalEnsAssociationOutcomeCallable queryLocalEnsAssociationCallable(const Model::QueryLocalEnsAssociationRequest& request) const;
			QueryOperationAuditInfoDetailOutcome queryOperationAuditInfoDetail(const Model::QueryOperationAuditInfoDetailRequest &request)const;
			void queryOperationAuditInfoDetailAsync(const Model::QueryOperationAuditInfoDetailRequest& request, const QueryOperationAuditInfoDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryOperationAuditInfoDetailOutcomeCallable queryOperationAuditInfoDetailCallable(const Model::QueryOperationAuditInfoDetailRequest& request) const;
			QueryOperationAuditInfoListOutcome queryOperationAuditInfoList(const Model::QueryOperationAuditInfoListRequest &request)const;
			void queryOperationAuditInfoListAsync(const Model::QueryOperationAuditInfoListRequest& request, const QueryOperationAuditInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryOperationAuditInfoListOutcomeCallable queryOperationAuditInfoListCallable(const Model::QueryOperationAuditInfoListRequest& request) const;
			QueryQualificationDetailOutcome queryQualificationDetail(const Model::QueryQualificationDetailRequest &request)const;
			void queryQualificationDetailAsync(const Model::QueryQualificationDetailRequest& request, const QueryQualificationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryQualificationDetailOutcomeCallable queryQualificationDetailCallable(const Model::QueryQualificationDetailRequest& request) const;
			QueryRegistrantProfileRealNameVerificationInfoOutcome queryRegistrantProfileRealNameVerificationInfo(const Model::QueryRegistrantProfileRealNameVerificationInfoRequest &request)const;
			void queryRegistrantProfileRealNameVerificationInfoAsync(const Model::QueryRegistrantProfileRealNameVerificationInfoRequest& request, const QueryRegistrantProfileRealNameVerificationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRegistrantProfileRealNameVerificationInfoOutcomeCallable queryRegistrantProfileRealNameVerificationInfoCallable(const Model::QueryRegistrantProfileRealNameVerificationInfoRequest& request) const;
			QueryRegistrantProfilesOutcome queryRegistrantProfiles(const Model::QueryRegistrantProfilesRequest &request)const;
			void queryRegistrantProfilesAsync(const Model::QueryRegistrantProfilesRequest& request, const QueryRegistrantProfilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRegistrantProfilesOutcomeCallable queryRegistrantProfilesCallable(const Model::QueryRegistrantProfilesRequest& request) const;
			QueryServerLockOutcome queryServerLock(const Model::QueryServerLockRequest &request)const;
			void queryServerLockAsync(const Model::QueryServerLockRequest& request, const QueryServerLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryServerLockOutcomeCallable queryServerLockCallable(const Model::QueryServerLockRequest& request) const;
			QueryTaskDetailHistoryOutcome queryTaskDetailHistory(const Model::QueryTaskDetailHistoryRequest &request)const;
			void queryTaskDetailHistoryAsync(const Model::QueryTaskDetailHistoryRequest& request, const QueryTaskDetailHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTaskDetailHistoryOutcomeCallable queryTaskDetailHistoryCallable(const Model::QueryTaskDetailHistoryRequest& request) const;
			QueryTaskDetailListOutcome queryTaskDetailList(const Model::QueryTaskDetailListRequest &request)const;
			void queryTaskDetailListAsync(const Model::QueryTaskDetailListRequest& request, const QueryTaskDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTaskDetailListOutcomeCallable queryTaskDetailListCallable(const Model::QueryTaskDetailListRequest& request) const;
			QueryTaskInfoHistoryOutcome queryTaskInfoHistory(const Model::QueryTaskInfoHistoryRequest &request)const;
			void queryTaskInfoHistoryAsync(const Model::QueryTaskInfoHistoryRequest& request, const QueryTaskInfoHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTaskInfoHistoryOutcomeCallable queryTaskInfoHistoryCallable(const Model::QueryTaskInfoHistoryRequest& request) const;
			QueryTaskListOutcome queryTaskList(const Model::QueryTaskListRequest &request)const;
			void queryTaskListAsync(const Model::QueryTaskListRequest& request, const QueryTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTaskListOutcomeCallable queryTaskListCallable(const Model::QueryTaskListRequest& request) const;
			QueryTransferInByInstanceIdOutcome queryTransferInByInstanceId(const Model::QueryTransferInByInstanceIdRequest &request)const;
			void queryTransferInByInstanceIdAsync(const Model::QueryTransferInByInstanceIdRequest& request, const QueryTransferInByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTransferInByInstanceIdOutcomeCallable queryTransferInByInstanceIdCallable(const Model::QueryTransferInByInstanceIdRequest& request) const;
			QueryTransferInListOutcome queryTransferInList(const Model::QueryTransferInListRequest &request)const;
			void queryTransferInListAsync(const Model::QueryTransferInListRequest& request, const QueryTransferInListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTransferInListOutcomeCallable queryTransferInListCallable(const Model::QueryTransferInListRequest& request) const;
			QueryTransferOutInfoOutcome queryTransferOutInfo(const Model::QueryTransferOutInfoRequest &request)const;
			void queryTransferOutInfoAsync(const Model::QueryTransferOutInfoRequest& request, const QueryTransferOutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTransferOutInfoOutcomeCallable queryTransferOutInfoCallable(const Model::QueryTransferOutInfoRequest& request) const;
			RegistrantProfileRealNameVerificationOutcome registrantProfileRealNameVerification(const Model::RegistrantProfileRealNameVerificationRequest &request)const;
			void registrantProfileRealNameVerificationAsync(const Model::RegistrantProfileRealNameVerificationRequest& request, const RegistrantProfileRealNameVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegistrantProfileRealNameVerificationOutcomeCallable registrantProfileRealNameVerificationCallable(const Model::RegistrantProfileRealNameVerificationRequest& request) const;
			ResendEmailVerificationOutcome resendEmailVerification(const Model::ResendEmailVerificationRequest &request)const;
			void resendEmailVerificationAsync(const Model::ResendEmailVerificationRequest& request, const ResendEmailVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResendEmailVerificationOutcomeCallable resendEmailVerificationCallable(const Model::ResendEmailVerificationRequest& request) const;
			ResetQualificationVerificationOutcome resetQualificationVerification(const Model::ResetQualificationVerificationRequest &request)const;
			void resetQualificationVerificationAsync(const Model::ResetQualificationVerificationRequest& request, const ResetQualificationVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetQualificationVerificationOutcomeCallable resetQualificationVerificationCallable(const Model::ResetQualificationVerificationRequest& request) const;
			SaveBatchDomainRemarkOutcome saveBatchDomainRemark(const Model::SaveBatchDomainRemarkRequest &request)const;
			void saveBatchDomainRemarkAsync(const Model::SaveBatchDomainRemarkRequest& request, const SaveBatchDomainRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchDomainRemarkOutcomeCallable saveBatchDomainRemarkCallable(const Model::SaveBatchDomainRemarkRequest& request) const;
			SaveBatchTaskForApplyQuickTransferOutOpenlyOutcome saveBatchTaskForApplyQuickTransferOutOpenly(const Model::SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &request)const;
			void saveBatchTaskForApplyQuickTransferOutOpenlyAsync(const Model::SaveBatchTaskForApplyQuickTransferOutOpenlyRequest& request, const SaveBatchTaskForApplyQuickTransferOutOpenlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForApplyQuickTransferOutOpenlyOutcomeCallable saveBatchTaskForApplyQuickTransferOutOpenlyCallable(const Model::SaveBatchTaskForApplyQuickTransferOutOpenlyRequest& request) const;
			SaveBatchTaskForCreatingOrderActivateOutcome saveBatchTaskForCreatingOrderActivate(const Model::SaveBatchTaskForCreatingOrderActivateRequest &request)const;
			void saveBatchTaskForCreatingOrderActivateAsync(const Model::SaveBatchTaskForCreatingOrderActivateRequest& request, const SaveBatchTaskForCreatingOrderActivateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForCreatingOrderActivateOutcomeCallable saveBatchTaskForCreatingOrderActivateCallable(const Model::SaveBatchTaskForCreatingOrderActivateRequest& request) const;
			SaveBatchTaskForCreatingOrderRedeemOutcome saveBatchTaskForCreatingOrderRedeem(const Model::SaveBatchTaskForCreatingOrderRedeemRequest &request)const;
			void saveBatchTaskForCreatingOrderRedeemAsync(const Model::SaveBatchTaskForCreatingOrderRedeemRequest& request, const SaveBatchTaskForCreatingOrderRedeemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForCreatingOrderRedeemOutcomeCallable saveBatchTaskForCreatingOrderRedeemCallable(const Model::SaveBatchTaskForCreatingOrderRedeemRequest& request) const;
			SaveBatchTaskForCreatingOrderRenewOutcome saveBatchTaskForCreatingOrderRenew(const Model::SaveBatchTaskForCreatingOrderRenewRequest &request)const;
			void saveBatchTaskForCreatingOrderRenewAsync(const Model::SaveBatchTaskForCreatingOrderRenewRequest& request, const SaveBatchTaskForCreatingOrderRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForCreatingOrderRenewOutcomeCallable saveBatchTaskForCreatingOrderRenewCallable(const Model::SaveBatchTaskForCreatingOrderRenewRequest& request) const;
			SaveBatchTaskForCreatingOrderTransferOutcome saveBatchTaskForCreatingOrderTransfer(const Model::SaveBatchTaskForCreatingOrderTransferRequest &request)const;
			void saveBatchTaskForCreatingOrderTransferAsync(const Model::SaveBatchTaskForCreatingOrderTransferRequest& request, const SaveBatchTaskForCreatingOrderTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForCreatingOrderTransferOutcomeCallable saveBatchTaskForCreatingOrderTransferCallable(const Model::SaveBatchTaskForCreatingOrderTransferRequest& request) const;
			SaveBatchTaskForDomainNameProxyServiceOutcome saveBatchTaskForDomainNameProxyService(const Model::SaveBatchTaskForDomainNameProxyServiceRequest &request)const;
			void saveBatchTaskForDomainNameProxyServiceAsync(const Model::SaveBatchTaskForDomainNameProxyServiceRequest& request, const SaveBatchTaskForDomainNameProxyServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForDomainNameProxyServiceOutcomeCallable saveBatchTaskForDomainNameProxyServiceCallable(const Model::SaveBatchTaskForDomainNameProxyServiceRequest& request) const;
			SaveBatchTaskForGenerateDomainCertificateOutcome saveBatchTaskForGenerateDomainCertificate(const Model::SaveBatchTaskForGenerateDomainCertificateRequest &request)const;
			void saveBatchTaskForGenerateDomainCertificateAsync(const Model::SaveBatchTaskForGenerateDomainCertificateRequest& request, const SaveBatchTaskForGenerateDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForGenerateDomainCertificateOutcomeCallable saveBatchTaskForGenerateDomainCertificateCallable(const Model::SaveBatchTaskForGenerateDomainCertificateRequest& request) const;
			SaveBatchTaskForModifyingDomainDnsOutcome saveBatchTaskForModifyingDomainDns(const Model::SaveBatchTaskForModifyingDomainDnsRequest &request)const;
			void saveBatchTaskForModifyingDomainDnsAsync(const Model::SaveBatchTaskForModifyingDomainDnsRequest& request, const SaveBatchTaskForModifyingDomainDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForModifyingDomainDnsOutcomeCallable saveBatchTaskForModifyingDomainDnsCallable(const Model::SaveBatchTaskForModifyingDomainDnsRequest& request) const;
			SaveBatchTaskForReserveDropListDomainOutcome saveBatchTaskForReserveDropListDomain(const Model::SaveBatchTaskForReserveDropListDomainRequest &request)const;
			void saveBatchTaskForReserveDropListDomainAsync(const Model::SaveBatchTaskForReserveDropListDomainRequest& request, const SaveBatchTaskForReserveDropListDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForReserveDropListDomainOutcomeCallable saveBatchTaskForReserveDropListDomainCallable(const Model::SaveBatchTaskForReserveDropListDomainRequest& request) const;
			SaveBatchTaskForTransferOutByAuthorizationCodeOutcome saveBatchTaskForTransferOutByAuthorizationCode(const Model::SaveBatchTaskForTransferOutByAuthorizationCodeRequest &request)const;
			void saveBatchTaskForTransferOutByAuthorizationCodeAsync(const Model::SaveBatchTaskForTransferOutByAuthorizationCodeRequest& request, const SaveBatchTaskForTransferOutByAuthorizationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForTransferOutByAuthorizationCodeOutcomeCallable saveBatchTaskForTransferOutByAuthorizationCodeCallable(const Model::SaveBatchTaskForTransferOutByAuthorizationCodeRequest& request) const;
			SaveBatchTaskForTransferProhibitionLockOutcome saveBatchTaskForTransferProhibitionLock(const Model::SaveBatchTaskForTransferProhibitionLockRequest &request)const;
			void saveBatchTaskForTransferProhibitionLockAsync(const Model::SaveBatchTaskForTransferProhibitionLockRequest& request, const SaveBatchTaskForTransferProhibitionLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForTransferProhibitionLockOutcomeCallable saveBatchTaskForTransferProhibitionLockCallable(const Model::SaveBatchTaskForTransferProhibitionLockRequest& request) const;
			SaveBatchTaskForUpdateProhibitionLockOutcome saveBatchTaskForUpdateProhibitionLock(const Model::SaveBatchTaskForUpdateProhibitionLockRequest &request)const;
			void saveBatchTaskForUpdateProhibitionLockAsync(const Model::SaveBatchTaskForUpdateProhibitionLockRequest& request, const SaveBatchTaskForUpdateProhibitionLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForUpdateProhibitionLockOutcomeCallable saveBatchTaskForUpdateProhibitionLockCallable(const Model::SaveBatchTaskForUpdateProhibitionLockRequest& request) const;
			SaveBatchTaskForUpdatingContactInfoByNewContactOutcome saveBatchTaskForUpdatingContactInfoByNewContact(const Model::SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request)const;
			void saveBatchTaskForUpdatingContactInfoByNewContactAsync(const Model::SaveBatchTaskForUpdatingContactInfoByNewContactRequest& request, const SaveBatchTaskForUpdatingContactInfoByNewContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForUpdatingContactInfoByNewContactOutcomeCallable saveBatchTaskForUpdatingContactInfoByNewContactCallable(const Model::SaveBatchTaskForUpdatingContactInfoByNewContactRequest& request) const;
			SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdOutcome saveBatchTaskForUpdatingContactInfoByRegistrantProfileId(const Model::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &request)const;
			void saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdAsync(const Model::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& request, const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdOutcomeCallable saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdCallable(const Model::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& request) const;
			SaveDomainGroupOutcome saveDomainGroup(const Model::SaveDomainGroupRequest &request)const;
			void saveDomainGroupAsync(const Model::SaveDomainGroupRequest& request, const SaveDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveDomainGroupOutcomeCallable saveDomainGroupCallable(const Model::SaveDomainGroupRequest& request) const;
			SaveRegistrantProfileOutcome saveRegistrantProfile(const Model::SaveRegistrantProfileRequest &request)const;
			void saveRegistrantProfileAsync(const Model::SaveRegistrantProfileRequest& request, const SaveRegistrantProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveRegistrantProfileOutcomeCallable saveRegistrantProfileCallable(const Model::SaveRegistrantProfileRequest& request) const;
			SaveRegistrantProfileRealNameVerificationOutcome saveRegistrantProfileRealNameVerification(const Model::SaveRegistrantProfileRealNameVerificationRequest &request)const;
			void saveRegistrantProfileRealNameVerificationAsync(const Model::SaveRegistrantProfileRealNameVerificationRequest& request, const SaveRegistrantProfileRealNameVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveRegistrantProfileRealNameVerificationOutcomeCallable saveRegistrantProfileRealNameVerificationCallable(const Model::SaveRegistrantProfileRealNameVerificationRequest& request) const;
			SaveSingleTaskForAddingDSRecordOutcome saveSingleTaskForAddingDSRecord(const Model::SaveSingleTaskForAddingDSRecordRequest &request)const;
			void saveSingleTaskForAddingDSRecordAsync(const Model::SaveSingleTaskForAddingDSRecordRequest& request, const SaveSingleTaskForAddingDSRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForAddingDSRecordOutcomeCallable saveSingleTaskForAddingDSRecordCallable(const Model::SaveSingleTaskForAddingDSRecordRequest& request) const;
			SaveSingleTaskForApplyQuickTransferOutOpenlyOutcome saveSingleTaskForApplyQuickTransferOutOpenly(const Model::SaveSingleTaskForApplyQuickTransferOutOpenlyRequest &request)const;
			void saveSingleTaskForApplyQuickTransferOutOpenlyAsync(const Model::SaveSingleTaskForApplyQuickTransferOutOpenlyRequest& request, const SaveSingleTaskForApplyQuickTransferOutOpenlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForApplyQuickTransferOutOpenlyOutcomeCallable saveSingleTaskForApplyQuickTransferOutOpenlyCallable(const Model::SaveSingleTaskForApplyQuickTransferOutOpenlyRequest& request) const;
			SaveSingleTaskForApprovingTransferOutOutcome saveSingleTaskForApprovingTransferOut(const Model::SaveSingleTaskForApprovingTransferOutRequest &request)const;
			void saveSingleTaskForApprovingTransferOutAsync(const Model::SaveSingleTaskForApprovingTransferOutRequest& request, const SaveSingleTaskForApprovingTransferOutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForApprovingTransferOutOutcomeCallable saveSingleTaskForApprovingTransferOutCallable(const Model::SaveSingleTaskForApprovingTransferOutRequest& request) const;
			SaveSingleTaskForAssociatingEnsOutcome saveSingleTaskForAssociatingEns(const Model::SaveSingleTaskForAssociatingEnsRequest &request)const;
			void saveSingleTaskForAssociatingEnsAsync(const Model::SaveSingleTaskForAssociatingEnsRequest& request, const SaveSingleTaskForAssociatingEnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForAssociatingEnsOutcomeCallable saveSingleTaskForAssociatingEnsCallable(const Model::SaveSingleTaskForAssociatingEnsRequest& request) const;
			SaveSingleTaskForCancelingTransferInOutcome saveSingleTaskForCancelingTransferIn(const Model::SaveSingleTaskForCancelingTransferInRequest &request)const;
			void saveSingleTaskForCancelingTransferInAsync(const Model::SaveSingleTaskForCancelingTransferInRequest& request, const SaveSingleTaskForCancelingTransferInAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForCancelingTransferInOutcomeCallable saveSingleTaskForCancelingTransferInCallable(const Model::SaveSingleTaskForCancelingTransferInRequest& request) const;
			SaveSingleTaskForCancelingTransferOutOutcome saveSingleTaskForCancelingTransferOut(const Model::SaveSingleTaskForCancelingTransferOutRequest &request)const;
			void saveSingleTaskForCancelingTransferOutAsync(const Model::SaveSingleTaskForCancelingTransferOutRequest& request, const SaveSingleTaskForCancelingTransferOutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForCancelingTransferOutOutcomeCallable saveSingleTaskForCancelingTransferOutCallable(const Model::SaveSingleTaskForCancelingTransferOutRequest& request) const;
			SaveSingleTaskForCreatingDnsHostOutcome saveSingleTaskForCreatingDnsHost(const Model::SaveSingleTaskForCreatingDnsHostRequest &request)const;
			void saveSingleTaskForCreatingDnsHostAsync(const Model::SaveSingleTaskForCreatingDnsHostRequest& request, const SaveSingleTaskForCreatingDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForCreatingDnsHostOutcomeCallable saveSingleTaskForCreatingDnsHostCallable(const Model::SaveSingleTaskForCreatingDnsHostRequest& request) const;
			SaveSingleTaskForCreatingOrderActivateOutcome saveSingleTaskForCreatingOrderActivate(const Model::SaveSingleTaskForCreatingOrderActivateRequest &request)const;
			void saveSingleTaskForCreatingOrderActivateAsync(const Model::SaveSingleTaskForCreatingOrderActivateRequest& request, const SaveSingleTaskForCreatingOrderActivateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForCreatingOrderActivateOutcomeCallable saveSingleTaskForCreatingOrderActivateCallable(const Model::SaveSingleTaskForCreatingOrderActivateRequest& request) const;
			SaveSingleTaskForCreatingOrderRedeemOutcome saveSingleTaskForCreatingOrderRedeem(const Model::SaveSingleTaskForCreatingOrderRedeemRequest &request)const;
			void saveSingleTaskForCreatingOrderRedeemAsync(const Model::SaveSingleTaskForCreatingOrderRedeemRequest& request, const SaveSingleTaskForCreatingOrderRedeemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForCreatingOrderRedeemOutcomeCallable saveSingleTaskForCreatingOrderRedeemCallable(const Model::SaveSingleTaskForCreatingOrderRedeemRequest& request) const;
			SaveSingleTaskForCreatingOrderRenewOutcome saveSingleTaskForCreatingOrderRenew(const Model::SaveSingleTaskForCreatingOrderRenewRequest &request)const;
			void saveSingleTaskForCreatingOrderRenewAsync(const Model::SaveSingleTaskForCreatingOrderRenewRequest& request, const SaveSingleTaskForCreatingOrderRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForCreatingOrderRenewOutcomeCallable saveSingleTaskForCreatingOrderRenewCallable(const Model::SaveSingleTaskForCreatingOrderRenewRequest& request) const;
			SaveSingleTaskForCreatingOrderTransferOutcome saveSingleTaskForCreatingOrderTransfer(const Model::SaveSingleTaskForCreatingOrderTransferRequest &request)const;
			void saveSingleTaskForCreatingOrderTransferAsync(const Model::SaveSingleTaskForCreatingOrderTransferRequest& request, const SaveSingleTaskForCreatingOrderTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForCreatingOrderTransferOutcomeCallable saveSingleTaskForCreatingOrderTransferCallable(const Model::SaveSingleTaskForCreatingOrderTransferRequest& request) const;
			SaveSingleTaskForDeletingDSRecordOutcome saveSingleTaskForDeletingDSRecord(const Model::SaveSingleTaskForDeletingDSRecordRequest &request)const;
			void saveSingleTaskForDeletingDSRecordAsync(const Model::SaveSingleTaskForDeletingDSRecordRequest& request, const SaveSingleTaskForDeletingDSRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForDeletingDSRecordOutcomeCallable saveSingleTaskForDeletingDSRecordCallable(const Model::SaveSingleTaskForDeletingDSRecordRequest& request) const;
			SaveSingleTaskForDeletingDnsHostOutcome saveSingleTaskForDeletingDnsHost(const Model::SaveSingleTaskForDeletingDnsHostRequest &request)const;
			void saveSingleTaskForDeletingDnsHostAsync(const Model::SaveSingleTaskForDeletingDnsHostRequest& request, const SaveSingleTaskForDeletingDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForDeletingDnsHostOutcomeCallable saveSingleTaskForDeletingDnsHostCallable(const Model::SaveSingleTaskForDeletingDnsHostRequest& request) const;
			SaveSingleTaskForDisassociatingEnsOutcome saveSingleTaskForDisassociatingEns(const Model::SaveSingleTaskForDisassociatingEnsRequest &request)const;
			void saveSingleTaskForDisassociatingEnsAsync(const Model::SaveSingleTaskForDisassociatingEnsRequest& request, const SaveSingleTaskForDisassociatingEnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForDisassociatingEnsOutcomeCallable saveSingleTaskForDisassociatingEnsCallable(const Model::SaveSingleTaskForDisassociatingEnsRequest& request) const;
			SaveSingleTaskForDomainNameProxyServiceOutcome saveSingleTaskForDomainNameProxyService(const Model::SaveSingleTaskForDomainNameProxyServiceRequest &request)const;
			void saveSingleTaskForDomainNameProxyServiceAsync(const Model::SaveSingleTaskForDomainNameProxyServiceRequest& request, const SaveSingleTaskForDomainNameProxyServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForDomainNameProxyServiceOutcomeCallable saveSingleTaskForDomainNameProxyServiceCallable(const Model::SaveSingleTaskForDomainNameProxyServiceRequest& request) const;
			SaveSingleTaskForGenerateDomainCertificateOutcome saveSingleTaskForGenerateDomainCertificate(const Model::SaveSingleTaskForGenerateDomainCertificateRequest &request)const;
			void saveSingleTaskForGenerateDomainCertificateAsync(const Model::SaveSingleTaskForGenerateDomainCertificateRequest& request, const SaveSingleTaskForGenerateDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForGenerateDomainCertificateOutcomeCallable saveSingleTaskForGenerateDomainCertificateCallable(const Model::SaveSingleTaskForGenerateDomainCertificateRequest& request) const;
			SaveSingleTaskForModifyingDSRecordOutcome saveSingleTaskForModifyingDSRecord(const Model::SaveSingleTaskForModifyingDSRecordRequest &request)const;
			void saveSingleTaskForModifyingDSRecordAsync(const Model::SaveSingleTaskForModifyingDSRecordRequest& request, const SaveSingleTaskForModifyingDSRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForModifyingDSRecordOutcomeCallable saveSingleTaskForModifyingDSRecordCallable(const Model::SaveSingleTaskForModifyingDSRecordRequest& request) const;
			SaveSingleTaskForModifyingDnsHostOutcome saveSingleTaskForModifyingDnsHost(const Model::SaveSingleTaskForModifyingDnsHostRequest &request)const;
			void saveSingleTaskForModifyingDnsHostAsync(const Model::SaveSingleTaskForModifyingDnsHostRequest& request, const SaveSingleTaskForModifyingDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForModifyingDnsHostOutcomeCallable saveSingleTaskForModifyingDnsHostCallable(const Model::SaveSingleTaskForModifyingDnsHostRequest& request) const;
			SaveSingleTaskForQueryingTransferAuthorizationCodeOutcome saveSingleTaskForQueryingTransferAuthorizationCode(const Model::SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &request)const;
			void saveSingleTaskForQueryingTransferAuthorizationCodeAsync(const Model::SaveSingleTaskForQueryingTransferAuthorizationCodeRequest& request, const SaveSingleTaskForQueryingTransferAuthorizationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForQueryingTransferAuthorizationCodeOutcomeCallable saveSingleTaskForQueryingTransferAuthorizationCodeCallable(const Model::SaveSingleTaskForQueryingTransferAuthorizationCodeRequest& request) const;
			SaveSingleTaskForReserveDropListDomainOutcome saveSingleTaskForReserveDropListDomain(const Model::SaveSingleTaskForReserveDropListDomainRequest &request)const;
			void saveSingleTaskForReserveDropListDomainAsync(const Model::SaveSingleTaskForReserveDropListDomainRequest& request, const SaveSingleTaskForReserveDropListDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForReserveDropListDomainOutcomeCallable saveSingleTaskForReserveDropListDomainCallable(const Model::SaveSingleTaskForReserveDropListDomainRequest& request) const;
			SaveSingleTaskForSaveArtExtensionOutcome saveSingleTaskForSaveArtExtension(const Model::SaveSingleTaskForSaveArtExtensionRequest &request)const;
			void saveSingleTaskForSaveArtExtensionAsync(const Model::SaveSingleTaskForSaveArtExtensionRequest& request, const SaveSingleTaskForSaveArtExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForSaveArtExtensionOutcomeCallable saveSingleTaskForSaveArtExtensionCallable(const Model::SaveSingleTaskForSaveArtExtensionRequest& request) const;
			SaveSingleTaskForSynchronizingDSRecordOutcome saveSingleTaskForSynchronizingDSRecord(const Model::SaveSingleTaskForSynchronizingDSRecordRequest &request)const;
			void saveSingleTaskForSynchronizingDSRecordAsync(const Model::SaveSingleTaskForSynchronizingDSRecordRequest& request, const SaveSingleTaskForSynchronizingDSRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForSynchronizingDSRecordOutcomeCallable saveSingleTaskForSynchronizingDSRecordCallable(const Model::SaveSingleTaskForSynchronizingDSRecordRequest& request) const;
			SaveSingleTaskForSynchronizingDnsHostOutcome saveSingleTaskForSynchronizingDnsHost(const Model::SaveSingleTaskForSynchronizingDnsHostRequest &request)const;
			void saveSingleTaskForSynchronizingDnsHostAsync(const Model::SaveSingleTaskForSynchronizingDnsHostRequest& request, const SaveSingleTaskForSynchronizingDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForSynchronizingDnsHostOutcomeCallable saveSingleTaskForSynchronizingDnsHostCallable(const Model::SaveSingleTaskForSynchronizingDnsHostRequest& request) const;
			SaveSingleTaskForTransferOutByAuthorizationCodeOutcome saveSingleTaskForTransferOutByAuthorizationCode(const Model::SaveSingleTaskForTransferOutByAuthorizationCodeRequest &request)const;
			void saveSingleTaskForTransferOutByAuthorizationCodeAsync(const Model::SaveSingleTaskForTransferOutByAuthorizationCodeRequest& request, const SaveSingleTaskForTransferOutByAuthorizationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForTransferOutByAuthorizationCodeOutcomeCallable saveSingleTaskForTransferOutByAuthorizationCodeCallable(const Model::SaveSingleTaskForTransferOutByAuthorizationCodeRequest& request) const;
			SaveSingleTaskForTransferProhibitionLockOutcome saveSingleTaskForTransferProhibitionLock(const Model::SaveSingleTaskForTransferProhibitionLockRequest &request)const;
			void saveSingleTaskForTransferProhibitionLockAsync(const Model::SaveSingleTaskForTransferProhibitionLockRequest& request, const SaveSingleTaskForTransferProhibitionLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForTransferProhibitionLockOutcomeCallable saveSingleTaskForTransferProhibitionLockCallable(const Model::SaveSingleTaskForTransferProhibitionLockRequest& request) const;
			SaveSingleTaskForUpdateProhibitionLockOutcome saveSingleTaskForUpdateProhibitionLock(const Model::SaveSingleTaskForUpdateProhibitionLockRequest &request)const;
			void saveSingleTaskForUpdateProhibitionLockAsync(const Model::SaveSingleTaskForUpdateProhibitionLockRequest& request, const SaveSingleTaskForUpdateProhibitionLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForUpdateProhibitionLockOutcomeCallable saveSingleTaskForUpdateProhibitionLockCallable(const Model::SaveSingleTaskForUpdateProhibitionLockRequest& request) const;
			SaveSingleTaskForUpdatingContactInfoOutcome saveSingleTaskForUpdatingContactInfo(const Model::SaveSingleTaskForUpdatingContactInfoRequest &request)const;
			void saveSingleTaskForUpdatingContactInfoAsync(const Model::SaveSingleTaskForUpdatingContactInfoRequest& request, const SaveSingleTaskForUpdatingContactInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSingleTaskForUpdatingContactInfoOutcomeCallable saveSingleTaskForUpdatingContactInfoCallable(const Model::SaveSingleTaskForUpdatingContactInfoRequest& request) const;
			SaveTaskForSubmittingDomainDeleteOutcome saveTaskForSubmittingDomainDelete(const Model::SaveTaskForSubmittingDomainDeleteRequest &request)const;
			void saveTaskForSubmittingDomainDeleteAsync(const Model::SaveTaskForSubmittingDomainDeleteRequest& request, const SaveTaskForSubmittingDomainDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveTaskForSubmittingDomainDeleteOutcomeCallable saveTaskForSubmittingDomainDeleteCallable(const Model::SaveTaskForSubmittingDomainDeleteRequest& request) const;
			SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialOutcome saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(const Model::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request)const;
			void saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialAsync(const Model::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& request, const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialOutcomeCallable saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialCallable(const Model::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& request) const;
			SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDOutcome saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(const Model::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request)const;
			void saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDAsync(const Model::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest& request, const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDOutcomeCallable saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDCallable(const Model::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest& request) const;
			SaveTaskForUpdatingRegistrantInfoByIdentityCredentialOutcome saveTaskForUpdatingRegistrantInfoByIdentityCredential(const Model::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request)const;
			void saveTaskForUpdatingRegistrantInfoByIdentityCredentialAsync(const Model::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& request, const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveTaskForUpdatingRegistrantInfoByIdentityCredentialOutcomeCallable saveTaskForUpdatingRegistrantInfoByIdentityCredentialCallable(const Model::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& request) const;
			SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDOutcome saveTaskForUpdatingRegistrantInfoByRegistrantProfileID(const Model::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &request)const;
			void saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDAsync(const Model::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& request, const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDOutcomeCallable saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDCallable(const Model::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& request) const;
			ScrollDomainListOutcome scrollDomainList(const Model::ScrollDomainListRequest &request)const;
			void scrollDomainListAsync(const Model::ScrollDomainListRequest& request, const ScrollDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScrollDomainListOutcomeCallable scrollDomainListCallable(const Model::ScrollDomainListRequest& request) const;
			SetDefaultRegistrantProfileOutcome setDefaultRegistrantProfile(const Model::SetDefaultRegistrantProfileRequest &request)const;
			void setDefaultRegistrantProfileAsync(const Model::SetDefaultRegistrantProfileRequest& request, const SetDefaultRegistrantProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDefaultRegistrantProfileOutcomeCallable setDefaultRegistrantProfileCallable(const Model::SetDefaultRegistrantProfileRequest& request) const;
			SetupDomainAutoRenewOutcome setupDomainAutoRenew(const Model::SetupDomainAutoRenewRequest &request)const;
			void setupDomainAutoRenewAsync(const Model::SetupDomainAutoRenewRequest& request, const SetupDomainAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetupDomainAutoRenewOutcomeCallable setupDomainAutoRenewCallable(const Model::SetupDomainAutoRenewRequest& request) const;
			SubmitDomainSpecialBizCredentialsOutcome submitDomainSpecialBizCredentials(const Model::SubmitDomainSpecialBizCredentialsRequest &request)const;
			void submitDomainSpecialBizCredentialsAsync(const Model::SubmitDomainSpecialBizCredentialsRequest& request, const SubmitDomainSpecialBizCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitDomainSpecialBizCredentialsOutcomeCallable submitDomainSpecialBizCredentialsCallable(const Model::SubmitDomainSpecialBizCredentialsRequest& request) const;
			SubmitEmailVerificationOutcome submitEmailVerification(const Model::SubmitEmailVerificationRequest &request)const;
			void submitEmailVerificationAsync(const Model::SubmitEmailVerificationRequest& request, const SubmitEmailVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitEmailVerificationOutcomeCallable submitEmailVerificationCallable(const Model::SubmitEmailVerificationRequest& request) const;
			SubmitOperationAuditInfoOutcome submitOperationAuditInfo(const Model::SubmitOperationAuditInfoRequest &request)const;
			void submitOperationAuditInfoAsync(const Model::SubmitOperationAuditInfoRequest& request, const SubmitOperationAuditInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitOperationAuditInfoOutcomeCallable submitOperationAuditInfoCallable(const Model::SubmitOperationAuditInfoRequest& request) const;
			SubmitOperationCredentialsOutcome submitOperationCredentials(const Model::SubmitOperationCredentialsRequest &request)const;
			void submitOperationCredentialsAsync(const Model::SubmitOperationCredentialsRequest& request, const SubmitOperationCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitOperationCredentialsOutcomeCallable submitOperationCredentialsCallable(const Model::SubmitOperationCredentialsRequest& request) const;
			TransferInCheckMailTokenOutcome transferInCheckMailToken(const Model::TransferInCheckMailTokenRequest &request)const;
			void transferInCheckMailTokenAsync(const Model::TransferInCheckMailTokenRequest& request, const TransferInCheckMailTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferInCheckMailTokenOutcomeCallable transferInCheckMailTokenCallable(const Model::TransferInCheckMailTokenRequest& request) const;
			TransferInReenterTransferAuthorizationCodeOutcome transferInReenterTransferAuthorizationCode(const Model::TransferInReenterTransferAuthorizationCodeRequest &request)const;
			void transferInReenterTransferAuthorizationCodeAsync(const Model::TransferInReenterTransferAuthorizationCodeRequest& request, const TransferInReenterTransferAuthorizationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferInReenterTransferAuthorizationCodeOutcomeCallable transferInReenterTransferAuthorizationCodeCallable(const Model::TransferInReenterTransferAuthorizationCodeRequest& request) const;
			TransferInRefetchWhoisEmailOutcome transferInRefetchWhoisEmail(const Model::TransferInRefetchWhoisEmailRequest &request)const;
			void transferInRefetchWhoisEmailAsync(const Model::TransferInRefetchWhoisEmailRequest& request, const TransferInRefetchWhoisEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferInRefetchWhoisEmailOutcomeCallable transferInRefetchWhoisEmailCallable(const Model::TransferInRefetchWhoisEmailRequest& request) const;
			TransferInResendMailTokenOutcome transferInResendMailToken(const Model::TransferInResendMailTokenRequest &request)const;
			void transferInResendMailTokenAsync(const Model::TransferInResendMailTokenRequest& request, const TransferInResendMailTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferInResendMailTokenOutcomeCallable transferInResendMailTokenCallable(const Model::TransferInResendMailTokenRequest& request) const;
			UpdateDomainToDomainGroupOutcome updateDomainToDomainGroup(const Model::UpdateDomainToDomainGroupRequest &request)const;
			void updateDomainToDomainGroupAsync(const Model::UpdateDomainToDomainGroupRequest& request, const UpdateDomainToDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDomainToDomainGroupOutcomeCallable updateDomainToDomainGroupCallable(const Model::UpdateDomainToDomainGroupRequest& request) const;
			VerifyContactFieldOutcome verifyContactField(const Model::VerifyContactFieldRequest &request)const;
			void verifyContactFieldAsync(const Model::VerifyContactFieldRequest& request, const VerifyContactFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyContactFieldOutcomeCallable verifyContactFieldCallable(const Model::VerifyContactFieldRequest& request) const;
			VerifyEmailOutcome verifyEmail(const Model::VerifyEmailRequest &request)const;
			void verifyEmailAsync(const Model::VerifyEmailRequest& request, const VerifyEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyEmailOutcomeCallable verifyEmailCallable(const Model::VerifyEmailRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DOMAIN_DOMAINCLIENT_H_
