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

#ifndef ALIBABACLOUD_DYTNSAPI_DYTNSAPICLIENT_H_
#define ALIBABACLOUD_DYTNSAPI_DYTNSAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DytnsapiExport.h"
#include "model/DescribeEmptyNumberRequest.h"
#include "model/DescribeEmptyNumberResult.h"
#include "model/DescribePhoneNumberAnalysisRequest.h"
#include "model/DescribePhoneNumberAnalysisResult.h"
#include "model/DescribePhoneNumberOnlineTimeRequest.h"
#include "model/DescribePhoneNumberOnlineTimeResult.h"
#include "model/DescribePhoneNumberOperatorAttributeRequest.h"
#include "model/DescribePhoneNumberOperatorAttributeResult.h"
#include "model/DescribePhoneTwiceTelVerifyRequest.h"
#include "model/DescribePhoneTwiceTelVerifyResult.h"
#include "model/InvalidPhoneNumberFilterRequest.h"
#include "model/InvalidPhoneNumberFilterResult.h"
#include "model/PhoneNumberEncryptRequest.h"
#include "model/PhoneNumberEncryptResult.h"
#include "model/PhoneNumberStatusForAccountRequest.h"
#include "model/PhoneNumberStatusForAccountResult.h"
#include "model/PhoneNumberStatusForPublicRequest.h"
#include "model/PhoneNumberStatusForPublicResult.h"
#include "model/PhoneNumberStatusForRealRequest.h"
#include "model/PhoneNumberStatusForRealResult.h"
#include "model/PhoneNumberStatusForSmsRequest.h"
#include "model/PhoneNumberStatusForSmsResult.h"
#include "model/PhoneNumberStatusForVirtualRequest.h"
#include "model/PhoneNumberStatusForVirtualResult.h"
#include "model/PhoneNumberStatusForVoiceRequest.h"
#include "model/PhoneNumberStatusForVoiceResult.h"
#include "model/ThreeElementsVerificationRequest.h"
#include "model/ThreeElementsVerificationResult.h"
#include "model/TwoElementsVerificationRequest.h"
#include "model/TwoElementsVerificationResult.h"


namespace AlibabaCloud
{
	namespace Dytnsapi
	{
		class ALIBABACLOUD_DYTNSAPI_EXPORT DytnsapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeEmptyNumberResult> DescribeEmptyNumberOutcome;
			typedef std::future<DescribeEmptyNumberOutcome> DescribeEmptyNumberOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::DescribeEmptyNumberRequest&, const DescribeEmptyNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmptyNumberAsyncHandler;
			typedef Outcome<Error, Model::DescribePhoneNumberAnalysisResult> DescribePhoneNumberAnalysisOutcome;
			typedef std::future<DescribePhoneNumberAnalysisOutcome> DescribePhoneNumberAnalysisOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::DescribePhoneNumberAnalysisRequest&, const DescribePhoneNumberAnalysisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhoneNumberAnalysisAsyncHandler;
			typedef Outcome<Error, Model::DescribePhoneNumberOnlineTimeResult> DescribePhoneNumberOnlineTimeOutcome;
			typedef std::future<DescribePhoneNumberOnlineTimeOutcome> DescribePhoneNumberOnlineTimeOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::DescribePhoneNumberOnlineTimeRequest&, const DescribePhoneNumberOnlineTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhoneNumberOnlineTimeAsyncHandler;
			typedef Outcome<Error, Model::DescribePhoneNumberOperatorAttributeResult> DescribePhoneNumberOperatorAttributeOutcome;
			typedef std::future<DescribePhoneNumberOperatorAttributeOutcome> DescribePhoneNumberOperatorAttributeOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::DescribePhoneNumberOperatorAttributeRequest&, const DescribePhoneNumberOperatorAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhoneNumberOperatorAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribePhoneTwiceTelVerifyResult> DescribePhoneTwiceTelVerifyOutcome;
			typedef std::future<DescribePhoneTwiceTelVerifyOutcome> DescribePhoneTwiceTelVerifyOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::DescribePhoneTwiceTelVerifyRequest&, const DescribePhoneTwiceTelVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhoneTwiceTelVerifyAsyncHandler;
			typedef Outcome<Error, Model::InvalidPhoneNumberFilterResult> InvalidPhoneNumberFilterOutcome;
			typedef std::future<InvalidPhoneNumberFilterOutcome> InvalidPhoneNumberFilterOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::InvalidPhoneNumberFilterRequest&, const InvalidPhoneNumberFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvalidPhoneNumberFilterAsyncHandler;
			typedef Outcome<Error, Model::PhoneNumberEncryptResult> PhoneNumberEncryptOutcome;
			typedef std::future<PhoneNumberEncryptOutcome> PhoneNumberEncryptOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::PhoneNumberEncryptRequest&, const PhoneNumberEncryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PhoneNumberEncryptAsyncHandler;
			typedef Outcome<Error, Model::PhoneNumberStatusForAccountResult> PhoneNumberStatusForAccountOutcome;
			typedef std::future<PhoneNumberStatusForAccountOutcome> PhoneNumberStatusForAccountOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::PhoneNumberStatusForAccountRequest&, const PhoneNumberStatusForAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PhoneNumberStatusForAccountAsyncHandler;
			typedef Outcome<Error, Model::PhoneNumberStatusForPublicResult> PhoneNumberStatusForPublicOutcome;
			typedef std::future<PhoneNumberStatusForPublicOutcome> PhoneNumberStatusForPublicOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::PhoneNumberStatusForPublicRequest&, const PhoneNumberStatusForPublicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PhoneNumberStatusForPublicAsyncHandler;
			typedef Outcome<Error, Model::PhoneNumberStatusForRealResult> PhoneNumberStatusForRealOutcome;
			typedef std::future<PhoneNumberStatusForRealOutcome> PhoneNumberStatusForRealOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::PhoneNumberStatusForRealRequest&, const PhoneNumberStatusForRealOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PhoneNumberStatusForRealAsyncHandler;
			typedef Outcome<Error, Model::PhoneNumberStatusForSmsResult> PhoneNumberStatusForSmsOutcome;
			typedef std::future<PhoneNumberStatusForSmsOutcome> PhoneNumberStatusForSmsOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::PhoneNumberStatusForSmsRequest&, const PhoneNumberStatusForSmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PhoneNumberStatusForSmsAsyncHandler;
			typedef Outcome<Error, Model::PhoneNumberStatusForVirtualResult> PhoneNumberStatusForVirtualOutcome;
			typedef std::future<PhoneNumberStatusForVirtualOutcome> PhoneNumberStatusForVirtualOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::PhoneNumberStatusForVirtualRequest&, const PhoneNumberStatusForVirtualOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PhoneNumberStatusForVirtualAsyncHandler;
			typedef Outcome<Error, Model::PhoneNumberStatusForVoiceResult> PhoneNumberStatusForVoiceOutcome;
			typedef std::future<PhoneNumberStatusForVoiceOutcome> PhoneNumberStatusForVoiceOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::PhoneNumberStatusForVoiceRequest&, const PhoneNumberStatusForVoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PhoneNumberStatusForVoiceAsyncHandler;
			typedef Outcome<Error, Model::ThreeElementsVerificationResult> ThreeElementsVerificationOutcome;
			typedef std::future<ThreeElementsVerificationOutcome> ThreeElementsVerificationOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::ThreeElementsVerificationRequest&, const ThreeElementsVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ThreeElementsVerificationAsyncHandler;
			typedef Outcome<Error, Model::TwoElementsVerificationResult> TwoElementsVerificationOutcome;
			typedef std::future<TwoElementsVerificationOutcome> TwoElementsVerificationOutcomeCallable;
			typedef std::function<void(const DytnsapiClient*, const Model::TwoElementsVerificationRequest&, const TwoElementsVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TwoElementsVerificationAsyncHandler;

			DytnsapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DytnsapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DytnsapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DytnsapiClient();
			DescribeEmptyNumberOutcome describeEmptyNumber(const Model::DescribeEmptyNumberRequest &request)const;
			void describeEmptyNumberAsync(const Model::DescribeEmptyNumberRequest& request, const DescribeEmptyNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEmptyNumberOutcomeCallable describeEmptyNumberCallable(const Model::DescribeEmptyNumberRequest& request) const;
			DescribePhoneNumberAnalysisOutcome describePhoneNumberAnalysis(const Model::DescribePhoneNumberAnalysisRequest &request)const;
			void describePhoneNumberAnalysisAsync(const Model::DescribePhoneNumberAnalysisRequest& request, const DescribePhoneNumberAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePhoneNumberAnalysisOutcomeCallable describePhoneNumberAnalysisCallable(const Model::DescribePhoneNumberAnalysisRequest& request) const;
			DescribePhoneNumberOnlineTimeOutcome describePhoneNumberOnlineTime(const Model::DescribePhoneNumberOnlineTimeRequest &request)const;
			void describePhoneNumberOnlineTimeAsync(const Model::DescribePhoneNumberOnlineTimeRequest& request, const DescribePhoneNumberOnlineTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePhoneNumberOnlineTimeOutcomeCallable describePhoneNumberOnlineTimeCallable(const Model::DescribePhoneNumberOnlineTimeRequest& request) const;
			DescribePhoneNumberOperatorAttributeOutcome describePhoneNumberOperatorAttribute(const Model::DescribePhoneNumberOperatorAttributeRequest &request)const;
			void describePhoneNumberOperatorAttributeAsync(const Model::DescribePhoneNumberOperatorAttributeRequest& request, const DescribePhoneNumberOperatorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePhoneNumberOperatorAttributeOutcomeCallable describePhoneNumberOperatorAttributeCallable(const Model::DescribePhoneNumberOperatorAttributeRequest& request) const;
			DescribePhoneTwiceTelVerifyOutcome describePhoneTwiceTelVerify(const Model::DescribePhoneTwiceTelVerifyRequest &request)const;
			void describePhoneTwiceTelVerifyAsync(const Model::DescribePhoneTwiceTelVerifyRequest& request, const DescribePhoneTwiceTelVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePhoneTwiceTelVerifyOutcomeCallable describePhoneTwiceTelVerifyCallable(const Model::DescribePhoneTwiceTelVerifyRequest& request) const;
			InvalidPhoneNumberFilterOutcome invalidPhoneNumberFilter(const Model::InvalidPhoneNumberFilterRequest &request)const;
			void invalidPhoneNumberFilterAsync(const Model::InvalidPhoneNumberFilterRequest& request, const InvalidPhoneNumberFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvalidPhoneNumberFilterOutcomeCallable invalidPhoneNumberFilterCallable(const Model::InvalidPhoneNumberFilterRequest& request) const;
			PhoneNumberEncryptOutcome phoneNumberEncrypt(const Model::PhoneNumberEncryptRequest &request)const;
			void phoneNumberEncryptAsync(const Model::PhoneNumberEncryptRequest& request, const PhoneNumberEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PhoneNumberEncryptOutcomeCallable phoneNumberEncryptCallable(const Model::PhoneNumberEncryptRequest& request) const;
			PhoneNumberStatusForAccountOutcome phoneNumberStatusForAccount(const Model::PhoneNumberStatusForAccountRequest &request)const;
			void phoneNumberStatusForAccountAsync(const Model::PhoneNumberStatusForAccountRequest& request, const PhoneNumberStatusForAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PhoneNumberStatusForAccountOutcomeCallable phoneNumberStatusForAccountCallable(const Model::PhoneNumberStatusForAccountRequest& request) const;
			PhoneNumberStatusForPublicOutcome phoneNumberStatusForPublic(const Model::PhoneNumberStatusForPublicRequest &request)const;
			void phoneNumberStatusForPublicAsync(const Model::PhoneNumberStatusForPublicRequest& request, const PhoneNumberStatusForPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PhoneNumberStatusForPublicOutcomeCallable phoneNumberStatusForPublicCallable(const Model::PhoneNumberStatusForPublicRequest& request) const;
			PhoneNumberStatusForRealOutcome phoneNumberStatusForReal(const Model::PhoneNumberStatusForRealRequest &request)const;
			void phoneNumberStatusForRealAsync(const Model::PhoneNumberStatusForRealRequest& request, const PhoneNumberStatusForRealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PhoneNumberStatusForRealOutcomeCallable phoneNumberStatusForRealCallable(const Model::PhoneNumberStatusForRealRequest& request) const;
			PhoneNumberStatusForSmsOutcome phoneNumberStatusForSms(const Model::PhoneNumberStatusForSmsRequest &request)const;
			void phoneNumberStatusForSmsAsync(const Model::PhoneNumberStatusForSmsRequest& request, const PhoneNumberStatusForSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PhoneNumberStatusForSmsOutcomeCallable phoneNumberStatusForSmsCallable(const Model::PhoneNumberStatusForSmsRequest& request) const;
			PhoneNumberStatusForVirtualOutcome phoneNumberStatusForVirtual(const Model::PhoneNumberStatusForVirtualRequest &request)const;
			void phoneNumberStatusForVirtualAsync(const Model::PhoneNumberStatusForVirtualRequest& request, const PhoneNumberStatusForVirtualAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PhoneNumberStatusForVirtualOutcomeCallable phoneNumberStatusForVirtualCallable(const Model::PhoneNumberStatusForVirtualRequest& request) const;
			PhoneNumberStatusForVoiceOutcome phoneNumberStatusForVoice(const Model::PhoneNumberStatusForVoiceRequest &request)const;
			void phoneNumberStatusForVoiceAsync(const Model::PhoneNumberStatusForVoiceRequest& request, const PhoneNumberStatusForVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PhoneNumberStatusForVoiceOutcomeCallable phoneNumberStatusForVoiceCallable(const Model::PhoneNumberStatusForVoiceRequest& request) const;
			ThreeElementsVerificationOutcome threeElementsVerification(const Model::ThreeElementsVerificationRequest &request)const;
			void threeElementsVerificationAsync(const Model::ThreeElementsVerificationRequest& request, const ThreeElementsVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ThreeElementsVerificationOutcomeCallable threeElementsVerificationCallable(const Model::ThreeElementsVerificationRequest& request) const;
			TwoElementsVerificationOutcome twoElementsVerification(const Model::TwoElementsVerificationRequest &request)const;
			void twoElementsVerificationAsync(const Model::TwoElementsVerificationRequest& request, const TwoElementsVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TwoElementsVerificationOutcomeCallable twoElementsVerificationCallable(const Model::TwoElementsVerificationRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DYTNSAPI_DYTNSAPICLIENT_H_
