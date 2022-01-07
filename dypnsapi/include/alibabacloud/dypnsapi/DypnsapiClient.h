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

#ifndef ALIBABACLOUD_DYPNSAPI_DYPNSAPICLIENT_H_
#define ALIBABACLOUD_DYPNSAPI_DYPNSAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DypnsapiExport.h"
#include "model/CreateVerifySchemeRequest.h"
#include "model/CreateVerifySchemeResult.h"
#include "model/DeleteVerifySchemeRequest.h"
#include "model/DeleteVerifySchemeResult.h"
#include "model/DescribeVerifySchemeRequest.h"
#include "model/DescribeVerifySchemeResult.h"
#include "model/GetAuthTokenRequest.h"
#include "model/GetAuthTokenResult.h"
#include "model/GetAuthorizationUrlRequest.h"
#include "model/GetAuthorizationUrlResult.h"
#include "model/GetCertifyResultRequest.h"
#include "model/GetCertifyResultResult.h"
#include "model/GetMobileRequest.h"
#include "model/GetMobileResult.h"
#include "model/GetSmsAuthTokensRequest.h"
#include "model/GetSmsAuthTokensResult.h"
#include "model/QueryGateVerifyBillingPublicRequest.h"
#include "model/QueryGateVerifyBillingPublicResult.h"
#include "model/QueryGateVerifyStatisticPublicRequest.h"
#include "model/QueryGateVerifyStatisticPublicResult.h"
#include "model/VerifyMobileRequest.h"
#include "model/VerifyMobileResult.h"
#include "model/VerifyPhoneWithTokenRequest.h"
#include "model/VerifyPhoneWithTokenResult.h"
#include "model/VerifySmsCodeRequest.h"
#include "model/VerifySmsCodeResult.h"


namespace AlibabaCloud
{
	namespace Dypnsapi
	{
		class ALIBABACLOUD_DYPNSAPI_EXPORT DypnsapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateVerifySchemeResult> CreateVerifySchemeOutcome;
			typedef std::future<CreateVerifySchemeOutcome> CreateVerifySchemeOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::CreateVerifySchemeRequest&, const CreateVerifySchemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVerifySchemeAsyncHandler;
			typedef Outcome<Error, Model::DeleteVerifySchemeResult> DeleteVerifySchemeOutcome;
			typedef std::future<DeleteVerifySchemeOutcome> DeleteVerifySchemeOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::DeleteVerifySchemeRequest&, const DeleteVerifySchemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVerifySchemeAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifySchemeResult> DescribeVerifySchemeOutcome;
			typedef std::future<DescribeVerifySchemeOutcome> DescribeVerifySchemeOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::DescribeVerifySchemeRequest&, const DescribeVerifySchemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifySchemeAsyncHandler;
			typedef Outcome<Error, Model::GetAuthTokenResult> GetAuthTokenOutcome;
			typedef std::future<GetAuthTokenOutcome> GetAuthTokenOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::GetAuthTokenRequest&, const GetAuthTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAuthTokenAsyncHandler;
			typedef Outcome<Error, Model::GetAuthorizationUrlResult> GetAuthorizationUrlOutcome;
			typedef std::future<GetAuthorizationUrlOutcome> GetAuthorizationUrlOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::GetAuthorizationUrlRequest&, const GetAuthorizationUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAuthorizationUrlAsyncHandler;
			typedef Outcome<Error, Model::GetCertifyResultResult> GetCertifyResultOutcome;
			typedef std::future<GetCertifyResultOutcome> GetCertifyResultOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::GetCertifyResultRequest&, const GetCertifyResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCertifyResultAsyncHandler;
			typedef Outcome<Error, Model::GetMobileResult> GetMobileOutcome;
			typedef std::future<GetMobileOutcome> GetMobileOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::GetMobileRequest&, const GetMobileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMobileAsyncHandler;
			typedef Outcome<Error, Model::GetSmsAuthTokensResult> GetSmsAuthTokensOutcome;
			typedef std::future<GetSmsAuthTokensOutcome> GetSmsAuthTokensOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::GetSmsAuthTokensRequest&, const GetSmsAuthTokensOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSmsAuthTokensAsyncHandler;
			typedef Outcome<Error, Model::QueryGateVerifyBillingPublicResult> QueryGateVerifyBillingPublicOutcome;
			typedef std::future<QueryGateVerifyBillingPublicOutcome> QueryGateVerifyBillingPublicOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::QueryGateVerifyBillingPublicRequest&, const QueryGateVerifyBillingPublicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGateVerifyBillingPublicAsyncHandler;
			typedef Outcome<Error, Model::QueryGateVerifyStatisticPublicResult> QueryGateVerifyStatisticPublicOutcome;
			typedef std::future<QueryGateVerifyStatisticPublicOutcome> QueryGateVerifyStatisticPublicOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::QueryGateVerifyStatisticPublicRequest&, const QueryGateVerifyStatisticPublicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGateVerifyStatisticPublicAsyncHandler;
			typedef Outcome<Error, Model::VerifyMobileResult> VerifyMobileOutcome;
			typedef std::future<VerifyMobileOutcome> VerifyMobileOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::VerifyMobileRequest&, const VerifyMobileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyMobileAsyncHandler;
			typedef Outcome<Error, Model::VerifyPhoneWithTokenResult> VerifyPhoneWithTokenOutcome;
			typedef std::future<VerifyPhoneWithTokenOutcome> VerifyPhoneWithTokenOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::VerifyPhoneWithTokenRequest&, const VerifyPhoneWithTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyPhoneWithTokenAsyncHandler;
			typedef Outcome<Error, Model::VerifySmsCodeResult> VerifySmsCodeOutcome;
			typedef std::future<VerifySmsCodeOutcome> VerifySmsCodeOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::VerifySmsCodeRequest&, const VerifySmsCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifySmsCodeAsyncHandler;

			DypnsapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DypnsapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DypnsapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DypnsapiClient();
			CreateVerifySchemeOutcome createVerifyScheme(const Model::CreateVerifySchemeRequest &request)const;
			void createVerifySchemeAsync(const Model::CreateVerifySchemeRequest& request, const CreateVerifySchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVerifySchemeOutcomeCallable createVerifySchemeCallable(const Model::CreateVerifySchemeRequest& request) const;
			DeleteVerifySchemeOutcome deleteVerifyScheme(const Model::DeleteVerifySchemeRequest &request)const;
			void deleteVerifySchemeAsync(const Model::DeleteVerifySchemeRequest& request, const DeleteVerifySchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVerifySchemeOutcomeCallable deleteVerifySchemeCallable(const Model::DeleteVerifySchemeRequest& request) const;
			DescribeVerifySchemeOutcome describeVerifyScheme(const Model::DescribeVerifySchemeRequest &request)const;
			void describeVerifySchemeAsync(const Model::DescribeVerifySchemeRequest& request, const DescribeVerifySchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifySchemeOutcomeCallable describeVerifySchemeCallable(const Model::DescribeVerifySchemeRequest& request) const;
			GetAuthTokenOutcome getAuthToken(const Model::GetAuthTokenRequest &request)const;
			void getAuthTokenAsync(const Model::GetAuthTokenRequest& request, const GetAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAuthTokenOutcomeCallable getAuthTokenCallable(const Model::GetAuthTokenRequest& request) const;
			GetAuthorizationUrlOutcome getAuthorizationUrl(const Model::GetAuthorizationUrlRequest &request)const;
			void getAuthorizationUrlAsync(const Model::GetAuthorizationUrlRequest& request, const GetAuthorizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAuthorizationUrlOutcomeCallable getAuthorizationUrlCallable(const Model::GetAuthorizationUrlRequest& request) const;
			GetCertifyResultOutcome getCertifyResult(const Model::GetCertifyResultRequest &request)const;
			void getCertifyResultAsync(const Model::GetCertifyResultRequest& request, const GetCertifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCertifyResultOutcomeCallable getCertifyResultCallable(const Model::GetCertifyResultRequest& request) const;
			GetMobileOutcome getMobile(const Model::GetMobileRequest &request)const;
			void getMobileAsync(const Model::GetMobileRequest& request, const GetMobileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMobileOutcomeCallable getMobileCallable(const Model::GetMobileRequest& request) const;
			GetSmsAuthTokensOutcome getSmsAuthTokens(const Model::GetSmsAuthTokensRequest &request)const;
			void getSmsAuthTokensAsync(const Model::GetSmsAuthTokensRequest& request, const GetSmsAuthTokensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSmsAuthTokensOutcomeCallable getSmsAuthTokensCallable(const Model::GetSmsAuthTokensRequest& request) const;
			QueryGateVerifyBillingPublicOutcome queryGateVerifyBillingPublic(const Model::QueryGateVerifyBillingPublicRequest &request)const;
			void queryGateVerifyBillingPublicAsync(const Model::QueryGateVerifyBillingPublicRequest& request, const QueryGateVerifyBillingPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGateVerifyBillingPublicOutcomeCallable queryGateVerifyBillingPublicCallable(const Model::QueryGateVerifyBillingPublicRequest& request) const;
			QueryGateVerifyStatisticPublicOutcome queryGateVerifyStatisticPublic(const Model::QueryGateVerifyStatisticPublicRequest &request)const;
			void queryGateVerifyStatisticPublicAsync(const Model::QueryGateVerifyStatisticPublicRequest& request, const QueryGateVerifyStatisticPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGateVerifyStatisticPublicOutcomeCallable queryGateVerifyStatisticPublicCallable(const Model::QueryGateVerifyStatisticPublicRequest& request) const;
			VerifyMobileOutcome verifyMobile(const Model::VerifyMobileRequest &request)const;
			void verifyMobileAsync(const Model::VerifyMobileRequest& request, const VerifyMobileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyMobileOutcomeCallable verifyMobileCallable(const Model::VerifyMobileRequest& request) const;
			VerifyPhoneWithTokenOutcome verifyPhoneWithToken(const Model::VerifyPhoneWithTokenRequest &request)const;
			void verifyPhoneWithTokenAsync(const Model::VerifyPhoneWithTokenRequest& request, const VerifyPhoneWithTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyPhoneWithTokenOutcomeCallable verifyPhoneWithTokenCallable(const Model::VerifyPhoneWithTokenRequest& request) const;
			VerifySmsCodeOutcome verifySmsCode(const Model::VerifySmsCodeRequest &request)const;
			void verifySmsCodeAsync(const Model::VerifySmsCodeRequest& request, const VerifySmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifySmsCodeOutcomeCallable verifySmsCodeCallable(const Model::VerifySmsCodeRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DYPNSAPI_DYPNSAPICLIENT_H_
