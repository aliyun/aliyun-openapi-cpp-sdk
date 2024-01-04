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
#include "model/CheckSmsVerifyCodeRequest.h"
#include "model/CheckSmsVerifyCodeResult.h"
#include "model/CreateSchemeConfigRequest.h"
#include "model/CreateSchemeConfigResult.h"
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
#include "model/GetFusionAuthTokenRequest.h"
#include "model/GetFusionAuthTokenResult.h"
#include "model/GetMobileRequest.h"
#include "model/GetMobileResult.h"
#include "model/GetPhoneWithTokenRequest.h"
#include "model/GetPhoneWithTokenResult.h"
#include "model/GetSmsAuthTokensRequest.h"
#include "model/GetSmsAuthTokensResult.h"
#include "model/JyCreateVerifySchemeRequest.h"
#include "model/JyCreateVerifySchemeResult.h"
#include "model/JyQueryAppInfoBySceneCodeRequest.h"
#include "model/JyQueryAppInfoBySceneCodeResult.h"
#include "model/QueryGateVerifyBillingPublicRequest.h"
#include "model/QueryGateVerifyBillingPublicResult.h"
#include "model/QueryGateVerifyStatisticPublicRequest.h"
#include "model/QueryGateVerifyStatisticPublicResult.h"
#include "model/QuerySendDetailsRequest.h"
#include "model/QuerySendDetailsResult.h"
#include "model/SendSmsVerifyCodeRequest.h"
#include "model/SendSmsVerifyCodeResult.h"
#include "model/VerifyMobileRequest.h"
#include "model/VerifyMobileResult.h"
#include "model/VerifyPhoneWithTokenRequest.h"
#include "model/VerifyPhoneWithTokenResult.h"
#include "model/VerifySmsCodeRequest.h"
#include "model/VerifySmsCodeResult.h"
#include "model/VerifyWithFusionAuthTokenRequest.h"
#include "model/VerifyWithFusionAuthTokenResult.h"


namespace AlibabaCloud
{
	namespace Dypnsapi
	{
		class ALIBABACLOUD_DYPNSAPI_EXPORT DypnsapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CheckSmsVerifyCodeResult> CheckSmsVerifyCodeOutcome;
			typedef std::future<CheckSmsVerifyCodeOutcome> CheckSmsVerifyCodeOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::CheckSmsVerifyCodeRequest&, const CheckSmsVerifyCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckSmsVerifyCodeAsyncHandler;
			typedef Outcome<Error, Model::CreateSchemeConfigResult> CreateSchemeConfigOutcome;
			typedef std::future<CreateSchemeConfigOutcome> CreateSchemeConfigOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::CreateSchemeConfigRequest&, const CreateSchemeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchemeConfigAsyncHandler;
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
			typedef Outcome<Error, Model::GetFusionAuthTokenResult> GetFusionAuthTokenOutcome;
			typedef std::future<GetFusionAuthTokenOutcome> GetFusionAuthTokenOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::GetFusionAuthTokenRequest&, const GetFusionAuthTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFusionAuthTokenAsyncHandler;
			typedef Outcome<Error, Model::GetMobileResult> GetMobileOutcome;
			typedef std::future<GetMobileOutcome> GetMobileOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::GetMobileRequest&, const GetMobileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMobileAsyncHandler;
			typedef Outcome<Error, Model::GetPhoneWithTokenResult> GetPhoneWithTokenOutcome;
			typedef std::future<GetPhoneWithTokenOutcome> GetPhoneWithTokenOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::GetPhoneWithTokenRequest&, const GetPhoneWithTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPhoneWithTokenAsyncHandler;
			typedef Outcome<Error, Model::GetSmsAuthTokensResult> GetSmsAuthTokensOutcome;
			typedef std::future<GetSmsAuthTokensOutcome> GetSmsAuthTokensOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::GetSmsAuthTokensRequest&, const GetSmsAuthTokensOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSmsAuthTokensAsyncHandler;
			typedef Outcome<Error, Model::JyCreateVerifySchemeResult> JyCreateVerifySchemeOutcome;
			typedef std::future<JyCreateVerifySchemeOutcome> JyCreateVerifySchemeOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::JyCreateVerifySchemeRequest&, const JyCreateVerifySchemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JyCreateVerifySchemeAsyncHandler;
			typedef Outcome<Error, Model::JyQueryAppInfoBySceneCodeResult> JyQueryAppInfoBySceneCodeOutcome;
			typedef std::future<JyQueryAppInfoBySceneCodeOutcome> JyQueryAppInfoBySceneCodeOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::JyQueryAppInfoBySceneCodeRequest&, const JyQueryAppInfoBySceneCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JyQueryAppInfoBySceneCodeAsyncHandler;
			typedef Outcome<Error, Model::QueryGateVerifyBillingPublicResult> QueryGateVerifyBillingPublicOutcome;
			typedef std::future<QueryGateVerifyBillingPublicOutcome> QueryGateVerifyBillingPublicOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::QueryGateVerifyBillingPublicRequest&, const QueryGateVerifyBillingPublicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGateVerifyBillingPublicAsyncHandler;
			typedef Outcome<Error, Model::QueryGateVerifyStatisticPublicResult> QueryGateVerifyStatisticPublicOutcome;
			typedef std::future<QueryGateVerifyStatisticPublicOutcome> QueryGateVerifyStatisticPublicOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::QueryGateVerifyStatisticPublicRequest&, const QueryGateVerifyStatisticPublicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGateVerifyStatisticPublicAsyncHandler;
			typedef Outcome<Error, Model::QuerySendDetailsResult> QuerySendDetailsOutcome;
			typedef std::future<QuerySendDetailsOutcome> QuerySendDetailsOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::QuerySendDetailsRequest&, const QuerySendDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySendDetailsAsyncHandler;
			typedef Outcome<Error, Model::SendSmsVerifyCodeResult> SendSmsVerifyCodeOutcome;
			typedef std::future<SendSmsVerifyCodeOutcome> SendSmsVerifyCodeOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::SendSmsVerifyCodeRequest&, const SendSmsVerifyCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendSmsVerifyCodeAsyncHandler;
			typedef Outcome<Error, Model::VerifyMobileResult> VerifyMobileOutcome;
			typedef std::future<VerifyMobileOutcome> VerifyMobileOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::VerifyMobileRequest&, const VerifyMobileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyMobileAsyncHandler;
			typedef Outcome<Error, Model::VerifyPhoneWithTokenResult> VerifyPhoneWithTokenOutcome;
			typedef std::future<VerifyPhoneWithTokenOutcome> VerifyPhoneWithTokenOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::VerifyPhoneWithTokenRequest&, const VerifyPhoneWithTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyPhoneWithTokenAsyncHandler;
			typedef Outcome<Error, Model::VerifySmsCodeResult> VerifySmsCodeOutcome;
			typedef std::future<VerifySmsCodeOutcome> VerifySmsCodeOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::VerifySmsCodeRequest&, const VerifySmsCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifySmsCodeAsyncHandler;
			typedef Outcome<Error, Model::VerifyWithFusionAuthTokenResult> VerifyWithFusionAuthTokenOutcome;
			typedef std::future<VerifyWithFusionAuthTokenOutcome> VerifyWithFusionAuthTokenOutcomeCallable;
			typedef std::function<void(const DypnsapiClient*, const Model::VerifyWithFusionAuthTokenRequest&, const VerifyWithFusionAuthTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyWithFusionAuthTokenAsyncHandler;

			DypnsapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DypnsapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DypnsapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DypnsapiClient();
			CheckSmsVerifyCodeOutcome checkSmsVerifyCode(const Model::CheckSmsVerifyCodeRequest &request)const;
			void checkSmsVerifyCodeAsync(const Model::CheckSmsVerifyCodeRequest& request, const CheckSmsVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckSmsVerifyCodeOutcomeCallable checkSmsVerifyCodeCallable(const Model::CheckSmsVerifyCodeRequest& request) const;
			CreateSchemeConfigOutcome createSchemeConfig(const Model::CreateSchemeConfigRequest &request)const;
			void createSchemeConfigAsync(const Model::CreateSchemeConfigRequest& request, const CreateSchemeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSchemeConfigOutcomeCallable createSchemeConfigCallable(const Model::CreateSchemeConfigRequest& request) const;
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
			GetFusionAuthTokenOutcome getFusionAuthToken(const Model::GetFusionAuthTokenRequest &request)const;
			void getFusionAuthTokenAsync(const Model::GetFusionAuthTokenRequest& request, const GetFusionAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFusionAuthTokenOutcomeCallable getFusionAuthTokenCallable(const Model::GetFusionAuthTokenRequest& request) const;
			GetMobileOutcome getMobile(const Model::GetMobileRequest &request)const;
			void getMobileAsync(const Model::GetMobileRequest& request, const GetMobileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMobileOutcomeCallable getMobileCallable(const Model::GetMobileRequest& request) const;
			GetPhoneWithTokenOutcome getPhoneWithToken(const Model::GetPhoneWithTokenRequest &request)const;
			void getPhoneWithTokenAsync(const Model::GetPhoneWithTokenRequest& request, const GetPhoneWithTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPhoneWithTokenOutcomeCallable getPhoneWithTokenCallable(const Model::GetPhoneWithTokenRequest& request) const;
			GetSmsAuthTokensOutcome getSmsAuthTokens(const Model::GetSmsAuthTokensRequest &request)const;
			void getSmsAuthTokensAsync(const Model::GetSmsAuthTokensRequest& request, const GetSmsAuthTokensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSmsAuthTokensOutcomeCallable getSmsAuthTokensCallable(const Model::GetSmsAuthTokensRequest& request) const;
			JyCreateVerifySchemeOutcome jyCreateVerifyScheme(const Model::JyCreateVerifySchemeRequest &request)const;
			void jyCreateVerifySchemeAsync(const Model::JyCreateVerifySchemeRequest& request, const JyCreateVerifySchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JyCreateVerifySchemeOutcomeCallable jyCreateVerifySchemeCallable(const Model::JyCreateVerifySchemeRequest& request) const;
			JyQueryAppInfoBySceneCodeOutcome jyQueryAppInfoBySceneCode(const Model::JyQueryAppInfoBySceneCodeRequest &request)const;
			void jyQueryAppInfoBySceneCodeAsync(const Model::JyQueryAppInfoBySceneCodeRequest& request, const JyQueryAppInfoBySceneCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JyQueryAppInfoBySceneCodeOutcomeCallable jyQueryAppInfoBySceneCodeCallable(const Model::JyQueryAppInfoBySceneCodeRequest& request) const;
			QueryGateVerifyBillingPublicOutcome queryGateVerifyBillingPublic(const Model::QueryGateVerifyBillingPublicRequest &request)const;
			void queryGateVerifyBillingPublicAsync(const Model::QueryGateVerifyBillingPublicRequest& request, const QueryGateVerifyBillingPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGateVerifyBillingPublicOutcomeCallable queryGateVerifyBillingPublicCallable(const Model::QueryGateVerifyBillingPublicRequest& request) const;
			QueryGateVerifyStatisticPublicOutcome queryGateVerifyStatisticPublic(const Model::QueryGateVerifyStatisticPublicRequest &request)const;
			void queryGateVerifyStatisticPublicAsync(const Model::QueryGateVerifyStatisticPublicRequest& request, const QueryGateVerifyStatisticPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGateVerifyStatisticPublicOutcomeCallable queryGateVerifyStatisticPublicCallable(const Model::QueryGateVerifyStatisticPublicRequest& request) const;
			QuerySendDetailsOutcome querySendDetails(const Model::QuerySendDetailsRequest &request)const;
			void querySendDetailsAsync(const Model::QuerySendDetailsRequest& request, const QuerySendDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySendDetailsOutcomeCallable querySendDetailsCallable(const Model::QuerySendDetailsRequest& request) const;
			SendSmsVerifyCodeOutcome sendSmsVerifyCode(const Model::SendSmsVerifyCodeRequest &request)const;
			void sendSmsVerifyCodeAsync(const Model::SendSmsVerifyCodeRequest& request, const SendSmsVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendSmsVerifyCodeOutcomeCallable sendSmsVerifyCodeCallable(const Model::SendSmsVerifyCodeRequest& request) const;
			VerifyMobileOutcome verifyMobile(const Model::VerifyMobileRequest &request)const;
			void verifyMobileAsync(const Model::VerifyMobileRequest& request, const VerifyMobileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyMobileOutcomeCallable verifyMobileCallable(const Model::VerifyMobileRequest& request) const;
			VerifyPhoneWithTokenOutcome verifyPhoneWithToken(const Model::VerifyPhoneWithTokenRequest &request)const;
			void verifyPhoneWithTokenAsync(const Model::VerifyPhoneWithTokenRequest& request, const VerifyPhoneWithTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyPhoneWithTokenOutcomeCallable verifyPhoneWithTokenCallable(const Model::VerifyPhoneWithTokenRequest& request) const;
			VerifySmsCodeOutcome verifySmsCode(const Model::VerifySmsCodeRequest &request)const;
			void verifySmsCodeAsync(const Model::VerifySmsCodeRequest& request, const VerifySmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifySmsCodeOutcomeCallable verifySmsCodeCallable(const Model::VerifySmsCodeRequest& request) const;
			VerifyWithFusionAuthTokenOutcome verifyWithFusionAuthToken(const Model::VerifyWithFusionAuthTokenRequest &request)const;
			void verifyWithFusionAuthTokenAsync(const Model::VerifyWithFusionAuthTokenRequest& request, const VerifyWithFusionAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyWithFusionAuthTokenOutcomeCallable verifyWithFusionAuthTokenCallable(const Model::VerifyWithFusionAuthTokenRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DYPNSAPI_DYPNSAPICLIENT_H_
