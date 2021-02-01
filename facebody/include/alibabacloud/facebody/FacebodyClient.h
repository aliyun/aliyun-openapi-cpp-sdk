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

#ifndef ALIBABACLOUD_FACEBODY_FACEBODYCLIENT_H_
#define ALIBABACLOUD_FACEBODY_FACEBODYCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "FacebodyExport.h"
#include "model/DetectIPCPedestrianOptimizedRequest.h"
#include "model/DetectIPCPedestrianOptimizedResult.h"
#include "model/ExecuteServerSideVerificationRequest.h"
#include "model/ExecuteServerSideVerificationResult.h"


namespace AlibabaCloud
{
	namespace Facebody
	{
		class ALIBABACLOUD_FACEBODY_EXPORT FacebodyClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::DetectIPCPedestrianOptimizedResult> DetectIPCPedestrianOptimizedOutcome;
			typedef std::future<DetectIPCPedestrianOptimizedOutcome> DetectIPCPedestrianOptimizedOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::DetectIPCPedestrianOptimizedRequest&, const DetectIPCPedestrianOptimizedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectIPCPedestrianOptimizedAsyncHandler;
			typedef Outcome<Error, Model::ExecuteServerSideVerificationResult> ExecuteServerSideVerificationOutcome;
			typedef std::future<ExecuteServerSideVerificationOutcome> ExecuteServerSideVerificationOutcomeCallable;
			typedef std::function<void(const FacebodyClient*, const Model::ExecuteServerSideVerificationRequest&, const ExecuteServerSideVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteServerSideVerificationAsyncHandler;

			FacebodyClient(const Credentials &credentials, const ClientConfiguration &configuration);
			FacebodyClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			FacebodyClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~FacebodyClient();
			DetectIPCPedestrianOptimizedOutcome detectIPCPedestrianOptimized(const Model::DetectIPCPedestrianOptimizedRequest &request)const;
			void detectIPCPedestrianOptimizedAsync(const Model::DetectIPCPedestrianOptimizedRequest& request, const DetectIPCPedestrianOptimizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectIPCPedestrianOptimizedOutcomeCallable detectIPCPedestrianOptimizedCallable(const Model::DetectIPCPedestrianOptimizedRequest& request) const;
			ExecuteServerSideVerificationOutcome executeServerSideVerification(const Model::ExecuteServerSideVerificationRequest &request)const;
			void executeServerSideVerificationAsync(const Model::ExecuteServerSideVerificationRequest& request, const ExecuteServerSideVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteServerSideVerificationOutcomeCallable executeServerSideVerificationCallable(const Model::ExecuteServerSideVerificationRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_FACEBODY_FACEBODYCLIENT_H_
