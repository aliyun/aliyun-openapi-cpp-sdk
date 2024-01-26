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

#ifndef ALIBABACLOUD_CAPTCHA_CAPTCHACLIENT_H_
#define ALIBABACLOUD_CAPTCHA_CAPTCHACLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CaptchaExport.h"
#include "model/VerifyCaptchaRequest.h"
#include "model/VerifyCaptchaResult.h"
#include "model/VerifyIntelligentCaptchaRequest.h"
#include "model/VerifyIntelligentCaptchaResult.h"


namespace AlibabaCloud
{
	namespace Captcha
	{
		class ALIBABACLOUD_CAPTCHA_EXPORT CaptchaClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::VerifyCaptchaResult> VerifyCaptchaOutcome;
			typedef std::future<VerifyCaptchaOutcome> VerifyCaptchaOutcomeCallable;
			typedef std::function<void(const CaptchaClient*, const Model::VerifyCaptchaRequest&, const VerifyCaptchaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyCaptchaAsyncHandler;
			typedef Outcome<Error, Model::VerifyIntelligentCaptchaResult> VerifyIntelligentCaptchaOutcome;
			typedef std::future<VerifyIntelligentCaptchaOutcome> VerifyIntelligentCaptchaOutcomeCallable;
			typedef std::function<void(const CaptchaClient*, const Model::VerifyIntelligentCaptchaRequest&, const VerifyIntelligentCaptchaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyIntelligentCaptchaAsyncHandler;

			CaptchaClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CaptchaClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CaptchaClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CaptchaClient();
			VerifyCaptchaOutcome verifyCaptcha(const Model::VerifyCaptchaRequest &request)const;
			void verifyCaptchaAsync(const Model::VerifyCaptchaRequest& request, const VerifyCaptchaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyCaptchaOutcomeCallable verifyCaptchaCallable(const Model::VerifyCaptchaRequest& request) const;
			VerifyIntelligentCaptchaOutcome verifyIntelligentCaptcha(const Model::VerifyIntelligentCaptchaRequest &request)const;
			void verifyIntelligentCaptchaAsync(const Model::VerifyIntelligentCaptchaRequest& request, const VerifyIntelligentCaptchaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyIntelligentCaptchaOutcomeCallable verifyIntelligentCaptchaCallable(const Model::VerifyIntelligentCaptchaRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CAPTCHA_CAPTCHACLIENT_H_
