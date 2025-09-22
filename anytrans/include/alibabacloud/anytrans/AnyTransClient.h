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

#ifndef ALIBABACLOUD_ANYTRANS_ANYTRANSCLIENT_H_
#define ALIBABACLOUD_ANYTRANS_ANYTRANSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "AnyTransExport.h"
#include "model/BatchTranslateRequest.h"
#include "model/BatchTranslateResult.h"
#include "model/GetDocTranslateTaskRequest.h"
#include "model/GetDocTranslateTaskResult.h"
#include "model/GetHtmlTranslateTaskRequest.h"
#include "model/GetHtmlTranslateTaskResult.h"
#include "model/GetImageTranslateTaskRequest.h"
#include "model/GetImageTranslateTaskResult.h"
#include "model/GetLongTextTranslateTaskRequest.h"
#include "model/GetLongTextTranslateTaskResult.h"
#include "model/SubmitDocTranslateTaskRequest.h"
#include "model/SubmitDocTranslateTaskResult.h"
#include "model/SubmitHtmlTranslateTaskRequest.h"
#include "model/SubmitHtmlTranslateTaskResult.h"
#include "model/SubmitImageTranslateTaskRequest.h"
#include "model/SubmitImageTranslateTaskResult.h"
#include "model/SubmitLongTextTranslateTaskRequest.h"
#include "model/SubmitLongTextTranslateTaskResult.h"
#include "model/TextTranslateRequest.h"
#include "model/TextTranslateResult.h"


namespace AlibabaCloud
{
	namespace AnyTrans
	{
		class ALIBABACLOUD_ANYTRANS_EXPORT AnyTransClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchTranslateResult> BatchTranslateOutcome;
			typedef std::future<BatchTranslateOutcome> BatchTranslateOutcomeCallable;
			typedef std::function<void(const AnyTransClient*, const Model::BatchTranslateRequest&, const BatchTranslateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchTranslateAsyncHandler;
			typedef Outcome<Error, Model::GetDocTranslateTaskResult> GetDocTranslateTaskOutcome;
			typedef std::future<GetDocTranslateTaskOutcome> GetDocTranslateTaskOutcomeCallable;
			typedef std::function<void(const AnyTransClient*, const Model::GetDocTranslateTaskRequest&, const GetDocTranslateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDocTranslateTaskAsyncHandler;
			typedef Outcome<Error, Model::GetHtmlTranslateTaskResult> GetHtmlTranslateTaskOutcome;
			typedef std::future<GetHtmlTranslateTaskOutcome> GetHtmlTranslateTaskOutcomeCallable;
			typedef std::function<void(const AnyTransClient*, const Model::GetHtmlTranslateTaskRequest&, const GetHtmlTranslateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHtmlTranslateTaskAsyncHandler;
			typedef Outcome<Error, Model::GetImageTranslateTaskResult> GetImageTranslateTaskOutcome;
			typedef std::future<GetImageTranslateTaskOutcome> GetImageTranslateTaskOutcomeCallable;
			typedef std::function<void(const AnyTransClient*, const Model::GetImageTranslateTaskRequest&, const GetImageTranslateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageTranslateTaskAsyncHandler;
			typedef Outcome<Error, Model::GetLongTextTranslateTaskResult> GetLongTextTranslateTaskOutcome;
			typedef std::future<GetLongTextTranslateTaskOutcome> GetLongTextTranslateTaskOutcomeCallable;
			typedef std::function<void(const AnyTransClient*, const Model::GetLongTextTranslateTaskRequest&, const GetLongTextTranslateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLongTextTranslateTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitDocTranslateTaskResult> SubmitDocTranslateTaskOutcome;
			typedef std::future<SubmitDocTranslateTaskOutcome> SubmitDocTranslateTaskOutcomeCallable;
			typedef std::function<void(const AnyTransClient*, const Model::SubmitDocTranslateTaskRequest&, const SubmitDocTranslateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDocTranslateTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitHtmlTranslateTaskResult> SubmitHtmlTranslateTaskOutcome;
			typedef std::future<SubmitHtmlTranslateTaskOutcome> SubmitHtmlTranslateTaskOutcomeCallable;
			typedef std::function<void(const AnyTransClient*, const Model::SubmitHtmlTranslateTaskRequest&, const SubmitHtmlTranslateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHtmlTranslateTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitImageTranslateTaskResult> SubmitImageTranslateTaskOutcome;
			typedef std::future<SubmitImageTranslateTaskOutcome> SubmitImageTranslateTaskOutcomeCallable;
			typedef std::function<void(const AnyTransClient*, const Model::SubmitImageTranslateTaskRequest&, const SubmitImageTranslateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitImageTranslateTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitLongTextTranslateTaskResult> SubmitLongTextTranslateTaskOutcome;
			typedef std::future<SubmitLongTextTranslateTaskOutcome> SubmitLongTextTranslateTaskOutcomeCallable;
			typedef std::function<void(const AnyTransClient*, const Model::SubmitLongTextTranslateTaskRequest&, const SubmitLongTextTranslateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitLongTextTranslateTaskAsyncHandler;
			typedef Outcome<Error, Model::TextTranslateResult> TextTranslateOutcome;
			typedef std::future<TextTranslateOutcome> TextTranslateOutcomeCallable;
			typedef std::function<void(const AnyTransClient*, const Model::TextTranslateRequest&, const TextTranslateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TextTranslateAsyncHandler;

			AnyTransClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AnyTransClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AnyTransClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AnyTransClient();
			BatchTranslateOutcome batchTranslate(const Model::BatchTranslateRequest &request)const;
			void batchTranslateAsync(const Model::BatchTranslateRequest& request, const BatchTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchTranslateOutcomeCallable batchTranslateCallable(const Model::BatchTranslateRequest& request) const;
			GetDocTranslateTaskOutcome getDocTranslateTask(const Model::GetDocTranslateTaskRequest &request)const;
			void getDocTranslateTaskAsync(const Model::GetDocTranslateTaskRequest& request, const GetDocTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDocTranslateTaskOutcomeCallable getDocTranslateTaskCallable(const Model::GetDocTranslateTaskRequest& request) const;
			GetHtmlTranslateTaskOutcome getHtmlTranslateTask(const Model::GetHtmlTranslateTaskRequest &request)const;
			void getHtmlTranslateTaskAsync(const Model::GetHtmlTranslateTaskRequest& request, const GetHtmlTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHtmlTranslateTaskOutcomeCallable getHtmlTranslateTaskCallable(const Model::GetHtmlTranslateTaskRequest& request) const;
			GetImageTranslateTaskOutcome getImageTranslateTask(const Model::GetImageTranslateTaskRequest &request)const;
			void getImageTranslateTaskAsync(const Model::GetImageTranslateTaskRequest& request, const GetImageTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageTranslateTaskOutcomeCallable getImageTranslateTaskCallable(const Model::GetImageTranslateTaskRequest& request) const;
			GetLongTextTranslateTaskOutcome getLongTextTranslateTask(const Model::GetLongTextTranslateTaskRequest &request)const;
			void getLongTextTranslateTaskAsync(const Model::GetLongTextTranslateTaskRequest& request, const GetLongTextTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLongTextTranslateTaskOutcomeCallable getLongTextTranslateTaskCallable(const Model::GetLongTextTranslateTaskRequest& request) const;
			SubmitDocTranslateTaskOutcome submitDocTranslateTask(const Model::SubmitDocTranslateTaskRequest &request)const;
			void submitDocTranslateTaskAsync(const Model::SubmitDocTranslateTaskRequest& request, const SubmitDocTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitDocTranslateTaskOutcomeCallable submitDocTranslateTaskCallable(const Model::SubmitDocTranslateTaskRequest& request) const;
			SubmitHtmlTranslateTaskOutcome submitHtmlTranslateTask(const Model::SubmitHtmlTranslateTaskRequest &request)const;
			void submitHtmlTranslateTaskAsync(const Model::SubmitHtmlTranslateTaskRequest& request, const SubmitHtmlTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitHtmlTranslateTaskOutcomeCallable submitHtmlTranslateTaskCallable(const Model::SubmitHtmlTranslateTaskRequest& request) const;
			SubmitImageTranslateTaskOutcome submitImageTranslateTask(const Model::SubmitImageTranslateTaskRequest &request)const;
			void submitImageTranslateTaskAsync(const Model::SubmitImageTranslateTaskRequest& request, const SubmitImageTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitImageTranslateTaskOutcomeCallable submitImageTranslateTaskCallable(const Model::SubmitImageTranslateTaskRequest& request) const;
			SubmitLongTextTranslateTaskOutcome submitLongTextTranslateTask(const Model::SubmitLongTextTranslateTaskRequest &request)const;
			void submitLongTextTranslateTaskAsync(const Model::SubmitLongTextTranslateTaskRequest& request, const SubmitLongTextTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitLongTextTranslateTaskOutcomeCallable submitLongTextTranslateTaskCallable(const Model::SubmitLongTextTranslateTaskRequest& request) const;
			TextTranslateOutcome textTranslate(const Model::TextTranslateRequest &request)const;
			void textTranslateAsync(const Model::TextTranslateRequest& request, const TextTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TextTranslateOutcomeCallable textTranslateCallable(const Model::TextTranslateRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ANYTRANS_ANYTRANSCLIENT_H_
