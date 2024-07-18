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

#ifndef ALIBABACLOUD_AICONTENT_AICONTENTCLIENT_H_
#define ALIBABACLOUD_AICONTENT_AICONTENTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "AiContentExport.h"
#include "model/AliyunConsoleOpenApiQueryAliyunConsoleServcieListRequest.h"
#include "model/AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult.h"
#include "model/Personalizedtxt2imgAddInferenceJobRequest.h"
#include "model/Personalizedtxt2imgAddInferenceJobResult.h"
#include "model/Personalizedtxt2imgAddModelTrainJobRequest.h"
#include "model/Personalizedtxt2imgAddModelTrainJobResult.h"
#include "model/Personalizedtxt2imgQueryImageAssetRequest.h"
#include "model/Personalizedtxt2imgQueryImageAssetResult.h"
#include "model/Personalizedtxt2imgQueryInferenceJobInfoRequest.h"
#include "model/Personalizedtxt2imgQueryInferenceJobInfoResult.h"
#include "model/Personalizedtxt2imgQueryModelTrainJobListRequest.h"
#include "model/Personalizedtxt2imgQueryModelTrainJobListResult.h"
#include "model/Personalizedtxt2imgQueryModelTrainStatusRequest.h"
#include "model/Personalizedtxt2imgQueryModelTrainStatusResult.h"


namespace AlibabaCloud
{
	namespace AiContent
	{
		class ALIBABACLOUD_AICONTENT_EXPORT AiContentClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult> AliyunConsoleOpenApiQueryAliyunConsoleServcieListOutcome;
			typedef std::future<AliyunConsoleOpenApiQueryAliyunConsoleServcieListOutcome> AliyunConsoleOpenApiQueryAliyunConsoleServcieListOutcomeCallable;
			typedef std::function<void(const AiContentClient*, const Model::AliyunConsoleOpenApiQueryAliyunConsoleServcieListRequest&, const AliyunConsoleOpenApiQueryAliyunConsoleServcieListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AliyunConsoleOpenApiQueryAliyunConsoleServcieListAsyncHandler;
			typedef Outcome<Error, Model::Personalizedtxt2imgAddInferenceJobResult> Personalizedtxt2imgAddInferenceJobOutcome;
			typedef std::future<Personalizedtxt2imgAddInferenceJobOutcome> Personalizedtxt2imgAddInferenceJobOutcomeCallable;
			typedef std::function<void(const AiContentClient*, const Model::Personalizedtxt2imgAddInferenceJobRequest&, const Personalizedtxt2imgAddInferenceJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Personalizedtxt2imgAddInferenceJobAsyncHandler;
			typedef Outcome<Error, Model::Personalizedtxt2imgAddModelTrainJobResult> Personalizedtxt2imgAddModelTrainJobOutcome;
			typedef std::future<Personalizedtxt2imgAddModelTrainJobOutcome> Personalizedtxt2imgAddModelTrainJobOutcomeCallable;
			typedef std::function<void(const AiContentClient*, const Model::Personalizedtxt2imgAddModelTrainJobRequest&, const Personalizedtxt2imgAddModelTrainJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Personalizedtxt2imgAddModelTrainJobAsyncHandler;
			typedef Outcome<Error, Model::Personalizedtxt2imgQueryImageAssetResult> Personalizedtxt2imgQueryImageAssetOutcome;
			typedef std::future<Personalizedtxt2imgQueryImageAssetOutcome> Personalizedtxt2imgQueryImageAssetOutcomeCallable;
			typedef std::function<void(const AiContentClient*, const Model::Personalizedtxt2imgQueryImageAssetRequest&, const Personalizedtxt2imgQueryImageAssetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Personalizedtxt2imgQueryImageAssetAsyncHandler;
			typedef Outcome<Error, Model::Personalizedtxt2imgQueryInferenceJobInfoResult> Personalizedtxt2imgQueryInferenceJobInfoOutcome;
			typedef std::future<Personalizedtxt2imgQueryInferenceJobInfoOutcome> Personalizedtxt2imgQueryInferenceJobInfoOutcomeCallable;
			typedef std::function<void(const AiContentClient*, const Model::Personalizedtxt2imgQueryInferenceJobInfoRequest&, const Personalizedtxt2imgQueryInferenceJobInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Personalizedtxt2imgQueryInferenceJobInfoAsyncHandler;
			typedef Outcome<Error, Model::Personalizedtxt2imgQueryModelTrainJobListResult> Personalizedtxt2imgQueryModelTrainJobListOutcome;
			typedef std::future<Personalizedtxt2imgQueryModelTrainJobListOutcome> Personalizedtxt2imgQueryModelTrainJobListOutcomeCallable;
			typedef std::function<void(const AiContentClient*, const Model::Personalizedtxt2imgQueryModelTrainJobListRequest&, const Personalizedtxt2imgQueryModelTrainJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Personalizedtxt2imgQueryModelTrainJobListAsyncHandler;
			typedef Outcome<Error, Model::Personalizedtxt2imgQueryModelTrainStatusResult> Personalizedtxt2imgQueryModelTrainStatusOutcome;
			typedef std::future<Personalizedtxt2imgQueryModelTrainStatusOutcome> Personalizedtxt2imgQueryModelTrainStatusOutcomeCallable;
			typedef std::function<void(const AiContentClient*, const Model::Personalizedtxt2imgQueryModelTrainStatusRequest&, const Personalizedtxt2imgQueryModelTrainStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Personalizedtxt2imgQueryModelTrainStatusAsyncHandler;

			AiContentClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AiContentClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AiContentClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AiContentClient();
			AliyunConsoleOpenApiQueryAliyunConsoleServcieListOutcome aliyunConsoleOpenApiQueryAliyunConsoleServcieList(const Model::AliyunConsoleOpenApiQueryAliyunConsoleServcieListRequest &request)const;
			void aliyunConsoleOpenApiQueryAliyunConsoleServcieListAsync(const Model::AliyunConsoleOpenApiQueryAliyunConsoleServcieListRequest& request, const AliyunConsoleOpenApiQueryAliyunConsoleServcieListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AliyunConsoleOpenApiQueryAliyunConsoleServcieListOutcomeCallable aliyunConsoleOpenApiQueryAliyunConsoleServcieListCallable(const Model::AliyunConsoleOpenApiQueryAliyunConsoleServcieListRequest& request) const;
			Personalizedtxt2imgAddInferenceJobOutcome personalizedtxt2imgAddInferenceJob(const Model::Personalizedtxt2imgAddInferenceJobRequest &request)const;
			void personalizedtxt2imgAddInferenceJobAsync(const Model::Personalizedtxt2imgAddInferenceJobRequest& request, const Personalizedtxt2imgAddInferenceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Personalizedtxt2imgAddInferenceJobOutcomeCallable personalizedtxt2imgAddInferenceJobCallable(const Model::Personalizedtxt2imgAddInferenceJobRequest& request) const;
			Personalizedtxt2imgAddModelTrainJobOutcome personalizedtxt2imgAddModelTrainJob(const Model::Personalizedtxt2imgAddModelTrainJobRequest &request)const;
			void personalizedtxt2imgAddModelTrainJobAsync(const Model::Personalizedtxt2imgAddModelTrainJobRequest& request, const Personalizedtxt2imgAddModelTrainJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Personalizedtxt2imgAddModelTrainJobOutcomeCallable personalizedtxt2imgAddModelTrainJobCallable(const Model::Personalizedtxt2imgAddModelTrainJobRequest& request) const;
			Personalizedtxt2imgQueryImageAssetOutcome personalizedtxt2imgQueryImageAsset(const Model::Personalizedtxt2imgQueryImageAssetRequest &request)const;
			void personalizedtxt2imgQueryImageAssetAsync(const Model::Personalizedtxt2imgQueryImageAssetRequest& request, const Personalizedtxt2imgQueryImageAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Personalizedtxt2imgQueryImageAssetOutcomeCallable personalizedtxt2imgQueryImageAssetCallable(const Model::Personalizedtxt2imgQueryImageAssetRequest& request) const;
			Personalizedtxt2imgQueryInferenceJobInfoOutcome personalizedtxt2imgQueryInferenceJobInfo(const Model::Personalizedtxt2imgQueryInferenceJobInfoRequest &request)const;
			void personalizedtxt2imgQueryInferenceJobInfoAsync(const Model::Personalizedtxt2imgQueryInferenceJobInfoRequest& request, const Personalizedtxt2imgQueryInferenceJobInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Personalizedtxt2imgQueryInferenceJobInfoOutcomeCallable personalizedtxt2imgQueryInferenceJobInfoCallable(const Model::Personalizedtxt2imgQueryInferenceJobInfoRequest& request) const;
			Personalizedtxt2imgQueryModelTrainJobListOutcome personalizedtxt2imgQueryModelTrainJobList(const Model::Personalizedtxt2imgQueryModelTrainJobListRequest &request)const;
			void personalizedtxt2imgQueryModelTrainJobListAsync(const Model::Personalizedtxt2imgQueryModelTrainJobListRequest& request, const Personalizedtxt2imgQueryModelTrainJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Personalizedtxt2imgQueryModelTrainJobListOutcomeCallable personalizedtxt2imgQueryModelTrainJobListCallable(const Model::Personalizedtxt2imgQueryModelTrainJobListRequest& request) const;
			Personalizedtxt2imgQueryModelTrainStatusOutcome personalizedtxt2imgQueryModelTrainStatus(const Model::Personalizedtxt2imgQueryModelTrainStatusRequest &request)const;
			void personalizedtxt2imgQueryModelTrainStatusAsync(const Model::Personalizedtxt2imgQueryModelTrainStatusRequest& request, const Personalizedtxt2imgQueryModelTrainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Personalizedtxt2imgQueryModelTrainStatusOutcomeCallable personalizedtxt2imgQueryModelTrainStatusCallable(const Model::Personalizedtxt2imgQueryModelTrainStatusRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AICONTENT_AICONTENTCLIENT_H_
