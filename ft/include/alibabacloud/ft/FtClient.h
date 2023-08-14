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

#ifndef ALIBABACLOUD_FT_FTCLIENT_H_
#define ALIBABACLOUD_FT_FTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "FtExport.h"
#include "model/DataRateLimitTestRequest.h"
#include "model/DataRateLimitTestResult.h"
#include "model/NormalRpcHsfApiRequest.h"
#include "model/NormalRpcHsfApiResult.h"
#include "model/NormalRpcHttpApiRequest.h"
#include "model/NormalRpcHttpApiResult.h"
#include "model/RpcDataUploadRequest.h"
#include "model/RpcDataUploadResult.h"
#include "model/RpcDataUploadAndDownloadRequest.h"
#include "model/RpcDataUploadAndDownloadResult.h"
#include "model/RpcDataUploadTestRequest.h"
#include "model/RpcDataUploadTestResult.h"


namespace AlibabaCloud
{
	namespace Ft
	{
		class ALIBABACLOUD_FT_EXPORT FtClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DataRateLimitTestResult> DataRateLimitTestOutcome;
			typedef std::future<DataRateLimitTestOutcome> DataRateLimitTestOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::DataRateLimitTestRequest&, const DataRateLimitTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DataRateLimitTestAsyncHandler;
			typedef Outcome<Error, Model::NormalRpcHsfApiResult> NormalRpcHsfApiOutcome;
			typedef std::future<NormalRpcHsfApiOutcome> NormalRpcHsfApiOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::NormalRpcHsfApiRequest&, const NormalRpcHsfApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NormalRpcHsfApiAsyncHandler;
			typedef Outcome<Error, Model::NormalRpcHttpApiResult> NormalRpcHttpApiOutcome;
			typedef std::future<NormalRpcHttpApiOutcome> NormalRpcHttpApiOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::NormalRpcHttpApiRequest&, const NormalRpcHttpApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NormalRpcHttpApiAsyncHandler;
			typedef Outcome<Error, Model::RpcDataUploadResult> RpcDataUploadOutcome;
			typedef std::future<RpcDataUploadOutcome> RpcDataUploadOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::RpcDataUploadRequest&, const RpcDataUploadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RpcDataUploadAsyncHandler;
			typedef Outcome<Error, Model::RpcDataUploadAndDownloadResult> RpcDataUploadAndDownloadOutcome;
			typedef std::future<RpcDataUploadAndDownloadOutcome> RpcDataUploadAndDownloadOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::RpcDataUploadAndDownloadRequest&, const RpcDataUploadAndDownloadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RpcDataUploadAndDownloadAsyncHandler;
			typedef Outcome<Error, Model::RpcDataUploadTestResult> RpcDataUploadTestOutcome;
			typedef std::future<RpcDataUploadTestOutcome> RpcDataUploadTestOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::RpcDataUploadTestRequest&, const RpcDataUploadTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RpcDataUploadTestAsyncHandler;

			FtClient(const Credentials &credentials, const ClientConfiguration &configuration);
			FtClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			FtClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~FtClient();
			DataRateLimitTestOutcome dataRateLimitTest(const Model::DataRateLimitTestRequest &request)const;
			void dataRateLimitTestAsync(const Model::DataRateLimitTestRequest& request, const DataRateLimitTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DataRateLimitTestOutcomeCallable dataRateLimitTestCallable(const Model::DataRateLimitTestRequest& request) const;
			NormalRpcHsfApiOutcome normalRpcHsfApi(const Model::NormalRpcHsfApiRequest &request)const;
			void normalRpcHsfApiAsync(const Model::NormalRpcHsfApiRequest& request, const NormalRpcHsfApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NormalRpcHsfApiOutcomeCallable normalRpcHsfApiCallable(const Model::NormalRpcHsfApiRequest& request) const;
			NormalRpcHttpApiOutcome normalRpcHttpApi(const Model::NormalRpcHttpApiRequest &request)const;
			void normalRpcHttpApiAsync(const Model::NormalRpcHttpApiRequest& request, const NormalRpcHttpApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NormalRpcHttpApiOutcomeCallable normalRpcHttpApiCallable(const Model::NormalRpcHttpApiRequest& request) const;
			RpcDataUploadOutcome rpcDataUpload(const Model::RpcDataUploadRequest &request)const;
			void rpcDataUploadAsync(const Model::RpcDataUploadRequest& request, const RpcDataUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RpcDataUploadOutcomeCallable rpcDataUploadCallable(const Model::RpcDataUploadRequest& request) const;
			RpcDataUploadAndDownloadOutcome rpcDataUploadAndDownload(const Model::RpcDataUploadAndDownloadRequest &request)const;
			void rpcDataUploadAndDownloadAsync(const Model::RpcDataUploadAndDownloadRequest& request, const RpcDataUploadAndDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RpcDataUploadAndDownloadOutcomeCallable rpcDataUploadAndDownloadCallable(const Model::RpcDataUploadAndDownloadRequest& request) const;
			RpcDataUploadTestOutcome rpcDataUploadTest(const Model::RpcDataUploadTestRequest &request)const;
			void rpcDataUploadTestAsync(const Model::RpcDataUploadTestRequest& request, const RpcDataUploadTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RpcDataUploadTestOutcomeCallable rpcDataUploadTestCallable(const Model::RpcDataUploadTestRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_FT_FTCLIENT_H_
