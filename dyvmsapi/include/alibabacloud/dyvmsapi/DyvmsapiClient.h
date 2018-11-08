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

#ifndef ALIBABACLOUD_DYVMSAPI_DYVMSAPICLIENT_H_
#define ALIBABACLOUD_DYVMSAPI_DYVMSAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DyvmsapiExport.h"
#include "model/SmartCallRequest.h"
#include "model/SmartCallResult.h"
#include "model/QueryCallDetailByCallIdRequest.h"
#include "model/QueryCallDetailByCallIdResult.h"
#include "model/VoipAddAccountRequest.h"
#include "model/VoipAddAccountResult.h"
#include "model/CancelCallRequest.h"
#include "model/CancelCallResult.h"
#include "model/VoipGetTokenRequest.h"
#include "model/VoipGetTokenResult.h"
#include "model/ClickToDialRequest.h"
#include "model/ClickToDialResult.h"
#include "model/IvrCallRequest.h"
#include "model/IvrCallResult.h"
#include "model/SingleCallByVoiceRequest.h"
#include "model/SingleCallByVoiceResult.h"
#include "model/SingleCallByTtsRequest.h"
#include "model/SingleCallByTtsResult.h"


namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		class ALIBABACLOUD_DYVMSAPI_EXPORT DyvmsapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::SmartCallResult> SmartCallOutcome;
			typedef std::future<SmartCallOutcome> SmartCallOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::SmartCallRequest&, const SmartCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SmartCallAsyncHandler;
			typedef Outcome<Error, Model::QueryCallDetailByCallIdResult> QueryCallDetailByCallIdOutcome;
			typedef std::future<QueryCallDetailByCallIdOutcome> QueryCallDetailByCallIdOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryCallDetailByCallIdRequest&, const QueryCallDetailByCallIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCallDetailByCallIdAsyncHandler;
			typedef Outcome<Error, Model::VoipAddAccountResult> VoipAddAccountOutcome;
			typedef std::future<VoipAddAccountOutcome> VoipAddAccountOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::VoipAddAccountRequest&, const VoipAddAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoipAddAccountAsyncHandler;
			typedef Outcome<Error, Model::CancelCallResult> CancelCallOutcome;
			typedef std::future<CancelCallOutcome> CancelCallOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::CancelCallRequest&, const CancelCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelCallAsyncHandler;
			typedef Outcome<Error, Model::VoipGetTokenResult> VoipGetTokenOutcome;
			typedef std::future<VoipGetTokenOutcome> VoipGetTokenOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::VoipGetTokenRequest&, const VoipGetTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoipGetTokenAsyncHandler;
			typedef Outcome<Error, Model::ClickToDialResult> ClickToDialOutcome;
			typedef std::future<ClickToDialOutcome> ClickToDialOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::ClickToDialRequest&, const ClickToDialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClickToDialAsyncHandler;
			typedef Outcome<Error, Model::IvrCallResult> IvrCallOutcome;
			typedef std::future<IvrCallOutcome> IvrCallOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::IvrCallRequest&, const IvrCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IvrCallAsyncHandler;
			typedef Outcome<Error, Model::SingleCallByVoiceResult> SingleCallByVoiceOutcome;
			typedef std::future<SingleCallByVoiceOutcome> SingleCallByVoiceOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::SingleCallByVoiceRequest&, const SingleCallByVoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SingleCallByVoiceAsyncHandler;
			typedef Outcome<Error, Model::SingleCallByTtsResult> SingleCallByTtsOutcome;
			typedef std::future<SingleCallByTtsOutcome> SingleCallByTtsOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::SingleCallByTtsRequest&, const SingleCallByTtsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SingleCallByTtsAsyncHandler;

			DyvmsapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DyvmsapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DyvmsapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DyvmsapiClient();
			SmartCallOutcome smartCall(const Model::SmartCallRequest &request)const;
			void smartCallAsync(const Model::SmartCallRequest& request, const SmartCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SmartCallOutcomeCallable smartCallCallable(const Model::SmartCallRequest& request) const;
			QueryCallDetailByCallIdOutcome queryCallDetailByCallId(const Model::QueryCallDetailByCallIdRequest &request)const;
			void queryCallDetailByCallIdAsync(const Model::QueryCallDetailByCallIdRequest& request, const QueryCallDetailByCallIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCallDetailByCallIdOutcomeCallable queryCallDetailByCallIdCallable(const Model::QueryCallDetailByCallIdRequest& request) const;
			VoipAddAccountOutcome voipAddAccount(const Model::VoipAddAccountRequest &request)const;
			void voipAddAccountAsync(const Model::VoipAddAccountRequest& request, const VoipAddAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoipAddAccountOutcomeCallable voipAddAccountCallable(const Model::VoipAddAccountRequest& request) const;
			CancelCallOutcome cancelCall(const Model::CancelCallRequest &request)const;
			void cancelCallAsync(const Model::CancelCallRequest& request, const CancelCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelCallOutcomeCallable cancelCallCallable(const Model::CancelCallRequest& request) const;
			VoipGetTokenOutcome voipGetToken(const Model::VoipGetTokenRequest &request)const;
			void voipGetTokenAsync(const Model::VoipGetTokenRequest& request, const VoipGetTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoipGetTokenOutcomeCallable voipGetTokenCallable(const Model::VoipGetTokenRequest& request) const;
			ClickToDialOutcome clickToDial(const Model::ClickToDialRequest &request)const;
			void clickToDialAsync(const Model::ClickToDialRequest& request, const ClickToDialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClickToDialOutcomeCallable clickToDialCallable(const Model::ClickToDialRequest& request) const;
			IvrCallOutcome ivrCall(const Model::IvrCallRequest &request)const;
			void ivrCallAsync(const Model::IvrCallRequest& request, const IvrCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IvrCallOutcomeCallable ivrCallCallable(const Model::IvrCallRequest& request) const;
			SingleCallByVoiceOutcome singleCallByVoice(const Model::SingleCallByVoiceRequest &request)const;
			void singleCallByVoiceAsync(const Model::SingleCallByVoiceRequest& request, const SingleCallByVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SingleCallByVoiceOutcomeCallable singleCallByVoiceCallable(const Model::SingleCallByVoiceRequest& request) const;
			SingleCallByTtsOutcome singleCallByTts(const Model::SingleCallByTtsRequest &request)const;
			void singleCallByTtsAsync(const Model::SingleCallByTtsRequest& request, const SingleCallByTtsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SingleCallByTtsOutcomeCallable singleCallByTtsCallable(const Model::SingleCallByTtsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DYVMSAPI_DYVMSAPICLIENT_H_
