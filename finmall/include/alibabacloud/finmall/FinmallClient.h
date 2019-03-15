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

#ifndef ALIBABACLOUD_FINMALL_FINMALLCLIENT_H_
#define ALIBABACLOUD_FINMALL_FINMALLCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "FinmallExport.h"
#include "model/GetCreditDetailRequest.h"
#include "model/GetCreditDetailResult.h"
#include "model/GetDocumentDownloadUrlRequest.h"
#include "model/GetDocumentDownloadUrlResult.h"
#include "model/GetCreditWithdrawRecordRequest.h"
#include "model/GetCreditWithdrawRecordResult.h"
#include "model/GetCustomerVerifyInfoRequest.h"
#include "model/GetCustomerVerifyInfoResult.h"
#include "model/QueryFundPartyListRequest.h"
#include "model/QueryFundPartyListResult.h"
#include "model/GetCreditStatusRequest.h"
#include "model/GetCreditStatusResult.h"
#include "model/SaveAuthenticationInfoRequest.h"
#include "model/SaveAuthenticationInfoResult.h"
#include "model/GetTradeDataRequest.h"
#include "model/GetTradeDataResult.h"
#include "model/UploadCustomIDImageRequest.h"
#include "model/UploadCustomIDImageResult.h"
#include "model/QuerySignResultRequest.h"
#include "model/QuerySignResultResult.h"
#include "model/ApplyForLoanRequest.h"
#include "model/ApplyForLoanResult.h"
#include "model/GetZhimaScoreRequest.h"
#include "model/GetZhimaScoreResult.h"
#include "model/PayForOrderRequest.h"
#include "model/PayForOrderResult.h"
#include "model/QueryTrialRecordsRequest.h"
#include "model/QueryTrialRecordsResult.h"
#include "model/GetCurrentTermRepayInfoRequest.h"
#include "model/GetCurrentTermRepayInfoResult.h"
#include "model/UpdateAuthenticationInfoRequest.h"
#include "model/UpdateAuthenticationInfoResult.h"
#include "model/UpdateEnterpriseCustomInfoRequest.h"
#include "model/UpdateEnterpriseCustomInfoResult.h"
#include "model/GetCreditSignatureInfoRequest.h"
#include "model/GetCreditSignatureInfoResult.h"
#include "model/AddTrialRecordRequest.h"
#include "model/AddTrialRecordResult.h"
#include "model/GetAuthorizeCreditQueryRequest.h"
#include "model/GetAuthorizeCreditQueryResult.h"
#include "model/CancelCreditRequest.h"
#include "model/CancelCreditResult.h"
#include "model/GetCustomStatusInfoRequest.h"
#include "model/GetCustomStatusInfoResult.h"
#include "model/GetOverdueRecordListRequest.h"
#include "model/GetOverdueRecordListResult.h"
#include "model/GetProductDetailRequest.h"
#include "model/GetProductDetailResult.h"
#include "model/VerifyCustomerRequest.h"
#include "model/VerifyCustomerResult.h"
#include "model/SignLoanAgreementRequest.h"
#include "model/SignLoanAgreementResult.h"
#include "model/AddCustomInfoRequest.h"
#include "model/AddCustomInfoResult.h"
#include "model/GetProductListRequest.h"
#include "model/GetProductListResult.h"
#include "model/GetLoanAgreementRequest.h"
#include "model/GetLoanAgreementResult.h"
#include "model/GetUserInfoAuthorizationAgreementRequest.h"
#include "model/GetUserInfoAuthorizationAgreementResult.h"
#include "model/SignedPageResultRequest.h"
#include "model/SignedPageResultResult.h"
#include "model/GetLoanApplyRecordListRequest.h"
#include "model/GetLoanApplyRecordListResult.h"
#include "model/GetLatestOverdueRecordRequest.h"
#include "model/GetLatestOverdueRecordResult.h"
#include "model/GetCreditListRequest.h"
#include "model/GetCreditListResult.h"
#include "model/SignResultNotifyRequest.h"
#include "model/SignResultNotifyResult.h"
#include "model/VerifySMSTokenRequest.h"
#include "model/VerifySMSTokenResult.h"
#include "model/GetCreditRepayListRequest.h"
#include "model/GetCreditRepayListResult.h"
#include "model/GetSignContractUrlRequest.h"
#include "model/GetSignContractUrlResult.h"
#include "model/GetRepayPlanTrialRequest.h"
#include "model/GetRepayPlanTrialResult.h"


namespace AlibabaCloud
{
	namespace Finmall
	{
		class ALIBABACLOUD_FINMALL_EXPORT FinmallClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetCreditDetailResult> GetCreditDetailOutcome;
			typedef std::future<GetCreditDetailOutcome> GetCreditDetailOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetCreditDetailRequest&, const GetCreditDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCreditDetailAsyncHandler;
			typedef Outcome<Error, Model::GetDocumentDownloadUrlResult> GetDocumentDownloadUrlOutcome;
			typedef std::future<GetDocumentDownloadUrlOutcome> GetDocumentDownloadUrlOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetDocumentDownloadUrlRequest&, const GetDocumentDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDocumentDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetCreditWithdrawRecordResult> GetCreditWithdrawRecordOutcome;
			typedef std::future<GetCreditWithdrawRecordOutcome> GetCreditWithdrawRecordOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetCreditWithdrawRecordRequest&, const GetCreditWithdrawRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCreditWithdrawRecordAsyncHandler;
			typedef Outcome<Error, Model::GetCustomerVerifyInfoResult> GetCustomerVerifyInfoOutcome;
			typedef std::future<GetCustomerVerifyInfoOutcome> GetCustomerVerifyInfoOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetCustomerVerifyInfoRequest&, const GetCustomerVerifyInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomerVerifyInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryFundPartyListResult> QueryFundPartyListOutcome;
			typedef std::future<QueryFundPartyListOutcome> QueryFundPartyListOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::QueryFundPartyListRequest&, const QueryFundPartyListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFundPartyListAsyncHandler;
			typedef Outcome<Error, Model::GetCreditStatusResult> GetCreditStatusOutcome;
			typedef std::future<GetCreditStatusOutcome> GetCreditStatusOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetCreditStatusRequest&, const GetCreditStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCreditStatusAsyncHandler;
			typedef Outcome<Error, Model::SaveAuthenticationInfoResult> SaveAuthenticationInfoOutcome;
			typedef std::future<SaveAuthenticationInfoOutcome> SaveAuthenticationInfoOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::SaveAuthenticationInfoRequest&, const SaveAuthenticationInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveAuthenticationInfoAsyncHandler;
			typedef Outcome<Error, Model::GetTradeDataResult> GetTradeDataOutcome;
			typedef std::future<GetTradeDataOutcome> GetTradeDataOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetTradeDataRequest&, const GetTradeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTradeDataAsyncHandler;
			typedef Outcome<Error, Model::UploadCustomIDImageResult> UploadCustomIDImageOutcome;
			typedef std::future<UploadCustomIDImageOutcome> UploadCustomIDImageOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::UploadCustomIDImageRequest&, const UploadCustomIDImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadCustomIDImageAsyncHandler;
			typedef Outcome<Error, Model::QuerySignResultResult> QuerySignResultOutcome;
			typedef std::future<QuerySignResultOutcome> QuerySignResultOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::QuerySignResultRequest&, const QuerySignResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySignResultAsyncHandler;
			typedef Outcome<Error, Model::ApplyForLoanResult> ApplyForLoanOutcome;
			typedef std::future<ApplyForLoanOutcome> ApplyForLoanOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::ApplyForLoanRequest&, const ApplyForLoanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyForLoanAsyncHandler;
			typedef Outcome<Error, Model::GetZhimaScoreResult> GetZhimaScoreOutcome;
			typedef std::future<GetZhimaScoreOutcome> GetZhimaScoreOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetZhimaScoreRequest&, const GetZhimaScoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetZhimaScoreAsyncHandler;
			typedef Outcome<Error, Model::PayForOrderResult> PayForOrderOutcome;
			typedef std::future<PayForOrderOutcome> PayForOrderOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::PayForOrderRequest&, const PayForOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PayForOrderAsyncHandler;
			typedef Outcome<Error, Model::QueryTrialRecordsResult> QueryTrialRecordsOutcome;
			typedef std::future<QueryTrialRecordsOutcome> QueryTrialRecordsOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::QueryTrialRecordsRequest&, const QueryTrialRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTrialRecordsAsyncHandler;
			typedef Outcome<Error, Model::GetCurrentTermRepayInfoResult> GetCurrentTermRepayInfoOutcome;
			typedef std::future<GetCurrentTermRepayInfoOutcome> GetCurrentTermRepayInfoOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetCurrentTermRepayInfoRequest&, const GetCurrentTermRepayInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCurrentTermRepayInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateAuthenticationInfoResult> UpdateAuthenticationInfoOutcome;
			typedef std::future<UpdateAuthenticationInfoOutcome> UpdateAuthenticationInfoOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::UpdateAuthenticationInfoRequest&, const UpdateAuthenticationInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAuthenticationInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateEnterpriseCustomInfoResult> UpdateEnterpriseCustomInfoOutcome;
			typedef std::future<UpdateEnterpriseCustomInfoOutcome> UpdateEnterpriseCustomInfoOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::UpdateEnterpriseCustomInfoRequest&, const UpdateEnterpriseCustomInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEnterpriseCustomInfoAsyncHandler;
			typedef Outcome<Error, Model::GetCreditSignatureInfoResult> GetCreditSignatureInfoOutcome;
			typedef std::future<GetCreditSignatureInfoOutcome> GetCreditSignatureInfoOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetCreditSignatureInfoRequest&, const GetCreditSignatureInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCreditSignatureInfoAsyncHandler;
			typedef Outcome<Error, Model::AddTrialRecordResult> AddTrialRecordOutcome;
			typedef std::future<AddTrialRecordOutcome> AddTrialRecordOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::AddTrialRecordRequest&, const AddTrialRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTrialRecordAsyncHandler;
			typedef Outcome<Error, Model::GetAuthorizeCreditQueryResult> GetAuthorizeCreditQueryOutcome;
			typedef std::future<GetAuthorizeCreditQueryOutcome> GetAuthorizeCreditQueryOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetAuthorizeCreditQueryRequest&, const GetAuthorizeCreditQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAuthorizeCreditQueryAsyncHandler;
			typedef Outcome<Error, Model::CancelCreditResult> CancelCreditOutcome;
			typedef std::future<CancelCreditOutcome> CancelCreditOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::CancelCreditRequest&, const CancelCreditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelCreditAsyncHandler;
			typedef Outcome<Error, Model::GetCustomStatusInfoResult> GetCustomStatusInfoOutcome;
			typedef std::future<GetCustomStatusInfoOutcome> GetCustomStatusInfoOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetCustomStatusInfoRequest&, const GetCustomStatusInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomStatusInfoAsyncHandler;
			typedef Outcome<Error, Model::GetOverdueRecordListResult> GetOverdueRecordListOutcome;
			typedef std::future<GetOverdueRecordListOutcome> GetOverdueRecordListOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetOverdueRecordListRequest&, const GetOverdueRecordListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOverdueRecordListAsyncHandler;
			typedef Outcome<Error, Model::GetProductDetailResult> GetProductDetailOutcome;
			typedef std::future<GetProductDetailOutcome> GetProductDetailOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetProductDetailRequest&, const GetProductDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProductDetailAsyncHandler;
			typedef Outcome<Error, Model::VerifyCustomerResult> VerifyCustomerOutcome;
			typedef std::future<VerifyCustomerOutcome> VerifyCustomerOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::VerifyCustomerRequest&, const VerifyCustomerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyCustomerAsyncHandler;
			typedef Outcome<Error, Model::SignLoanAgreementResult> SignLoanAgreementOutcome;
			typedef std::future<SignLoanAgreementOutcome> SignLoanAgreementOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::SignLoanAgreementRequest&, const SignLoanAgreementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SignLoanAgreementAsyncHandler;
			typedef Outcome<Error, Model::AddCustomInfoResult> AddCustomInfoOutcome;
			typedef std::future<AddCustomInfoOutcome> AddCustomInfoOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::AddCustomInfoRequest&, const AddCustomInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomInfoAsyncHandler;
			typedef Outcome<Error, Model::GetProductListResult> GetProductListOutcome;
			typedef std::future<GetProductListOutcome> GetProductListOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetProductListRequest&, const GetProductListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProductListAsyncHandler;
			typedef Outcome<Error, Model::GetLoanAgreementResult> GetLoanAgreementOutcome;
			typedef std::future<GetLoanAgreementOutcome> GetLoanAgreementOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetLoanAgreementRequest&, const GetLoanAgreementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLoanAgreementAsyncHandler;
			typedef Outcome<Error, Model::GetUserInfoAuthorizationAgreementResult> GetUserInfoAuthorizationAgreementOutcome;
			typedef std::future<GetUserInfoAuthorizationAgreementOutcome> GetUserInfoAuthorizationAgreementOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetUserInfoAuthorizationAgreementRequest&, const GetUserInfoAuthorizationAgreementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserInfoAuthorizationAgreementAsyncHandler;
			typedef Outcome<Error, Model::SignedPageResultResult> SignedPageResultOutcome;
			typedef std::future<SignedPageResultOutcome> SignedPageResultOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::SignedPageResultRequest&, const SignedPageResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SignedPageResultAsyncHandler;
			typedef Outcome<Error, Model::GetLoanApplyRecordListResult> GetLoanApplyRecordListOutcome;
			typedef std::future<GetLoanApplyRecordListOutcome> GetLoanApplyRecordListOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetLoanApplyRecordListRequest&, const GetLoanApplyRecordListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLoanApplyRecordListAsyncHandler;
			typedef Outcome<Error, Model::GetLatestOverdueRecordResult> GetLatestOverdueRecordOutcome;
			typedef std::future<GetLatestOverdueRecordOutcome> GetLatestOverdueRecordOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetLatestOverdueRecordRequest&, const GetLatestOverdueRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLatestOverdueRecordAsyncHandler;
			typedef Outcome<Error, Model::GetCreditListResult> GetCreditListOutcome;
			typedef std::future<GetCreditListOutcome> GetCreditListOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetCreditListRequest&, const GetCreditListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCreditListAsyncHandler;
			typedef Outcome<Error, Model::SignResultNotifyResult> SignResultNotifyOutcome;
			typedef std::future<SignResultNotifyOutcome> SignResultNotifyOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::SignResultNotifyRequest&, const SignResultNotifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SignResultNotifyAsyncHandler;
			typedef Outcome<Error, Model::VerifySMSTokenResult> VerifySMSTokenOutcome;
			typedef std::future<VerifySMSTokenOutcome> VerifySMSTokenOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::VerifySMSTokenRequest&, const VerifySMSTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifySMSTokenAsyncHandler;
			typedef Outcome<Error, Model::GetCreditRepayListResult> GetCreditRepayListOutcome;
			typedef std::future<GetCreditRepayListOutcome> GetCreditRepayListOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetCreditRepayListRequest&, const GetCreditRepayListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCreditRepayListAsyncHandler;
			typedef Outcome<Error, Model::GetSignContractUrlResult> GetSignContractUrlOutcome;
			typedef std::future<GetSignContractUrlOutcome> GetSignContractUrlOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetSignContractUrlRequest&, const GetSignContractUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSignContractUrlAsyncHandler;
			typedef Outcome<Error, Model::GetRepayPlanTrialResult> GetRepayPlanTrialOutcome;
			typedef std::future<GetRepayPlanTrialOutcome> GetRepayPlanTrialOutcomeCallable;
			typedef std::function<void(const FinmallClient*, const Model::GetRepayPlanTrialRequest&, const GetRepayPlanTrialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRepayPlanTrialAsyncHandler;

			FinmallClient(const Credentials &credentials, const ClientConfiguration &configuration);
			FinmallClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			FinmallClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~FinmallClient();
			GetCreditDetailOutcome getCreditDetail(const Model::GetCreditDetailRequest &request)const;
			void getCreditDetailAsync(const Model::GetCreditDetailRequest& request, const GetCreditDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCreditDetailOutcomeCallable getCreditDetailCallable(const Model::GetCreditDetailRequest& request) const;
			GetDocumentDownloadUrlOutcome getDocumentDownloadUrl(const Model::GetDocumentDownloadUrlRequest &request)const;
			void getDocumentDownloadUrlAsync(const Model::GetDocumentDownloadUrlRequest& request, const GetDocumentDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDocumentDownloadUrlOutcomeCallable getDocumentDownloadUrlCallable(const Model::GetDocumentDownloadUrlRequest& request) const;
			GetCreditWithdrawRecordOutcome getCreditWithdrawRecord(const Model::GetCreditWithdrawRecordRequest &request)const;
			void getCreditWithdrawRecordAsync(const Model::GetCreditWithdrawRecordRequest& request, const GetCreditWithdrawRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCreditWithdrawRecordOutcomeCallable getCreditWithdrawRecordCallable(const Model::GetCreditWithdrawRecordRequest& request) const;
			GetCustomerVerifyInfoOutcome getCustomerVerifyInfo(const Model::GetCustomerVerifyInfoRequest &request)const;
			void getCustomerVerifyInfoAsync(const Model::GetCustomerVerifyInfoRequest& request, const GetCustomerVerifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCustomerVerifyInfoOutcomeCallable getCustomerVerifyInfoCallable(const Model::GetCustomerVerifyInfoRequest& request) const;
			QueryFundPartyListOutcome queryFundPartyList(const Model::QueryFundPartyListRequest &request)const;
			void queryFundPartyListAsync(const Model::QueryFundPartyListRequest& request, const QueryFundPartyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFundPartyListOutcomeCallable queryFundPartyListCallable(const Model::QueryFundPartyListRequest& request) const;
			GetCreditStatusOutcome getCreditStatus(const Model::GetCreditStatusRequest &request)const;
			void getCreditStatusAsync(const Model::GetCreditStatusRequest& request, const GetCreditStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCreditStatusOutcomeCallable getCreditStatusCallable(const Model::GetCreditStatusRequest& request) const;
			SaveAuthenticationInfoOutcome saveAuthenticationInfo(const Model::SaveAuthenticationInfoRequest &request)const;
			void saveAuthenticationInfoAsync(const Model::SaveAuthenticationInfoRequest& request, const SaveAuthenticationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveAuthenticationInfoOutcomeCallable saveAuthenticationInfoCallable(const Model::SaveAuthenticationInfoRequest& request) const;
			GetTradeDataOutcome getTradeData(const Model::GetTradeDataRequest &request)const;
			void getTradeDataAsync(const Model::GetTradeDataRequest& request, const GetTradeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTradeDataOutcomeCallable getTradeDataCallable(const Model::GetTradeDataRequest& request) const;
			UploadCustomIDImageOutcome uploadCustomIDImage(const Model::UploadCustomIDImageRequest &request)const;
			void uploadCustomIDImageAsync(const Model::UploadCustomIDImageRequest& request, const UploadCustomIDImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadCustomIDImageOutcomeCallable uploadCustomIDImageCallable(const Model::UploadCustomIDImageRequest& request) const;
			QuerySignResultOutcome querySignResult(const Model::QuerySignResultRequest &request)const;
			void querySignResultAsync(const Model::QuerySignResultRequest& request, const QuerySignResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySignResultOutcomeCallable querySignResultCallable(const Model::QuerySignResultRequest& request) const;
			ApplyForLoanOutcome applyForLoan(const Model::ApplyForLoanRequest &request)const;
			void applyForLoanAsync(const Model::ApplyForLoanRequest& request, const ApplyForLoanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyForLoanOutcomeCallable applyForLoanCallable(const Model::ApplyForLoanRequest& request) const;
			GetZhimaScoreOutcome getZhimaScore(const Model::GetZhimaScoreRequest &request)const;
			void getZhimaScoreAsync(const Model::GetZhimaScoreRequest& request, const GetZhimaScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetZhimaScoreOutcomeCallable getZhimaScoreCallable(const Model::GetZhimaScoreRequest& request) const;
			PayForOrderOutcome payForOrder(const Model::PayForOrderRequest &request)const;
			void payForOrderAsync(const Model::PayForOrderRequest& request, const PayForOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PayForOrderOutcomeCallable payForOrderCallable(const Model::PayForOrderRequest& request) const;
			QueryTrialRecordsOutcome queryTrialRecords(const Model::QueryTrialRecordsRequest &request)const;
			void queryTrialRecordsAsync(const Model::QueryTrialRecordsRequest& request, const QueryTrialRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTrialRecordsOutcomeCallable queryTrialRecordsCallable(const Model::QueryTrialRecordsRequest& request) const;
			GetCurrentTermRepayInfoOutcome getCurrentTermRepayInfo(const Model::GetCurrentTermRepayInfoRequest &request)const;
			void getCurrentTermRepayInfoAsync(const Model::GetCurrentTermRepayInfoRequest& request, const GetCurrentTermRepayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCurrentTermRepayInfoOutcomeCallable getCurrentTermRepayInfoCallable(const Model::GetCurrentTermRepayInfoRequest& request) const;
			UpdateAuthenticationInfoOutcome updateAuthenticationInfo(const Model::UpdateAuthenticationInfoRequest &request)const;
			void updateAuthenticationInfoAsync(const Model::UpdateAuthenticationInfoRequest& request, const UpdateAuthenticationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAuthenticationInfoOutcomeCallable updateAuthenticationInfoCallable(const Model::UpdateAuthenticationInfoRequest& request) const;
			UpdateEnterpriseCustomInfoOutcome updateEnterpriseCustomInfo(const Model::UpdateEnterpriseCustomInfoRequest &request)const;
			void updateEnterpriseCustomInfoAsync(const Model::UpdateEnterpriseCustomInfoRequest& request, const UpdateEnterpriseCustomInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEnterpriseCustomInfoOutcomeCallable updateEnterpriseCustomInfoCallable(const Model::UpdateEnterpriseCustomInfoRequest& request) const;
			GetCreditSignatureInfoOutcome getCreditSignatureInfo(const Model::GetCreditSignatureInfoRequest &request)const;
			void getCreditSignatureInfoAsync(const Model::GetCreditSignatureInfoRequest& request, const GetCreditSignatureInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCreditSignatureInfoOutcomeCallable getCreditSignatureInfoCallable(const Model::GetCreditSignatureInfoRequest& request) const;
			AddTrialRecordOutcome addTrialRecord(const Model::AddTrialRecordRequest &request)const;
			void addTrialRecordAsync(const Model::AddTrialRecordRequest& request, const AddTrialRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTrialRecordOutcomeCallable addTrialRecordCallable(const Model::AddTrialRecordRequest& request) const;
			GetAuthorizeCreditQueryOutcome getAuthorizeCreditQuery(const Model::GetAuthorizeCreditQueryRequest &request)const;
			void getAuthorizeCreditQueryAsync(const Model::GetAuthorizeCreditQueryRequest& request, const GetAuthorizeCreditQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAuthorizeCreditQueryOutcomeCallable getAuthorizeCreditQueryCallable(const Model::GetAuthorizeCreditQueryRequest& request) const;
			CancelCreditOutcome cancelCredit(const Model::CancelCreditRequest &request)const;
			void cancelCreditAsync(const Model::CancelCreditRequest& request, const CancelCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelCreditOutcomeCallable cancelCreditCallable(const Model::CancelCreditRequest& request) const;
			GetCustomStatusInfoOutcome getCustomStatusInfo(const Model::GetCustomStatusInfoRequest &request)const;
			void getCustomStatusInfoAsync(const Model::GetCustomStatusInfoRequest& request, const GetCustomStatusInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCustomStatusInfoOutcomeCallable getCustomStatusInfoCallable(const Model::GetCustomStatusInfoRequest& request) const;
			GetOverdueRecordListOutcome getOverdueRecordList(const Model::GetOverdueRecordListRequest &request)const;
			void getOverdueRecordListAsync(const Model::GetOverdueRecordListRequest& request, const GetOverdueRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOverdueRecordListOutcomeCallable getOverdueRecordListCallable(const Model::GetOverdueRecordListRequest& request) const;
			GetProductDetailOutcome getProductDetail(const Model::GetProductDetailRequest &request)const;
			void getProductDetailAsync(const Model::GetProductDetailRequest& request, const GetProductDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProductDetailOutcomeCallable getProductDetailCallable(const Model::GetProductDetailRequest& request) const;
			VerifyCustomerOutcome verifyCustomer(const Model::VerifyCustomerRequest &request)const;
			void verifyCustomerAsync(const Model::VerifyCustomerRequest& request, const VerifyCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyCustomerOutcomeCallable verifyCustomerCallable(const Model::VerifyCustomerRequest& request) const;
			SignLoanAgreementOutcome signLoanAgreement(const Model::SignLoanAgreementRequest &request)const;
			void signLoanAgreementAsync(const Model::SignLoanAgreementRequest& request, const SignLoanAgreementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SignLoanAgreementOutcomeCallable signLoanAgreementCallable(const Model::SignLoanAgreementRequest& request) const;
			AddCustomInfoOutcome addCustomInfo(const Model::AddCustomInfoRequest &request)const;
			void addCustomInfoAsync(const Model::AddCustomInfoRequest& request, const AddCustomInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCustomInfoOutcomeCallable addCustomInfoCallable(const Model::AddCustomInfoRequest& request) const;
			GetProductListOutcome getProductList(const Model::GetProductListRequest &request)const;
			void getProductListAsync(const Model::GetProductListRequest& request, const GetProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProductListOutcomeCallable getProductListCallable(const Model::GetProductListRequest& request) const;
			GetLoanAgreementOutcome getLoanAgreement(const Model::GetLoanAgreementRequest &request)const;
			void getLoanAgreementAsync(const Model::GetLoanAgreementRequest& request, const GetLoanAgreementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLoanAgreementOutcomeCallable getLoanAgreementCallable(const Model::GetLoanAgreementRequest& request) const;
			GetUserInfoAuthorizationAgreementOutcome getUserInfoAuthorizationAgreement(const Model::GetUserInfoAuthorizationAgreementRequest &request)const;
			void getUserInfoAuthorizationAgreementAsync(const Model::GetUserInfoAuthorizationAgreementRequest& request, const GetUserInfoAuthorizationAgreementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserInfoAuthorizationAgreementOutcomeCallable getUserInfoAuthorizationAgreementCallable(const Model::GetUserInfoAuthorizationAgreementRequest& request) const;
			SignedPageResultOutcome signedPageResult(const Model::SignedPageResultRequest &request)const;
			void signedPageResultAsync(const Model::SignedPageResultRequest& request, const SignedPageResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SignedPageResultOutcomeCallable signedPageResultCallable(const Model::SignedPageResultRequest& request) const;
			GetLoanApplyRecordListOutcome getLoanApplyRecordList(const Model::GetLoanApplyRecordListRequest &request)const;
			void getLoanApplyRecordListAsync(const Model::GetLoanApplyRecordListRequest& request, const GetLoanApplyRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLoanApplyRecordListOutcomeCallable getLoanApplyRecordListCallable(const Model::GetLoanApplyRecordListRequest& request) const;
			GetLatestOverdueRecordOutcome getLatestOverdueRecord(const Model::GetLatestOverdueRecordRequest &request)const;
			void getLatestOverdueRecordAsync(const Model::GetLatestOverdueRecordRequest& request, const GetLatestOverdueRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLatestOverdueRecordOutcomeCallable getLatestOverdueRecordCallable(const Model::GetLatestOverdueRecordRequest& request) const;
			GetCreditListOutcome getCreditList(const Model::GetCreditListRequest &request)const;
			void getCreditListAsync(const Model::GetCreditListRequest& request, const GetCreditListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCreditListOutcomeCallable getCreditListCallable(const Model::GetCreditListRequest& request) const;
			SignResultNotifyOutcome signResultNotify(const Model::SignResultNotifyRequest &request)const;
			void signResultNotifyAsync(const Model::SignResultNotifyRequest& request, const SignResultNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SignResultNotifyOutcomeCallable signResultNotifyCallable(const Model::SignResultNotifyRequest& request) const;
			VerifySMSTokenOutcome verifySMSToken(const Model::VerifySMSTokenRequest &request)const;
			void verifySMSTokenAsync(const Model::VerifySMSTokenRequest& request, const VerifySMSTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifySMSTokenOutcomeCallable verifySMSTokenCallable(const Model::VerifySMSTokenRequest& request) const;
			GetCreditRepayListOutcome getCreditRepayList(const Model::GetCreditRepayListRequest &request)const;
			void getCreditRepayListAsync(const Model::GetCreditRepayListRequest& request, const GetCreditRepayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCreditRepayListOutcomeCallable getCreditRepayListCallable(const Model::GetCreditRepayListRequest& request) const;
			GetSignContractUrlOutcome getSignContractUrl(const Model::GetSignContractUrlRequest &request)const;
			void getSignContractUrlAsync(const Model::GetSignContractUrlRequest& request, const GetSignContractUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSignContractUrlOutcomeCallable getSignContractUrlCallable(const Model::GetSignContractUrlRequest& request) const;
			GetRepayPlanTrialOutcome getRepayPlanTrial(const Model::GetRepayPlanTrialRequest &request)const;
			void getRepayPlanTrialAsync(const Model::GetRepayPlanTrialRequest& request, const GetRepayPlanTrialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRepayPlanTrialOutcomeCallable getRepayPlanTrialCallable(const Model::GetRepayPlanTrialRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_FINMALL_FINMALLCLIENT_H_
